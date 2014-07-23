/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSString, PSIDatabase;

@interface PSIQuery : NSObject  {
    PSIDatabase *_idx;
    NSObject<OS_dispatch_queue> *_syncQueue;
    bool_didStart;
    bool_isCanceled;
    int _queryId;
    NSString *_searchText;
}

@property(copy,readonly) NSString * searchText;
@property(getter=isCanceled,readonly) bool canceled;
@property(readonly) int queryId;


- (int)queryId;
- (void)runWithResultsHandler:(id)arg1;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3;
- (bool)isCanceled;
- (void)cancel;
- (void)dealloc;
- (id)searchText;

@end