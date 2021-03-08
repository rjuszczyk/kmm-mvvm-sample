#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSUserDefaults, SharedSomeItemId, SharedIFeature1ViewModelState, SharedIFeature2ViewModelState, SharedKodein_diDIContext<C>, SharedKodein_diDITrigger, SharedSomeItem, SharedSomeItemsService, SharedSomeItemsResponse, SharedSomeItemNetworkModel, SharedBaseNativeViewModel<Listener, State>, SharedIFeature1ViewModelDisplayedSomeItem, SharedLoadSomeItemsUseCase, SharedBaseViewModel<VM, Listener, State>, SharedFeature1NativeViewModel, SharedIFeature1ViewModelStateFailed, SharedIFeature1ViewModelStateLoaded, SharedLoadSomeItemUseCase, SharedFeature2NativeViewModel, SharedIFeature2ViewModelDisplayedSomeItem, SharedIFeature2ViewModelStateFailed, SharedIFeature2ViewModelStateLoaded, SharedHockeyPlayer, SharedRuntimeQuery<__covariant RowType>, SharedKodein_diDIModule, SharedKodein_typeTypeToken<T>, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinUnit, SharedRuntimeTransacterTransaction, SharedKotlinByteArray, SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKotlinx_serialization_coreUpdateMode, SharedKotlinByteIterator, SharedKodein_diDIDefinition<C, A, T>, SharedKotlinTriple<__covariant A, __covariant B, __covariant C>, SharedKodein_diSearchSpecs, SharedKodein_diReferenceLocal<__covariant T, __covariant R>, SharedKotlinEnum<E>, SharedKodein_diScopeRegistry, SharedKodein_diDIDefining<C, A, T>;

@protocol SharedIFeature1ViewModel, SharedIFeature2ViewModel, SharedKodein_diDI, SharedKodein_diDIAware, SharedSomeItemRepository, SharedPlayerQueries, SharedKotlinx_serialization_coreKSerializer, SharedListenerAware, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreCoroutineScope, SharedIBaseViewModel, SharedKotlinx_coroutines_coreMutableStateFlow, SharedIFeature1ViewModelListener, SharedIFeature2ViewModelListener, SharedSerializable, SharedRuntimeTransactionWithoutReturn, SharedRuntimeTransactionWithReturn, SharedRuntimeTransacter, SharedDatabase, SharedRuntimeSqlDriver, SharedRuntimeSqlDriverSchema, SharedRuntimeSqlCursor, SharedRuntimeQueryListener, SharedKotlinCoroutineContext, SharedMultiplatform_settingsSettings, SharedKodein_diDIContainer, SharedKodein_diReference, SharedKotlinLazy, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreStateFlow, SharedRuntimeTransactionCallbacks, SharedRuntimeSqlPreparedStatement, SharedRuntimeCloseable, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKodein_diDIBuilder, SharedKodein_diDITree, SharedKodein_diReferenceMaker, SharedKotlinIterator, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKodein_diDIBuilderDirectBinder, SharedKodein_diDIBuilderTypeBinder, SharedKodein_diContextTranslator, SharedKodein_diDIBuilderConstantBinder, SharedKodein_diDirectDI, SharedKodein_diDIContainerBuilder, SharedKodein_diDIBindBuilder, SharedKodein_diDIBindBuilderWithContext, SharedKodein_diScope, SharedKodein_diDIBindBuilderWithScope, SharedKodein_diExternalSource, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinComparable, SharedKodein_diDIBinding, SharedKodein_diDirectDIAware, SharedKodein_diDirectDIBase, SharedKodein_diBindingDI, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKodein_diDIBindingCopier, SharedKodein_diBinding, SharedKodein_diScopeCloseable, SharedKodein_diWithContext;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosApp")))
@interface SharedIosApp : SharedBase
- (instancetype)initWithNsUserDefaults:(NSUserDefaults *)nsUserDefaults __attribute__((swift_name("init(nsUserDefaults:)"))) __attribute__((objc_designated_initializer));
- (id<SharedIFeature1ViewModel>)provideFeature1ViewModelNavigateToSomeItemDetails:(void (^)(SharedSomeItemId *))navigateToSomeItemDetails consumeState:(void (^)(SharedIFeature1ViewModelState *))consumeState __attribute__((swift_name("provideFeature1ViewModel(navigateToSomeItemDetails:consumeState:)")));
- (id<SharedIFeature2ViewModel>)provideFeature2ViewModelCloseThisScreenAndNavigateToPrevious:(void (^)(void))closeThisScreenAndNavigateToPrevious consumeState:(void (^)(SharedIFeature2ViewModelState *))consumeState someItemId:(SharedSomeItemId *)someItemId __attribute__((swift_name("provideFeature2ViewModel(closeThisScreenAndNavigateToPrevious:consumeState:someItemId:)")));
@end;

__attribute__((swift_name("Serializable")))
@protocol SharedSerializable
@required
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol SharedKodein_diDIAware
@required
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) SharedKodein_diDIContext<id> *diContext __attribute__((swift_name("diContext")));
@property (readonly) SharedKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((swift_name("SharedApp")))
@interface SharedSharedApp : SharedBase <SharedKodein_diDIAware>
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@end;

__attribute__((swift_name("SomeItemRepository")))
@protocol SharedSomeItemRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemId:(SharedSomeItemId *)id completionHandler:(void (^)(SharedSomeItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItem(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemsWithCompletionHandler:(void (^)(NSArray<SharedSomeItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItems(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemRepositoryImpl")))
@interface SharedSomeItemRepositoryImpl : SharedBase <SharedSomeItemRepository>
- (instancetype)initWithSomeItemsService:(SharedSomeItemsService *)someItemsService playerQueries:(id<SharedPlayerQueries>)playerQueries __attribute__((swift_name("init(someItemsService:playerQueries:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemId:(SharedSomeItemId *)id completionHandler:(void (^)(SharedSomeItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItem(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemsWithCompletionHandler:(void (^)(NSArray<SharedSomeItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItems(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemsService")))
@interface SharedSomeItemsService : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSomeItemsWithCompletionHandler:(void (^)(SharedSomeItemsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSomeItems(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemNetworkModel")))
@interface SharedSomeItemNetworkModel : SharedBase
- (instancetype)initWithId:(int64_t)id title:(NSString *)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedSomeItemNetworkModel *)doCopyId:(int64_t)id title:(NSString *)title __attribute__((swift_name("doCopy(id:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemNetworkModel.Companion")))
@interface SharedSomeItemNetworkModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemsResponse")))
@interface SharedSomeItemsResponse : SharedBase
- (instancetype)initWithItems:(NSArray<SharedSomeItemNetworkModel *> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSomeItemNetworkModel *> *)component1 __attribute__((swift_name("component1()")));
- (SharedSomeItemsResponse *)doCopyItems:(NSArray<SharedSomeItemNetworkModel *> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSomeItemNetworkModel *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemsResponse.Companion")))
@interface SharedSomeItemsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ListenerAware")))
@protocol SharedListenerAware
@required
- (void)registerListenerListener:(id _Nullable)listener __attribute__((swift_name("registerListener(listener:)")));
- (void)unregisterListener __attribute__((swift_name("unregisterListener()")));
@end;

__attribute__((swift_name("BaseNativeViewModel")))
@interface SharedBaseNativeViewModel<Listener, State> : SharedBase <SharedListenerAware>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (id<SharedKotlinx_coroutines_coreFlow>)getState __attribute__((swift_name("getState()")));
- (void)registerListenerListener:(Listener _Nullable)listener __attribute__((swift_name("registerListener(listener:)")));
- (void)unregisterListener __attribute__((swift_name("unregisterListener()")));
@property (readonly) id<SharedKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));
@end;

__attribute__((swift_name("IBaseViewModel")))
@protocol SharedIBaseViewModel
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("IFeature1ViewModel")))
@protocol SharedIFeature1ViewModel <SharedIBaseViewModel>
@required
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
- (void)onSomeItemClickedDisplayed:(SharedIFeature1ViewModelDisplayedSomeItem *)displayed __attribute__((swift_name("onSomeItemClicked(displayed:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature1NativeViewModel")))
@interface SharedFeature1NativeViewModel : SharedBaseNativeViewModel<id<SharedIFeature1ViewModelListener>, SharedIFeature1ViewModelState *> <SharedIFeature1ViewModel>
- (instancetype)initWithLoadSomeItemsUseCase:(SharedLoadSomeItemsUseCase *)loadSomeItemsUseCase __attribute__((swift_name("init(loadSomeItemsUseCase:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SharedKotlinx_coroutines_coreMutableStateFlow>)getState __attribute__((swift_name("getState()")));
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
- (void)onSomeItemClickedDisplayed:(SharedIFeature1ViewModelDisplayedSomeItem *)displayed __attribute__((swift_name("onSomeItemClicked(displayed:)")));
@end;

__attribute__((swift_name("BaseViewModel")))
@interface SharedBaseViewModel<VM, Listener, State> : SharedBase <SharedListenerAware, SharedIBaseViewModel>
- (instancetype)initWithListener:(Listener _Nullable)listener nativeViewModel:(VM)nativeViewModel __attribute__((swift_name("init(listener:nativeViewModel:)"))) __attribute__((objc_designated_initializer));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)registerListenerListener:(Listener _Nullable)listener __attribute__((swift_name("registerListener(listener:)")));
- (void)unregisterListener __attribute__((swift_name("unregisterListener()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature1ViewModel")))
@interface SharedFeature1ViewModel : SharedBaseViewModel<SharedFeature1NativeViewModel *, id<SharedIFeature1ViewModelListener>, SharedIFeature1ViewModelState *> <SharedIFeature1ViewModel>
- (instancetype)initWithNavigateToSomeItemDetails:(void (^)(SharedSomeItemId *))navigateToSomeItemDetails consumeState:(void (^)(SharedIFeature1ViewModelState *))consumeState feature1NativeViewModel:(SharedFeature1NativeViewModel *)feature1NativeViewModel __attribute__((swift_name("init(navigateToSomeItemDetails:consumeState:feature1NativeViewModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithListener:(id _Nullable)listener nativeViewModel:(SharedBaseNativeViewModel *)nativeViewModel __attribute__((swift_name("init(listener:nativeViewModel:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
- (void)onSomeItemClickedDisplayed:(SharedIFeature1ViewModelDisplayedSomeItem *)displayed __attribute__((swift_name("onSomeItemClicked(displayed:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature1ViewModelDisplayedSomeItem")))
@interface SharedIFeature1ViewModelDisplayedSomeItem : SharedBase
- (instancetype)initWithSomeItem:(SharedSomeItem *)someItem __attribute__((swift_name("init(someItem:)"))) __attribute__((objc_designated_initializer));
- (SharedIFeature1ViewModelDisplayedSomeItem *)doCopySomeItem:(SharedSomeItem *)someItem __attribute__((swift_name("doCopy(someItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getTitle __attribute__((swift_name("getTitle()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("IFeature1ViewModelListener")))
@protocol SharedIFeature1ViewModelListener
@required
- (void)navigateToSomeItemDetailsSomeItemId:(SharedSomeItemId *)someItemId __attribute__((swift_name("navigateToSomeItemDetails(someItemId:)")));
@end;

__attribute__((swift_name("IFeature1ViewModelState")))
@interface SharedIFeature1ViewModelState : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature1ViewModelState.Failed")))
@interface SharedIFeature1ViewModelStateFailed : SharedIFeature1ViewModelState
- (instancetype)initWithMessage:(NSString *)message displayRetry:(BOOL)displayRetry __attribute__((swift_name("init(message:displayRetry:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedIFeature1ViewModelStateFailed *)doCopyMessage:(NSString *)message displayRetry:(BOOL)displayRetry __attribute__((swift_name("doCopy(message:displayRetry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL displayRetry __attribute__((swift_name("displayRetry")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature1ViewModelState.Loaded")))
@interface SharedIFeature1ViewModelStateLoaded : SharedIFeature1ViewModelState
- (instancetype)initWithItems:(NSArray<SharedIFeature1ViewModelDisplayedSomeItem *> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedIFeature1ViewModelDisplayedSomeItem *> *)component1 __attribute__((swift_name("component1()")));
- (SharedIFeature1ViewModelStateLoaded *)doCopyItems:(NSArray<SharedIFeature1ViewModelDisplayedSomeItem *> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedIFeature1ViewModelDisplayedSomeItem *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature1ViewModelState.Loading")))
@interface SharedIFeature1ViewModelStateLoading : SharedIFeature1ViewModelState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("IFeature2ViewModel")))
@protocol SharedIFeature2ViewModel <SharedIBaseViewModel>
@required
- (void)onBackClicked __attribute__((swift_name("onBackClicked()")));
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature2NativeViewModel")))
@interface SharedFeature2NativeViewModel : SharedBaseNativeViewModel<id<SharedIFeature2ViewModelListener>, SharedIFeature2ViewModelState *> <SharedIFeature2ViewModel>
- (instancetype)initWithLoadSomeItemUseCase:(SharedLoadSomeItemUseCase *)loadSomeItemUseCase someItemId:(SharedSomeItemId *)someItemId __attribute__((swift_name("init(loadSomeItemUseCase:someItemId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SharedKotlinx_coroutines_coreMutableStateFlow>)getState __attribute__((swift_name("getState()")));
- (void)onBackClicked __attribute__((swift_name("onBackClicked()")));
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature2ViewModel")))
@interface SharedFeature2ViewModel : SharedBaseViewModel<SharedFeature2NativeViewModel *, id<SharedIFeature2ViewModelListener>, SharedIFeature2ViewModelState *> <SharedIFeature2ViewModel>
- (instancetype)initWithCloseThisScreenAndNavigateToPrevious:(void (^)(void))closeThisScreenAndNavigateToPrevious consumeState:(void (^)(SharedIFeature2ViewModelState *))consumeState feature2NativeViewModel:(SharedFeature2NativeViewModel *)feature2NativeViewModel __attribute__((swift_name("init(closeThisScreenAndNavigateToPrevious:consumeState:feature2NativeViewModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithListener:(id _Nullable)listener nativeViewModel:(SharedBaseNativeViewModel *)nativeViewModel __attribute__((swift_name("init(listener:nativeViewModel:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)onBackClicked __attribute__((swift_name("onBackClicked()")));
- (void)onRetryClicked __attribute__((swift_name("onRetryClicked()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature2ViewModelDisplayedSomeItem")))
@interface SharedIFeature2ViewModelDisplayedSomeItem : SharedBase
- (instancetype)initWithSomeItem:(SharedSomeItem *)someItem __attribute__((swift_name("init(someItem:)"))) __attribute__((objc_designated_initializer));
- (SharedIFeature2ViewModelDisplayedSomeItem *)doCopySomeItem:(SharedSomeItem *)someItem __attribute__((swift_name("doCopy(someItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getTitle __attribute__((swift_name("getTitle()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("IFeature2ViewModelListener")))
@protocol SharedIFeature2ViewModelListener
@required
- (void)closeThisScreenAndNavigateToPrevious __attribute__((swift_name("closeThisScreenAndNavigateToPrevious()")));
@end;

__attribute__((swift_name("IFeature2ViewModelState")))
@interface SharedIFeature2ViewModelState : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature2ViewModelState.Failed")))
@interface SharedIFeature2ViewModelStateFailed : SharedIFeature2ViewModelState
- (instancetype)initWithMessage:(NSString *)message displayRetry:(BOOL)displayRetry __attribute__((swift_name("init(message:displayRetry:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedIFeature2ViewModelStateFailed *)doCopyMessage:(NSString *)message displayRetry:(BOOL)displayRetry __attribute__((swift_name("doCopy(message:displayRetry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL displayRetry __attribute__((swift_name("displayRetry")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature2ViewModelState.Loaded")))
@interface SharedIFeature2ViewModelStateLoaded : SharedIFeature2ViewModelState
- (instancetype)initWithItem:(SharedIFeature2ViewModelDisplayedSomeItem *)item __attribute__((swift_name("init(item:)"))) __attribute__((objc_designated_initializer));
- (SharedIFeature2ViewModelDisplayedSomeItem *)component1 __attribute__((swift_name("component1()")));
- (SharedIFeature2ViewModelStateLoaded *)doCopyItem:(SharedIFeature2ViewModelDisplayedSomeItem *)item __attribute__((swift_name("doCopy(item:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedIFeature2ViewModelDisplayedSomeItem *item __attribute__((swift_name("item")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IFeature2ViewModelState.Loading")))
@interface SharedIFeature2ViewModelStateLoading : SharedIFeature2ViewModelState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItem")))
@interface SharedSomeItem : SharedBase
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedSomeItem *)doCopyId:(SharedSomeItemId *)id title:(NSString *)title __attribute__((swift_name("doCopy(id:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeItemId")))
@interface SharedSomeItemId : SharedBase <SharedSerializable>
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (SharedSomeItemId *)doCopyId:(int64_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadSomeItemUseCase")))
@interface SharedLoadSomeItemUseCase : SharedBase
- (instancetype)initWithSomeItemRepository:(id<SharedSomeItemRepository>)someItemRepository __attribute__((swift_name("init(someItemRepository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemId:(SharedSomeItemId *)id completionHandler:(void (^)(SharedSomeItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItem(id:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadSomeItemsUseCase")))
@interface SharedLoadSomeItemsUseCase : SharedBase
- (instancetype)initWithSomeItemRepository:(id<SharedSomeItemRepository>)someItemRepository __attribute__((swift_name("init(someItemRepository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadSomeItemsWithCompletionHandler:(void (^)(NSArray<SharedSomeItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadSomeItems(completionHandler:)")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SharedRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("Database")))
@protocol SharedDatabase <SharedRuntimeTransacter>
@required
@property (readonly) id<SharedPlayerQueries> playerQueries __attribute__((swift_name("playerQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseCompanion")))
@interface SharedDatabaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedDatabase>)invokeDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<SharedRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HockeyPlayer")))
@interface SharedHockeyPlayer : SharedBase
- (instancetype)initWithPlayer_number:(int64_t)player_number full_name:(NSString *)full_name __attribute__((swift_name("init(player_number:full_name:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedHockeyPlayer *)doCopyPlayer_number:(int64_t)player_number full_name:(NSString *)full_name __attribute__((swift_name("doCopy(player_number:full_name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *full_name __attribute__((swift_name("full_name")));
@property (readonly) int64_t player_number __attribute__((swift_name("player_number")));
@end;

__attribute__((swift_name("PlayerQueries")))
@protocol SharedPlayerQueries <SharedRuntimeTransacter>
@required
- (void)insertPlayer_number:(int64_t)player_number full_name:(NSString *)full_name __attribute__((swift_name("insert(player_number:full_name:)")));
- (void)insertFullPlayerObjectHockeyPlayer:(SharedHockeyPlayer *)hockeyPlayer __attribute__((swift_name("insertFullPlayerObject(hockeyPlayer:)")));
- (SharedRuntimeQuery<SharedHockeyPlayer *> *)selectAll __attribute__((swift_name("selectAll()")));
- (SharedRuntimeQuery<id> *)selectAllMapper:(id (^)(SharedLong *, NSString *))mapper __attribute__((swift_name("selectAll(mapper:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SharedRuntimeQuery<__covariant RowType> : SharedBase
- (instancetype)initWithQueries:(NSMutableArray<SharedRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SharedRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SharedRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

@interface SharedRuntimeQuery (Extensions)
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

@interface SharedBaseNativeViewModel (Extensions)
- (void)toCompletionBlock:(id<SharedKotlinx_coroutines_coreFlow> (^)(SharedBaseNativeViewModel *))block completion:(void (^)(id _Nullable))completion __attribute__((swift_name("toCompletion(block:completion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowExtensionsKt")))
@interface SharedFlowExtensionsKt : SharedBase
+ (id<SharedKotlinx_coroutines_coreFlow>)mapToList:(id<SharedKotlinx_coroutines_coreFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("mapToList(_:context:)")));
+ (id<SharedKotlinx_coroutines_coreFlow>)mapToOne:(id<SharedKotlinx_coroutines_coreFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("mapToOne(_:context:)")));
+ (id<SharedKotlinx_coroutines_coreFlow>)mapToOneNotNull:(id<SharedKotlinx_coroutines_coreFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("mapToOneNotNull(_:context:)")));
+ (id<SharedKotlinx_coroutines_coreFlow>)mapToOneOrDefault:(id<SharedKotlinx_coroutines_coreFlow>)receiver defaultValue:(id)defaultValue context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("mapToOneOrDefault(_:defaultValue:context:)")));
+ (id<SharedKotlinx_coroutines_coreFlow>)mapToOneOrNull:(id<SharedKotlinx_coroutines_coreFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("mapToOneOrNull(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppModuleKt")))
@interface SharedAppModuleKt : SharedBase
+ (SharedKodein_diDIModule *)appModuleSettings:(id<SharedMultiplatform_settingsSettings>)settings sqlDriver:(id<SharedRuntimeSqlDriver>)sqlDriver __attribute__((swift_name("appModule(settings:sqlDriver:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoriesModuleKt")))
@interface SharedRepositoriesModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *repositoriesModule __attribute__((swift_name("repositoriesModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModuleKt")))
@interface SharedNetworkModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *networkModule __attribute__((swift_name("networkModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServicesModuleKt")))
@interface SharedServicesModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *servicesModule __attribute__((swift_name("servicesModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseModuleKt")))
@interface SharedDatabaseModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *databaseModule __attribute__((swift_name("databaseModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCasesModuleKt")))
@interface SharedUseCasesModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *useCasesModule __attribute__((swift_name("useCasesModule")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol SharedKodein_diDI <SharedKodein_diDIAware>
@required
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@interface SharedKodein_diDIContext<C> : SharedBase
@property (readonly) id<SharedKodein_diReference> reference __attribute__((swift_name("reference")));
@property (readonly) SharedKodein_typeTypeToken<C> *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface SharedKodein_diDITrigger : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<SharedKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SharedRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SharedRuntimeTransactionWithoutReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SharedRuntimeTransactionWithReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SharedRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SharedRuntimeSqlDriver <SharedRuntimeCloseable>
@required
- (SharedRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SharedRuntimeSqlCursor>)executeQueryIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SharedRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SharedRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SharedRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SharedRuntimeSqlCursor <SharedRuntimeCloseable>
@required
- (SharedKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SharedDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SharedLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SharedRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface SharedKodein_diDIModule : SharedBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (void (^)(id<SharedKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()")));
- (SharedKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<SharedKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol SharedMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (SharedBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (SharedDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (SharedFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (SharedInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (SharedLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol SharedKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(SharedKodein_diDIKey<id, id, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(SharedKodein_diDIKey<id, id, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(SharedKodein_diDIKey<id, id, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(SharedKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diReference")))
@protocol SharedKodein_diReference
@required
- (id _Nullable)get __attribute__((swift_name("get()")));
@property (readonly) id<SharedKodein_diReferenceMaker> maker __attribute__((swift_name("maker")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@interface SharedKodein_typeTypeToken<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKotlinArray<SharedKodein_typeTypeToken<id> *> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (SharedKodein_typeTypeToken<T> * _Nullable)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<SharedKodein_typeTypeToken<id> *> *)getSuper __attribute__((swift_name("getSuper()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isAssignableFromTypeToken:(SharedKodein_typeTypeToken<id> *)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SharedRuntimeTransacterTransaction : SharedBase <SharedRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SharedRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SharedRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(SharedKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SharedDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SharedLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol SharedKodein_diDIBindBuilder
@required
@property (readonly) SharedKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithContext")))
@protocol SharedKodein_diDIBindBuilderWithContext <SharedKodein_diDIBindBuilder>
@required
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol SharedKodein_diDIBindBuilderWithScope <SharedKodein_diDIBindBuilder>
@required
@property (readonly) id<SharedKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol SharedKodein_diDIBuilder <SharedKodein_diDIBindBuilderWithContext, SharedKodein_diDIBindBuilderWithScope>
@required
- (id<SharedKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (id<SharedKodein_diDIBuilderTypeBinder>)BindType:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)RegisterContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<SharedKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(SharedKotlinArray<SharedKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<SharedKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : SharedBase
- (instancetype)initWithContextType:(SharedKodein_typeTypeToken<C> *)contextType argType:(SharedKodein_typeTypeToken<A> *)argType type:(SharedKodein_typeTypeToken<T> *)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_typeTypeToken<C> *)component1 __attribute__((swift_name("component1()")));
- (SharedKodein_typeTypeToken<A> *)component2 __attribute__((swift_name("component2()")));
- (SharedKodein_typeTypeToken<T> *)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedKodein_diDIKey<C, A, T> *)doCopyContextType:(SharedKodein_typeTypeToken<C> *)contextType argType:(SharedKodein_typeTypeToken<A> *)argType type:(SharedKodein_typeTypeToken<T> *)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKodein_typeTypeToken<A> *argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) SharedKodein_typeTypeToken<C> *contextType __attribute__((swift_name("contextType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) SharedKodein_typeTypeToken<T> *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol SharedKodein_diDITree
@required
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, SharedKodein_diDIDefinition<id, id, id> *, id<SharedKodein_diContextTranslator>> *> *)findKey:(SharedKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> *> *)findSearch:(SharedKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> * _Nullable)getKey_:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key_:)")));
@property (readonly) NSDictionary<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<SharedKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<SharedKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((swift_name("Kodein_diReferenceMaker")))
@protocol SharedKodein_diReferenceMaker
@required
- (SharedKodein_diReferenceLocal<id, id<SharedKodein_diReference>> *)makeCreator:(id (^)(void))creator __attribute__((swift_name("make(creator:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<SharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface SharedKotlinx_serialization_coreUpdateMode : SharedKotlinEnum<SharedKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol SharedKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol SharedKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol SharedKodein_diContextTranslator
@required
- (id _Nullable)translateCtx:(id)ctx __attribute__((swift_name("translate(ctx:)")));
@property (readonly) SharedKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@property (readonly) SharedKodein_typeTypeToken<id> *scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol SharedKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(SharedKodein_typeTypeToken<id> *)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol SharedKodein_diDirectDIAware
@required
@property (readonly) id<SharedKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol SharedKodein_diDirectDIBase <SharedKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<SharedKodein_diDirectDI>)OnContext:(SharedKodein_diDIContext<id> *)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(SharedKodein_typeTypeToken<id> *)argType type:(SharedKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol SharedKodein_diDirectDI <SharedKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol SharedKodein_diDIContainerBuilder
@required
- (void)bindKey:(SharedKodein_diDIKey<id, id, id> *)key binding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<SharedKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<SharedKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<SharedKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol SharedKodein_diScope
@required
- (SharedKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface SharedKodein_diDIDefining<C, A, T> : SharedBase
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface SharedKodein_diDIDefinition<C, A, T> : SharedKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<SharedKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SharedKotlinTriple<__covariant A, __covariant B, __covariant C> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (C _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface SharedKodein_diSearchSpecs : SharedBase
- (instancetype)initWithContextType:(SharedKodein_typeTypeToken<id> * _Nullable)contextType argType:(SharedKodein_typeTypeToken<id> * _Nullable)argType type:(SharedKodein_typeTypeToken<id> * _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKodein_typeTypeToken<id> * _Nullable argType __attribute__((swift_name("argType")));
@property SharedKodein_typeTypeToken<id> * _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property SharedKodein_typeTypeToken<id> * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol SharedKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<SharedKodein_diBindingDI>)di key:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReferenceLocal")))
@interface SharedKodein_diReferenceLocal<__covariant T, __covariant R> : SharedBase
- (instancetype)initWithValue:(T)value reference:(R)reference __attribute__((swift_name("init(value:reference:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (R)component2 __attribute__((swift_name("component2()")));
- (SharedKodein_diReferenceLocal<T, R> *)doCopyValue:(T)value reference:(R)reference __attribute__((swift_name("doCopy(value:reference:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R reference __attribute__((swift_name("reference")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol SharedKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryDi:(id<SharedKodein_diBindingDI>)di key_:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key_:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol SharedKodein_diDIBinding <SharedKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) SharedKodein_typeTypeToken<id> *argType __attribute__((swift_name("argType")));
@property (readonly) SharedKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) SharedKodein_typeTypeToken<id> *createdType __attribute__((swift_name("createdType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<SharedKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol SharedKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface SharedKodein_diScopeRegistry : SharedBase <SharedKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(SharedKodein_diReferenceLocal<id, id<SharedKodein_diReference>> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id<SharedKodein_diReference> _Nullable)getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey_:(id)key __attribute__((swift_name("remove(key_:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol SharedKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol SharedKodein_diBindingDI <SharedKodein_diDirectDI, SharedKodein_diWithContext>
@required
- (id<SharedKodein_diBindingDI>)noGlobalContext __attribute__((swift_name("noGlobalContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol SharedKodein_diDIBindingCopier
@required
- (id<SharedKodein_diDIBinding>)doCopyBuilder:(id<SharedKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
