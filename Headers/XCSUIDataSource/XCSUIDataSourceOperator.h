//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableSet, XCSUIDataSource;

@interface XCSUIDataSourceOperator : NSObject
{
    DVTDispatchLock *_callbacksLock;
    NSMutableSet *_observers;
    XCSUIDataSource *_dataSource;
}

+ (id)operatorWithDataSource:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak XCSUIDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)invokeForIntegrationFinished:(id)arg1;
- (void)invokeForBuildAgentsChangedOnService:(id)arg1;
- (void)invokeForVersionInfoChangedOnService:(id)arg1;
- (void)invokeForBuildQueueChangedOnService:(id)arg1;
- (void)invokeForBotDefinitionChangedWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2;
- (void)invokeForACLUpdateOnService:(id)arg1;
- (void)invokeForIntegrationStepChanged:(id)arg1 service:(id)arg2 bot:(id)arg3 integration:(id)arg4;
- (void)invokeForIntegrationStatusChanged:(id)arg1 service:(id)arg2 bot:(id)arg3 integration:(id)arg4;
- (void)invokeForIntegrationSnapshotChanged:(id)arg1 botSnapshot:(id)arg2;
- (void)invokeForBotStatsSnapshotChanged:(id)arg1 bot:(id)arg2;
- (void)invokeForBotSnapshotChanged:(id)arg1 wasRemoved:(BOOL)arg2;
- (void)invokeForAccountWasDisabledForService:(id)arg1;
- (void)invokeForAccountWasEnabledForService:(id)arg1;
- (void)invokeForDidFinishInitialLoadForService:(id)arg1;
- (void)invokeForAccountWasRemovedForService:(id)arg1;
- (void)invokeForAccountWasAddedForService:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

