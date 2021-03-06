/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {
    NSUUID * _UUID;
    float  _alpha;
    NSMutableDictionary * _cachedCoordinateListsByBlockPath;
    NSMutableDictionary * _cachedDataBlocksByBlockPath;
    HKGraphSeriesDataSource * _dataSource;
    <HKSeriesDelegate> * _delegate;
    BOOL  _dirty;
    float  _minimumYAxisValueRange;
    double  _minimumYAxisValueRangeReferencePeriod;
    struct { 
        struct { 
            int index; 
            int zoom; 
        } blockPath; 
        int index; 
    }  _selectedPointPath;
    BOOL  _shouldAdjustMinimumYAxisValueRangeForReferencePeriod;
    HKAxis * _yAxis;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) float alpha;
@property (nonatomic, retain) HKGraphSeriesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSeriesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float minimumYAxisValueRange;
@property (nonatomic) double minimumYAxisValueRangeReferencePeriod;
@property (nonatomic) BOOL shouldAdjustMinimumYAxisValueRangeForReferencePeriod;
@property (readonly) Class superclass;
@property (nonatomic, copy) HKAxis *yAxis;

- (void).cxx_destruct;
- (id)UUID;
- (double)_adjustedMinimumYAxisValueRangeForDateZoom:(int)arg1;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(struct { int x1; int x2; })arg2;
- (id)_cachedCoordinatesForBlockPath:(struct { int x1; int x2; })arg1;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 yAxis:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 zoomScale:(float)arg4 contentOffset:(struct CGPoint { float x1; float x2; })arg5;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(int)arg3;
- (id)_coordinatesForBlockPath:(struct { int x1; int x2; })arg1 xAxis:(id)arg2;
- (id)_dataBlockForBlockPath:(struct { int x1; int x2; })arg1;
- (void)_sendInvalidateToDelegate;
- (void)_setDirty;
- (id)_valueRangeForYAxisWithXAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 contentOffset:(struct CGPoint { float x1; float x2; })arg3 zoomScale:(float)arg4;
- (float)alpha;
- (BOOL)autoscaleYAxisWithXAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)containsCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })coordinateTransformForChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { int x1; int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)dataSource;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deselectPath;
- (float)distanceFromTouchPoint:(struct CGPoint { float x1; float x2; })arg1 inChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 xAxis:(id)arg3 zoomScale:(float)arg4 contentOffset:(struct CGPoint { float x1; float x2; })arg5 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 renderContext:(struct CGContext { }*)arg5;
- (void)drawWithChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6 inContext:(struct CGContext { }*)arg7;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 roundToViewScale:(BOOL)arg6 block:(id /* block */)arg7;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 roundToViewScale:(BOOL)arg6 rejectPointsOutOfChartRect:(BOOL)arg7 block:(id /* block */)arg8;
- (id)init;
- (BOOL)isHighlighted;
- (float)minimumYAxisValueRange;
- (double)minimumYAxisValueRangeReferencePeriod;
- (void)selectPathAtPoint:(struct { struct { int x_1_1_1; int x_1_1_2; } x1; int x2; })arg1;
- (struct { struct { int x_1_1_1; int x_1_1_2; } x1; int x2; })selectedPointPath;
- (void)setAlpha:(float)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumYAxisValueRange:(float)arg1;
- (void)setMinimumYAxisValueRangeReferencePeriod:(double)arg1;
- (void)setShouldAdjustMinimumYAxisValueRangeForReferencePeriod:(BOOL)arg1;
- (void)setYAxis:(id)arg1;
- (BOOL)shouldAdjustMinimumYAxisValueRangeForReferencePeriod;
- (id)yAxis;
- (float)yAxisDistanceFromTouchPoint:(struct CGPoint { float x1; float x2; })arg1 inChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 xAxis:(id)arg3 zoomScale:(float)arg4 contentOffset:(struct CGPoint { float x1; float x2; })arg5 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6;

@end
