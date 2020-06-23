//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYTransportMessage;

@interface BufferedSendOperation : NSObject
{
    DYTransportMessage *_message;
    DYTransportMessage *_replyTo;
    struct dispatch_queue_s *_queue;
    unsigned long long _timeout;
    CDUnknownBlockType _replyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType replyBlock; // @synthesize replyBlock=_replyBlock;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DYTransportMessage *replyTo; // @synthesize replyTo=_replyTo;
@property(retain, nonatomic) DYTransportMessage *message; // @synthesize message=_message;
- (void)dealloc;

@end

