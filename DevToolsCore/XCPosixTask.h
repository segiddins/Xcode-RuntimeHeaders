//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSPortDelegate-Protocol.h>

@class NSError, NSPort, NSRecursiveLock, NSString, XCPosixTaskBackgroundReaderThread, XCPosixTaskBackgroundWriterThread, XCPosixTaskLaunchInfo;
@protocol XCPosixTaskBackgroundParsing;

@interface XCPosixTask : NSObject <NSPortDelegate>
{
    int _taskPid;
    int _exitStatus;
    int _spawnResult;
    NSRecursiveLock *_lock;
    XCPosixTaskBackgroundWriterThread *_taskStdin;
    XCPosixTaskBackgroundReaderThread *_taskStdout;
    XCPosixTaskBackgroundReaderThread *_taskStderr;
    NSPort *_responseAvailableNotificationPort;
    NSObject *_observer;
    NSObject<XCPosixTaskBackgroundParsing> *_parser;
    XCPosixTaskLaunchInfo *_launchInfo;
    NSError *_lastError;
}

+ (void)selfTest;
+ (void)initialize;
- (id)lastError;
- (void)error:(id)arg1;
- (void)_posixError:(id)arg1 file:(char *)arg2 line:(int)arg3;
- (BOOL)_spawnTask:(const char *)arg1 inDirectory:(const char *)arg2 arguments:(const char **)arg3 environment:(const char **)arg4;
- (BOOL)_setupReadPipe:(int *)arg1 method:(int)arg2 descriptor:(int)arg3 path:(id)arg4;
- (BOOL)_setupStdin:(int *)arg1;
- (BOOL)_setupAndSpawn;
- (void)_requestExitNotification;
- (void)_waitForExitInBackground:(id)arg1;
- (void)_postMessageToMainThread:(int)arg1 withData:(id)arg2;
- (void)handlePortMessage:(id)arg1;
- (void)_processReadQueue:(id)arg1 message:(SEL)arg2;
- (void)_backgroundThreadWillExit:(id)arg1;
- (void)_backgroundThreadExited:(id)arg1;
- (void)_clearNotificationPort;
- (void)processTerminated;
- (void)outputComplete;
- (void)_thread:(id)arg1 receivedDataInBackground:(id)arg2;
- (void)receivedStderrObjectInBackground:(id)arg1;
- (void)receivedStdoutObjectInBackground:(id)arg1;
- (void)deliverStderrObject:(id)arg1;
- (void)deliverStdoutObject:(id)arg1;
- (void)_enqueueObject:(id)arg1 inThread:(id)arg2 message:(int)arg3;
- (void)receivedStderrObject:(id)arg1;
- (void)receivedStdoutObject:(id)arg1;
- (void)closeStdin;
- (void)writeData:(id)arg1;
- (void)waitUntilExit;
- (int)exitStatus;
- (void)interrupt;
- (void)terminate;
- (void)kill;
- (void)signal:(int)arg1;
- (int)pid;
- (int)spawnResult;
- (BOOL)_wait:(BOOL)arg1;
- (id)launchInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLaunchInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

