/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraRollController : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate, PUPhotosDataSourceChangeObserver> {
    BOOL  __allowLoading;
    PUAudioSessionCategoryToken * __audioSessionCategoryToken;
    PUOneUpPresentationHelper * __oneUpPresentationHelper;
    PUPhotoKitDataSourceManager * __photoKitDataSourceManager;
    PUPhotosDataSource * __photosDataSource;
    NSMutableSet * __sessionAssetUUIDs;
    PUPhotosDataSource * __stagedDataSource;
    BOOL  __transientAssetsAreValid;
    CAMTransientDataSource * __transientDataSource;
    <CAMCameraRollControllerPresentationDelegate> * _presentationDelegate;
    struct { 
        BOOL respondsToSourceAssetRect; 
        BOOL respondsToShouldHideSourceAsset; 
        BOOL respondsToPreviewGestureDidBecomeAvailable; 
        BOOL respondsToPreviewSourceSize; 
    }  _presentationDelegateFlags;
    UIGestureRecognizer * _previewGestureRecognizer;
    <CAMCameraRollControllerSessionDelegate> * _sessionDelegate;
}

@property (setter=_setAllowLoading:, nonatomic) BOOL _allowLoading;
@property (setter=_setAudioSessionCategoryToken:, nonatomic, retain) PUAudioSessionCategoryToken *_audioSessionCategoryToken;
@property (nonatomic, readonly) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (nonatomic, readonly) PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
@property (nonatomic, readonly) PUPhotosDataSource *_photosDataSource;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (setter=_setStagedDataSource:, nonatomic, retain) PUPhotosDataSource *_stagedDataSource;
@property (setter=_setTransientAssetsAreValid:, nonatomic) BOOL _transientAssetsAreValid;
@property (nonatomic, readonly) CAMTransientDataSource *_transientDataSource;
@property (nonatomic, readonly) BOOL canPresentCameraRollViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <CAMCameraRollControllerPresentationDelegate> *presentationDelegate;
@property (setter=_setPreviewGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic) <CAMCameraRollControllerSessionDelegate> *sessionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_allowLoading;
- (id)_audioSessionCategoryToken;
- (void)_ensureCameraRollViewController;
- (void)_invalidateTransientAssets;
- (id)_oneUpPresentationHelper;
- (void)_performPreload;
- (id)_photoKitDataSourceManager;
- (id)_photosDataSource;
- (void)_requestAudioSessionCategoryToken;
- (id)_sessionAssetUUIDs;
- (void)_setAllowLoading:(BOOL)arg1;
- (void)_setAudioSessionCategoryToken:(id)arg1;
- (void)_setPreviewGestureRecognizer:(id)arg1;
- (void)_setStagedDataSource:(id)arg1;
- (void)_setTransientAssetsAreValid:(BOOL)arg1;
- (id)_stagedDataSource;
- (void)_startNewSession;
- (BOOL)_transientAssetsAreValid;
- (id)_transientDataSource;
- (void)_update;
- (void)_updateTransientDataSourceIfNeeded;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)canPresentCameraRollViewController;
- (void)dealloc;
- (void)didPersistAssetWithUUID:(id)arg1;
- (BOOL)dismissCameraRollViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2;
- (void)handlePresentingPanGestureRecognizer:(id)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (int)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)persistedThumbnailImage;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)ppt_preload;
- (void)preload;
- (void)presentCameraRollViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (id)presentationDelegate;
- (void)presentingViewControllerViewDidAppear:(BOOL)arg1;
- (void)presentingViewControllerViewDidDisappear:(BOOL)arg1;
- (void)presentingViewControllerViewWillAppear:(BOOL)arg1;
- (void)presentingViewControllerViewWillDisappear:(BOOL)arg1;
- (id)previewGestureRecognizer;
- (void)processPendingBursts;
- (void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(BOOL)arg2;
- (void)resetNavigation;
- (id)sessionDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;

@end
