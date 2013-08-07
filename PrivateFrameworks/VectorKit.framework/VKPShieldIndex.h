/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPShieldIndex : PBCodable  {
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
}

@property(retain) NSMutableArray * entries;
@property(retain) NSMutableArray * textEntries;


- (id)textEntriesAtIndex:(unsigned int)arg1;
- (void)clearTextEntries;
- (unsigned int)textEntriesCount;
- (id)entriesAtIndex:(unsigned int)arg1;
- (void)clearEntries;
- (unsigned int)entriesCount;
- (void)addTextEntries:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)setTextEntries:(id)arg1;
- (void)setEntries:(id)arg1;
- (id)textEntries;
- (id)artworkIdentifierForShieldType:(int)arg1 textSpecificIdentifiers:(id*)arg2;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)entries;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end