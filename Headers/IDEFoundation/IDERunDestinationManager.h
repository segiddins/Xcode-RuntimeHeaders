//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, DVTDeviceManager, DVTObservingToken, IDERunDestination, NSMapTable, NSMutableSet, NSSet;

@interface IDERunDestinationManager : NSObject
{
    NSMapTable *_runDestinationsByDeviceCache;
    NSMutableSet *_availableRunDestinations;
    DVTDeviceManager *_deviceManager;
    DVTDevice *_fallbackDevice;
    DVTObservingToken *_deviceManagerObservation;
    IDERunDestination *_fallbackRunDestination;
}

+ (id)sharedRunDestinationManager;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) IDERunDestination *fallbackRunDestination; // @synthesize fallbackRunDestination=_fallbackRunDestination;
- (id)genericDeploymentRunDestinationForRunDestination:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4 allowNonConcreteDevices:(BOOL)arg5;
- (id)genericRunDestinationForRunDestination:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4 requiresSupportsArchiving:(BOOL)arg5 requiresDeploymentPlatformMatches:(BOOL)arg6 allowMultipleRunDestinationMatches:(BOOL)arg7 allowNoRunDestinationMatches:(BOOL)arg8 error:(id *)arg9;
- (id)resolvedBuildDestinationsForRunDestinations:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4 allowNoRunDestinationMatches:(BOOL)arg5 error:(id *)arg6;
- (id)_resolvedDestinationForPlatformDestinations:(id)arg1 forceGeneric:(BOOL)arg2 scheme:(id)arg3 schemeCommands:(id)arg4 executionEnvironment:(id)arg5 allowNoRunDestinationMatches:(BOOL)arg6 error:(id *)arg7;
- (id)genericDeploymentRunDestinationForRunDestination:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4;
- (id)validRunDestinationsForBuildables:(id)arg1 executionEnvironment:(id)arg2;
- (id)validRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3;
- (id)validRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2;
- (id)visibleRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3;
- (id)visibleRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3 onlyGeneric:(BOOL)arg4 considerAllBuildables:(BOOL)arg5;
- (id)visibleRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2;
- (id)_validRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3 forPresentation:(BOOL)arg4 onlyGeneric:(BOOL)arg5 considerAllBuildables:(BOOL)arg6;
- (id)_validRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3 forPresentation:(BOOL)arg4;
- (id)_runDestinationSortDescriptors;
- (id)_validRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2 forPresentation:(BOOL)arg3;
- (id)defaultRunDestinationForScheme:(id)arg1 schemeCommand:(id)arg2 fromRunDestinations:(id)arg3 preferGenericDestination:(BOOL)arg4 supportingSDK:(id)arg5 preferArchitectures:(id)arg6;
- (id)runDestinationWithIneligibleTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 SDKVariant:(id)arg4 deviceIneligibilityError:(id)arg5;
- (id)runDestinationWithTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 SDKVariant:(id)arg4;
- (id)runDestinationWithTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3;
- (void)_uncacheRunDestinationsForDevice:(id)arg1;
- (id)_cachedRunDestinationForDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 SDKVariant:(id)arg4;
- (void)_cacheRunDestination:(id)arg1;
- (id)init;
- (id)initWithDeviceManager:(id)arg1 fallbackDevice:(id)arg2;
- (void)_startWatchingDeviceManager;
- (id)_deviceManager;
- (void)_adjustKnownRunDestinationsForChangeKind:(unsigned long long)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (void)_removeRunDestinationsForDevice:(id)arg1;
- (void)_addRunDestinationsForDevice:(id)arg1;
- (void)_setUpFallbackRunDestination;
- (id)_fallbackSDK;
- (id)_fallbackDevice;

// Remaining properties
@property(copy) NSSet *availableRunDestinations; // @dynamic availableRunDestinations;
@property(readonly, copy) NSMutableSet *mutableAvailableRunDestinations; // @dynamic mutableAvailableRunDestinations;

@end

