//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexDBSQLStream.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEIndexDatabase, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface IDEIndexDBConnection : IDEIndexDBSQLStream <DVTInvalidation>
{
    int _inUseCount;
    int _collectionCount;
    IDEIndexDatabase *_database;
    NSObject<OS_dispatch_queue> *_runQueue;
    struct sqlite3 *_dbHandle;
    CDUnknownBlockType _cancelCallback;
    long long _tempTableCount;
    NSMutableSet *_tempTables;
    BOOL _closing;
    void *_checkpointInfo;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
- (id)database;
- (void).cxx_destruct;
- (void)dealloc;
- (void)primitiveInvalidate;
- (void)close;
- (void)wait;
- (void)reportSQLiteError:(int)arg1 function:(id)arg2 message:(const char *)arg3 info:(id)arg4;
- (void)finalizeSQLiteStmt:(struct sqlite3_stmt **)arg1;
- (void)runSQLiteStmt:(struct sqlite3_stmt **)arg1 sql:(id)arg2 bindings:(CDUnknownBlockType)arg3 forEachRow:(CDUnknownBlockType)arg4 whenDone:(CDUnknownBlockType)arg5;
- (void)cancelWhen:(CDUnknownBlockType)arg1;
- (BOOL)shouldCancel;
- (void)shutdown;
- (void)runSQLite:(id)arg1;
- (void)willSubmitTransaction:(id)arg1;
- (void)explainQueryPlan:(id)arg1;
- (int)doSQLChanges:(id)arg1 withBindings:(CDUnknownBlockType)arg2;
- (void)doSQLQuery:(id)arg1 withBindings:(CDUnknownBlockType)arg2 forEachRow:(CDUnknownBlockType)arg3;
- (void)didDropTempTable:(id)arg1;
- (void)didCreateTempTable:(id)arg1;
- (id)newTempTableWithName:(id)arg1 schema:(id)arg2;
- (id)newTempTableWithSchema:(id)arg1;
- (id)newTempTableName;
- (void)doBlock:(CDUnknownBlockType)arg1;
- (id)dbConnection;
- (void)setAutoCheckpointThreshold:(int)arg1;
- (id)initWithDatabase:(id)arg1 create:(BOOL)arg2 backgroundPriority:(BOOL)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

