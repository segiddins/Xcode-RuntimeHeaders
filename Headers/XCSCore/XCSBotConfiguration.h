//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDictionary, NSString, XCSArchiveExportOptions, XCSBotSCMBlueprint, XCSDeviceSpecification, XCSProvisioningConfiguration, XCSToolchain;

@interface XCSBotConfiguration : XCSObject
{
    XCSBotSCMBlueprint *sourceControlBlueprint;
    NSString *_userDescription;
}

+ (id)botConfigurationWithSchemeName:(id)arg1 buildConfiguration:(id)arg2 overrideToolchain:(id)arg3 builtFromClean:(unsigned long long)arg4 performsAnalyzeAction:(BOOL)arg5 performsTestAction:(BOOL)arg6 performsArchiveAction:(BOOL)arg7 codeCoveragePreference:(unsigned long long)arg8 runOnlyDisabledTests:(BOOL)arg9 testLocalizations:(id)arg10 exportsProductFromArchive:(BOOL)arg11 disableAppThinning:(BOOL)arg12 triggers:(struct NSArray *)arg13 sourceControlBlueprint:(id)arg14 testingDestinationType:(unsigned long long)arg15 testingDeviceIDs:(id)arg16 deviceSpecification:(id)arg17 useParallelDeviceTesting:(BOOL)arg18 scheduleType:(unsigned long long)arg19 periodicScheduleInterval:(unsigned long long)arg20 weeklyScheduleDay:(long long)arg21 hourOfIntegration:(unsigned long long)arg22 minutesAfterHourToIntegrate:(unsigned long long)arg23 performsUpgradeIntegration:(BOOL)arg24 buildEnvironmentVariables:(id)arg25 additionalBuildArguments:(id)arg26 provisioningConfiguration:(id)arg27 archiveExportOptions:(id)arg28 validationErrors:(id *)arg29;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain) XCSBotSCMBlueprint *sourceControlBlueprint; // @synthesize sourceControlBlueprint;
- (void).cxx_destruct;
- (BOOL)_validateSchemeName:(id)arg1 buildConfiguration:(id)arg2 overrideToolchain:(id)arg3 builtFromClean:(unsigned long long)arg4 performsAnalyzeAction:(BOOL)arg5 performsTestAction:(BOOL)arg6 performsArchiveAction:(BOOL)arg7 codeCoveragePreference:(unsigned long long)arg8 runOnlyDisabledTests:(BOOL)arg9 testLocalizations:(id)arg10 exportsProductFromArchive:(BOOL)arg11 disableAppThinning:(BOOL)arg12 triggers:(struct NSArray *)arg13 sourceControlBlueprint:(id)arg14 testingDestinationType:(unsigned long long)arg15 testingDeviceIDs:(id)arg16 deviceSpecification:(id)arg17 useParallelDeviceTesting:(BOOL)arg18 scheduleType:(unsigned long long)arg19 periodicScheduleInterval:(unsigned long long)arg20 weeklyScheduleDay:(long long)arg21 hourOfIntegration:(unsigned long long)arg22 minutesAfterHourToIntegrate:(unsigned long long)arg23 buildEnvironmentVariables:(id)arg24 additionalBuildArguments:(id)arg25 provisioningConfiguration:(id)arg26 archiveExportOptions:(id)arg27 validationErrors:(id *)arg28;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithSchemeName:(id)arg1 buildConfiguration:(id)arg2 overrideToolchain:(id)arg3 builtFromClean:(unsigned long long)arg4 performsAnalyzeAction:(BOOL)arg5 performsTestAction:(BOOL)arg6 performsArchiveAction:(BOOL)arg7 codeCoveragePreference:(unsigned long long)arg8 runOnlyDisabledTests:(BOOL)arg9 testLocalizations:(id)arg10 exportsProductFromArchive:(BOOL)arg11 disableAppThinning:(BOOL)arg12 triggers:(struct NSArray *)arg13 sourceControlBlueprint:(id)arg14 testingDestinationType:(unsigned long long)arg15 testingDeviceIDs:(id)arg16 deviceSpecification:(id)arg17 useParallelDeviceTesting:(BOOL)arg18 scheduleType:(unsigned long long)arg19 periodicScheduleInterval:(unsigned long long)arg20 weeklyScheduleDay:(long long)arg21 hourOfIntegration:(unsigned long long)arg22 minutesAfterHourToIntegrate:(unsigned long long)arg23 performsUpgradeIntegration:(BOOL)arg24 buildEnvironmentVariables:(id)arg25 additionalBuildArguments:(id)arg26 provisioningConfiguration:(id)arg27 archiveExportOptions:(id)arg28 validationErrors:(id *)arg29;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

// Remaining properties
@property(retain) NSArray *additionalBuildArguments; // @dynamic additionalBuildArguments;
@property(retain) XCSArchiveExportOptions *archiveExportOptions; // @dynamic archiveExportOptions;
@property(retain) NSString *buildConfiguration; // @dynamic buildConfiguration;
@property(retain) NSDictionary *buildEnvironmentVariables; // @dynamic buildEnvironmentVariables;
@property unsigned long long builtFromClean; // @dynamic builtFromClean;
@property unsigned long long codeCoveragePreference; // @dynamic codeCoveragePreference;
@property(retain) XCSDeviceSpecification *deviceSpecification; // @dynamic deviceSpecification;
@property BOOL disableAppThinning; // @dynamic disableAppThinning;
@property BOOL exportsProductFromArchive; // @dynamic exportsProductFromArchive;
@property unsigned long long hourOfIntegration; // @dynamic hourOfIntegration;
@property unsigned long long minutesAfterHourToIntegrate; // @dynamic minutesAfterHourToIntegrate;
@property(retain) XCSToolchain *overrideToolchain; // @dynamic overrideToolchain;
@property BOOL performsAnalyzeAction; // @dynamic performsAnalyzeAction;
@property BOOL performsArchiveAction; // @dynamic performsArchiveAction;
@property BOOL performsTestAction; // @dynamic performsTestAction;
@property BOOL performsUpgradeIntegration; // @dynamic performsUpgradeIntegration;
@property unsigned long long periodicScheduleInterval; // @dynamic periodicScheduleInterval;
@property(retain) XCSProvisioningConfiguration *provisioningConfiguration; // @dynamic provisioningConfiguration;
@property BOOL runOnlyDisabledTests; // @dynamic runOnlyDisabledTests;
@property unsigned long long scheduleType; // @dynamic scheduleType;
@property(copy) NSString *schemeName; // @dynamic schemeName;
@property(retain) NSArray *testLocalizations; // @dynamic testLocalizations;
@property unsigned long long testingDestinationType; // @dynamic testingDestinationType;
@property(retain) NSArray *testingDeviceIDs; // @dynamic testingDeviceIDs;
@property(retain) NSArray *triggers; // @dynamic triggers;
@property BOOL useParallelDeviceTesting; // @dynamic useParallelDeviceTesting;
@property long long weeklyScheduleDay; // @dynamic weeklyScheduleDay;

@end

