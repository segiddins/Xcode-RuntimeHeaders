//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSLaunchSession.h>

@class NSMutableArray, PBXLSDebuggerAdaptor, PBXLSProcess;
@protocol PBXLSRestartExecutableRequest;

@interface PBXLSDebuggingSession : PBXLSLaunchSession
{
    PBXLSProcess *_process;
    PBXLSDebuggerAdaptor<PBXLSRestartExecutableRequest> *_restartExecAdaptor;
    NSMutableArray *_debuggerAdaptors;
}

+ (id)traceName;
- (BOOL)customDataFormattersEnabled;
- (void)sendLogMessageToDebuggers:(id)arg1;
- (void)_projectWillClose:(id)arg1;
- (void)_projectDidOpen:(id)arg1;
- (void)_globalBreakpointDidChange:(id)arg1;
- (void)_projectItemsDidChange:(id)arg1;
- (void)_breakpointWillBeDeleted:(id)arg1;
- (void)_breakpointWasAdded:(id)arg1;
- (void)_attemptChangeOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)_attemptDeleteOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)_attemptCreateOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)restartExecutable;
- (void)suspendExecutable;
- (void)syncWithDebugger;
- (id)_debuggerAdaptors;
- (void)debuggerDidInitialize:(id)arg1;
- (void)addInitialBreakpointToDebugger:(id)arg1;
- (void)_removeBreakpoints:(id)arg1 forDebugger:(id)arg2;
- (void)_addBreakpoints:(id)arg1 forDebugger:(id)arg2;
- (id)debuggerAdaptorForExecutableRestart;
- (void)registerRestartExecutableAdaptor:(id)arg1;
- (id)debugSessionModule;
- (id)process;
- (void)dealloc;
- (id)initWithSessionModule:(id)arg1 launchConfig:(id)arg2 executable:(id)arg3;

@end

