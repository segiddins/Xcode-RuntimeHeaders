//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UVKit/IDEIssueLogDataSource-Protocol.h>
#import <UVKit/IDESigningEditorConfigurationManagerProviderProtocol-Protocol.h>
#import <UVKit/NSObject-Protocol.h>

@class DVTFilePath, DVTSDK, DVTSourceCodeLanguage, DVTToolsVersion, IDEBuildParameters, IDEContainer, IDEFileReference, IDEGroup, IDEPIFGUID, IDESourceFileBuildInfo, IDETestBlueprintHostSettings, IDETypeIdentifier, IDEWorkspace, IDEWorkspaceArenaSnapshot, NSArray, NSDictionary, NSSet, NSString;
@protocol DVTMacroExpansion, IDEBlueprintProvider, IDEBuildable, IDECustomDataStoring, IDEProvisionable;

@protocol IDEBlueprint <NSObject, IDEIssueLogDataSource, IDESigningEditorConfigurationManagerProviderProtocol>
- (DVTFilePath *)entitlementsFilePathForBuildConfiguration:(NSString *)arg1;
- (void)addFileReference:(IDEFileReference *)arg1 toBuildablesContainingFileReference:(IDEFileReference *)arg2;
- (BOOL)containsFilePath:(DVTFilePath *)arg1;
- (BOOL)containsFileReference:(IDEFileReference *)arg1;
- (NSSet *)moduleNamesInWorkspace:(IDEWorkspace *)arg1;
@property(nonatomic, readonly) NSArray *buildableProducts;
@property(nonatomic, readonly) NSArray *buildables;
@property(nonatomic, readonly) id <IDEBuildable> primaryBuildable;
- (id <IDEBuildable>)buildableForIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) NSString *blueprintIdentifier;
@property(nonatomic, readonly) NSString *localizedDescription;
@property(nonatomic, readonly) NSString *name;
- (IDEContainer<IDECustomDataStoring> *)customDataStore;
- (IDEContainer<IDEBlueprintProvider> *)blueprintProvider;

@optional
@property(nonatomic, readonly) BOOL alwaysDisplayIssuesIndependentOfActiveSchemeFilter;
@property(nonatomic, readonly) NSString *dynamicVariantBlueprintIdentifier;
@property(nonatomic, readonly) BOOL isTransparentForRunDestinations;
- (BOOL)setEnabledForMacCatalyst:(BOOL)arg1 error:(id *)arg2;
- (void)removeFileReferenceFromBuildables:(IDEFileReference *)arg1;
@property(nonatomic, readonly) BOOL shouldHideInUI;
@property(nonatomic, readonly) BOOL participatesInSchemeAutocreation;
@property(nonatomic, readonly) IDETypeIdentifier *activityLogDomainType;
@property(nonatomic, readonly) IDEPIFGUID *PIFGUID;
@property(nonatomic, readonly) id <IDEProvisionable> provisionable;
- (IDESourceFileBuildInfo *)sourceFileBuildInfoForFileAtPath:(DVTFilePath *)arg1;
- (void)removeTagsFromKnownAssetTags:(NSSet *)arg1;
- (void)addTagsToKnownAssetTags:(NSSet *)arg1;
@property(nonatomic, readonly) NSSet *knownAssetTags;
@property(nonatomic, readonly) DVTToolsVersion *createdOnToolsVersion;
- (DVTFilePath *)infoDictionaryFilePathForConfiguration:(NSString *)arg1;
- (NSDictionary *)resolvedInfoDictionaryForBuildParameters:(IDEBuildParameters *)arg1;
- (NSDictionary *)infoDictionaryForConfiguration:(NSString *)arg1;
@property(nonatomic, readonly) DVTFilePath *bundleBaselineRecordFilePath;
- (NSString *)pathToLargestAssetCatalogAppIconPassingTest:(BOOL (^)(NSDictionary *))arg1;
- (BOOL)isUnitTest;
@property(nonatomic, retain) IDETestBlueprintHostSettings *testBlueprintUITestingTargetAppSettings;
@property(nonatomic, retain) IDETestBlueprintHostSettings *testBlueprintHostSettings;
- (NSArray<DVTMacroExpansion> *)additionalOverridingCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setOverridingAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSArray<DVTMacroExpansion> *)additionalCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSSet *)linkedBinaries;
- (NSSet *)allProjectHeaderFiles;
- (NSSet *)allPrivateHeaderFiles;
- (NSSet *)allPublicHeaderFiles;
- (NSArray *)allResourceFilesBreakingOutLocalizableVariants:(BOOL)arg1;
- (NSArray *)allBuildFileReferences;
@property(nonatomic, readonly) BOOL usesPackageProducts;
@property(nonatomic, readonly) BOOL containsOnlySwift;
@property(nonatomic, readonly) BOOL containsSwift;
- (NSArray *)localizableSourceBuildFileReferences;
- (NSArray *)sourceCodeBuildFileReferences;
- (DVTSourceCodeLanguage *)predominantSourceCodeLanguage;
- (BOOL)configureToBuildMixedTargetWithDestinationGroup:(IDEGroup *)arg1 configureBridgingHeader:(BOOL)arg2 returningErrorString:(id *)arg3;
- (BOOL)isConfiguredToBuildMixedTarget;
- (BOOL)wouldBecomeMixedTargetAfterAddingTypes:(NSArray *)arg1;
- (BOOL)wouldBecomeMixedTargetAfterAddingFiles:(NSArray *)arg1;
- (BOOL)canUseBridgingHeader;
- (BOOL)isMixedTarget;
- (BOOL)configureToBuildWithOptimizationProfileReturningErrorString:(id *)arg1;
- (BOOL)isConfiguredToBuildWithOptimizationProfile;
- (void)setEnablePreviews;
- (void)updateSwiftCompilerTo:(NSString *)arg1;
- (void)resetLastSwiftMigration;
- (void)updateLastSwiftMigrationToCurrent;
- (BOOL)lastSwiftMigrationIsCurrent;
- (void)convertToUseModernObjCSyntax;
- (void)convertToEnableCodeGenerationForIBAndAssetCatalogs;
- (BOOL)canConvertToEnableCodeGenerationForIBAndAssetCatalogs;
- (void)convertToUseARC;
- (BOOL)canConvertToUseARC;
- (void)convertToBuild64bitOnly;
- (void)convertToUseClang;
- (NSString *)deviceSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (NSString *)simulatorSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (DVTSDK *)specifiedBaseSDKForBuildConfigurationName:(NSString *)arg1;
- (DVTSDK *)baseSDKForBuildConfigurationName:(NSString *)arg1;
- (NSSet *)supportedPlatformsForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSSet *)supportedPlatformsForBuildParameters:(IDEBuildParameters *)arg1;
@property(nonatomic, readonly) NSString *compilerSpecificationIdentifier;
- (NSArray *)architecturesForBuildParameters:(IDEBuildParameters *)arg1;
- (NSArray *)availableArchitecturesForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSArray *)availableArchitecturesForBuildParameters:(IDEBuildParameters *)arg1;
@property(nonatomic, readonly) NSString *defaultConfigurationName;
@property(nonatomic, readonly) NSArray *availableConfigurationNames;

// Remaining properties
@property(nonatomic, readonly) BOOL unitTest;
@end

