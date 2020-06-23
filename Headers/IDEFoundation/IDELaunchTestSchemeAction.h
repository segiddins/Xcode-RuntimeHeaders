//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

#import <IDEFoundation/IDECodeCoverageMutating-Protocol.h>

@class DVTNotificationToken, IDESchemeBuildableReference, IDESchemeCommand, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol IDEPrimitiveSchemeCommand;

@interface IDELaunchTestSchemeAction : IDESchemeAction <IDECodeCoverageMutating>
{
    BOOL _shouldUseLaunchSchemeArgsEnv;
    NSMutableArray *_commandLineArgumentEntries;
    NSMutableArray *_environmentVariableEntries;
    DVTNotificationToken *_buildablesToken;
    BOOL _mallocStackLoggingSelected;
    BOOL _codeCoverageEnabled;
    BOOL _onlyGenerateCoverageForSpecifiedTargets;
    BOOL _askForAppToLaunch;
    BOOL _automaticAppToLaunch;
    BOOL _enableAddressSanitizer;
    BOOL _enableASanStackUseAfterReturn;
    BOOL _enableThreadSanitizer;
    BOOL _enableUBSanitizer;
    BOOL _enableMainThreadChecker;
    unsigned int _debugProcessAsUID;
    NSString *_selectedDebuggerIdentifier;
    NSString *_selectedLauncherIdentifier;
    IDESchemeBuildableReference *_buildableReferenceToUseForMacroExpansion;
    NSString *_selectedMallocStackLoggingType;
    NSDictionary *_additionalOptionEntriesDict;
    NSString *_language;
    NSString *_region;
    long long _systemAttachmentLifetime;
    long long _userAttachmentLifetime;
    NSString *_selectedMallocStackLoggingTypeTooltip;
    NSString *_debugAsWhichUser;
    NSMutableArray *_mutableCodeCoverageTargets;
}

+ (id)expandEnvironmentVariableEntries:(id)arg1 withBuildParameters:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_modifyEnvironmentForSQLLite:(id)arg1;
+ (id)createAdditionalDiagnosticsDict;
+ (id)keyPathsForValuesAffectingDebugProcessAsUID;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(retain) NSMutableArray *mutableCodeCoverageTargets; // @synthesize mutableCodeCoverageTargets=_mutableCodeCoverageTargets;
@property(copy) NSString *debugAsWhichUser; // @synthesize debugAsWhichUser=_debugAsWhichUser;
@property(copy) NSString *selectedMallocStackLoggingTypeTooltip; // @synthesize selectedMallocStackLoggingTypeTooltip=_selectedMallocStackLoggingTypeTooltip;
@property long long userAttachmentLifetime; // @synthesize userAttachmentLifetime=_userAttachmentLifetime;
@property long long systemAttachmentLifetime; // @synthesize systemAttachmentLifetime=_systemAttachmentLifetime;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property BOOL enableMainThreadChecker; // @synthesize enableMainThreadChecker=_enableMainThreadChecker;
@property BOOL enableUBSanitizer; // @synthesize enableUBSanitizer=_enableUBSanitizer;
@property BOOL enableThreadSanitizer; // @synthesize enableThreadSanitizer=_enableThreadSanitizer;
@property BOOL enableASanStackUseAfterReturn; // @synthesize enableASanStackUseAfterReturn=_enableASanStackUseAfterReturn;
@property BOOL enableAddressSanitizer; // @synthesize enableAddressSanitizer=_enableAddressSanitizer;
@property(readonly) NSDictionary *additionalOptionEntriesDict; // @synthesize additionalOptionEntriesDict=_additionalOptionEntriesDict;
@property(nonatomic) unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
@property BOOL automaticAppToLaunch; // @synthesize automaticAppToLaunch=_automaticAppToLaunch;
@property BOOL askForAppToLaunch; // @synthesize askForAppToLaunch=_askForAppToLaunch;
@property(nonatomic) BOOL onlyGenerateCoverageForSpecifiedTargets; // @synthesize onlyGenerateCoverageForSpecifiedTargets=_onlyGenerateCoverageForSpecifiedTargets;
- (void)setCodeCoverageEnabled:(BOOL)arg1;
@property(readonly, nonatomic, getter=isCodeCoverageEnabled) BOOL codeCoverageEnabled;
@property(nonatomic) BOOL shouldUseLaunchSchemeArgsEnv; // @synthesize shouldUseLaunchSchemeArgsEnv=_shouldUseLaunchSchemeArgsEnv;
@property(copy) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)removeCodeCoverageTarget:(id)arg1;
- (void)addCodeCoverageTarget:(id)arg1;
@property(readonly, nonatomic) NSArray *codeCoverageTargets;
- (void)addMacroExpansion:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setOnlyGenerateCoverageForSpecifiedTargetsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCodeCoverageEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setUserAttachmentLifetimeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSystemAttachmentLifetimeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setRegionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLanguageFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDisableMainThreadCheckerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableUBSanitizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableThreadSanitizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableASanStackUseAfterReturnFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableAddressSanitizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCodeCoverageTargets:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAdditionalOptions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addEnvironmentVariables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCommandLineArguments:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldUseLaunchSchemeArgsEnvFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)_updateSelectedMallocStackTooltip:(id)arg1;
- (void)_setSelectedMallocStackLoggingType:(id)arg1;
@property BOOL mallocStackLoggingSelected; // @synthesize mallocStackLoggingSelected=_mallocStackLoggingSelected;
@property(copy) NSString *selectedMallocStackLoggingType; // @synthesize selectedMallocStackLoggingType=_selectedMallocStackLoggingType;
@property(readonly) NSArray *availableMallocStackLoggingTypes;
- (BOOL)containSwiftForTheRunnable;
- (BOOL)UBSanitizerAllowedForRunnable;
- (BOOL)_detectSwiftnessForTheRunnableWithSelector:(SEL)arg1 expectedValue:(BOOL)arg2;
- (id)environmentVariablesForBuildParameters:(id)arg1 environmentVariableEntries:(id)arg2;
- (id)environmentVariablesForBuildParameters:(id)arg1;
- (void)modifyEnvironmentForMallocStackLogging:(id)arg1;
- (id)additionalOptionArchivingEntries;
- (id)additionalOptions;
- (id)expandMacrosInString:(id)arg1 forBuildParameters:(id)arg2;
- (void)setBuildableReferenceToUseForMacroExpansion:(id)arg1;
- (id)buildableReferenceToUseForMacroExpansion;
@property(readonly) NSMutableArray *mutableEnvironmentVariableEntries; // @dynamic mutableEnvironmentVariableEntries;
@property(copy) NSArray *environmentVariableEntries; // @dynamic environmentVariableEntries;
@property(readonly) NSMutableArray *mutableCommandLineArgumentEntries; // @dynamic mutableCommandLineArgumentEntries;
@property(copy) NSArray *commandLineArgumentEntries; // @dynamic commandLineArgumentEntries;
@property(readonly) unsigned long long sanitizerOptions;
- (id)subtitle;
@property(copy) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
@property(readonly, nonatomic) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand;
- (void)_updateBuildableToUseForMacroExpansion;
- (id)_verifyReference:(id)arg1 inBuildableReferences:(id)arg2;
- (void)updateBuildableForChangeInRunnable;
- (void)setRunContext:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;
- (void)dvt_commonInit;

@end

