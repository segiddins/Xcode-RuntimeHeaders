//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDEIndexRingBuffer : NSObject
{
    NSMutableArray *_buffer;
    long long _first;
    long long _capacity;
}

- (void).cxx_destruct;
@property(readonly) long long count;
- (id)removeAll;
- (void)addObject:(id)arg1;
- (id)init;
- (id)initWithCapacity:(long long)arg1;

@end

