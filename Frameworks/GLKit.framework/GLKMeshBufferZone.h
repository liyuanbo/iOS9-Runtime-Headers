/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    <MDLMeshBufferAllocator> * _allocator;
    unsigned int  _capacity;
}

@property (nonatomic, readonly) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned int capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (unsigned int)capacity;
- (id)initWithCapacity:(unsigned int)arg1 allocator:(id)arg2;

@end
