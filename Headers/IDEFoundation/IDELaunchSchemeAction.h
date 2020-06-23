//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDELaunchTestSchemeAction.h>

@class DVTNotificationToken, DVTObservingToken, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSString, _TtC13IDEFoundation24IDESchemeOptionReference, _TtC13IDEFoundation25IDEDeviceAppDataReference, _TtC13IDEFoundation28IDELocationScenarioReference;
@protocol IDEAnalysisToolService;

@interface IDELaunchSchemeAction : IDELaunchTestSchemeAction
{
    DVTNotificationToken *_buildablesToken;
    NSMutableDictionary *_additionalSchemeSettings;
    DVTObservingToken *_launchSessionObservingToken;
    NSDictionary *_cachedAppExtensionBuiltPaths;
    id <IDEAnalysisToolService> _analysisToolService;
    BOOL _allowDeviceSensorReplayData;
    BOOL _debugXPCServices;
    BOOL _enableMallocStackLoggingLiteForXPCServices;
    BOOL _hiddenMallocStackLoggingLiteForXPCServices;
    BOOL _stopOnEveryThreadSanitizerIssue;
    BOOL _stopOnEveryUBSanitizerIssue;
    BOOL _stopOnEveryMainThreadCheckerIssue;
    BOOL _migratedStopOnEveryIssue;
    BOOL _useCustomWorkingDirectory;
    BOOL _allowLocationSimulation;
    BOOL _showNonLocalizedStrings;
    BOOL _ignoresPersistentStateOnLaunch;
    BOOL _debugDocumentVersioning;
    BOOL _viewDebuggingEnabled;
    BOOL _queueDebuggingEnabled;
    BOOL _memoryGraphOnResourceException;
    BOOL _placeholderRenderingEnabled;
    BOOL _GPUProfilerEnabled;
    int _launchStyle;
    int _enableGPUFrameCaptureMode;
    int _enableGPUValidationMode;
    int _internalIOSLaunchStyle;
    NSString *_resolvedCustomWorkingDirectory;
    NSMutableOrderedSet *_debugServiceExtensionContents;
    _TtC13IDEFoundation25IDEDeviceAppDataReference *_deviceAppDataReference;
    _TtC13IDEFoundation24IDESchemeOptionReference *_deviceSensorReplayFileReference;
    unsigned long long _launchAutomaticallySubstyle;
    NSString *_customWorkingDirectory;
    _TtC13IDEFoundation28IDELocationScenarioReference *_locationScenarioReference;
    _TtC13IDEFoundation24IDESchemeOptionReference *_routingCoverageFileReference;
    NSNumber *_simulatorIPhoneDisplay;
    NSNumber *_simulatorIPadDisplay;
    NSString *_internalIOSSubstitutionApp;
    long long _consoleMode;
    NSString *_debugServiceExtensionContentsString;
    NSString *_debugServiceExtension;
}

+ (BOOL)shouldEnableMallocLoggingLiteByDefault:(id)arg1 device:(id)arg2;
+ (id)keyPathsForValuesAffectingLaunchDueToFetchEvent;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)createAdditionalDiagnosticsDict;
@property(copy) NSString *debugServiceExtension; // @synthesize debugServiceExtension=_debugServiceExtension;
@property(copy) NSString *debugServiceExtensionContentsString; // @synthesize debugServiceExtensionContentsString=_debugServiceExtensionContentsString;
@property BOOL GPUProfilerEnabled; // @synthesize GPUProfilerEnabled=_GPUProfilerEnabled;
@property BOOL placeholderRenderingEnabled; // @synthesize placeholderRenderingEnabled=_placeholderRenderingEnabled;
@property long long consoleMode; // @synthesize consoleMode=_consoleMode;
@property BOOL memoryGraphOnResourceException; // @synthesize memoryGraphOnResourceException=_memoryGraphOnResourceException;
@property BOOL queueDebuggingEnabled; // @synthesize queueDebuggingEnabled=_queueDebuggingEnabled;
@property BOOL viewDebuggingEnabled; // @synthesize viewDebuggingEnabled=_viewDebuggingEnabled;
@property(copy) NSString *internalIOSSubstitutionApp; // @synthesize internalIOSSubstitutionApp=_internalIOSSubstitutionApp;
@property int internalIOSLaunchStyle; // @synthesize internalIOSLaunchStyle=_internalIOSLaunchStyle;
@property(retain) NSDictionary *additionalSchemeSettings; // @synthesize additionalSchemeSettings=_additionalSchemeSettings;
@property int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property int enableGPUFrameCaptureMode; // @synthesize enableGPUFrameCaptureMode=_enableGPUFrameCaptureMode;
@property BOOL debugDocumentVersioning; // @synthesize debugDocumentVersioning=_debugDocumentVersioning;
@property BOOL ignoresPersistentStateOnLaunch; // @synthesize ignoresPersistentStateOnLaunch=_ignoresPersistentStateOnLaunch;
@property(retain) NSNumber *simulatorIPadDisplay; // @synthesize simulatorIPadDisplay=_simulatorIPadDisplay;
@property(retain) NSNumber *simulatorIPhoneDisplay; // @synthesize simulatorIPhoneDisplay=_simulatorIPhoneDisplay;
@property(retain) _TtC13IDEFoundation24IDESchemeOptionReference *routingCoverageFileReference; // @synthesize routingCoverageFileReference=_routingCoverageFileReference;
@property(retain) _TtC13IDEFoundation28IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property BOOL showNonLocalizedStrings; // @synthesize showNonLocalizedStrings=_showNonLocalizedStrings;
@property BOOL allowLocationSimulation; // @synthesize allowLocationSimulation=_allowLocationSimulation;
@property(copy, nonatomic) NSString *customWorkingDirectory; // @synthesize customWorkingDirectory=_customWorkingDirectory;
@property BOOL useCustomWorkingDirectory; // @synthesize useCustomWorkingDirectory=_useCustomWorkingDirectory;
@property(nonatomic) unsigned long long launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property(nonatomic) int launchStyle; // @synthesize launchStyle=_launchStyle;
@property BOOL migratedStopOnEveryIssue; // @synthesize migratedStopOnEveryIssue=_migratedStopOnEveryIssue;
@property BOOL stopOnEveryMainThreadCheckerIssue; // @synthesize stopOnEveryMainThreadCheckerIssue=_stopOnEveryMainThreadCheckerIssue;
@property BOOL stopOnEveryUBSanitizerIssue; // @synthesize stopOnEveryUBSanitizerIssue=_stopOnEveryUBSanitizerIssue;
@property BOOL stopOnEveryThreadSanitizerIssue; // @synthesize stopOnEveryThreadSanitizerIssue=_stopOnEveryThreadSanitizerIssue;
@property BOOL hiddenMallocStackLoggingLiteForXPCServices; // @synthesize hiddenMallocStackLoggingLiteForXPCServices=_hiddenMallocStackLoggingLiteForXPCServices;
@property BOOL enableMallocStackLoggingLiteForXPCServices; // @synthesize enableMallocStackLoggingLiteForXPCServices=_enableMallocStackLoggingLiteForXPCServices;
@property BOOL debugXPCServices; // @synthesize debugXPCServices=_debugXPCServices;
@property(retain) _TtC13IDEFoundation24IDESchemeOptionReference *deviceSensorReplayFileReference; // @synthesize deviceSensorReplayFileReference=_deviceSensorReplayFileReference;
@property BOOL allowDeviceSensorReplayData; // @synthesize allowDeviceSensorReplayData=_allowDeviceSensorReplayData;
@property(retain) _TtC13IDEFoundation25IDEDeviceAppDataReference *deviceAppDataReference; // @synthesize deviceAppDataReference=_deviceAppDataReference;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addDeviceSensorReplayFileReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addRoutingCoverageFileReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLocationScenarioReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addDeviceAppData:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (BOOL)needsNewSchemeVersionForInternalIOSLaunchStyleAndOthers;
- (BOOL)needsNewSchemeVersionForLocationSimulation;
- (BOOL)needsNewSchemeVersionForAppDataPackage;
- (void)setAskForAppToLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setUseCustomWorkingDirectoryFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setGPUProfilerEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPlaceholderRenderingEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setConsoleModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setMemoryGraphOnResourceExceptionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setQueueDebuggingEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setViewDebuggingEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLaunchAutomaticallySubstyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setInternalIOSLaunchStyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setInternalIOSSubstitutionAppFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSimulatorIPadDisplayFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSimulatorIPhoneDisplayFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShowNonLocalizedStringsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAllowDeviceSensorReplayDataFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAllowLocationSimulationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableGPUValidationModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableGPUFrameCaptureModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugServiceExtensionContentsStringFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugServiceExtensionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCustomLaunchCommandFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setStopOnEveryMainThreadCheckerIssueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setStopOnEveryUBSanitizerIssueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setStopOnEveryThreadSanitizerIssueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableMallocStackLoggingLiteForXPCServicesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugXPCServicesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugDocumentVersioningFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIgnoresPersistentStateOnLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
@property(copy) NSMutableOrderedSet *debugServiceExtensionContents; // @synthesize debugServiceExtensionContents=_debugServiceExtensionContents;
- (void)setAskForAppToLaunch:(BOOL)arg1;
- (BOOL)askForAppToLaunch;
@property BOOL launchWithComplication;
@property BOOL launchWithGlance;
@property BOOL launchWithNotification;
@property BOOL staticNotificationSelected;
- (unsigned long long)launchAutomaticallySubstyleForBuildableProduct:(id)arg1;
- (void)_setLaunchOption:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (BOOL)_launchOptionIsSet:(unsigned long long)arg1;
@property(readonly) BOOL gpuDebuggerAvailable;
- (void)_prepareForMessageTracer:(id)arg1;
- (id)runOperationForSchemeOperationParameters:(id)arg1 buildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 schemeCommand:(id)arg5 schemeActionRecord:(id)arg6 outError:(id *)arg7 actionCallbackBlock:(CDUnknownBlockType)arg8;
- (void)_checkForAnalysisToolServiceProvidedExecutableToSet;
- (void)_tweakCommandLineArgumentsBasedOnAnalysisToolServiceProvidedExecutable:(id)arg1;
- (BOOL)_tweakEnvironmentVariables:(id)arg1 buildParameters:(id)arg2 buildableProductDirectories:(id)arg3 schemeCommand:(id)arg4 schemeActionRecord:(id)arg5 shouldSetupExtraDebuggingSupport:(BOOL)arg6 extensionInfos:(id)arg7 outError:(id *)arg8;
- (id)_preferredBuildableForSchemeCommand:(id)arg1 buildParameters:(id)arg2;
- (void)_restoreLaunchStyleForMetalRemoteDebuggingWithEnvironmentVariables:(id)arg1;
- (BOOL)_overrideParametersForMetalRemoteDebuggingWithEnvironmentVariables:(id)arg1 outError:(id *)arg2;
- (void)_addMetalValidationVariablesToEnvironment:(id)arg1;
- (BOOL)_isMetalRemoteDebuggingEnabledWithEnvironmentVariables:(id)arg1;
- (BOOL)hasAppExtensionsInTargets;
- (void)_setupRecordedFramesInEnvironmentVariables:(id)arg1 runDestination:(id)arg2;
- (void)modifyEnvironmentForMallocStackLogging:(id)arg1;
- (BOOL)enableMallocStackLoggingLiteByDefaultIfNecessary:(id)arg1;
@property(retain) NSString *customLaunchCommand;
- (id)customLaunchCommandMacroExpanded;
- (void)setLaunchDueToFetchEvent:(BOOL)arg1;
- (BOOL)launchDueToFetchEvent;
- (id)additionalOptions;
- (id)_expandMacrosInString:(id)arg1;
@property(readonly) NSString *resolvedCustomWorkingDirectory; // @synthesize resolvedCustomWorkingDirectory=_resolvedCustomWorkingDirectory;
- (id)commandLineArgumentsForDevice:(id)arg1 buildParameters:(id)arg2;
- (BOOL)doesNonActionWork;
- (id)name;
- (void)setRunContext:(id)arg1;
- (id)notificationPayloadFileReferences;
- (void)_setupQueueDebuggingState;
- (void)_setupAnalysisToolService;
- (id)schemeCommand;
- (void)dvt_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

@end

