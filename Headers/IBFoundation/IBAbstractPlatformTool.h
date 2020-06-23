//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBAbstractPlatformTool-Protocol.h>
#import <IBFoundation/IBMessageReceiveChannelTarget-Protocol.h>

@class NSMutableArray, NSString;

@interface IBAbstractPlatformTool : NSObject <IBAbstractPlatformTool, IBMessageReceiveChannelTarget>
{
    NSMutableArray *_messageContext;
    BOOL _canceled;
}

+ (void)main;
+ (void)checkForActiveTrap;
+ (long long)trapTimeoutInSeconds;
+ (BOOL)trap;
+ (void)setTrap:(BOOL)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (void)messageReceiveChannel:(id)arg1 didDeliverMessage:(SEL)arg2;
- (void)messageReceiveChannel:(id)arg1 willDeliverMessage:(SEL)arg2;
- (void)keepPersistentObjectInContext:(id)arg1;
- (id)loadExtensions:(id)arg1;
- (void)startServingWriteDescriptor:(int)arg1 readDescriptor:(int)arg2;
- (void)startServingSocket:(int)arg1;
- (void)startServingReceiveChannel:(id)arg1;
- (void)_WAIT_FOR_PARENT_TO_EXIT:(id)arg1;
- (BOOL)shouldExitWhenStandardInputCloses;
- (BOOL)shouldStartEventProcessingRunloop;
- (id)messageReceiveChannel:(id)arg1 preprocessException:(id)arg2;
- (void)messageReceiveChannel:(id)arg1 shutdownWithError:(id)arg2;
- (void)messageReceiveChannelShutdown:(id)arg1;
- (id)messageReceiveChannel:(id)arg1 queueForReceivingMessage:(SEL)arg2;
- (id)messageReceiveChannelQueueForShutdownNotification:(id)arg1;
- (void)runMessageChannel:(id)arg1;
- (id)context;
- (void)standardInputClosed;
- (void)initializeWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

