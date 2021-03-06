/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilState> {
    <MTLDevice> * _device;
    NSString * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (readonly) NSString *label;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;
- (id)label;

@end
