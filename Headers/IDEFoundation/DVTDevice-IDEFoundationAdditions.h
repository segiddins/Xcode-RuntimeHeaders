//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDevice.h>

#import <IDEFoundation/IDEBuildableTargetDevice-Protocol.h>

@class DVTFilePath, DVTPlatform, NSArray, NSError, NSSet, NSString;

@interface DVTDevice (IDEFoundationAdditions) <IDEBuildableTargetDevice>
- (id)analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 packagesPaths:(id)arg6 outError:(id *)arg7;
- (BOOL)performInstallWithName:(id)arg1 path:(id)arg2 buildables:(id)arg3 buildParameters:(id)arg4 killProcesses:(id)arg5 workspace:(id)arg6 outError:(id *)arg7;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)scriptingEnvironment;
- (id)closestRelativeOfTargetArchitecture:(id)arg1 forBuildArchitectures:(id)arg2;
- (BOOL)supportsRunningExecutableAtPath:(id)arg1 usingArchitecture:(id)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(id)arg1 launchSession:(id)arg2 error:(id *)arg3;
- (id)uncachedOverridingPropertiesForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (id)supportedSDKsForBuildableContext:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)supportedArchitecturesForBuildableContext:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForBuildableContext:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForPathRunnableWithArchitecture:(id)arg1;
- (BOOL)deviceSupportsBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)displayNameAdditionsWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
- (id)displayNameWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
- (BOOL)canBeRunDestination;
- (id)claimDeviceForTestingWithMode:(long long)arg1 sessionIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly, getter=isLogArchiveCollectionEnabled) BOOL logArchiveCollectionEnabled;
@property(readonly) long long maxConcurrentTestingProcesses;
- (id)mockObjectsFrameworkDir;
@property(readonly) NSSet *processNamesToObserveForCrashReportsDuringTesting;
@property(readonly) NSArray *crashReportsDirectoryPaths;
- (id)extraTestingLibrarySearchPathsWithInternalTestBuildStyle:(BOOL)arg1;
- (id)extraTestingFrameworkSearchPathsWithInternalTestBuildStyle:(BOOL)arg1;
- (BOOL)prepareDeviceForLaunchSession:(id)arg1 error:(id *)arg2;
- (id)additionalTestRunnerEnvironmentVariablesForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (BOOL)supportsTestHostStyle:(long long)arg1 withError:(id *)arg2;
@property(readonly) DVTFilePath *testBundleInjectionLibraryPath;
- (id)internalSystemTestBundleInjectionLibraryPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)testHostPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)_testingToolPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)internalSystemTestingToolPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)_overriddenTestingToolPathWithBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)testRunnerSessionForConfiguration:(id)arg1;
- (void)requestTestDaemonRecordingSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestTestDaemonControlSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)testDaemonDTXConnectionProvider;
- (id)makeConnectionForTestDaemonWithError:(id *)arg1;
@property(readonly) BOOL requiresLocalTCCPermissionForUITesting;
@property(readonly) BOOL usesTestDaemonForUIRecording;
@property(readonly) NSString *automationFrameworkPath;
@property(readonly) NSString *targetBootstrapInjectionPath;
@property(readonly) BOOL supportsTargetBootstrapInjection;
- (Class)testingUIRecorderClass;
@property(readonly) BOOL supportsTestDaemonControlSession;
@property(readonly) BOOL supportsUIRecording;
- (BOOL)supportsUITestingWithError:(id *)arg1;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *iOSSupportVersion;
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

