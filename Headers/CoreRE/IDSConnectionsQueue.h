//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRE/IDSServiceDelegatePrivate-Protocol.h>
#import <CoreRE/IDSSessionDelegatePrivate-Protocol.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IDSConnectionsQueue : NSObject <IDSSessionDelegatePrivate, IDSServiceDelegatePrivate>
{
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_allConnections;
    NSMutableArray *_pendingConnections;
    NSMutableArray *_endedConnections;
}

@property(retain, nonatomic) NSMutableArray *endedConnections; // @synthesize endedConnections=_endedConnections;
@property(retain, nonatomic) NSMutableArray *pendingConnections; // @synthesize pendingConnections=_pendingConnections;
@property(retain, nonatomic) NSMutableDictionary *allConnections; // @synthesize allConnections=_allConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)sessionEnded:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (void)dequeSession:(id)arg1;
- (void)queueNewSessionForDestination:(id)arg1;
- (void)dealloc;
- (id)initWithIDSService:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

