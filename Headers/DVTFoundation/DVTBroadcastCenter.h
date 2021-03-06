//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DVTBroadcastCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptions;
    NSMutableArray *_queuedBroadcasts;
    DVTDelayedInvocation *_queuedBroadcastTrigger;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)processQueuedInvocations:(id)arg1;
- (void)deferAndCoalesceBroadcast:(id)arg1 from:(id)arg2;
- (void)broadcast:(id)arg1;
- (void)broadcast:(id)arg1 source:(id)arg2 userInfo:(id)arg3;
- (id)subscribeToBroadcast:(id)arg1 from:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)removeSubscription:(id)arg1;
- (id)init;

@end

