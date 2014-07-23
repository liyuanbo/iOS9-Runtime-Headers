/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSDictionary *_leaderboardIdentifiers;
    NSDictionary *_icons;
}

@property(retain) NSString * setIdentifier;
@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * title;
@property(retain) NSDictionary * leaderboardIdentifiers;
@property(retain) NSDictionary * icons;

+ (id)secureCodedPropertyKeys;

- (void)setSetIdentifier:(id)arg1;
- (id)setIdentifier;
- (void)setLeaderboardIdentifiers:(id)arg1;
- (id)leaderboardIdentifiers;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;
- (void)setIcons:(id)arg1;
- (id)icons;

@end