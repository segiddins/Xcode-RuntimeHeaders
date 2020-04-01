//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, IDEMemoryFootprintMonitorProgressWindowController, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDEMemoryFootprintMonitor : NSObject
{
    int _pid;
    NSObject<OS_dispatch_queue> *_physFootprintMonitorQueue;
    NSObject<OS_dispatch_source> *_timer;
    DVTLogAspect *_logAspect;
    unsigned long long _thresholdInGB;
    IDEMemoryFootprintMonitorProgressWindowController *progressWindowController;
    NSTimer *_testMemoryTimer;
}

+ (id)sharedXcodeFootprintMonitor;
- (void).cxx_destruct;
- (void)_startMonitorWithInterval:(unsigned long long)arg1 thresholdInGB:(unsigned long long)arg2 consecutiveSampleThreshold:(unsigned long long)arg3;
- (void)_disableMallocStackLogging;
- (BOOL)_enableMallocStackLoggingLite;
- (void)startMonitorWithThresholdInGB:(unsigned long long)arg1;
- (void)startMonitor;
- (BOOL)_isTestingEnabled;
- (void)showAlertWithCurrentUsage:(id)arg1;
- (void)useMemoryForTesting;
- (void)_captureMemoryGraphAtPath:(id)arg1;
- (id)_initForCurrentProcess;

@end

