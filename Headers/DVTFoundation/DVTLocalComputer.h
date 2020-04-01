//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTAbstractMacDevice.h>

@class DTXConnection, DVTDispatchLock, DVTObservingToken, NSMutableDictionary, NSSet, NSString;

@interface DVTLocalComputer : DVTAbstractMacDevice
{
    NSSet *_provisioningProfiles;
    NSMutableDictionary *_pidToXPCServiceConnectionDict;
    NSString *_nameForDeveloperPortal;
    DVTObservingToken *_nameObservingToken;
    DVTDispatchLock *_instrumentsServerLock;
    DTXConnection *_instrumentsConnection;
    NSString *_cpuKind;
    unsigned long long _cpuCount;
    unsigned long long _cpuSpeedInMHz;
    unsigned long long _busSpeedInMHz;
    unsigned long long _ramSizeInMegabytes;
    unsigned long long _physicalCPUCoresPerPackage;
    unsigned long long _logicalCPUCoresPerPackage;
}

+ (id)provisioningManager;
+ (void)initialize;
@property unsigned long long logicalCPUCoresPerPackage; // @synthesize logicalCPUCoresPerPackage=_logicalCPUCoresPerPackage;
@property unsigned long long physicalCPUCoresPerPackage; // @synthesize physicalCPUCoresPerPackage=_physicalCPUCoresPerPackage;
@property unsigned long long ramSizeInMegabytes; // @synthesize ramSizeInMegabytes=_ramSizeInMegabytes;
@property unsigned long long busSpeedInMHz; // @synthesize busSpeedInMHz=_busSpeedInMHz;
@property unsigned long long cpuSpeedInMHz; // @synthesize cpuSpeedInMHz=_cpuSpeedInMHz;
@property unsigned long long cpuCount; // @synthesize cpuCount=_cpuCount;
@property(copy) NSString *cpuKind; // @synthesize cpuKind=_cpuKind;
- (void).cxx_destruct;
- (void)cancelPrimaryInstrumentsServer;
- (id)primaryInstrumentsServer;
- (id)listenForInstallOfAppExtensionIdentifiers:(id)arg1 onPairedDevice:(BOOL)arg2;
- (void)stopDebuggingXPCServices:(id)arg1 forPairedDevice:(BOOL)arg2;
- (void)debugXPCServices:(id)arg1 onPairedDevice:(BOOL)arg2 completionSemaphore:(id)arg3;
- (void)_enableExtension:(id)arg1;
- (void)attachToServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3 stdoutFH:(id)arg4 stderrFH:(id)arg5;
- (id)_xpcDebugConnectionForPid:(id)arg1 create:(BOOL)arg2;
- (id)_keyForPid:(int)arg1;
- (BOOL)supportsLocationSimulation;
- (void)uninstallProvisioningProfile:(id)arg1;
- (BOOL)installProvisioningProfileAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)installProvisioningProfile:(id)arg1 error:(id *)arg2;
- (void)profilesDidChange:(id)arg1;
- (id)provisioningProfiles;
- (id)nameForDeveloperPortal;
- (BOOL)supportsProvisioning;
- (BOOL)supportsArchiving;
- (BOOL)supportsDebuggingForAskOnLaunch;
- (unsigned long long)supportedLaunchOptions;
- (BOOL)canRunMultipleInstancesPerApp;
- (BOOL)supportsDebugAsDifferentUser;
- (BOOL)supportsDebuggingDocumentVersioning;
- (BOOL)supportsResumeAndTurningItOnOrOff;
- (BOOL)supportsCustomWorkingDirectory;
- (id)processInformations;
- (id)processorDescription;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (BOOL)isIgnored;
- (void)setIgnored:(BOOL)arg1;
- (BOOL)isAvailable;
- (void)setAvailable:(BOOL)arg1;
- (BOOL)canRunExecutables;
- (void)dealloc;
- (id)init;

@end

