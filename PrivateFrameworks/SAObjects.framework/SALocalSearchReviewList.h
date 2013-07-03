/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SALocalSearchRating, NSString, NSArray, NSNumber, NSURL;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * providerId;
@property(copy) NSString * providerId2;
@property(retain) SALocalSearchRating * rating;
@property(copy) NSArray * selectReviews;
@property(copy) NSNumber * totalReviewCount;

+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewList;

- (void)setTotalReviewCount:(id)arg1;
- (id)totalReviewCount;
- (void)setSelectReviews:(id)arg1;
- (id)selectReviews;
- (void)setProviderId2:(id)arg1;
- (id)providerId2;
- (void)setProviderId:(id)arg1;
- (id)providerId;
- (id)encodedClassName;
- (void)setRating:(id)arg1;
- (id)rating;
- (id)groupIdentifier;

@end