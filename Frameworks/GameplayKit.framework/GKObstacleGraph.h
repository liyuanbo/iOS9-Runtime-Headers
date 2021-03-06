/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKObstacleGraph : GKGraph {
    float  _bufferRadius;
    NSMutableArray * _extrudedObstacles;
    struct vector<GKConnection, std::__1::allocator<GKConnection> > { 
        struct GKConnection {} *__begin_; 
        struct GKConnection {} *__end_; 
        struct __compressed_pair<GKConnection *, std::__1::allocator<GKConnection> > { 
            struct GKConnection {} *__first_; 
        } __end_cap_; 
    }  _lockedConnections;
    NSMutableArray * _sourceObstacles;
    struct map<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, std::__1::allocator<std::__1::pair<GKPolygonObstacle *const __unsafe_unretained, GKPolygonObstacle *__unsafe_unretained> > > { 
        struct __tree<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::__map_value_compare<GKPolygonObstacle *__unsafe_unretained, std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, true>, std::__1::allocator<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained> > > { 
            struct __tree_node<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<GKPolygonObstacle *__unsafe_unretained, std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  extrudedObstaclesToSourceObstaclesMap;
    struct map<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, std::__1::allocator<std::__1::pair<GKPolygonObstacle *const __unsafe_unretained, GKPolygonObstacle *__unsafe_unretained> > > { 
        struct __tree<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::__map_value_compare<GKPolygonObstacle *__unsafe_unretained, std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, true>, std::__1::allocator<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained> > > { 
            struct __tree_node<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<GKPolygonObstacle *__unsafe_unretained, std::__1::__value_type<GKPolygonObstacle *__unsafe_unretained, GKPolygonObstacle *__unsafe_unretained>, std::__1::less<GKPolygonObstacle *__unsafe_unretained>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  sourceObstaclesToExtrudedObstaclesMap;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;

+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObstacle:(id)arg1;
- (void)addObstacle:(id)arg1 removeInvalidEdges:(BOOL)arg2;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (void)connectNodeToNodeUsingObstacles:(id)arg1 otherNode:(id)arg2 ignoringBufferRadiusOfObstacles:(id)arg3;
- (void)connectNodeToNodeUsingObstacles:(id)arg1 otherNode:(id)arg2 ignoringObstacles:(id)arg3;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (id)extrudeObstacle:(id)arg1;
- (id)extrudeObstacleAndGenerateGraphNodes:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (id)nodesForObstacle:(id)arg1;
- (id)obstacles;
- (void)removeAllObstacles;
- (void)removeObstacle:(id)arg1;
- (void)removeObstacles:(id)arg1;
- (void)restoreObstacleNodeConnections;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;

@end
