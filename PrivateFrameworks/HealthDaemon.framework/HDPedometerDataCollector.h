/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPedometerDataCollector : HDAggregateDataCollector {
    CMPedometer * _pedometer;
}

+ (id)createCollectorsForCurrentHardware:(id)arg1;
+ (Class)sensorDatumClass;

- (void).cxx_destruct;
- (id)_queue_pedometer;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithHealthDaemon:(id)arg1;
- (id)pedometer;
- (id)quantitySampleFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)setPedometer:(id)arg1;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;

@end
