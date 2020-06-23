//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LOCAGTaskManager : NSObject
{
    unsigned long long _maxConcurrentTaskCount;
    NSMutableArray *_asynchronousTaskQueue;
    NSMutableArray *_synchronousTaskQueue;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *synchronousTaskQueue; // @synthesize synchronousTaskQueue=_synchronousTaskQueue;
@property(retain) NSMutableArray *asynchronousTaskQueue; // @synthesize asynchronousTaskQueue=_asynchronousTaskQueue;
@property unsigned long long maxConcurrentTaskCount; // @synthesize maxConcurrentTaskCount=_maxConcurrentTaskCount;
- (id)locFileSets;
- (void)processWithCommand:(id)arg1 withObject:(id)arg2 executionMode:(unsigned long long)arg3;
- (void)addTasksToSynchronousQueue:(id)arg1;
- (void)addTasksToAsynchronousQueue:(id)arg1;
- (void)addTaskToSynchronousQueue:(id)arg1;
- (void)addTaskToAsynchronousQueue:(id)arg1;
- (void)initMaxTaskCount;
- (id)init;

@end

