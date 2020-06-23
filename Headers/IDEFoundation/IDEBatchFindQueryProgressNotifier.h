//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBatchFindAbstractQuery, NSDate, NSMutableArray, NSMutableSet, NSNumber;
@protocol OS_dispatch_queue;

@interface IDEBatchFindQueryProgressNotifier : NSObject
{
    IDEBatchFindAbstractQuery *_query;
    long long _progress;
    NSDate *_lastProgressNotificationDate;
    NSMutableArray *_bufferedResults;
    NSDate *_lastBufferedResultDeliveryDate;
    long long _totalOfResultsDelivered;
    NSMutableSet *_seenResults;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_totalWork;
    long long _incrementalProgress;
    BOOL _fakeSlowness;
    BOOL _started;
    BOOL _finished;
    NSMutableSet *_stalledFilePaths;
}

- (void).cxx_destruct;
- (void)finishProcessing;
- (void)didFinishGeneratingLazyChildrenOfResult:(id)arg1;
- (void)didFinishStallingOnFilePath:(id)arg1;
- (void)didBeginStallingOnFilePath:(id)arg1;
- (void)deliverStalledFilesWithLockAlreadyHeld:(long long)arg1;
- (void)deliverResult:(id)arg1;
- (void)deliverResults:(id)arg1;
- (void)deliverBufferedResultsIfNeededWithLockAlreadyHeld:(long long)arg1;
- (void)deliverBufferedResultsWithLockAlreadyHeld:(long long)arg1;
- (void)updateProgress:(long long)arg1 withLockAlreadyHeld:(long long)arg2;
- (void)updateProgress:(long long)arg1;
- (void)incrementProgressBy:(long long)arg1;
- (void)noteIncrementalGoal:(long long)arg1;
- (void)started;
- (void)withLock:(CDUnknownBlockType)arg1;
- (id)initWithQuery:(id)arg1;

@end

