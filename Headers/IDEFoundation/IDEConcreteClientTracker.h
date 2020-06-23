//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEClientTracking-Protocol.h>

@class NSMutableSet, NSString;

@interface IDEConcreteClientTracker : NSObject <IDEClientTracking>
{
    NSMutableSet *_clientTrackingTokensRequiringCancellation;
    NSMutableSet *_clientTrackingTokensRequiringCancellationPrompt;
    NSMutableSet *_clientTrackingTokensNotSupportingCancellation;
    BOOL _isCancelling;
}

@property(readonly) BOOL isCancelling; // @synthesize isCancelling=_isCancelling;
- (void).cxx_destruct;
- (void)_clientCancellationTimeout;
- (void)cancelTrackedClients;
- (void)_callSignpostForClientsBlockingCancellation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_waitForTokensToCancel:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1 terminationSignpost:(CDUnknownBlockType)arg2;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 terminationSignpost:(CDUnknownBlockType)arg3 cancellationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

