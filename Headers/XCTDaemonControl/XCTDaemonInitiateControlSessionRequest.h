//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@class NSString, XCTCapabilities;
@protocol XCTDebugLogDelegate;

@interface XCTDaemonInitiateControlSessionRequest : NSObject <XCTConfigurableDebugLogger>
{
    struct atomic_flag _finished;
    id <XCTDebugLogDelegate> _logDelegate;
    XCTCapabilities *_IDECapabilities;
    CDUnknownBlockType _completion;
}

+ (id)daemonCapabilitiesForLegacyProtocolVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) XCTCapabilities *IDECapabilities; // @synthesize IDECapabilities=_IDECapabilities;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void)_attemptVersion13APIWithDaemonProxy:(id)arg1;
- (void)_attemptVersion16APIWithDaemonProxy:(id)arg1;
- (void)_attemptVersion27APIWithDaemonProxy:(id)arg1;
- (void)executeWithDaemonProxy:(id)arg1 timeout:(double)arg2;
- (void)_finishWithCapabilities:(id)arg1 error:(id)arg2;
- (id)initWithIDECapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

