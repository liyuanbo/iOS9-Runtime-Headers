/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeRendition : NSObject {
    int  _artworkStatus;
    int  _blendMode;
    unsigned int  _colorSpaceID;
    int  _exifOrientation;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _key;
    NSString * _name;
    float  _opacity;
    struct { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int isVectorBased : 1; 
        unsigned int isOpaque : 1; 
        unsigned int bitmapEncoding : 4; 
        unsigned int reserved : 24; 
    }  _renditionFlags;
    unsigned int  _scale;
    NSData * _srcData;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  _stackKey;
    unsigned int  _subtype;
    int  _templateRenderingMode;
    int  _type;
    NSString * _utiType;
    int  _validLookGradation;
}

@property (nonatomic) int blendMode;
@property (nonatomic) int exifOrientation;
@property (nonatomic) float opacity;

+ (id)displayNameForRenditionType:(int)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(int)arg1 andPixelFormat:(unsigned int)arg2;

- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alphaCroppedRect;
- (int)artworkStatus;
- (id)assetPackIdentifier;
- (int)bitmapEncoding;
- (int)blendMode;
- (unsigned int)colorSpaceID;
- (struct CGImage { }*)createImageFromPDFRenditionWithScale:(float)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (BOOL)edgesOnly;
- (id)effectPreset;
- (int)exifOrientation;
- (id)externalTags;
- (id)gradient;
- (float)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)imageForSliceIndex:(int)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (BOOL)isHeaderFlaggedFPO;
- (BOOL)isInternalLink;
- (BOOL)isOpaque;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (BOOL)isValidForLookGradation:(int)arg1;
- (BOOL)isVectorBased;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)layerReferences;
- (id)linkingToRendition;
- (id)maskForSliceIndex:(int)arg1;
- (id)metrics;
- (id)name;
- (float)opacity;
- (struct CGSize { float x1; float x2; })originalUncroppedSize;
- (struct CGPDFDocument { }*)pdfDocument;
- (int)pixelFormat;
- (float)scale;
- (void)setBlendMode:(int)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setOpacity:(float)arg1;
- (id)sliceInformation;
- (unsigned int)subtype;
- (int)templateRenderingMode;
- (int)type;
- (struct CGImage { }*)unslicedImage;
- (id)utiType;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;

@end
