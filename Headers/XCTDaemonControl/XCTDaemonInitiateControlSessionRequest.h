//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@class NSString;
@protocol XCTDebugLogDelegate;

@interface XCTDaemonInitiateControlSessionRequest : NSObject <XCTConfigurableDebugLogger>
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _finished
    id <XCTDebugLogDelegate> _logDelegate;
    CDUnknownBlockType _completion;
}

@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)_attemptVersion13APIWithDaemonProxy:(id)arg1;
- (void)_attemptVersion16APIWithDaemonProxy:(id)arg1;
- (void)executeWithDaemonProxy:(id)arg1 timeout:(double)arg2;
- (void)_finishWithProtocolVersion:(id)arg1 error:(id)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

