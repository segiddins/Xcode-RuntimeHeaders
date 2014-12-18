//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTHashTable, DVTMapTable, DVTObservingToken, DVTOperation, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface IDEPlaygroundExecutionCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionLifecycleQueue;
    DVTMapTable *_playgroundsToOutstandingSessionsMap;
    DVTMapTable *_preparationTokensToPreparationParameters;
    DVTMapTable *_preparationParametersToTokenCount;
    DVTMapTable *_preparationParametersToUndesignatedSessions;
    DVTMapTable *_preparationParametersToUndesignatedSessionCleanupTimers;
    DVTMapTable *_sessionsToCompletionInfo;
    DVTMapTable *_sessionsToUseCount;
    DVTHashTable *_sessionsThatFinishedPrematurely;
    DVTMapTable *_preparationParametersToPrelaunchFailureCounts;
    DVTOperation *_lastFullSimulatorSession;
    DVTObservingToken *_lastFullSimulatorSessionObservingToken;
    BOOL _safeToEnablePrelaunching;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedPlaygroundExecutionCoordinator;
+ (id)playgroundCoordinatorLogAspect;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)_registerNewLastiOSAnimationModeSession:(id)arg1;
- (void)cancelExecutionOfPlayground:(id)arg1;
- (void)_undesignateOutstandingSessionsForPlayground:(id)arg1;
- (BOOL)executePlayground:(id)arg1 withExecutionParameters:(id)arg2 error:(id *)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_sessionToExecuteForExecutionParameters:(id)arg1;
- (void)_completeWithCompletionInfo:(id)arg1 session:(id)arg2;
- (void)_handleCompletionForSession:(id)arg1 preparationParameters:(id)arg2;
- (void)_shutDownOperationsForPreparationParameters:(id)arg1;
- (void)_spinUpOperationForPreparationParameters:(id)arg1;
- (void)_unregisterPreperationToken:(id)arg1;
- (id)registerPreperationParameters:(id)arg1;
- (id)_undesignatedSessionsForPreparationParameters:(id)arg1;
- (void)_clearUndesignatedSessionsForPreparationParameters:(id)arg1;
- (void)_removeUndesignatedSession:(id)arg1 forPreparationParameters:(id)arg2;
- (void)_pruneUndesignatedSessionsForPreparationParameters:(id)arg1;
- (void)_scheduleUndesignatedSessionPruningTimerForPreparationParameters:(id)arg1;
- (void)_addUndesignatedSession:(id)arg1 forPreparationParameters:(id)arg2;
- (BOOL)_shouldPrelaunchSessionForParameters:(id)arg1;
- (id)init;

@end

