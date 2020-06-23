//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDevice.h>

#import <DVTDeviceKit/DVTBasicDeviceUI-Protocol.h>

@class DVTPlatform, NSArray, NSError, NSImage, NSSet, NSString;

@interface DVTDevice (KitAdditions) <DVTBasicDeviceUI>
+ (id)keyPathsForValuesAffectingDvt_platformUserDescription;
+ (id)keyPathsForValuesAffectingDvt_labeledSerialNumber;
+ (id)keyPathsForValuesAffectingDvt_labeledCapacity;
+ (id)keyPathsForValuesAffectingDvt_labeledModelName;
+ (id)keyPathsForValuesAffectingDvt_osVersion;
+ (id)keyPathsForValuesAffectingDvt_deviceIsConnectedAndNotIgnored;
+ (id)keyPathsForValuesAffectingDvt_hideBusyIndicator;
+ (id)keyPathsForValuesAffectingDvt_hideStatusImage;
+ (id)keyPathsForValuesAffectingDvt_statusImage;
+ (id)keyPathsForValuesAffectingDeviceWindowCategory;
@property(readonly) NSString *dvt_platformUserDescription;
- (id)_deviceSummaryValueForProperty:(id)arg1;
- (id)_labeledPropertyValue:(id)arg1;
@property(readonly) NSString *dvt_labeledSerialNumber;
@property(readonly) NSString *dvt_labeledCapacity;
@property(readonly) NSString *dvt_labeledModelName;
@property(readonly) NSString *dvt_osVersion;
@property(readonly) _Bool dvt_deviceIsConnectedAndNotIgnored;
@property(readonly) _Bool dvt_deviceIsSimulator;
@property(readonly) _Bool dvt_hideBusyIndicator;
@property(readonly) _Bool dvt_hideStatusImage;
@property(readonly) NSImage *dvt_proxiedDeviceImage;
@property(readonly) NSImage *dvt_statusImage;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
@property(readonly) NSImage *dvt_sourceListImage;
@property(readonly) NSImage *proxyDeviceImage;
@property(readonly) NSImage *image;
@property(readonly) BOOL showCompanionUI;
@property(readonly) NSString *dvt_deviceWindowCategoryDescription;
@property(readonly) int deviceWindowCategory;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;
@end

