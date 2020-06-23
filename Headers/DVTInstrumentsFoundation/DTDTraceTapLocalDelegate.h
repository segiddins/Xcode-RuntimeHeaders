//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTTapLocalDelegate-Protocol.h>

@class DTDTraceTapConfig, DTTapLocal, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore, OS_xpc_object;

@interface DTDTraceTapLocalDelegate : NSObject <DTTapLocalDelegate>
{
    DTTapLocal *_tap;
    DTDTraceTapConfig *_config;
    CDUnknownBlockType _taskForPid;
    NSObject<OS_xpc_object> *_daemonConnection;
    NSObject<OS_dispatch_semaphore> *_daemonSemaphore;
    NSObject<OS_dispatch_semaphore> *_fragmentsLock;
    NSMutableArray *_fragments;
    long long _filePositionStart;
    BOOL _stopWasCalled;
}

- (void).cxx_destruct;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)canFetchWhileArchiving;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)_prepareXPCConnection;
- (void)setTaskForPidBlock:(CDUnknownBlockType)arg1;
- (void)setTap:(id)arg1;
- (id)validateConfig;
- (id)initWithConfig:(id)arg1;
- (id)_getSessionMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

