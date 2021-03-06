//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTConditionInducerServiceAPI-Protocol.h>
#import <DVTInstrumentsFoundation/DTConditionInducerSupportUpdatesProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface DTConditionInducerService : DTXService <DTConditionInducerSupportUpdatesProtocol, DTConditionInducerServiceAPI>
{
    NSXPCConnection *_connectionToService;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connectionToService; // @synthesize connectionToService=_connectionToService;
- (void)activeConditionsDidStop;
- (void)activeConditionsWillStop;
- (void)_requestDisableActiveConditionInducerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestDisableConditionInducerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestEnableConditionInducerWithIdentifier:(id)arg1 profileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestAvailableConditionInducersWithCompletion:(CDUnknownBlockType)arg1;
- (id)enableConditionWithIdentifier:(id)arg1 profileIdentifier:(id)arg2;
- (id)disableConditionWithIdentifier:(id)arg1;
- (id)disableActiveCondition;
- (id)availableConditionInducers;
- (void)_disconnectServiceConnection;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

