//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/IDEDeviceRunOperationWorker.h>

#import <IDEiOSSupportCore/DTMISProcessControlServiceAuthorizedAPI-Protocol.h>

@class DTXChannel, DVTDispatchLock, DVTFuture, DVTObservingToken, DVTiPhoneSimulator, IDEPseudoTerminal, NSString;

@interface IDELaunchiPhoneSimulatorLauncher : IDEDeviceRunOperationWorker <DTMISProcessControlServiceAuthorizedAPI>
{
    BOOL _debugSessionStarted;
    BOOL _responsibleForTermination;
    BOOL _setUpSimulatorSessionForAttaching;
    BOOL _terminateCalled;
    BOOL _executionEndedCalled;
    DVTFuture *_launchFuture;
    DVTDispatchLock *_lifeCycleLock;
    DVTObservingToken *_debugSessionStateObservingToken;
    BOOL _launchingToDebug;
    DVTiPhoneSimulator *_device;
    IDEPseudoTerminal *_pty;
    DTXChannel *_launchServiceChannel;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(retain) DTXChannel *launchServiceChannel; // @synthesize launchServiceChannel=_launchServiceChannel;
@property(retain) IDEPseudoTerminal *pty; // @synthesize pty=_pty;
@property(retain) DVTiPhoneSimulator *device; // @synthesize device=_device;
@property(getter=isLaunchingToDebug) BOOL launchingToDebug; // @synthesize launchingToDebug=_launchingToDebug;
- (void).cxx_destruct;
- (BOOL)_willUseExistingProcess;
- (void)pidDiedCallback:(id)arg1;
- (void)_cancelProcessControlChannel;
- (id)_instrumentsProcessControlChannel:(BOOL)arg1;
- (void)launchCompleteWithAppPID:(int)arg1;
- (void)executionDidEnd;
- (void)terminate;
- (void)performWorkerAction;
- (BOOL)_setupPTY;
- (void)_setUpSimulatorSessionForAttaching;
- (void)primitiveInvalidate;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

