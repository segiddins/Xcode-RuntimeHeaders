//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface DVTPinger : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    unsigned short _identifier;
    int _sequenceNumber;
    double _timeout;
    NSMutableDictionary *_futures;
    DVTDispatchLock *_futuresLock;
    struct sockaddr_storage _addr;
}

+ (id)pingerWithAddress:(id)arg1;
+ (id)pingerWithSocketAddress:(const struct sockaddr *)arg1;
@property unsigned short identifier; // @synthesize identifier=_identifier;
@property int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain) DVTDispatchLock *futuresLock; // @synthesize futuresLock=_futuresLock;
@property(retain) NSMutableDictionary *futures; // @synthesize futures=_futures;
@property struct sockaddr_storage addr; // @synthesize addr=_addr;
@property double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (id)ping;
- (void)_promiseWithSequenceNumber:(unsigned long long)arg1 endedAt:(double)arg2;
- (id)_createSourceIfNecessary;
- (void)dealloc;

@end

