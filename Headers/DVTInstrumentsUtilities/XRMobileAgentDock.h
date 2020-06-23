//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRMobileAgentStop-Protocol.h>

@class NSMutableArray, NSString, XRMobileAgent;

@interface XRMobileAgentDock : NSObject <XRMobileAgentStop>
{
    BOOL _agentExecuted;
    BOOL _abandoned;
    NSMutableArray *_waitingAgents;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t _cond;
    XRMobileAgent *_dockedAgent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XRMobileAgent *dockedAgent; // @synthesize dockedAgent=_dockedAgent;
- (void)releaseDockedAgent;
- (void)executeDockedAgent;
- (BOOL)waitForAgentToDock;
- (void)receiveMobileAgent:(id)arg1;
- (void)abandon;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

