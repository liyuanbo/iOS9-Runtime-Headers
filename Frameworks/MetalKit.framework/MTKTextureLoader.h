/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoader : NSObject {
    NSError * _currentLoadError;
    NSError * _currentUploadError;
    <MTLDevice> * _device;
    MTKTextureLoaderImageIO * _imageIOLoader;
    unsigned int  _imageIOLoaderIndex;
    MTKTextureLoaderKTX * _ktxLoader;
    unsigned int  _ktxLoaderIndex;
    NSObject<OS_dispatch_queue> * _loadQueue;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    MTKTextureLoaderPVR * _pvrLoader;
    unsigned int  _pvrLoaderIndex;
    NSObject<OS_dispatch_queue> * _uploadQueue;
}

@property (nonatomic, readonly) <MTLDevice> *device;

- (unsigned int)_determineFileType:(id)arg1;
- (void)_loadCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (void)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)textureWithData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)textureWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
