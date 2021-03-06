/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDatabaseJournal : NSObject {
    NSString * _directoryPath;
    NSObject<OS_dispatch_queue> * _journalQueue;
    unsigned long long  _serialNumber;
    NSString * _uuid;
}

+ (id /* block */)binderForDictionary:(id)arg1;
+ (id)journalWithName:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_executeFile:(id)arg1 onDb:(id)arg2;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)executeQueriesFromAllJournalFilesOnDatabase:(id)arg1;
- (void)writeQuery:(id)arg1 values:(id)arg2;

@end
