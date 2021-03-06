/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    UIView * _accessoryView;
    BOOL  _batterySaverModeActive;
    int  _capacity;
    int  _state;
}

- (void).cxx_destruct;
- (id)_accessoryImage;
- (struct CGSize { float x1; float x2; })_batteryOffsetWithBackground:(id)arg1;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (id)contentsImage;
- (float)extraRightPadding;
- (float)legibilityStrength;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end
