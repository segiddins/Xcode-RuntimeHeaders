//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IDEIndexingJobScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_control_queue;
    long long _width;
    long long _lastThrottledWidth;
    BOOL _onBatteryPower;
    double _timeBatteryChecked;
    NSMutableArray *_engines;
    NSMutableDictionary *_hotFilesByEngine;
    NSMutableDictionary *_hotFileIndicesByEngine;
    NSMutableDictionary *_priorityIndicesByEngine;
    NSMutableDictionary *_waitingJobsByEngine;
    NSMutableArray *_runningJobs;
    id _buildNotifications[2];
    long long _nBuildOperations;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (void)_scheduleJobs;
- (long long)_throttledWidth;
- (long long)_adjustThrottledWidth:(long long)arg1;
- (void)ping;
- (void)cancelJobsForEngine:(id)arg1;
- (void)scheduleJob:(id)arg1;
- (void)clearHotFilesForEngine:(id)arg1;
- (void)addHotFile:(id)arg1 forEngine:(id)arg2;
- (void)dealloc;
- (void)reportThrottledWidth:(CDUnknownBlockType)arg1 forEngine:(id)arg2;
- (id)init;

@end

