//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSThread;

@interface XRYieldableActivity : NSObject
{
    NSCondition *_lock;
    long long _state;
    NSThread *_thread;
    _Atomic char *_mustYield;
}

@property(nonatomic) _Atomic char *mustYield; // @synthesize mustYield=_mustYield;
- (void).cxx_destruct;
- (unsigned long long)yield;
- (void)cancel;
- (unsigned long long)run;
- (id)init;

@end

