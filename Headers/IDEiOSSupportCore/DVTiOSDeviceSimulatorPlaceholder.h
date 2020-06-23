//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiOSSupportCore/DVTAbstractiOSDevice.h>

@interface DVTiOSDeviceSimulatorPlaceholder : DVTAbstractiOSDevice
{
}

- (BOOL)disablesOnlyActiveArch;
- (id)extraDebuggingRuntimeDylibPath;
- (id)initWithPlatform:(id)arg1;
- (BOOL)isAvailableWithError:(id *)arg1;
- (BOOL)isAvailable;
- (id)deviceType;
- (unsigned long long)supportsFetchEvents;
- (id)supportedDeviceFamilies;
- (BOOL)supportsDaemonDebugging;
- (BOOL)supportsMainThreadChecker;
- (BOOL)supportsRecordedFrames;
- (BOOL)supportsPGOReturningError:(id *)arg1;
- (BOOL)supportsAttachByPIDOrName;
- (BOOL)supportsArchiving;
- (BOOL)allowsManagedStateControl;
- (void)requestProcessInformationsOnPairedDevice:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)supportsRunningExecutableAtPath:(id)arg1 usingArchitecture:(id)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(id)arg1 launchSession:(id)arg2 error:(id *)arg3;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 packagesPaths:(id)arg6 outError:(id *)arg7;
- (id)_generalRunErrorWithLaunchSession:(id)arg1;
- (id)uncachedOverridingPropertiesForBuildable:(id)arg1 buildParameters:(id)arg2;
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

