//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTModelObject.h>

#import <DevToolsCore/DVTInvalidation-Protocol.h>
#import <DevToolsCore/IDEBlueprint-Protocol.h>
#import <DevToolsCore/IDEIndexable-Protocol.h>
#import <DevToolsCore/IDEMutableProvisionable-Protocol.h>
#import <DevToolsCore/IDESigningEditorCapabilityItemEditingConsolidatedContextDelegatingSourceProvider-Protocol.h>
#import <DevToolsCore/IDESigningEditorCapabilityItemLibraryAssetManagerContextProvider-Protocol.h>
#import <DevToolsCore/IDESigningEditorCapabilityItemLibraryConsolidatedContextSourceDelegate-Protocol.h>
#import <DevToolsCore/IDESigningEditorCapabilityItemProvisioningConsolidatedContextSourceDelegate-Protocol.h>
#import <DevToolsCore/IDETargetEditorBundleIdentifierSource-Protocol.h>
#import <DevToolsCore/Xcode3SourceListItemEditing-Protocol.h>

@class DVTFilePath, DVTNotificationToken, DVTStackBacktrace, DVTToolsVersion, IDEActivityLogSection, IDEPIFGUID, IDETestBlueprintHostSettings, IDETypeIdentifier, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber, NSOrderedSet, NSSet, NSString, PBXTarget, Xcode3Project, Xcode3SigningEditorConfigurationsSource, Xcode3TargetConsolidatedCapabilitiesContextSource, _TtC13IDEFoundation21CoordinatorCollection, _TtC13IDEFoundation31ConsolidatedCapabilitiesContext, _TtC13IDEFoundation33SigningEditorConfigurationManager, _TtC13IDEFoundation34TargetCapabilitiesCoordinatorStore, _TtC13IDEFoundation41SigningEditorCapabilityEditingItemManager;
@protocol IDEBuildable, IDEIndexable, IDEProvisionable, IDESigningEditorCapabilityItemEditingConsolidatedContextSource, IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate;

@interface Xcode3Target : DVTModelObject <IDESigningEditorCapabilityItemLibraryConsolidatedContextSourceDelegate, IDESigningEditorCapabilityItemProvisioningConsolidatedContextSourceDelegate, IDESigningEditorCapabilityItemEditingConsolidatedContextDelegatingSourceProvider, IDEBlueprint, IDEIndexable, Xcode3SourceListItemEditing, DVTInvalidation, IDEMutableProvisionable, IDETargetEditorBundleIdentifierSource, IDESigningEditorCapabilityItemLibraryAssetManagerContextProvider>
{
    PBXTarget *_pbxTarget;
    Xcode3Project *_project;
    NSArray *_buildables;
    NSArray *_buildableProducts;
    id <IDEBuildable> _primaryBuildable;
    NSMutableDictionary *_productHeaders;
    NSString *_cachedIdentifier;
    NSString *_cachedBlueprintIdentifier;
    NSString *_cachedIndexName;
    id _targetDidChangeNotificationObservingToken;
    id _fileWasAddedNotificationObservingToken;
    id _fileWillBeRemovedNotificationObservingToken;
    id _filePathDidChangeNotificationObservingToken;
    id _fileWasAddedToGroupNotificationObservingToken;
    id _fileWillBeRemovedFromGroupNotificationObservingToken;
    id _targetSettingsDidChangeNotificationObservingToken;
    id _projectIntegrityLogDidChangeNotificationObservingToken;
    id _targetProductSettingsDidChangeNotificationObservingToken;
    id _buildOperationDidStopNotificationObservingToken;
    id _targetNameDidChangeNotificationObservingToken;
    id _capabilitiesDidChangeNotificationObservingToken;
    id _availableConfigurationNamesDidChangeObservingToken;
    id _projectSettingsDidChangeObservingToken;
    IDEActivityLogSection *_issueLog;
    NSMutableArray *_watchedFilesForIntegrityLog;
    id <IDEIndexable> _proxy;
    BOOL _headermapsUpToDate;
    BOOL _integrityCheckingBlockQueued;
    unsigned long long _buildSettingsCacheInvalidatedCounter;
    NSSet *_allPublicHeaderFileReferences;
    NSSet *_allPrivateHeaderFileReferences;
    NSSet *_allProjectHeaderFileReferences;
    NSMapTable *_extraSettingsCompletionBlocks;
    NSDictionary *_filePathsToSourceFileBuildInfos;
    NSNumber *_migratedProvisoningStyle;
    id <IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate> _capabilityItemEditingConsolidatedContextSourceProviderDelegate;
    id <IDESigningEditorCapabilityItemEditingConsolidatedContextSource> _source;
    _TtC13IDEFoundation21CoordinatorCollection *_defaultCoordinatorCollection;
    _TtC13IDEFoundation34TargetCapabilitiesCoordinatorStore *_coordinatorStore;
    DVTNotificationToken *_targetWillBeRemovedNotificationToken;
    Xcode3TargetConsolidatedCapabilitiesContextSource *_consolidatedCapabilitiesContextSource;
    _TtC13IDEFoundation31ConsolidatedCapabilitiesContext *_consolidatedCapabilitiesContext;
    Xcode3SigningEditorConfigurationsSource *_signingEditorConfigurationsSource;
    _TtC13IDEFoundation33SigningEditorConfigurationManager *_signingEditorConfigurationManager;
    _TtC13IDEFoundation41SigningEditorCapabilityEditingItemManager *_capabilityEditingItemManager;
}

+ (id)keyPathsForValuesAffectingConfigurations;
+ (id)deserializedSourceListItem:(id)arg1;
+ (id)pasteboardDataType;
+ (id)appCategoryDisplayValues;
+ (id)validAppCategories;
+ (id)keyPathsForValuesAffectingName;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC13IDEFoundation41SigningEditorCapabilityEditingItemManager *capabilityEditingItemManager; // @synthesize capabilityEditingItemManager=_capabilityEditingItemManager;
@property(retain, nonatomic) _TtC13IDEFoundation33SigningEditorConfigurationManager *signingEditorConfigurationManager; // @synthesize signingEditorConfigurationManager=_signingEditorConfigurationManager;
@property(retain, nonatomic) Xcode3SigningEditorConfigurationsSource *signingEditorConfigurationsSource; // @synthesize signingEditorConfigurationsSource=_signingEditorConfigurationsSource;
@property(retain, nonatomic) _TtC13IDEFoundation31ConsolidatedCapabilitiesContext *consolidatedCapabilitiesContext; // @synthesize consolidatedCapabilitiesContext=_consolidatedCapabilitiesContext;
@property(retain, nonatomic) Xcode3TargetConsolidatedCapabilitiesContextSource *consolidatedCapabilitiesContextSource; // @synthesize consolidatedCapabilitiesContextSource=_consolidatedCapabilitiesContextSource;
@property(retain, nonatomic) DVTNotificationToken *targetWillBeRemovedNotificationToken; // @synthesize targetWillBeRemovedNotificationToken=_targetWillBeRemovedNotificationToken;
@property(retain, nonatomic) _TtC13IDEFoundation34TargetCapabilitiesCoordinatorStore *coordinatorStore; // @synthesize coordinatorStore=_coordinatorStore;
@property(readonly, nonatomic) id <IDESigningEditorCapabilityItemEditingConsolidatedContextSource> source; // @synthesize source=_source;
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate> capabilityItemEditingConsolidatedContextSourceProviderDelegate; // @synthesize capabilityItemEditingConsolidatedContextSourceProviderDelegate=_capabilityItemEditingConsolidatedContextSourceProviderDelegate;
@property(nonatomic) __weak id <IDEIndexable> proxy; // @synthesize proxy=_proxy;
@property(retain) IDEActivityLogSection *issueLog; // @synthesize issueLog=_issueLog;
@property(readonly) Xcode3Project *project; // @synthesize project=_project;
@property(retain) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
- (BOOL)canSupportMacCatalyst;
@property(readonly) BOOL isTransparentForRunDestinations;
- (BOOL)setEnabledForMacCatalyst:(BOOL)arg1 error:(id *)arg2;
- (id)sourceFileBuildInfoForFileAtPath:(id)arg1;
- (id)provisioningCommandInputsForConfiguration:(id)arg1 macroExpansionScope:(id)arg2 runDestination:(id)arg3;
- (void)noteProvisioningInputsChanged;
- (void)addOrUpdateDefaultEntitlementsFileWithEntitlements:(id)arg1 replacingConfiguration:(id)arg2;
- (BOOL)isEveryBuildConfigurationEntitlementsSettingPopulated;
- (unsigned long long)entitlementsDestinationForBuildParameters:(id)arg1;
- (unsigned long long)_entitlementsDestinationFromMacroExpansionScope:(id)arg1;
- (id)entitlementsExpansionForBuildParameters:(id)arg1;
- (id)_entitlementsExpansionFromMacroExpansionScope:(id)arg1;
- (id)baseEntitlementsForBuildParameters:(id)arg1;
- (id)_baseEntitlementsFromMacroExpansionScope:(id)arg1;
- (id)entitlementsFilePathForBuildParameters:(id)arg1;
- (id)_entitlementsFilePathFromMacroExpansionScope:(id)arg1;
- (void)setBundleIdentifier:(id)arg1 forConfigurationNamed:(id)arg2 sdk:(id)arg3;
- (void)setBundleIdentifier:(id)arg1 forConfigurationNamed:(id)arg2;
- (id)bundleIdentifierForBuildParameters:(id)arg1;
- (id)_bundleIdentifierFromMacroExpansionScope:(id)arg1 configuration:(id)arg2;
- (void)setSigningCertificateIdentifier:(id)arg1 forConfigurationNamed:(id)arg2 sdk:(id)arg3;
- (id)signingCertificateIdentifierForBuildParameters:(id)arg1;
- (id)_signingCertificateIdentifierFromMacroExpansionScope:(id)arg1;
- (void)setProvisioningProfile:(id)arg1 forConfigurationNamed:(id)arg2 sdk:(id)arg3;
- (id)legacyProvisioningProfileUUIDForBuildParameters:(id)arg1;
- (id)provisioningProfileSpecifierForBuildParameters:(id)arg1;
- (id)_provisioningProfileSpecifierFromMacroExpansionScope:(id)arg1;
- (id)appIDFeaturesForBuildParameters:(id)arg1;
- (id)appIDFeaturesForBuildParameters:(id)arg1 entitlements:(id)arg2 withEntitlementsExpansion:(id)arg3;
- (BOOL)_signingRequiredFromMacroExpansionScope:(id)arg1;
- (BOOL)signingRequiresTeamForBuildParameters:(id)arg1;
- (BOOL)_signingRequiresTeamFromMacroExpansionScope:(id)arg1;
- (BOOL)allowSigningWithoutTeamSelectionForBuildParameters:(id)arg1;
- (BOOL)_allowSigningWithoutTeamSelectionFromMacroExpansionScope:(id)arg1;
- (id)sdkVariantForBuildParameters:(id)arg1;
- (id)_sdkVariantFromMacroExpansionScope:(id)arg1;
- (id)sdkForBuildParameters:(id)arg1;
- (id)platformForBuildParameters:(id)arg1;
- (id)_platformFromMacroExpansionScope:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *configurations;
- (BOOL)wantsBundleIdentifierEditingForBuildParameters:(id)arg1;
- (long long)profileSupportForBuildParameters:(id)arg1;
- (long long)_profileSupportForSDK:(id)arg1 configuration:(id)arg2 scope:(id)arg3;
@property(readonly) id <IDEProvisionable> provisionable;
@property(readonly, nonatomic) _TtC13IDEFoundation21CoordinatorCollection *defaultCoordinatorCollection; // @synthesize defaultCoordinatorCollection=_defaultCoordinatorCollection;
- (void)didUpdate:(id)arg1 configurationToContext:(id)arg2;
- (void)provisioningConsolidatedContextSourceDidUpdate:(id)arg1;
@property(readonly, nonatomic) NSArray *signingEditorCapabilityItemLibraryAssetManagerUnvalidatedContexts;
- (id)unvalidatedContextForCapabilitiesContext:(id)arg1;
- (void)removeTagsFromKnownAssetTags:(id)arg1;
- (void)addTagsToKnownAssetTags:(id)arg1;
@property(readonly) NSSet *knownAssetTags;
- (id)entitlementsFilePathForBuildConfiguration:(id)arg1;
- (void)_respondToTargetWillBeRemovedNotification:(id)arg1;
- (void)_respondToProjectSettingsDidChangeNotification:(id)arg1;
- (void)_respondToAvailableConfigurationNamesDidChangeNotification:(id)arg1;
- (void)_respondToCapabilitiesDidChangeBroadcast:(id)arg1;
- (void)_respondToProjectIntegrityLogDidChangeNotification:(id)arg1;
- (void)_respondToBuildOperationDidStopNotification:(id)arg1;
- (void)_respondToTargetNameDidChangeNotification:(id)arg1;
- (void)_respondToTargetProductSettingsDidChangeNotification:(id)arg1;
- (void)_respondToTargetSettingsDidChangeNotification:(id)arg1;
- (void)_respondToFileWillBeRemovedFromGroupNotification:(id)arg1;
- (void)_respondToFileWasAddedToGroupNotification:(id)arg1;
- (void)_respondToFilePathChangedNotification:(id)arg1;
- (void)_respondToBuildFileRemovedNotification:(id)arg1;
- (void)_respondToBuildFileAddedNotification:(id)arg1;
- (void)_respondToTargetDidChangeNotification:(id)arg1;
- (id)serializedSourceListItem;
- (id)toolSearchPathWithBuildParameters:(id)arg1;
- (id)stringsByEvaluatingPropertyString:(id)arg1 inAllConfigurationsForWorkspaceArenaSnapshot:(id)arg2;
- (id)absolutePathByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)stringByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)evaluatedStringListValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
- (id)evaluatedStringValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
- (id)allBuildSettingNamesWithBuildParameters:(id)arg1;
- (id)cachedMacroExpansionScopeForBuildParameters:(id)arg1;
@property(readonly, copy) NSString *productType;
- (id)productNameWithBuildSetting:(id)arg1 workspace:(id)arg2;
- (id)_legacyBuildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
- (id)_modernBuildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
- (id)buildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
@property(readonly, copy) NSString *localizedIndexableDescription;
- (void)languageOfMainFile:(id)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)writeProductHeaders:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_processSettingsForFilesInWorkspace:(id)arg1 wasSuccessful:(BOOL)arg2 shouldWriteAuxiliaryFiles:(BOOL)arg3 isModern:(BOOL)arg4 withCompletionBlock:(CDUnknownBlockType)arg5 extraBlocks:(id)arg6;
- (id)_buildFileReferencesByFlatteningVariantGroups:(id)arg1;
- (void)_legacySettingsForFilesInWorkspace:(id)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)__modernSettingsForFilesInWorkspace:(id)arg1 provider:(id)arg2 shouldWriteAuxiliaryFiles:(BOOL)arg3 withCompletionBlock:(CDUnknownBlockType)arg4 extraBlocks:(id)arg5;
- (void)_modernSettingsForFilesInWorkspace:(id)arg1 provider:(id)arg2 shouldWriteAuxiliaryFiles:(BOOL)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)settingsForFilesInWorkspace:(id)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 queue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)settingsForFilesInWorkspace:(id)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)settingsForFilesInWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_buildParametersForIndexingInWorkspace:(id)arg1;
- (void)_performDependentBlockWithWorkspace:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_indexableFilesIncludingNibFiles:(BOOL)arg1;
@property(readonly, copy) NSArray *indexableFiles;
- (id)_targetBuildContext;
- (BOOL)_projectIsValid;
- (id)containerForIndexables:(id)arg1 rootPaths:(id)arg2;
@property(readonly, copy) NSString *indexName;
@property(readonly) BOOL requiresMainThread;
@property(readonly, copy) NSString *identifier;
- (void)_indexingRespondToFilePathChangedNotification:(id)arg1;
- (void)_indexingRespondToVariantGroupNotification:(id)arg1 withNewName:(id)arg2;
- (void)_indexingRespondToBuildFileNotification:(id)arg1 withNewName:(id)arg2;
- (void)clearCachedBuildSettings;
- (void)analyzeModelForIssues;
- (id)infoDictionaryFilePathForConfiguration:(id)arg1;
- (id)resolvedInfoDictionaryForBuildParameters:(id)arg1;
- (id)infoDictionaryForConfiguration:(id)arg1;
@property(readonly, copy) DVTFilePath *bundleBaselineRecordFilePath;
- (BOOL)supportsIOSMacForBuildParameters:(id)arg1;
- (BOOL)_supportsIOSMacFromMacroExpansionScope:(id)arg1;
- (id)provisioningPurposeForBuildParameters:(id)arg1;
- (id)_provisioningPurposeFromMacroExpansionScope:(id)arg1;
- (void)setProvisioningStyle:(long long)arg1 forConfigurationNamed:(id)arg2;
- (long long)provisioningStyleForBuildParameters:(id)arg1;
- (long long)_provisioningStyleFromMacroExpansionScope:(id)arg1;
- (long long)_migrateToProvisioningStyle;
- (void)setTeam:(id)arg1 forConfigurationNamed:(id)arg2;
- (id)teamForBuildParameters:(id)arg1;
- (id)_teamFromMacroExpansionScope:(id)arg1;
@property(readonly) NSSet *supportedPlatformsForIndexing;
@property(readonly, getter=isUnitTest) BOOL unitTest;
@property(retain) IDETestBlueprintHostSettings *testBlueprintHostSettings;
@property(retain) IDETestBlueprintHostSettings *testBlueprintUITestingTargetAppSettings;
- (id)additionalOverridingCompilerArgumentsForSourceCodeBuildFileReference:(id)arg1;
- (void)setOverridingAdditionalCompilerArguments:(id)arg1 forSourceCodeBuildFileReference:(id)arg2;
- (id)additionalCompilerArgumentsForSourceCodeBuildFileReference:(id)arg1;
- (void)setAdditionalCompilerArguments:(id)arg1 forSourceCodeBuildFileReference:(id)arg2;
- (id)_pbxBuildFileForFileReference:(id)arg1;
- (id)linkedBinaries;
- (id)allProjectHeaderFiles;
- (id)allPrivateHeaderFiles;
- (id)allPublicHeaderFiles;
- (void)cachePublicPrivateProjectHeaders;
- (int)visibilityOfHeaderBuildFile:(id)arg1;
@property(readonly) BOOL containsOnlySwift;
@property(readonly) BOOL containsSwift;
@property(readonly) BOOL usesPackageProducts;
- (id)localizableSourceBuildFileReferences;
- (id)sourceCodeBuildFileReferences;
- (id)allResourceFilesBreakingOutLocalizableVariants:(BOOL)arg1;
- (id)allBuildFileReferences;
- (BOOL)configureToBuildMixedTargetWithDestinationGroup:(id)arg1 configureBridgingHeader:(BOOL)arg2 returningErrorString:(id *)arg3;
- (BOOL)isConfiguredToBuildMixedTarget;
- (BOOL)wouldBecomeMixedTargetAfterAddingTypes:(id)arg1;
- (BOOL)wouldBecomeMixedTargetAfterAddingFiles:(id)arg1;
- (BOOL)canUseBridgingHeader;
- (BOOL)isMixedTarget;
- (id)predominantSourceCodeLanguage;
- (BOOL)configureToBuildWithOptimizationProfileReturningErrorString:(id *)arg1;
- (BOOL)shouldEnablePGOForConfiguration:(id)arg1;
- (BOOL)isConfiguredToBuildWithOptimizationProfile;
- (void)removeDevelopmentAssetsPaths:(id)arg1;
- (void)addDevelopmentAssetsPaths:(id)arg1;
- (id)developmentAssetsPaths;
- (id)developmentAssetsPathsForConfigurationName:(id)arg1;
- (id)developmentAssetsPathsMacro;
- (void)setEnablePreviews;
- (void)updateSwiftCompilerTo:(id)arg1;
- (void)resetLastSwiftMigration;
- (void)updateLastSwiftMigrationToCurrent;
@property(readonly) BOOL lastSwiftMigrationIsCurrent;
- (void)updateLastSwiftUpdateVersionToCurrent;
@property(readonly) NSString *lastSwiftUpdateVersion;
- (void)convertToUseModernObjCSyntax;
- (BOOL)canEnableCodeGenerationForIBAndAssetCatalogsAndPerformChanges:(BOOL)arg1;
- (void)convertToEnableCodeGenerationForIBAndAssetCatalogs;
- (BOOL)canConvertToEnableCodeGenerationForIBAndAssetCatalogs;
- (void)convertToUseARC;
- (void)_updateSDKIfNeeded;
- (void)_updateSDKIfNeededInConfigurations:(id)arg1;
- (void)_updateMacDeploymentTargetIfNeeded:(id)arg1;
- (BOOL)canConvertToUseARC;
- (void)convertToBuild64bitOnly;
- (void)convertToUseClang;
- (void)removeFileReferenceFromBuildables:(id)arg1;
- (void)addFileReference:(id)arg1 toBuildablesContainingFileReference:(id)arg2;
@property(readonly, copy) NSString *compilerSpecificationIdentifier;
- (id)customDataStore;
- (id)supportedPlatformsForConfiguration:(id)arg1 workspaceArenaSnapshot:(id)arg2;
- (id)supportedPlatformsForBuildParameters:(id)arg1;
- (id)availableArchitecturesForConfiguration:(id)arg1 workspaceArenaSnapshot:(id)arg2;
- (id)availableArchitecturesForBuildParameters:(id)arg1;
@property(readonly, copy) NSString *defaultConfigurationName;
@property(readonly, copy) NSArray *availableConfigurationNames;
- (id)moduleNamesInWorkspace:(id)arg1;
@property(readonly) NSArray *buildableProducts;
@property(readonly) NSArray *buildables;
@property(readonly) id <IDEBuildable> primaryBuildable;
- (id)buildableForIdentifier:(id)arg1;
@property(readonly, copy) NSString *blueprintIdentifier;
@property(readonly, copy) NSString *localizedDescription;
- (id)blueprintProvider;
- (void)setName:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)ideModelObjectTypeIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)containsFilePath:(id)arg1;
- (BOOL)containsFileReference:(id)arg1;
- (id)_referenceForFileReference:(id)arg1;
@property(readonly) DVTToolsVersion *createdOnToolsVersion;
- (id)pathToLargestAssetCatalogAppIconPassingTest:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isXPCServiceTarget;
@property(readonly) BOOL isAutomatorActionTarget;
- (BOOL)_isProductBundleWithExtension:(id)arg1;
@property(readonly) NSString *iconPath;
@property(readonly) NSString *infoPlistFilePath;
@property(readonly) NSString *productModuleName;
@property(readonly) NSSet *namesOfLinkedBinaries;
- (id)specifiedBaseSDKForBuildConfigurationName:(id)arg1;
- (id)additionalSDKForBuildConfigurationName:(id)arg1;
- (id)baseSDKForBuildConfigurationName:(id)arg1;
- (id)deviceSDKFor:(id)arg1 SDKs:(id)arg2;
- (id)simulatorSDKFor:(id)arg1 SDKs:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1 project:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)supportedSourceListItemEditorClasses;
- (id)infoPlistFileReference;

// Remaining properties
@property(readonly, copy) IDEPIFGUID *PIFGUID;
@property(readonly) IDETypeIdentifier *activityLogDomainType;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) BOOL participatesInSchemeAutocreation;
@property(readonly) BOOL shouldHideInUI;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

