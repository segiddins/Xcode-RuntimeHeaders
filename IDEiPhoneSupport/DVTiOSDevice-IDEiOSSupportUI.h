//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTiOSDevice.h>

#import <IDEiPhoneSupport/DVTBasicDeviceUI-Protocol.h>

@class DVTPlatform, NSArray, NSError, NSImage, NSSet, NSString;

@interface DVTiOSDevice (IDEiOSSupportUI) <DVTBasicDeviceUI>
+ (id)profilesToSelect;
+ (id)keyPathsForValuesAffectingDeviceSummaryPropertyDictionaries;
+ (id)keyPathsForValuesAffectingActivityImage;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingStatusImage;
+ (void)userInterfacePresentBasicAlertWithMessageText:(id)arg1 informativeText:(id)arg2;
- (_Bool)_askForAlternateApplicationIfNeeded:(id *)arg1;
- (void)takeScreenshotWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canTakeScreenshot;
- (void)addToPortal:(id)arg1;
- (void)requestProcessInformationsOnPairedDevice:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
- (_Bool)supportsBatteryUpdateNotifications;
- (id)activityImage;
@property(readonly) NSImage *image;
- (id)iconImage;
- (id)statusImage;
- (BOOL)shouldApplicationTerminate;
- (void)userInterfacePresentAlertForNoRoutingCoverageFileAtPath:(id)arg1;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) int deviceWindowCategory;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy, nonatomic) NSString *modelCode;
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
@property(readonly) BOOL showCompanionUI;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;
@end

