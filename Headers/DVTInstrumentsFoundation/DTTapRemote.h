//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTap.h>

@class DTTapMessageHandler, DTXChannel, DTXConnection, NSObject;
@protocol OS_dispatch_queue;

@interface DTTapRemote : DTTap
{
    DTXConnection *_connection;
    DTXChannel *_channel;
    NSObject<OS_dispatch_queue> *_unprocessedMessageQueue;
    BOOL _connectionEnabled;
    DTTapMessageHandler *_messageHandler;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) DTTapMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (void)_unpause;
- (void)_pause;
- (void)_stop;
- (void)_start;
- (void)messageReceived:(id)arg1;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 messageHandler:(id)arg3 connection:(id)arg4;

@end

