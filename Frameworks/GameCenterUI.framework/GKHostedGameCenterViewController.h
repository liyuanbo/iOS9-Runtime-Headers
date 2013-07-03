/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKRemoteGameCenterViewController, GKGameCenterViewController;

@interface GKHostedGameCenterViewController : GKHostedViewController  {
}

@property(readonly) GKGameCenterViewController * _parentController;
@property(readonly) GKRemoteGameCenterViewController * _remoteController;


- (id)_parentController;
- (id)_remoteController;
- (void)didGetRemoteViewController;
- (id)_presentingViewController;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)presentRemoteViewControllerIfNeeded;

@end