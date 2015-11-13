//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTXChannel, Protocol;

@interface DTXProxyChannel : NSObject
{
    Protocol *_remoteInterface;
    Protocol *_exportedInterface;
    DTXChannel *_channel;
}

@property(retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
@property Protocol *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
- (void)_sendInvocationMessage:(id)arg1;
- (void)setExportedObject:(id)arg1 queue:(id)arg2;
- (void)_validateDispatch:(id)arg1;
- (void)cancel;
@property(readonly) id remoteObjectProxy;
- (id)initWithChannel:(id)arg1 remoteProtocol:(id)arg2 localProtocol:(id)arg3;
- (void)dealloc;

@end

