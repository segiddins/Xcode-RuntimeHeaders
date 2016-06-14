//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTAbstractiOSDevice.h>

@interface DVTiOSDeviceSimulatorPlaceholder : DVTAbstractiOSDevice
{
}

- (id)initWithPlatform:(id)arg1;
- (BOOL)isAvailable;
- (id)deviceType;
- (unsigned long long)supportsFetchEvents;
- (id)deviceForRunningUnitTestsError:(id *)arg1;
- (id)supportedDeviceFamilies;
- (BOOL)supportsRecordedFrames;
- (BOOL)supportsPGOReturningError:(id *)arg1;
- (BOOL)supportsAttachByPIDOrName;
- (BOOL)supportsArchiving;
- (void)requestProcessInformationsOnPairedDevice:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)supportsRunningExecutableAtPath:(id)arg1 usingArchitecture:(id)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(id)arg1 launchSession:(id)arg2 error:(id *)arg3;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 outError:(id *)arg6;
- (id)_generalRunErrorWithLaunchSession:(id)arg1;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)nativeArchitecture;
- (id)supportedArchitectures;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (BOOL)isProxiedDevice;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (id)displayOrder;
- (id)displayNameAdditionsWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
- (id)name;

@end

