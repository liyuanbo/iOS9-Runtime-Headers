/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource, NSMutableDictionary, ABUIPerson;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
    NSMutableDictionary *_currentImageData;
    ABUIPerson *_personForImageData;
    BOOL _hasImageChanges;
    BOOL _didChangePreferredPersonForImage;
    ABPersonTableViewDataSource *_dataSource;
}

@property ABPersonTableViewDataSource * dataSource;


- (BOOL)didChangePreferredPersonForImage;
- (void)updateRecordImages;
- (BOOL)hasImageChanges;
- (void)imageWillSave;
- (void)resetImageData;
- (void)setCurrentImageData:(id)arg1;
- (void)reloadImageData;
- (id)personForImageDataExcludingPeople:(id)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(id)arg2;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3 isRemoved:(BOOL*)arg4;
- (id)currentImageData;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(id)arg4;
- (void)removeImageDataForPerson:(id)arg1;
- (void)refreshImageData;
- (void)setPersonForImageData:(id)arg1;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3;
- (id)personForImageData;
- (BOOL)hasImageDataForPerson:(id)arg1;
- (id)writablePeople;
- (id)people;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;

@end