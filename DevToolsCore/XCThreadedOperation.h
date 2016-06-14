//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCOperation.h>

@class NSThread, XCMessageQueue;

@interface XCThreadedOperation : XCOperation
{
    XCMessageQueue *_messageQueue;
    NSThread *_runningThread;
}

- (void)sendDataToOutputStreamInOriginatingThread:(id)arg1;
- (void)performInvocationInOriginatingThread:(id)arg1;
- (void)postNotificationInOriginatingThread:(id)arg1;
- (void)setMessageDispatchSuspended:(BOOL)arg1;
- (void)handleAvailableObjectsOnMessageQueue:(id)arg1;
- (void)decodeOutputData:(id)arg1;
- (int)cleanupAfterRunning;
- (void)_runOperationInBackground;
- (int)runOperationInBackground;
- (int)runOperation;
- (int)setupBeforeRunning;
- (id)runningThread;
- (void)finalize;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

