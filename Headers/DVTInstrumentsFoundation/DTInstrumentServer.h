//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTInstrumentServerAllowedRPC-Protocol.h>
#import <DVTInstrumentsFoundation/DTInstrumentServerSimulatorPrivilege-Protocol.h>

@class DTXConnection, NSString;

@interface DTInstrumentServer : NSObject <DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege>
{
    DTXConnection *_connection;
    CDUnknownBlockType _channelRestrictBlock;
}

+ (void)_tfpPortReceived:(unsigned int)arg1;
+ (void)_taskInvalid:(unsigned int)arg1 forPid:(int)arg2;
+ (unsigned int)taskForPid:(int)arg1;
+ (void)prohibitPromptingForAuthorization;
+ (struct AuthorizationOpaqueRef *)sharedAuthorization;
+ (void)takeOwnershipOfSharedAuthorization:(struct AuthorizationOpaqueRef *)arg1;
+ (BOOL)isAppleInternal;
@property(copy) CDUnknownBlockType channelRestrictBlock; // @synthesize channelRestrictBlock=_channelRestrictBlock;
@property(readonly, nonatomic) DTXConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)_blessSimulatorHub:(int)arg1;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)arg1;
- (void)restrictChannelsWithBlock:(CDUnknownBlockType)arg1;
- (void)loadServicesAtPath:(id)arg1;
- (void)setMaxConnectionEnqueue:(unsigned long long)arg1;
- (void)cancel;
- (void)resume;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

