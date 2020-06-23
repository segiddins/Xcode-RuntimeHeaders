//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTTestRunnerConnectionProvider-Protocol.h>

@class DTXProxyChannel, NSString, NSUUID, XCTCapabilities;
@protocol OS_dispatch_queue, XCTDaemonDTXConnectionProviding, XCTDebugLogDelegate;

@interface XCTDaemonMediatedTestRunnerConnectionProvider : NSObject <XCTTestRunnerConnectionProvider, XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_sessionIdentifier;
    XCTCapabilities *_IDECapabilities;
    id <XCTDaemonDTXConnectionProviding> _daemonDTXConnectionProvider;
    DTXProxyChannel *_proxyChannel;
}

- (void).cxx_destruct;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(retain) id <XCTDaemonDTXConnectionProviding> daemonDTXConnectionProvider; // @synthesize daemonDTXConnectionProvider=_daemonDTXConnectionProvider;
@property(readonly) XCTCapabilities *IDECapabilities; // @synthesize IDECapabilities=_IDECapabilities;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void)_queue_initiateSessionWithConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_queue_isValid;
- (id)proxy;
- (void)invalidate;
- (void)makeTestRunnerConnectionWithCompletion:(CDUnknownBlockType)arg1 cancellation:(CDUnknownBlockType)arg2;
- (id)initWithSessionIdentifier:(id)arg1 capabilities:(id)arg2 daemonDTXConnectionProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

