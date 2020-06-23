//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTTestDeviceCloneProvider-Protocol.h>

@class DVTFuture, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber;
@protocol OS_dispatch_queue;

@interface DVTTestDeviceClonePool : NSObject <DVTTestDeviceCloneProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_clonesByDevice;
    NSMutableArray *_observations;
    NSArray *_creators;
    DVTFuture *_initializationBarrier;
    long long _maxVendCount;
    NSNumber *_pendingMaxVendCount;
    NSMutableArray *_requests;
    NSMutableSet *_inFlightCloneRequests;
}

+ (id)sharedPool;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *inFlightCloneRequests; // @synthesize inFlightCloneRequests=_inFlightCloneRequests;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain) NSNumber *pendingMaxVendCount; // @synthesize pendingMaxVendCount=_pendingMaxVendCount;
@property long long maxVendCount; // @synthesize maxVendCount=_maxVendCount;
@property(readonly) DVTFuture *initializationBarrier; // @synthesize initializationBarrier=_initializationBarrier;
@property(readonly) NSArray *creators; // @synthesize creators=_creators;
@property(readonly) NSMutableArray *observations; // @synthesize observations=_observations;
@property(readonly) NSMutableDictionary *clonesByDevice; // @synthesize clonesByDevice=_clonesByDevice;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)description;
- (void)addClone:(id)arg1 ofDeviceWithIdentifier:(id)arg2 creator:(id)arg3;
- (id)availableClonesOfDeviceWithIdentifier:(id)arg1;
- (id)creatorForCloningDevice:(id)arg1;
- (void)returnClone:(id)arg1;
- (id)_vendCloneOfDevice:(id)arg1;
- (id)vendCloneOfDevice:(id)arg1;
- (id)addObserver:(id)arg1 forClonesOfDevice:(id)arg2 callbackQueue:(id)arg3;
- (void)limitNumberOfBootedClones;
- (void)enforceMaximumVendCount:(long long)arg1;
- (long long)currentTotalBootCount;
- (long long)currentUnvendedBootCount;
- (long long)currentVendCount;
- (void)processRequests;
- (id)initWithCreators:(id)arg1;

@end

