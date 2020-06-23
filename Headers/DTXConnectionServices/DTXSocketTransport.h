//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXFileDescriptorTransport.h>

@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DTXSocketTransport : DTXFileDescriptorTransport
{
    NSObject<OS_dispatch_semaphore> *_socketAcceptedSem;
    _Atomic int _socketSemProtector;
    NSArray *_addresses;
    int _port;
}

+ (id)addressForHost:(const char *)arg1 port:(int)arg2;
+ (id)schemes;
- (void).cxx_destruct;
@property(readonly) int port; // @synthesize port=_port;
- (unsigned int)supportedDirections;
- (id)localAddresses;
- (void)disconnect;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalPort:(int)arg1;
- (id)initWithConnectedSocket:(int)arg1 disconnectAction:(CDUnknownBlockType)arg2;
- (void)_signalSocketAccepted;
- (void)_commonSocketTransportInit;
- (void)_setupChannelWithConnectedSocket:(int)arg1 assumingOwnership:(BOOL)arg2 orDisconnectBlock:(CDUnknownBlockType)arg3;
- (void)_setupWithLocalPort:(int)arg1;

@end

