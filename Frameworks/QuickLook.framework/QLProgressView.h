/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIActivityIndicatorView, <QLProgressViewDelegate>, QLDisplayBundle, UILabel, NSString;

@interface QLProgressView : UIImageView  {
    <QLProgressViewDelegate> *_delegate;
    int _backgroundColorType;
    QLDisplayBundle *_displayBundle;
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingTextLabel;
    NSString *_loadingTextForMissingFiles;
}

@property <QLProgressViewDelegate> * delegate;
@property(retain) NSString * loadingTextForMissingFiles;


- (id)loadingTextForMissingFiles;
- (id)initWithBackgroundColorType:(int)arg1 loadingTextForMissingFiles:(id)arg2;
- (int)backgroundColorType;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end