//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTXChannel, DVTObservingToken, DVTiOSConditionInducer, DVTiOSDevice, NSArray, NSMapTable;
@protocol OS_dispatch_queue, OS_os_log;

@interface DVTConditionInducerSession : NSObject
{
    BOOL _channelResetQueued;
    unsigned long long _serviceState;
    NSArray *_availableConditions;
    DVTiOSConditionInducer *_activeCondition;
    DVTiOSDevice *_device;
    NSObject<OS_dispatch_queue> *_channelQueue;
    DTXChannel *_channel;
    NSMapTable *_registeredCallbackBlocks;
    DVTObservingToken *_deviceAllowsSecureServicesObservingToken;
    DVTObservingToken *_deviceHasConnectionObservingToken;
    DVTObservingToken *_deviceIsPairedObservingToken;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) DVTObservingToken *deviceIsPairedObservingToken; // @synthesize deviceIsPairedObservingToken=_deviceIsPairedObservingToken;
@property(retain) DVTObservingToken *deviceHasConnectionObservingToken; // @synthesize deviceHasConnectionObservingToken=_deviceHasConnectionObservingToken;
@property(retain) DVTObservingToken *deviceAllowsSecureServicesObservingToken; // @synthesize deviceAllowsSecureServicesObservingToken=_deviceAllowsSecureServicesObservingToken;
@property(retain) NSMapTable *registeredCallbackBlocks; // @synthesize registeredCallbackBlocks=_registeredCallbackBlocks;
@property BOOL channelResetQueued; // @synthesize channelResetQueued=_channelResetQueued;
@property(retain) DTXChannel *channel; // @synthesize channel=_channel;
@property(retain) NSObject<OS_dispatch_queue> *channelQueue; // @synthesize channelQueue=_channelQueue;
@property __weak DVTiOSDevice *device; // @synthesize device=_device;
@property __weak DVTiOSConditionInducer *activeCondition; // @synthesize activeCondition=_activeCondition;
@property(retain) NSArray *availableConditions; // @synthesize availableConditions=_availableConditions;
@property unsigned long long serviceState; // @synthesize serviceState=_serviceState;
- (void)_conditionInducerStateDidChange;
- (void)unRegisterStateChangedCallbackWithOwner:(id)arg1;
- (void)registerStateChangedCallbackWithOwner:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_clearActiveCondition;
- (void)_activeConditionTearingDown;
- (void)_updateAvailableConditionInducersWithDictionary:(id)arg1;
- (void)disableConditionInducer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableConditionInducer:(id)arg1 profile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAvailableConditionInducersWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_preflightServiceRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleMessage:(id)arg1;
- (BOOL)_connectChannelWithDevice:(id)arg1;
- (void)_cancelChannel;
- (void)_resetChannel;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

