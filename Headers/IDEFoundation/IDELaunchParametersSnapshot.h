//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTVersion, IDEEntityIdentifier, IDELocationScenarioReference, IDEProductType, IDERuntimeProfileInfo, IDESchemeOptionReference, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol IDEBuildableProduct;

@interface IDELaunchParametersSnapshot : NSObject
{
    struct {
        unsigned int _commandLineArgs:1;
        unsigned int _debugPauseAtEntry:1;
        unsigned int _toolchainLLDBFrameworkPath:1;
        unsigned int _enableAddressSanitizer:1;
        unsigned int _enableThreadSanitizer:1;
        unsigned int _isLaunchedForTesting:1;
        unsigned int _suppressSimulatorApplication:1;
        unsigned int _customLLDBInitFile:1;
        unsigned int _launchdServiceSpecifier:1;
        unsigned int _debugserverPort:1;
        unsigned int _debugserverConnectionAddress:1;
        unsigned int _attachingToiOSApp:1;
        unsigned int _enableMallocStackLoggingDuringAttach:1;
        unsigned int _queueDebuggingEnabled:1;
        unsigned int _runtimeProfileInfo:1;
        unsigned int _enableMallocStackLoggingLiteForXPCServices:1;
        unsigned int _memoryGraphOnResourceException:1;
        unsigned int _allowDeviceSensorReplayData:1;
        unsigned int _deviceSensorReplayFile:1;
        unsigned int _skipInstallForTest:1;
        unsigned int _enableGPUShaderValidationMode:1;
        unsigned int _storeKitConfigurationFileReference:1;
        unsigned int _processLauncherKind:1;
    } _uninitializedFlags;
    BOOL _debugPauseAtEntry;
    BOOL _enableAddressSanitizer;
    BOOL _enableThreadSanitizer;
    BOOL _isLaunchedForTesting;
    BOOL _suppressSimulatorApplication;
    BOOL _enableMallocStackLoggingDuringAttach;
    BOOL _queueDebuggingEnabled;
    BOOL _enableMallocStackLoggingLiteForXPCServices;
    BOOL _memoryGraphOnResourceException;
    BOOL _allowDeviceSensorReplayData;
    BOOL _skipInstallForTest;
    BOOL _askOnLaunchChangedRunnable;
    BOOL _allowLocationSimulation;
    BOOL _showNonLocalizedStrings;
    BOOL _debugAsAService;
    BOOL _usingCommandLineUnitTesting;
    BOOL _debugXPCServices;
    BOOL _debugAppExtensions;
    BOOL _viewDebuggingEnabled;
    BOOL _insertViewDebuggingDylibOnLaunch;
    BOOL _shouldGenerateRuntimeProfile;
    BOOL _stopOnEveryThreadSanitizerIssue;
    BOOL _stopOnEveryUBSanitizerIssue;
    BOOL _stopOnEveryMainThreadCheckerIssue;
    BOOL _enableUBSanitizer;
    BOOL _mallocScribble;
    BOOL _mallocGuardEdges;
    BOOL _guardMalloc;
    BOOL _NSZombieEnabled;
    BOOL _mallocStackLogging;
    BOOL _mallocStackLoggingLite;
    BOOL _skipInternalInstallSDKCheck;
    int _debugserverPort;
    int _enableGPUShaderValidationMode;
    int _launchStyle;
    int _runnableType;
    unsigned int _debugProcessAsUID;
    int _enableGPUFrameCaptureMode;
    int _enableGPUValidationMode;
    int _debugServiceFD;
    int _runnableAppExtensionHostRunMode;
    int _internalIOSLaunchStyle;
    NSMutableDictionary *_testingEnvironmentVariables;
    NSDictionary *_environmentVariables;
    DVTFilePath *_runnableLocation;
    DVTFilePath *_filePathToBinary;
    NSString *_toolchainLLDBFrameworkPath;
    NSArray *_commandLineArgs;
    NSString *_customLLDBInitFile;
    NSString *_launchdServiceSpecifier;
    NSString *_debugserverConnectionAddress;
    long long _attachingToiOSApp;
    IDERuntimeProfileInfo *_runtimeProfileInfo;
    NSString *_deviceSensorReplayFile;
    IDESchemeOptionReference *_storeKitConfigurationFileReference;
    unsigned long long _processLauncherKind;
    IDEEntityIdentifier *_schemeIdentifier;
    NSString *_selectedLauncherIdentifier;
    NSString *_selectedDebuggerIdentifier;
    unsigned long long _launchAutomaticallySubstyle;
    NSString *_runnableBundleIdentifier;
    NSDictionary *_appExtensionBuiltPaths;
    DVTFilePath *_replacementRunnableLocation;
    DVTFilePath *_workingDirectory;
    IDELocationScenarioReference *_locationScenarioReference;
    NSString *_language;
    NSString *_region;
    IDESchemeOptionReference *_routingCoverageFileReference;
    NSString *_sdkPath;
    NSString *_remoteInstallPath;
    id _debugServiceObject;
    id _deviceArbitrationObject;
    NSString *_platformIdentifier;
    NSString *_buildConfiguration;
    id <IDEBuildableProduct> _buildableProduct;
    NSSet *_buildProductDirectories;
    NSArray *_testingCommandLineArgs;
    NSArray *_testingAdditionalBuiltDependenciesProductPaths;
    NSDictionary *_additionalDeviceSubstitutionPaths;
    NSString *_deviceAppDataPackage;
    long long _consoleMode;
    IDEProductType *_productType;
    NSString *_internalIOSSubstitutionApp;
    NSString *_customLaunchCommand;
    NSString *_debugServiceExtension;
    DVTVersion *_runnableSwiftVersion;
}

+ (id)commandLineArgumentsArrayBySplittingElementsOfArray:(id)arg1;
+ (id)environmentVariablesToMergeFromTestingEnvironmentVariablesByAppendingUserValues;
+ (id)environmentVariablesToMergeFromTestingEnvironmentVariablesByPrependingUserValues;
+ (id)snapshotForUnitTestingWithLauncherIdentifier:(id)arg1 debuggerIdentifier:(id)arg2 runnableLocation:(id)arg3 commandLineArgs:(id)arg4 environmentVariables:(id)arg5;
+ (id)launchParametersWithSchemeIdentifier:(id)arg1 launcherIdentifier:(id)arg2 debuggerIdentifier:(id)arg3 launchStyle:(int)arg4 runnableLocation:(id)arg5 debugProcessAsUID:(unsigned int)arg6 workingDirectory:(id)arg7 commandLineArgs:(id)arg8 environmentVariables:(id)arg9 platformIdentifier:(id)arg10 buildConfiguration:(id)arg11 buildableProduct:(id)arg12 deviceAppDataPackage:(id)arg13 allowLocationSimulation:(BOOL)arg14 locationScenarioReference:(id)arg15 showNonLocalizedStrings:(BOOL)arg16 language:(id)arg17 region:(id)arg18 routingCoverageFileReference:(id)arg19 enableGPUFrameCaptureMode:(int)arg20 enableGPUValidationMode:(int)arg21 debugXPCServices:(BOOL)arg22 debugAppExtensions:(BOOL)arg23 internalIOSLaunchStyle:(int)arg24 internalIOSSubstitutionApp:(id)arg25 launchAutomaticallySubstyle:(unsigned long long)arg26;
- (void).cxx_destruct;
@property(nonatomic) BOOL skipInternalInstallSDKCheck; // @synthesize skipInternalInstallSDKCheck=_skipInternalInstallSDKCheck;
@property(nonatomic) BOOL mallocStackLoggingLite; // @synthesize mallocStackLoggingLite=_mallocStackLoggingLite;
@property(nonatomic) BOOL mallocStackLogging; // @synthesize mallocStackLogging=_mallocStackLogging;
@property(nonatomic) BOOL NSZombieEnabled; // @synthesize NSZombieEnabled=_NSZombieEnabled;
@property(nonatomic) BOOL guardMalloc; // @synthesize guardMalloc=_guardMalloc;
@property(nonatomic) BOOL mallocGuardEdges; // @synthesize mallocGuardEdges=_mallocGuardEdges;
@property(nonatomic) BOOL mallocScribble; // @synthesize mallocScribble=_mallocScribble;
@property(nonatomic) BOOL enableUBSanitizer; // @synthesize enableUBSanitizer=_enableUBSanitizer;
@property(nonatomic) BOOL stopOnEveryMainThreadCheckerIssue; // @synthesize stopOnEveryMainThreadCheckerIssue=_stopOnEveryMainThreadCheckerIssue;
@property(nonatomic) BOOL stopOnEveryUBSanitizerIssue; // @synthesize stopOnEveryUBSanitizerIssue=_stopOnEveryUBSanitizerIssue;
@property(nonatomic) BOOL stopOnEveryThreadSanitizerIssue; // @synthesize stopOnEveryThreadSanitizerIssue=_stopOnEveryThreadSanitizerIssue;
@property(retain) DVTVersion *runnableSwiftVersion; // @synthesize runnableSwiftVersion=_runnableSwiftVersion;
@property(copy) NSString *debugServiceExtension; // @synthesize debugServiceExtension=_debugServiceExtension;
@property(copy) NSString *customLaunchCommand; // @synthesize customLaunchCommand=_customLaunchCommand;
@property(copy) NSString *internalIOSSubstitutionApp; // @synthesize internalIOSSubstitutionApp=_internalIOSSubstitutionApp;
@property(retain) IDEProductType *productType; // @synthesize productType=_productType;
@property BOOL shouldGenerateRuntimeProfile; // @synthesize shouldGenerateRuntimeProfile=_shouldGenerateRuntimeProfile;
@property long long consoleMode; // @synthesize consoleMode=_consoleMode;
@property BOOL insertViewDebuggingDylibOnLaunch; // @synthesize insertViewDebuggingDylibOnLaunch=_insertViewDebuggingDylibOnLaunch;
@property BOOL viewDebuggingEnabled; // @synthesize viewDebuggingEnabled=_viewDebuggingEnabled;
@property int internalIOSLaunchStyle; // @synthesize internalIOSLaunchStyle=_internalIOSLaunchStyle;
@property int runnableAppExtensionHostRunMode; // @synthesize runnableAppExtensionHostRunMode=_runnableAppExtensionHostRunMode;
@property(readonly) BOOL debugAppExtensions; // @synthesize debugAppExtensions=_debugAppExtensions;
@property BOOL debugXPCServices; // @synthesize debugXPCServices=_debugXPCServices;
@property(readonly) NSString *deviceAppDataPackage; // @synthesize deviceAppDataPackage=_deviceAppDataPackage;
@property(copy) NSDictionary *additionalDeviceSubstitutionPaths; // @synthesize additionalDeviceSubstitutionPaths=_additionalDeviceSubstitutionPaths;
@property(getter=isUsingCommandLineUnitTesting) BOOL usingCommandLineUnitTesting; // @synthesize usingCommandLineUnitTesting=_usingCommandLineUnitTesting;
@property(copy) NSArray *testingAdditionalBuiltDependenciesProductPaths; // @synthesize testingAdditionalBuiltDependenciesProductPaths=_testingAdditionalBuiltDependenciesProductPaths;
@property(copy) NSArray *testingCommandLineArgs; // @synthesize testingCommandLineArgs=_testingCommandLineArgs;
@property(copy) NSSet *buildProductDirectories; // @synthesize buildProductDirectories=_buildProductDirectories;
@property(readonly) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
@property(readonly) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(retain) id deviceArbitrationObject; // @synthesize deviceArbitrationObject=_deviceArbitrationObject;
@property(retain) id debugServiceObject; // @synthesize debugServiceObject=_debugServiceObject;
@property int debugServiceFD; // @synthesize debugServiceFD=_debugServiceFD;
@property BOOL debugAsAService; // @synthesize debugAsAService=_debugAsAService;
@property(copy) NSString *remoteInstallPath; // @synthesize remoteInstallPath=_remoteInstallPath;
@property(copy) NSString *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly) int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property(readonly) int enableGPUFrameCaptureMode; // @synthesize enableGPUFrameCaptureMode=_enableGPUFrameCaptureMode;
@property(readonly) IDESchemeOptionReference *routingCoverageFileReference; // @synthesize routingCoverageFileReference=_routingCoverageFileReference;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly) BOOL showNonLocalizedStrings; // @synthesize showNonLocalizedStrings=_showNonLocalizedStrings;
@property(readonly) IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property(readonly) BOOL allowLocationSimulation; // @synthesize allowLocationSimulation=_allowLocationSimulation;
@property(readonly) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
@property(copy) DVTFilePath *replacementRunnableLocation; // @synthesize replacementRunnableLocation=_replacementRunnableLocation;
@property BOOL askOnLaunchChangedRunnable; // @synthesize askOnLaunchChangedRunnable=_askOnLaunchChangedRunnable;
@property(copy) NSDictionary *appExtensionBuiltPaths; // @synthesize appExtensionBuiltPaths=_appExtensionBuiltPaths;
@property int runnableType; // @synthesize runnableType=_runnableType;
@property(copy) NSString *runnableBundleIdentifier; // @synthesize runnableBundleIdentifier=_runnableBundleIdentifier;
@property(readonly) unsigned long long launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property(nonatomic) int launchStyle; // @synthesize launchStyle=_launchStyle;
@property(readonly) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
@property(readonly) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
@property(readonly) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(nonatomic) unsigned long long processLauncherKind; // @synthesize processLauncherKind=_processLauncherKind;
@property(retain, nonatomic) IDESchemeOptionReference *storeKitConfigurationFileReference; // @synthesize storeKitConfigurationFileReference=_storeKitConfigurationFileReference;
@property(nonatomic) int enableGPUShaderValidationMode; // @synthesize enableGPUShaderValidationMode=_enableGPUShaderValidationMode;
@property(nonatomic) BOOL skipInstallForTest; // @synthesize skipInstallForTest=_skipInstallForTest;
@property(retain, nonatomic) NSString *deviceSensorReplayFile; // @synthesize deviceSensorReplayFile=_deviceSensorReplayFile;
@property(nonatomic) BOOL allowDeviceSensorReplayData; // @synthesize allowDeviceSensorReplayData=_allowDeviceSensorReplayData;
@property(nonatomic) BOOL memoryGraphOnResourceException; // @synthesize memoryGraphOnResourceException=_memoryGraphOnResourceException;
@property(nonatomic) BOOL enableMallocStackLoggingLiteForXPCServices; // @synthesize enableMallocStackLoggingLiteForXPCServices=_enableMallocStackLoggingLiteForXPCServices;
@property(retain, nonatomic) IDERuntimeProfileInfo *runtimeProfileInfo; // @synthesize runtimeProfileInfo=_runtimeProfileInfo;
@property(nonatomic) BOOL queueDebuggingEnabled; // @synthesize queueDebuggingEnabled=_queueDebuggingEnabled;
@property(nonatomic) BOOL enableMallocStackLoggingDuringAttach; // @synthesize enableMallocStackLoggingDuringAttach=_enableMallocStackLoggingDuringAttach;
@property(nonatomic) long long attachingToiOSApp; // @synthesize attachingToiOSApp=_attachingToiOSApp;
@property(copy, nonatomic) NSString *debugserverConnectionAddress; // @synthesize debugserverConnectionAddress=_debugserverConnectionAddress;
@property(nonatomic) int debugserverPort; // @synthesize debugserverPort=_debugserverPort;
@property(copy, nonatomic) NSString *launchdServiceSpecifier; // @synthesize launchdServiceSpecifier=_launchdServiceSpecifier;
@property(copy, nonatomic) NSString *customLLDBInitFile; // @synthesize customLLDBInitFile=_customLLDBInitFile;
@property(nonatomic) BOOL suppressSimulatorApplication; // @synthesize suppressSimulatorApplication=_suppressSimulatorApplication;
@property(nonatomic) BOOL isLaunchedForTesting; // @synthesize isLaunchedForTesting=_isLaunchedForTesting;
@property(nonatomic) BOOL enableThreadSanitizer; // @synthesize enableThreadSanitizer=_enableThreadSanitizer;
@property(nonatomic) BOOL enableAddressSanitizer; // @synthesize enableAddressSanitizer=_enableAddressSanitizer;
@property(nonatomic) BOOL debugPauseAtEntry; // @synthesize debugPauseAtEntry=_debugPauseAtEntry;
@property(copy, nonatomic) NSString *toolchainLLDBFrameworkPath; // @synthesize toolchainLLDBFrameworkPath=_toolchainLLDBFrameworkPath;
- (id)launchParametersByAppendingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByPrependingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByReplacingEnvironmentVariablesWithDictionary:(id)arg1;
- (id)launchParametersByReplacingCommandLineArgsWithArray:(id)arg1;
- (void)setlaunchdServiceSpecifier:(id)arg1;
@property(copy, nonatomic) NSArray *commandLineArgs; // @synthesize commandLineArgs=_commandLineArgs;
@property(readonly) DVTFilePath *filePathToBinary; // @synthesize filePathToBinary=_filePathToBinary;
@property(readonly) DVTFilePath *originalRunnableLocation;
@property(readonly, copy) DVTFilePath *runnableLocation; // @synthesize runnableLocation=_runnableLocation;
@property(readonly, copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, copy) NSDictionary *originalEnvironmentVariables;
@property(readonly, copy) NSMutableDictionary *testingEnvironmentVariables; // @synthesize testingEnvironmentVariables=_testingEnvironmentVariables;
@property(readonly) NSArray *rawCommandLineArgs;
- (void)_setUninitializedFlagsToInitialized;
- (id)init;

@end

