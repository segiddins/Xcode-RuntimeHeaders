//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTXConnectionServices/DTXMessenger-Protocol.h>

@class DTXConnection, NSString;
@protocol DTXAllowedRPC, OS_dispatch_queue;

@interface DTXChannel : NSObject <DTXMessenger>
{
    DTXConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_atomicHandlers;
    id <DTXAllowedRPC> _dispatchTarget;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _dispatchValidator;
    BOOL _canceled;
    unsigned int _channelCode;
    int _compressionTypeHint;
}

@property(nonatomic) int compressionTypeHint; // @synthesize compressionTypeHint=_compressionTypeHint;
@property(readonly, retain, nonatomic) DTXConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property BOOL isCanceled; // @synthesize isCanceled=_canceled;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_setTargetQueue:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)_setDispatchValidator:(CDUnknownBlockType)arg1;
@property(retain) id <DTXAllowedRPC> dispatchTarget;
@property(copy) CDUnknownBlockType messageHandler;
- (void)_scheduleMessage:(id)arg1 tracker:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_scheduleBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 channelIdentifier:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

