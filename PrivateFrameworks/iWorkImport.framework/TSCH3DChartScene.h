/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScene : NSObject {
    struct ChartSceneInfo { 
        TSCH3DScene *scene; 
        TSCHChartInfo *chartInfo; 
        TSCHChartType *chartType; 
        TSCHChartSeriesType *seriesType; 
        struct { 
            BOOL forceOmitLegend; 
            BOOL forceOmitTitle; 
            BOOL forceOmitAxisTitle; 
            BOOL enable3DTightBounds; 
            BOOL enable3DScaledDepthBounds; 
            BOOL enable3DSageMaxDepthRatio; 
            unsigned int max3DLimitingSeries; 
        } layoutSettings; 
    }  mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; struct { BOOL x_3_1_1; BOOL x_3_1_2; BOOL x_3_1_3; BOOL x_3_1_4; BOOL x_3_1_5; BOOL x_3_1_6; unsigned int x_3_1_7; } x3; }*)arg1;
+ (BOOL)supportsValueAxisLabelAlignmentCaching;

- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)chartInfo;
- (id)chartType;
- (id)initWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; struct { BOOL x_3_1_1; BOOL x_3_1_2; BOOL x_3_1_3; BOOL x_3_1_4; BOOL x_3_1_5; BOOL x_3_1_6; unsigned int x_3_1_7; } x3; }*)arg1;
- (const struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; }*)layoutSettings;
- (id)scene;
- (id)seriesType;

@end
