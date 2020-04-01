//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEPlaygroundExecution/IDEPlaygroundDataHandlerDelegate-Protocol.h>
#import <IDEPlaygroundExecution/IDEPlaygroundDeviceOwner-Protocol.h>

@class DVTDisallowFinishToken, DVTDispatchLock, DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, DVTPlaygroundCommunicationListener, IDEConsoleAdaptor, IDEPlaygroundDataHandler, IDEPlaygroundExecutionParameters, IDEPlaygroundLaunchDescriptor, IDEPlaygroundPreparationParameters, NSObject, NSString;
@protocol IDEPlaygroundExecutionSessionDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface IDEPlaygroundExecutionSession : DVTOperation <IDEPlaygroundDataHandlerDelegate, IDEPlaygroundDeviceOwner>
{
    struct Connection _RPCConnection;
    struct SBDebugger _debugger;
    struct SBTarget _target;
    struct SBProcess _process;
    struct SBBroadcaster _broadcaster;
    unsigned int _executionBreakpointThreadIndexID;
    unsigned long long _debuggerPendingStop;
    DVTDisallowFinishToken *_disallowCanFinishToken;
    DVTObservingToken *_canFinishObservationToken;
    DVTNotificationToken *_consoleOutputNotificationToken;
    DVTNotificationToken *_consoleInputNotificationToken;
    DVTObservingToken *_consoleAdaptorFinishedObservationToken;
    BOOL _ignoreConsoleAdaptorNotifications;
    BOOL _ignorePlaygroundLoggerResults;
    BOOL _isListeningForEvents;
    BOOL _executingPlaygroundSource;
    BOOL _askedToTerminate;
    BOOL _lostConnectionToRPCServer;
    BOOL _sessionWasAbandoned;
    BOOL _didSendAsyncInterrupt;
    BOOL _playgroundSourceWasExecuted;
    BOOL _playgroundExpressionFailed;
    BOOL _didNotifyDelegateExecutionWillFinish;
    BOOL _playgroundListenerDidConnect;
    BOOL _shouldWaitForDetach;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_sessionThreadID;
    NSObject<OS_dispatch_semaphore> *_deviceSem;
    DVTDispatchLock *_lifeCycleLock;
    NSObject<OS_dispatch_queue> *_playgroundDataHandlerQueue;
    IDEPlaygroundDataHandler *_playgroundDataHandler;
    NSObject<OS_dispatch_queue> *_executionPerformanceMetricQueue;
    DVTPerformanceMetric *_executionPerformanceMetric;
    BOOL _consoleAdaptorIsOpen;
    BOOL _playgroundListenerConnectionIsOpen;
    int _internalState;
    unsigned long long _state;
    IDEPlaygroundLaunchDescriptor *_launchDescriptor;
    IDEPlaygroundExecutionParameters *_executionParameters;
    id <IDEPlaygroundExecutionSessionDelegate> _delegate;
    IDEPlaygroundPreparationParameters *_preparationParameters;
    IDEPlaygroundExecutionParameters *_executionParametersMailbox;
    IDEConsoleAdaptor *_targetConsoleAdaptor;
    DVTPlaygroundCommunicationListener *_playgroundListener;
}

+ (id)keyPathsForValuesAffectingCanFinishExecution;
+ (id)playgroundExecutionPerformanceLogAspect;
+ (id)playgroundExecutionLogAspect;
@property BOOL playgroundListenerConnectionIsOpen; // @synthesize playgroundListenerConnectionIsOpen=_playgroundListenerConnectionIsOpen;
@property(retain) DVTPlaygroundCommunicationListener *playgroundListener; // @synthesize playgroundListener=_playgroundListener;
@property BOOL consoleAdaptorIsOpen; // @synthesize consoleAdaptorIsOpen=_consoleAdaptorIsOpen;
@property(retain) IDEConsoleAdaptor *targetConsoleAdaptor; // @synthesize targetConsoleAdaptor=_targetConsoleAdaptor;
@property(retain) IDEPlaygroundExecutionParameters *executionParametersMailbox; // @synthesize executionParametersMailbox=_executionParametersMailbox;
@property(readonly) IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
@property int internalState; // @synthesize internalState=_internalState;
@property(nonatomic) __weak id <IDEPlaygroundExecutionSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEPlaygroundExecutionParameters *executionParameters; // @synthesize executionParameters=_executionParameters;
@property(readonly, nonatomic) IDEPlaygroundLaunchDescriptor *launchDescriptor; // @synthesize launchDescriptor=_launchDescriptor;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playgroundDeviceWithIdentifier:(id)arg1 wasAssignedToOwner:(id)arg2;
- (void)playgroundDeviceWithIdentifier:(id)arg1 wasRequestedBy:(id)arg2;
- (void)_relinqishDevice;
- (void)playgroundDataHandlerDidDecodeFinishExpressionResult:(id)arg1;
- (void)playgroundDataHandler:(id)arg1 didDecodeResult:(id)arg2;
- (void)_destroyDebugger;
- (void)_forceTerminateProcess;
- (void)_terminateProcess;
- (void)_detachProcess;
- (void)_releaseProcess;
- (void)_scheduleAutoTermination;
- (void)_notifyDelegateExecutionDidFinish;
- (void)_notifyDelegateExecutionWillFinish;
- (void)_notifyDelegateOfError:(id)arg1;
- (id)loadModuleAtPath:(id)arg1;
- (void)_canFinishExecutionChanged;
- (BOOL)canFinishExecution;
- (id)_crashErrorForExpressionResult:(id)arg1;
- (id)_swiftExceptionErrorForExpressionResult:(id)arg1;
- (BOOL)_expressionErrorHasAssociatedLine:(id)arg1;
- (id)_errorMessageFromExpressionResult:(struct SBValue)arg1;
- (void)_handleExpressionResult:(struct SBValue)arg1;
- (struct SBValue)_executePlaygroundSource;
- (BOOL)playgroundExecutionWillFinishBreakpointHitOnThread:(struct SBThread *)arg1 location:(struct SBBreakpointLocation *)arg2;
- (BOOL)executePlaygroundBreakpointHitOnThread:(struct SBThread *)arg1 location:(struct SBBreakpointLocation *)arg2;
- (BOOL)_createBreakpointWithName:(const char *)arg1 breakpointHitCallback:(CDUnknownFunctionPointerType)arg2 error:(id *)arg3;
- (_Bool)shouldCancelExpressionEvaluationForPhase:(int)arg1;
- (void)_lostConnectionToRPCServer;
- (BOOL)_rpcConnectionIsValid;
- (void)_removeRPCServerExitedCallback;
- (void)_addRPCServerExitedCallback;
- (id)_getLoadedImagesFromProcess;
- (id)_getAllThreadBacktraceFromProcess;
- (id)_getCurrentThreadBacktraceFromProcess;
- (unsigned long long)attachToProcessWithPID:(int)arg1 target:(struct SBTarget)arg2 process:(struct SBProcess *)arg3 withError:(id *)arg4;
- (void)_handlePlaygroundExprDidFinishEvent;
- (void)_handleInternalSessionPlaygroundExprDidRecoverablyFailEvent;
- (void)_handleInternalSessionPlaygroundExprDidFailEvent;
- (void)_handleInternalSessionShouldExecPlaygroundSourceEvent;
- (void)_handleInternalSessionAskedToTerminateEvent;
- (void)_handleInternalSessionEvent:(unsigned int)arg1;
- (BOOL)_handleProcessExitedEvent;
- (BOOL)_handleProcessDetachedEvent;
- (BOOL)_handleProcessRunningEvent;
- (BOOL)_handleProcessStoppedEvent;
- (BOOL)_handleProcessEvent:(unsigned int)arg1;
- (void)_handleListenerConnectionClosedEvent;
- (void)_handleListenerErrorEventWithError:(id)arg1;
- (void)_handleListenerDataReceivedEventWithData:(id)arg1 dataIdentifier:(id)arg2 date:(id)arg3 version:(unsigned long long)arg4 error:(id)arg5;
- (void)_handleListenerCallbackWithEventType:(long long)arg1 data:(id)arg2 dataIdentifier:(id)arg3 date:(id)arg4 version:(unsigned long long)arg5 error:(id)arg6;
- (void *)listenForEvents;
- (void)_destroyConsoleAdaptor;
- (id)_setupConsoleAdaptor;
- (void)_destroyPlaygroundListener;
- (id)_setupPlaygroundListener:(id *)arg1;
- (void)main;
- (void)_moveToFinishedState;
- (void)_interruptExecutingPlaygroundSource;
- (void)_broadcastAskedToTerminate;
- (void)_abortExecutionSetupWithError:(id)arg1;
- (void)_scheduleSessionAbandon;
- (void)cancel;
- (void)executeWithExecutionParameters:(id)arg1;
- (void)makeHighestPrioritySession;
- (void)prepareWithPreparationParameters:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

