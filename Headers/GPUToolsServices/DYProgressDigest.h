//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface DYProgressDigest : NSObject
{
    struct ProgressDigest<5> _digest;
    NSHashTable *_observers;
    struct dispatch_queue_s *_queue;
    struct dispatch_source_s *_timer;
    BOOL _valid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dump;
- (void)_notifyObserversDigestWillTerminate;
- (void)_notifyObserversDigestWillReset;
- (void)_notifyObserversDigestDidUpdateMessage:(id)arg1;
- (void)_notifyObserversDigestDidUpdateProgress:(double)arg1;
- (void)_cancelTimer;
- (void)_incrementValue:(long long)arg1 toValue:(long long)arg2 forMonitor:(unsigned long long)arg3 withDuration:(unsigned long long)arg4 timeout:(CDUnknownBlockType)arg5;
- (void)_setValue:(long long)arg1 forMonitor:(unsigned long long)arg2;
- (void)_setMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPercentage:(long long)arg1 forMonitor:(unsigned long long)arg2 andIncrementTo:(long long)arg3 withDuration:(unsigned long long)arg4 onTimeout:(CDUnknownBlockType)arg5;
- (void)setPercentage:(long long)arg1 forMonitor:(unsigned long long)arg2 andIncrementTo:(long long)arg3 withDuration:(unsigned long long)arg4;
- (void)setPercentage:(long long)arg1 forMonitor:(unsigned long long)arg2 withMessage:(id)arg3;
- (void)setPercentage:(long long)arg1 forMonitor:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (void)reset;
- (void)invalidate;
- (id)initWithMonitors:(id)arg1;

@end

