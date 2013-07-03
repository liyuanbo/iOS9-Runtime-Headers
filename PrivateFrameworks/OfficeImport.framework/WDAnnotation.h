/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterRun, WDAnnotation, NSString, WDText, NSDate;

@interface WDAnnotation : WDRun  {
    int mType;
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    NSDate *mDate;
    NSString *mOwner;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}


- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (void)setReferencePropertiesFixed;
- (BOOL)referencePropertiesFixed;
- (int)runType;
- (id)reference;
- (int)annotationType;
- (id)owner;
- (id)text;
- (void)setOwner:(id)arg1;
- (id)date;
- (void)dealloc;
- (void)setDate:(id)arg1;

@end