//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDERunOperationPathWorker.h>

#import <DebuggerLLDB/IDEConsoleAdaptorDelegateProtocol-Protocol.h>

@class DBGLLDBSession, DVTDispatchLock, NSObject, NSString;
@protocol DBGSBDebugger, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DBGLLDBLauncher : IDERunOperationPathWorker <IDEConsoleAdaptorDelegateProtocol>
{
    id <DBGSBDebugger> _lldbDebugger;
    NSString *_lastKnownDebuggerPrompt;
    BOOL _ignorePromptOnce;
    NSObject<OS_dispatch_queue> *_executeLLDBCommandQueue;
    DVTDispatchLock *_lifeCycleLock;
    BOOL _useOnlyStandardLLDBFramework;
    BOOL _hasQueriedLLDBRPCUserDefaults;
    BOOL _terminateCalled;
    DBGLLDBSession *_debugSession;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) DBGLLDBSession *debugSession; // @synthesize debugSession=_debugSession;
@property(readonly) BOOL terminateCalled; // @synthesize terminateCalled=_terminateCalled;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)terminate;
- (void)start;
- (void)_setupSearchPaths:(id)arg1;
- (void)_addExtraModules:(id)arg1;
- (id)_consumeEventAfterConnectToDebugServer:(id)arg1 lldbTarget:(id)arg2 launchParameters:(id)arg3;
- (void)_setMiscHandleCommands:(id)arg1;
- (void)_setPlatformForStart:(id)arg1;
- (id)devicePathSubstitutionPairsString;
- (id)_tryWithAnotherArchitectureOnBinaryPath:(id)arg1;
- (id)_doRegularDebugWithTarget:(id)arg1 usingDebugServer:(BOOL)arg2 errTargetString:(id)arg3;
- (void)_reportTarget:(id)arg1 failedToLaunchError:(id)arg2;
- (id)_doAttachWithTarget:(id)arg1 childPID:(unsigned long long *)arg2;
- (void)_showLaunchErrorForTitle:(id)arg1 message:(id)arg2;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (id)parseConsoleInputFromOriginalInput:(id)arg1;
- (void)_executeLLDBCommands:(id)arg1;
- (void)_createDebuggerConsoleAdaptor;
- (id)lldbDebugger;
- (void)setFinishedRunning;
- (void)_logToConsoleForUserActions:(id)arg1;
- (void)_logDebugStringFromLLDB:(const char *)arg1;
- (BOOL)useOnyStandardLLDBFramework;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

@end

