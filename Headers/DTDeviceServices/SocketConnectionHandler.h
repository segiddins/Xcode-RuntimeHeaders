//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTDeviceServices/IPCConnectionProxy-Protocol.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface SocketConnectionHandler : NSObject <IPCConnectionProxy>
{
    BOOL _running;
    int _socket;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _cancelHandler;
    NSObject<OS_dispatch_queue> *_channelQueue;
    NSObject<OS_dispatch_io> *_socketChannel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *socketChannel; // @synthesize socketChannel=_socketChannel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *channelQueue; // @synthesize channelQueue=_channelQueue;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(nonatomic) BOOL running; // @synthesize running=_running;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeNSData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)initWithConnectedSocket:(int)arg1 channelQueue:(id)arg2;
- (id)initWithConnectedSocket:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
