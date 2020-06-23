//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTGraphicsServiceAuthorizedAPI-Protocol.h>

@class NSDictionary, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface DTGraphicsService : DTXService <DTGraphicsServiceAuthorizedAPI>
{
    BOOL _doCollectData;
    unsigned long long _samplingRate;
    int _targetPid;
    NSMutableArray *_availableGlobalStatistics;
    NSMutableArray *_availableProcessStatistics;
    NSDictionary *_availableStatistics;
    NSMutableArray *_driverNames;
    unsigned int _lastFPSCount;
    unsigned int _maxFPS;
    double _startTime;
    double _lastTimeStampInSeconds;
    unsigned int _globalService;
    unsigned int _perProcessService;
    NSObject<OS_dispatch_semaphore> *_stopSamplingSemaphore;
    BOOL _capFPS;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (id)currentFramesPerSecond:(double)arg1;
- (void)_collectData;
- (id)_collectSampleForService;
- (void)setValue:(id)arg1 forSwitchName:(id)arg2;
- (id)valueForSwitch:(id)arg1;
- (void)cleanup;
- (void)stopSampling;
- (void)startSamplingAtTimeInterval:(id)arg1 processIdentifier:(id)arg2;
- (void)startSamplingAtTimeInterval:(id)arg1;
- (void)setSamplingRate:(id)arg1;
- (id)driverNames;
- (id)availableStatistics;
- (void)queryCards;
- (void)_releaseIOServices;
- (void)_setupIOServices;
- (id)queryPidStatistics;
- (id)queryGlobalStatistics;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
