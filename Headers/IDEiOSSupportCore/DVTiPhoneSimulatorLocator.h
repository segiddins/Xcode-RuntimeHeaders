//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDeviceLocator.h>

@class SimDeviceSet;
@protocol DVTCancellable;

@interface DVTiPhoneSimulatorLocator : DVTDeviceLocator
{
    _Bool _locating;
    SimDeviceSet *_deviceSet;
    id <DVTCancellable> _notificationToken;
}

+ (id)coreSimulatorQueue;
+ (id)deviceLocator;
+ (id)logAspect;
@property(readonly) SimDeviceSet *deviceSet; // @synthesize deviceSet=_deviceSet;
- (void).cxx_destruct;
- (void)unpairDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pairCompanionDevice:(id)arg1 withGizmoDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 genericOnly:(BOOL)arg2 allowMultipleMatches:(BOOL)arg3 error:(id *)arg4;
- (id)deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (id)platforms;
- (id)deviceLocationScheme;
- (void)stopLocating;
- (id)deviceForSimDevice:(id)arg1;
- (void)startLocating;

@end
