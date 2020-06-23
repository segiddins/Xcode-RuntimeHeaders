//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXContainer.h>

#import <DevToolsCore/PBXChangeNotification-Protocol.h>
#import <DevToolsCore/PBXContainerItemChangeNotification-Protocol.h>
#import <DevToolsCore/XCCompatibilityChecking-Protocol.h>
#import <DevToolsCore/XCConfigurationInspectables-Protocol.h>
#import <DevToolsCore/XCConfigurationListOwners-Protocol.h>

@class DVTMacroDefinitionTable, DVTWeakInterposer, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSTimer, PBXFileReference, PBXGroup, PBXProjectAutoregenerator, XCArchiveFormat, XCConfigurationList, XCFileSystemWatcher, XCProjectHeadermapCreationInfo, XCRoots;

@interface PBXProject : PBXContainer <PBXChangeNotification, PBXContainerItemChangeNotification, XCCompatibilityChecking, XCConfigurationInspectables, XCConfigurationListOwners>
{
    NSMutableDictionary *_attributes;
    unsigned long long _savedArchiveVersion;
    PBXFileReference *_projectFileRef;
    NSMutableArray *_targets;
    NSTimer *_autosaveTimer;
    NSDate *_projectArchiveModTime;
    NSDate *_userSettingsModTime;
    NSString *_developmentRegion;
    NSMutableArray *_knownRegions;
    NSMutableArray *_knownPlatforms;
    NSString *_projectDirPath;
    NSMutableArray *_addToTargets;
    NSMutableDictionary *_addToTargetsDictionary;
    PBXGroup *_productRefGroup;
    long long _nIndexUsers;
    XCConfigurationList *_buildConfigurationList;
    DVTMacroDefinitionTable *_userBuildSettings;
    DVTMacroDefinitionTable *_projectOverridingBuildSettings;
    NSMapTable *_projectReferences;
    NSMutableArray *_packageReferences;
    XCFileSystemWatcher *_fsWatcher;
    NSString *_cachedStandardizedProjectDirectory;
    NSString *_activeBuildConfigurationName;
    NSMutableArray *_availableArchitectures;
    NSMutableArray *_availableBuildConfigurationNames;
    NSMutableDictionary *_cachedMacroExpansionScopes;
    NSMutableDictionary *_cachedInspectionInfoContexts;
    NSMutableDictionary *_ignoreBreakpointsInProjectsDict;
    NSSet *_currentFeatureUsage;
    XCArchiveFormat *_preferredProjectFormat;
    XCRoots *_roots;
    DVTWeakInterposer *_lastSelectedDevice_dvtWeakInterposer;
    int _currentArchivePriority;
    struct {
        unsigned int readOnly:1;
        unsigned int wantsIndex:1;
        unsigned int dependencyGraphBearTrapping:1;
        unsigned int autosavingSuspended:1;
        unsigned int projectClosing:1;
        unsigned int projectClosed:1;
        unsigned int forceWriteToFileSystem:1;
        unsigned int RESERVED:1;
    } _pFlags;
    BOOL _endOfEventSchedulePending;
    BOOL _needsToPostItemsChangedNotification;
    BOOL _hasScannedForEncodings;
    BOOL _generated;
    XCProjectHeadermapCreationInfo *_cachedHeadermapCreationInfo;
    NSSet *_knownAssetTags;
    PBXProjectAutoregenerator *_projectAutoregenerator;
}

+ (void)setRunloopModesForProjectItemChangedPerformer:(id)arg1;
+ (id)runloopModesForProjectItemChangedPerformer;
+ (void)_autosave:(id)arg1;
+ (BOOL)_projectIsOpen:(id)arg1;
+ (id)archivableUserRelationships;
+ (id)archivableUserAttributes;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)archiveNameForKey:(id)arg1;
+ (void)setAutosavingEnabled:(BOOL)arg1;
+ (BOOL)autosavingEnabled;
+ (BOOL)usePerConfigurationBuildLocations;
+ (id)macroExpansionScopeForBuiltinPropertiesInPlatformDomain:(id)arg1;
+ (void)propagateSourceTreeDisplayNamesToUserDefaults;
+ (id)sourceTreeDisplayNamesDictionary;
+ (id)applicationPreferencesBuildSettings;
+ (id)_formatForMissingPreferredProjectFormatAttribute;
+ (id)preferrableProjectFormats;
+ (BOOL)checkVersion:(unsigned long long)arg1 forPListUnarchiver:(id)arg2;
+ (id)unarchivingFormatForVersion:(unsigned long long)arg1 forPListUnarchiver:(id)arg2;
+ (id)projectWithFile:(id)arg1;
+ (id)projectWithFile:(id)arg1 errorHandler:(id)arg2;
+ (id)projectWithFile:(id)arg1 errorHandler:(id)arg2 readOnly:(BOOL)arg3;
+ (id)projectWrapperPathForPath:(id)arg1;
+ (BOOL)_isAllowedToWriteToUserFile:(id)arg1 inWrapperAtPath:(id)arg2;
+ (BOOL)_isAllowedToWriteToProjectFile:(id)arg1 inWrapperAtPath:(id)arg2;
+ (BOOL)_isAllowedToWriteToFile:(id)arg1 inWrapperAtPath:(id)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingPreferredFormatConflicts;
+ (id)formatForArchiveVersion:(unsigned long long)arg1;
+ (id)_formatForIdentifier:(id)arg1;
+ (id)_latestKnownFormat;
+ (id)_defaultFormat;
+ (id)_xcode11_0Format;
+ (id)_xcode10_0Format;
+ (id)_xcode9_3Format;
+ (id)_xcode9_0Format;
+ (id)_xcode8_0Format;
+ (id)_xcode6_3Format;
+ (id)_xcode3_2Format;
+ (id)_xcode3_1Format;
+ (id)_xcode3_0Format;
+ (id)_xcode3_0_Preview_Format;
+ (id)_xcode2_4Format;
+ (id)supportedProjectFormats;
+ (id)_projectFormatsByIdentifier;
+ (id)openProjects;
+ (id)defaultUserSettingsPathWithPath:(id)arg1;
+ (id)userSettingsPathWithPath:(id)arg1;
+ (id)projectFilePathWithPath:(id)arg1;
+ (id)knownProjectWrapperExtensions;
+ (BOOL)isProjectWrapperExtension:(id)arg1;
+ (id)projectWrapperExtension;
+ (id)_projectArchiveFormatSupportingFeatures:(id)arg1;
+ (id)allowedProjectArchiveVersions;
+ (id)defaultKnownPlatforms;
+ (id)defaultKnownRegions;
+ (id)appleScriptFileTypes;
+ (id)linkableFileTypes;
+ (id)rezzableFileTypes;
+ (id)sourceFileTypes;
+ (id)headerFileTypes;
+ (void)renamedFileAtPath:(id)arg1 to:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4 error:(id)arg5;
@property(readonly) NSDate *projectArchiveModTime; // @synthesize projectArchiveModTime=_projectArchiveModTime;
@property(readonly) PBXProjectAutoregenerator *projectAutoregenerator; // @synthesize projectAutoregenerator=_projectAutoregenerator;
- (void).cxx_destruct;
- (void)collectMessageTracerStatisticsIntoDictionary:(id)arg1;
- (void)cancelPendingActivities;
- (BOOL)_hasScannedForEncodings;
- (void)_setHasScannedForEncodings:(BOOL)arg1;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (id)destinationPath:(id)arg1 forSourcePath:(id)arg2 ofType:(id)arg3 forFileManager:(id)arg4;
- (BOOL)installSourcesToPath:(id)arg1;
- (void)didFinishChangingProject;
- (void)willBeginChangingProject;
- (void)willChange;
- (void)willChangeWithArchivePriority:(int)arg1;
- (void)item:(id)arg1 willChangeWithArchivePriority:(int)arg2;
- (void)_scheduleEndOfEventProcessing:(int)arg1;
- (void)_processEndOfEvent;
- (BOOL)forceWriteToFileSystem;
- (void)setForceWriteToFileSystem:(BOOL)arg1;
- (BOOL)autosavingSuspended;
- (void)setAutosavingSuspended:(BOOL)arg1;
- (void)_startAutoSaveTimer;
- (void)_endAutoSaveTimer;
- (id)terminationDisablingReason;
- (void)appendSpotlightDescriptionToString:(id)arg1;
- (void)insertRootObject:(id)arg1 intoContainer:(id)arg2;
- (id)gidCommentForArchive;
- (void)_setUserBuildSettings:(id)arg1;
- (id)_userBuildSettings;
- (void)_setBuildConfigurationList:(id)arg1;
- (id)_projectReferences;
- (void)_setProjectReferences:(id)arg1;
- (id)_attributes;
- (BOOL)shouldArchiveAttributes;
- (void)_cleanupInvalidVariantReferencesForGlobalRegion:(id)arg1;
- (void)_cleanupDanglingBuildFileReferences;
- (id)_findOrCreateRecoveredReferencesGroup;
- (id)_findOrCreateTopLevelGroupWithNameTemplate:(id)arg1;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)_prepareForUnarchiving;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)createDefaultProjectSettingsConfigurationsIfNeeded;
- (BOOL)shouldArchiveKnownPlatforms;
- (BOOL)shouldArchiveKnownRegions;
- (BOOL)shouldArchiveDevelopmentRegion;
- (void)addPlatform:(id)arg1;
- (id)knownPlatforms;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (id)knownRegions;
- (void)setDevelopmentRegion:(id)arg1;
- (id)developmentRegion;
- (id)createFrameworkReferenceGroupIfNeeded;
- (void)setProductReferenceGroup:(id)arg1;
- (id)productReferenceGroup;
- (id)fileSystemWatcher;
- (id)referencedProjects;
- (void)removeProjectReference:(id)arg1;
- (id)addProjectReferenceForProject:(id)arg1;
- (void)addProjectReference:(id)arg1;
- (id)productsForProject:(id)arg1;
- (id)productsForProjectReference:(id)arg1;
- (id)projectReferenceForProject:(id)arg1;
- (id)projectReferenceForPath:(id)arg1;
- (id)projectReferences;
- (id)relevantBuildPropertyDomainSpecificationsWithCoreFileTypes:(id)arg1;
- (id)_buildConfigurationOwnersInProject;
- (void)updateDefaultConfigurationToConfigurationNamed:(id)arg1;
- (void)moveBuildConfigurationsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)renameBuildConfigurationNamed:(id)arg1 to:(id)arg2;
- (id)duplicateBuildConfigurationNamed:(id)arg1;
- (void)deleteBuildConfigurationNamed:(id)arg1;
- (void)_didChangeConfigurationNames;
- (void)_willChangeConfigurationNames;
- (id)defaultConfigurationName;
- (void)setDefaultConfigurationName:(id)arg1;
- (id)availableBuildConfigurationNames;
- (id)bestGuessBuildConfigurationNameForProjectModel;
- (id)bestGuessArchitectureForProjectModel;
- (id)bestGuessBuildParametersForProjectModel;
- (void)removePackageReference:(id)arg1;
- (void)addPackageReference:(id)arg1;
- (void)insertPackageReferences:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)packageReferences;
- (id)targetsAcceptingAnyFileTypes;
- (id)targetsAcceptingFileType:(id)arg1;
- (void)setAddToTargets:(id)arg1 forType:(id)arg2;
- (id)addToTargetsForType:(id)arg1;
- (void)setAddToTargets:(id)arg1;
- (id)addToTargets;
- (id)allTargetsInDependencyOrder;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)insertTargets:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)targetWithGlobalID:(id)arg1;
- (id)targetNamed:(id)arg1;
@property(readonly) NSArray *targets;
- (id)baseSDKVersionsForAllConfigurations;
- (BOOL)setIPhoneOSDeploymentTargetVersionForAllConfigurations:(id)arg1;
- (id)iPhoneOSDeploymentTargetVersionsForAllConfigurations;
- (BOOL)setMacOSDeploymentTargetVersionForAllConfigurations:(id)arg1;
- (id)macOSDeploymentTargetVersionsForAllConfigurations;
- (BOOL)setDeploymentTargetVersionForAllConfigurations:(id)arg1 forPlatform:(id)arg2;
- (id)deploymentTargetVersionsForAllConfigurationsForPlatform:(id)arg1;
- (id)intermediatesDirectory;
- (id)intermediatesDirectoryForBuildParameters:(id)arg1;
- (id)productDirectory;
- (id)productDirectoryForBuildParameters:(id)arg1;
- (id)intermediatesLocation;
- (id)intermediatesLocationForBuildParameters:(id)arg1;
- (id)builtProductsLocation;
- (id)builtProductsLocationForBuildParameters:(id)arg1;
- (id)fallbackIntermediatesDirectoryForConfigurationNamed:(id)arg1;
- (id)fallbackProductDirectoryForConfigurationNamed:(id)arg1;
- (void)discardCachedHeadermapCreationInfo;
- (void)discardAllCachedContexts;
- (void)discardCachedPropertyInfoContextForConfigurationNamed:(id)arg1;
- (id)cachedPropertyInfoContext;
- (id)cachedPropertyInfoContextForConfigurationNamed:(id)arg1;
- (id)createPropertyInfoContextWithBuildAction:(id)arg1 configurationName:(id)arg2;
- (void)discardCachedConfigurationInspectionContextForConfigurationNamed:(id)arg1;
- (void)discardAllCachedConfigurationInspectionContexts;
- (id)configurationInspectionContextForConfigurationNamed:(id)arg1;
- (id)allBuildSettingNamesWithBuildParameters:(id)arg1;
- (id)expandedStringListValueForBuildSetting:(id)arg1 forBuildParameters:(id)arg2;
- (id)evaluatedStringValueForBuildSetting:(id)arg1 forBuildParameters:(id)arg2;
- (id)absoluteExpandedPathForString:(id)arg1 forBuildParameters:(id)arg2;
- (id)expandedValueForString:(id)arg1 forBuildParameters:(id)arg2;
- (id)configNameForBuildParamters:(id)arg1;
- (id)cachedMacroExpansionScopeForBuildParameters:(id)arg1;
- (id)cachedHeadermapCreationInfo;
- (void)discardCachedMacroExpansionScopeForConfigurationNamed:(id)arg1;
- (void)discardAllCachedMacroExpansionScopes;
- (id)cachedMacroExpansionScopeForWorkspaceArenaSnapshot:(id)arg1 configurationNamed:(id)arg2;
- (id)createMacroExpansionScopeForWorkspaceArenaSnapshot:(id)arg1 configurationNamed:(id)arg2;
- (id)projectDirectory;
- (id)dynamicallyComputedProjectwideMacrosForConfigurationNamed:(id)arg1;
- (void)noteBuildSettingsDidChangeForConfigurationNamed:(id)arg1;
- (void)notifyThatBuildSettingsDidChangeForConfigurationNamed:(id)arg1;
- (void)invalidateCachesBecauseBuildSettingsDidChangeForConfigurationNamed:(id)arg1 projectFileChange:(BOOL)arg2;
- (id)userMacros;
- (void)macroDefinitionTable:(id)arg1 didSetValue:(id)arg2 forMacroName:(id)arg3 conditionSet:(id)arg4;
- (void)macroDefinitionTable:(id)arg1 willSetValue:(id)arg2 forMacroName:(id)arg3 conditionSet:(id)arg4;
@property(readonly) NSString *configurationTableDebugLabel;
- (id)buildConfigurationList;
@property(readonly) NSString *name;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)writeToFileSystemProjectFile:(BOOL)arg1 userFile:(BOOL)arg2 checkNeedsRevert:(BOOL)arg3;
- (BOOL)_writeToFileSystem;
- (BOOL)_writeToFileSystemProjectFile:(BOOL)arg1 userFile:(BOOL)arg2 checkNeedsRevert:(BOOL)arg3;
- (BOOL)writeToFile:(id)arg1 projectFile:(BOOL)arg2 userFile:(BOOL)arg3 outResultNotification:(id *)arg4;
- (BOOL)needsRevert;
- (void)_setCurrentArchivePriority:(int)arg1;
- (int)_currentArchivePriority;
- (BOOL)needsArchive;
- (id)userSettingsPath;
- (id)projectFileRef;
- (id)_projectRoot;
- (id)_projectRoots;
- (void)_setProjectRoot:(id)arg1;
- (id)roots;
- (void)setProjectRoots:(id)arg1;
- (id)projectRoots;
- (id)projectFilePath;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (void)_setCompatibilityVersion:(id)arg1;
- (id)_compatibilityVersion;
- (id)savedProjectFormat;
- (void)setPreferredProjectFormat:(id)arg1;
- (id)preferredProjectFormat;
- (void)_updateCurrentFeatureUsage;
- (id)_featuresInUse;
- (void)_setCurrentFeatureUsage:(id)arg1;
- (id)_currentFeatureUsage;
- (id)preferredFormatConflicts;
- (void)removeKnownAssetTag:(id)arg1;
- (void)addKnownAssetTag:(id)arg1;
- (id)knownAssetTags;
- (void)removeBuildSystemType;
@property(copy) NSString *buildSystemType;
- (void)setClassPrefix:(id)arg1;
- (id)classPrefix;
- (void)setOrganizationName:(id)arg1;
- (id)organizationName;
@property(copy) NSString *lastSwiftMigration;
@property(copy) NSString *lastSwiftUpdateCheck;
- (void)setLastUpgradeCheck:(id)arg1;
- (id)lastUpgradeCheck;
- (void)setBuildIndependentTargetsInParallel:(BOOL)arg1;
- (BOOL)buildIndependentTargetsInParallel;
- (id)attributes;
- (BOOL)allowsEditingOfChildren;
- (BOOL)isClosed;
- (void)close;
- (void)removeReference:(id)arg1;
- (id)unarchivingFormatForVersion:(unsigned long long)arg1 forPListUnarchiver:(id)arg2;
- (id)currentFormatForPListArchiver:(id)arg1;
- (BOOL)_shouldUpgradeSavedArchiveVersion;
- (void)_setSavedArchiveVersion:(unsigned long long)arg1;
- (unsigned long long)savedArchiveVersion;
- (BOOL)canWriteToAuxiliaryProjectFileWithName:(id)arg1;
- (BOOL)canWriteToUserFile;
- (BOOL)canWriteToProjectFile;
- (BOOL)mayBeUnwritableProject;
- (BOOL)isGenerated;
- (void)_setReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (id)init;
- (void)buildConfiguration:(id)arg1 willBeRemovedFromTarget:(id)arg2;
- (void)buildConfiguration:(id)arg1 wasAddedToTarget:(id)arg2;
- (void)buildPhase:(id)arg1 willBeRemovedFromTarget:(id)arg2;
- (void)buildPhase:(id)arg1 wasAddedToTarget:(id)arg2;
- (void)group:(id)arg1 willAddChild:(id)arg2;
- (void)buildFileDidReorder:(id)arg1 oldIndex:(long long)arg2 newIndex:(long long)arg3;
- (void)buildFileWillBeRemoved:(id)arg1;
- (void)buildFileWasAdded:(id)arg1;
- (void)packageReferenceWillBeRemoved:(id)arg1;
- (void)packageReferenceWasAdded:(id)arg1;
- (void)targetWillBeRemoved:(id)arg1;
- (void)targetWasAdded:(id)arg1;
- (void)referenceWasRemoved:(id)arg1;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (void)referenceWasRenamed:(id)arg1;
- (void)referenceWasConfigured:(id)arg1;
- (void)referenceWasAdded:(id)arg1;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2 forBuildConfigurationNamed:(id)arg3;
- (id)preflightRenameProjectFrom:(id)arg1;
- (void)renameFileAtPath:(id)arg1 to:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (BOOL)canRenameFileAtPath:(id)arg1 to:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

