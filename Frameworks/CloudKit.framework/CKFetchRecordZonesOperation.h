/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {
    NSError * _fetchAllRecordZonesError;
    id /* block */  _fetchRecordZonesCompletionBlock;
    BOOL  _ignorePCSFailures;
    BOOL  _isFetchAllRecordZonesOperation;
    NSMutableDictionary * _recordZoneErrors;
    NSArray * _recordZoneIDs;
    NSArray * _recordZones;
    NSMutableDictionary * _recordZonesByZoneID;
}

@property (nonatomic, retain) NSError *fetchAllRecordZonesError;
@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock;
@property (nonatomic) BOOL ignorePCSFailures;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic, retain) NSMutableDictionary *recordZoneErrors;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSArray *recordZones;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;

+ (id)fetchAllRecordZonesOperation;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id)fetchAllRecordZonesError;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)ignorePCSFailures;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1;
- (BOOL)isFetchAllRecordZonesOperation;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDs;
- (id)recordZones;
- (id)recordZonesByZoneID;
- (void)setFetchAllRecordZonesError:(id)arg1;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setIgnorePCSFailures:(BOOL)arg1;
- (void)setIsFetchAllRecordZonesOperation:(BOOL)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordZones:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;

@end
