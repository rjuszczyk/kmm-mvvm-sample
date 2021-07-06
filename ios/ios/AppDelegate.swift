import UIKit
import shared

class AppDelegate: NSObject, UIApplicationDelegate {
    
    let iosApp = IosApp(nsUserDefaults: UserDefaults.standard)
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        print("Your code here")
        return true
    }
}
