//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCElementIntegerQueue : NSObject
{
    long long count;
    long long firstOrCapacity;
    long long readCount;
    long long *numbers;
}

- (void)dealloc;
- (void)finalize;
- (void)consumeNumber;
- (long long)readNumber;
- (void)addNumber:(long long)arg1;

@end

