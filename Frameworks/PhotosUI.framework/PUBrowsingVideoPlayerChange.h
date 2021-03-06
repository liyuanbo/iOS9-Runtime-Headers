/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingVideoPlayerChange : PUViewModelChange {
    BOOL  _avPlayerDidChange;
    BOOL  _desiredPlayStateDidChange;
    BOOL  _isActivatedDidChange;
    BOOL  _isAtBeginningDidChange;
    BOOL  _isAtEndDidChange;
    BOOL  _isPlayerLoadingAllowedDidChange;
    BOOL  _isPlayingAllowedDidChange;
    BOOL  _isStalledDidChange;
    BOOL  _playStateDidChange;
    BOOL  _playerItemDidChange;
}

@property (nonatomic) BOOL avPlayerDidChange;
@property (nonatomic) BOOL desiredPlayStateDidChange;
@property (nonatomic) BOOL isActivatedDidChange;
@property (nonatomic) BOOL isAtBeginningDidChange;
@property (nonatomic) BOOL isAtEndDidChange;
@property (nonatomic) BOOL isPlayerLoadingAllowedDidChange;
@property (nonatomic) BOOL isPlayingAllowedDidChange;
@property (nonatomic) BOOL isStalledDidChange;
@property (nonatomic) BOOL playStateDidChange;
@property (nonatomic) BOOL playerItemDidChange;

- (void)_setAVPlayerDidChange:(BOOL)arg1;
- (void)_setActivatedDidChange:(BOOL)arg1;
- (void)_setAtBeginningDidChange:(BOOL)arg1;
- (void)_setAtEndDidChange:(BOOL)arg1;
- (void)_setDesiredPlayStateDidChange:(BOOL)arg1;
- (void)_setPlayStateDidChange:(BOOL)arg1;
- (void)_setPlayerItemDidChange:(BOOL)arg1;
- (void)_setPlayerLoadingAllowedDidChange:(BOOL)arg1;
- (void)_setPlayingAllowedDidChange:(BOOL)arg1;
- (void)_setStalledDidChange:(BOOL)arg1;
- (BOOL)avPlayerDidChange;
- (BOOL)desiredPlayStateDidChange;
- (BOOL)hasChanges;
- (BOOL)isActivatedDidChange;
- (BOOL)isAtBeginningDidChange;
- (BOOL)isAtEndDidChange;
- (BOOL)isPlayerLoadingAllowedDidChange;
- (BOOL)isPlayingAllowedDidChange;
- (BOOL)isStalledDidChange;
- (BOOL)playStateDidChange;
- (BOOL)playerItemDidChange;

@end
