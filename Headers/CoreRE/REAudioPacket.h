//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface REAudioPacket : NSObject
{
    void *_bytes;
    unsigned long long _size;
    double _timestamp;
}

- (void)dealloc;
- (id)initWithPacket:(struct RERealTimePacket *)arg1;

@end

