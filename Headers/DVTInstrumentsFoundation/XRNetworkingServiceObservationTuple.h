//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface XRNetworkingServiceObservationTuple : NSObject
{
    id *data;
    unsigned char _count;
    int _kind;
}

@property(nonatomic) unsigned char count; // @synthesize count=_count;
@property(nonatomic) int kind; // @synthesize kind=_kind;
- (void)dealloc;
- (id)initWithKind:(int)arg1 count:(unsigned char)arg2 source:(struct __CFDictionary *)arg3 indexToKeyMap:(const struct __CFString ***)arg4;
- (id)initWithKind:(int)arg1 count:(unsigned char)arg2;

@end

