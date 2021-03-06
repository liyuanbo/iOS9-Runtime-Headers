/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKShapeNode : SKNode {
    struct SKCShapeNode { int (**x1)(); id x2; id x3; struct SKCNode {} x4; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_5_1_1; struct SKCNode {} **x_5_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_5_1_3; } x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; id x8; float x9; bool x10; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_11_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_11_1_2; } x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; bool x13; id x14; int x15; bool x16; float x17; float x18; bool x19; bool x20; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_21_1_1[4]; } x21; struct SKCompositeBezierPath {} *x22; int x23; int x24; float x25; float x26; float x27; struct CGPath {} *x28; int x29; BOOL x30; float x31; id x32; id x33; struct shared_ptr<jet_buffer_pool> { struct jet_buffer_pool {} *x_34_1_1; struct __shared_weak_count {} *x_34_1_2; } x34; struct shared_ptr<jet_buffer_pool> { struct jet_buffer_pool {} *x_35_1_1; struct __shared_weak_count {} *x_35_1_2; } x35; struct shared_ptr<jet_buffer_pool> { struct jet_buffer_pool {} *x_36_1_1; struct __shared_weak_count {} *x_36_1_2; } x36; } * _skcShapeNode;
}

@property (getter=isAntialiased, nonatomic) BOOL antialiased;
@property (nonatomic) int blendMode;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) SKShader *fillShader;
@property (nonatomic, retain) SKTexture *fillTexture;
@property (nonatomic) float glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic, readonly) float lineLength;
@property (nonatomic) float lineWidth;
@property (nonatomic) float miterLimit;
@property (nonatomic) const struct CGPath { }*path;
@property (nonatomic) float renderQualityRatio;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) SKShader *strokeShader;
@property (nonatomic, retain) SKTexture *strokeTexture;

+ (id)shapeNodeWithCircleOfRadius:(float)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)shapeNodeWithPath:(struct CGPath { }*)arg1;
+ (id)shapeNodeWithPath:(struct CGPath { }*)arg1 centered:(BOOL)arg2;
+ (id)shapeNodeWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(unsigned long)arg2;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { float x1; float x2; })arg1 cornerRadius:(float)arg2;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(unsigned long)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint { float x1; float x2; })arg1 B:(struct CGPoint { float x1; float x2; })arg2 C:(struct CGPoint { float x1; float x2; })arg3;

- (void)_didMakeBackingNode;
- (void)_initialize;
- (struct SKCNode { int (**x1)(); id x2; id x3; struct SKCNode {} x4; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_5_1_1; struct SKCNode {} **x_5_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_5_1_3; } x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; id x8; float x9; bool x10; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_11_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_11_1_2; } x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; bool x13; id x14; int x15; bool x16; float x17; float x18; bool x19; bool x20; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_21_1_1[4]; } x21; }*)_makeBackingNode;
- (int)blendMode;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (id)fillShader;
- (id)fillTexture;
- (float)glowWidth;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAntialiased;
- (BOOL)isEqualToNode:(id)arg1;
- (int)lineCap;
- (int)lineJoin;
- (float)lineLength;
- (float)lineWidth;
- (float)miterLimit;
- (const struct CGPath { }*)path;
- (float)renderQualityRatio;
- (void)setAntialiased:(BOOL)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillShader:(id)arg1;
- (void)setFillTexture:(id)arg1;
- (void)setGlowWidth:(float)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRenderQualityRatio:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeShader:(id)arg1;
- (void)setStrokeTexture:(id)arg1;
- (id)strokeColor;
- (id)strokeShader;
- (id)strokeTexture;

@end
