//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

@class PBXReference;

@interface PBXNativeTarget : PBXTarget
{
    PBXReference *_infoPlistRef;
}

+ (id)buildSystemDefaultMacros;
- (void).cxx_destruct;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWasRenamed:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (void)referenceWasAdded:(id)arg1;
- (void)willChange;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (BOOL)shouldArchiveProductSettingsXML;
- (BOOL)isNative;
- (void)_infoPlistReferenceDidMove:(id)arg1;
- (id)infoPlistFilePath;
- (id)infoPlistFilePathForConfigurationNamed:(id)arg1;
- (id)fullProductNameForConfigurationNamed:(id)arg1;
- (id)fullProductNameForBuildParameters:(id)arg1;
- (id)intermediatesLocationForBuildParameters:(id)arg1;
- (id)builtProductsLocationForBuildParameters:(id)arg1;
- (void)_addDeploymentTargetOverridesForScope:(id)arg1 toTable:(id)arg2;
- (id)dynamicallyComputedOverridingTargetMacrosForScope:(id)arg1 withBuildAction:(id)arg2;
- (void)addBandIMacrosToDynamicallyComputedTargetMacros:(id)arg1 withAction:(id)arg2 andConfigurationName:(id)arg3;
- (id)relevantBuildPropertyDomainSpecificationsWithCoreFileTypes:(id)arg1;
- (id)targetTypeDisplayName;
- (BOOL)canPackageHeaders;
- (BOOL)canInstallHeaders;
- (BOOL)wantsProductSettings;
- (BOOL)hasUserConfigurableBuildRules;
- (id)productReferenceExpectedFileTypeForConfigurationNamed:(id)arg1;
- (BOOL)productReferenceIsExecutable;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2 baseDirectoryPath:(id)arg3;
- (void)_updateObservingInfoPlistReference;
- (Class)dependencyGraphSnapshotClass;

@end

