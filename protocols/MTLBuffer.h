/* Generated by RuntimeBrowser.
 */

@protocol MTLBuffer <MTLResource>

@required

- (void*)contents;
- (unsigned int)length;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;

@end