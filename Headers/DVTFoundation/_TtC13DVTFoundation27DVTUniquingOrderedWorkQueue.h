//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13DVTFoundation27DVTUniquingOrderedWorkQueue : NSObject
{
    MISSING_TYPE *_workQueue;
}

+ (id)workQueueWithLabel:(id)arg1 concurrentQueueWidth:(long long)arg2 qos:(long long)arg3 workBlock:(CDUnknownBlockType)arg4;
+ (id)workQueueWithLabel:(id)arg1 qos:(long long)arg2 workBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)init;
- (void)dequeueItem:(id)arg1;
- (void)enqueueItems:(id)arg1;
- (void)enqueueItem:(id)arg1;

@end

