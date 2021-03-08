import SwiftUI
import shared


class Feature1State: ObservableObject {
    @Published var state: IFeature1ViewModelState!
}

struct Feature1View: View {
    @ObservedObject var feature1state = Feature1State()
    private var feature1ViewModel: IFeature1ViewModel!
    
    init(navigateToSomeItemDetails: @escaping (SomeItemId)->Void) {
        feature1ViewModel = (UIApplication.shared.delegate as! AppDelegate).iosApp.provideFeature1ViewModel(
            navigateToSomeItemDetails: navigateToSomeItemDetails,
            consumeState: consumeState
        )
    }
    
    func consumeState(state: IFeature1ViewModelState) {
        feature1state.state = state
    }
        
    var body: some View {
        switch feature1state.state {
            case let failed as IFeature1ViewModelState.Failed:
                VStack{
                    Text(failed.message)
                    if(failed.displayRetry) {
                        Button("Retry") {
                            feature1ViewModel.onRetryClicked()
                        }
                    }
                }
            case let loaded as IFeature1ViewModelState.Loaded:
                VStack {
                    ForEach(loaded.items.map{ Item(item: $0) }) { item in
                        Button{
                            feature1ViewModel.onSomeItemClicked(displayed: item.item)
                        } label: {
                            Text(item.item.getTitle())
                        }
                    }
                }
            case is IFeature1ViewModelState.Loading:
                Text("loading . . .")
            default:
                EmptyView()
        }
    }
}

class Feature2State: ObservableObject {
    @Published var state: IFeature2ViewModelState!
}

struct Feature2View: View {
    
    @ObservedObject var feature2State = Feature2State()
    private var feature2ViewModel: IFeature2ViewModel!
    
    init(closeThisScreenAndNavigateToPrevious: @escaping ()->Void, someItemId: SomeItemId) {
        feature2ViewModel = (UIApplication.shared.delegate as! AppDelegate).iosApp.provideFeature2ViewModel(
            closeThisScreenAndNavigateToPrevious: closeThisScreenAndNavigateToPrevious,
            consumeState: consumeState,
            someItemId: someItemId
        )
    }
    
    func consumeState(state: IFeature2ViewModelState) {
        feature2State.state = state
    }
    
    var body: some View {
        switch feature2State.state {
        case let failed as IFeature2ViewModelState.Failed:
            VStack{
                Text(failed.message)
                if(failed.displayRetry) {
                    Button("Retry") {
                        feature2ViewModel.onRetryClicked()
                    }
                }
            }
        case let loaded as IFeature2ViewModelState.Loaded:
            VStack {
                Text("LOADED: \(loaded.item.getTitle())")
            }
        case is IFeature2ViewModelState.Loading:
            Text("loading . . .")
        default:
            EmptyView()
        }
    }
}

struct ContentView: View {
    @State private var displayedSomeItemId: SomeItemId? = nil
    
    var body: some View {
        NavigationView {
            
            if(displayedSomeItemId == nil) {
                Feature1View(navigateToSomeItemDetails: { someItemId in
                    self.displayedSomeItemId = someItemId
                })
            } else {
                Feature2View(closeThisScreenAndNavigateToPrevious: {
                    self.displayedSomeItemId = nil
                }, someItemId: displayedSomeItemId!
                )
            }
            
        }
        
    }
}

struct Item : Identifiable {
    var id = UUID()
    var item: IFeature1ViewModelDisplayedSomeItem
}

struct ContentView_Previews: PreviewProvider {
    
    static var previews: some View {
        ContentView()
    }
}
