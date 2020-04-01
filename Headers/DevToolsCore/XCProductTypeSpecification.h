//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class DVTMacroDefinitionTable, NSArray, NSDictionary, NSSet;

@interface XCProductTypeSpecification : XCSpecification
{
    DVTMacroDefinitionTable *_defaultMacros;
    DVTMacroDefinitionTable *_flattenedDefaultMacros;
    DVTMacroDefinitionTable *_overridingMacros;
    DVTMacroDefinitionTable *_flattenedOverridingMacros;
    NSSet *_allowedBuildPhaseClasses;
    NSSet *_allowedBuildPhaseIdentifiers;
    NSDictionary *_allowedFileTypesByBuildPhaseIdentifier;
    NSArray *_packageTypes;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (void).cxx_destruct;
- (void)addProductTypeSpecificArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)registerSwiftmoduleProductStructureCreatorsWithMacroExpansionScope:(id)arg1;
- (id)wrapperSubpathForSwiftmodule;
- (BOOL)shouldEmbedSwiftStandardLibraries;
- (id)createUniversalBinaryFromThinBinaries:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)macroExpansionScopeByAddingMacroDefinitionTablesToScope:(id)arg1;
- (void)addInstallNameLinkerFlagsWithMacroExpansionScope:(id)arg1;
- (void)addBaseLinkerFlagsWithMacroExpansionScope:(id)arg1;
- (id)linkerSpecificationForObjectFilesWithMacroExpansionScope:(id)arg1;
- (void)registerCoreProductStructureCreatorsWithMacroExpansionScope:(id)arg1;
- (void)registerProductWithLaunchServicesWithMacroExpansionScope:(id)arg1;
- (void)compileAuxiliaryFilesForVariant:(id)arg1 architecture:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)computeProductTouchActionWithMacroExpansionScope:(id)arg1;
- (void)changePermissionsOnProductWithMacroExpansionScope:(id)arg1;
- (void)_computeDependenciesForOwner:(id)arg1 group:(id)arg2 mode:(id)arg3 onFile:(id)arg4 withMacroExpansionScope:(id)arg5;
- (void)setAlternatePermissionsOnProductWithMacroExpansionScope:(id)arg1;
- (void)generateStubAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (void)generateInstallAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (BOOL)_shouldGenerateStubAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (BOOL)_shouldGenerateInstallAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (id)stripSymbolsOfLinkedProductWithMacroExpansionScope:(id)arg1;
- (BOOL)shouldStripSymbolsOfLinkedProductWithMacroExpansionScope:(id)arg1;
- (void)editSymbolsOfLinkedProductWithMacroExpansionScope:(id)arg1;
- (void)copyAsideProductWithMacroExpansionScope:(id)arg1;
- (void)_embedCompilerSanitizerLibraryFileNamed:(id)arg1 sanitizerTypeName:(id)arg2 withMacroExpansionScope:(id)arg3;
- (void)processUBSanitizerSupportWithMacroExpansionScope:(id)arg1;
- (void)processThreadSanitizerSupportWithMacroExpansionScope:(id)arg1;
- (void)processAddressSanitizerSupportWithMacroExpansionScope:(id)arg1;
- (void)generateAssetPackManifestWithMacroExpansionScope:(id)arg1;
- (void)processInfoPlistFileWithMacroExpansionScope:(id)arg1;
- (void)processInfoPlistNode:(id)arg1 toOutputNode:(id)arg2 pkgInfoNode:(id)arg3 withMacroExpansionScope:(id)arg4;
- (void)runWorkQueuePhase:(unsigned long long)arg1 perVariantWithMacroExpansionScope:(id)arg2;
- (id)runWorkQueuePhase:(unsigned long long)arg1 withMacroExpansionScope:(id)arg2;
- (void)finishPostProcessingProductWithMacroExpansionScope:(id)arg1;
- (void)beginPostProcessingProductWithMacroExpansionScope:(id)arg1;
- (void)performCodeSigningOfProductWithMacroExpansionScope:(id)arg1;
- (void)definePlatformSpecificAuxiliaryFilesWithMacroExpansionScope:(id)arg1;
- (void)_computeModuleMapProductDependenciesWithMacroExpansionScope:(id)arg1;
- (void)_defineModuleFilesWithMacroExpansionScope:(id)arg1;
- (id)moduleMapContentsWithMacroExpansionScope:(id)arg1 isFrameworkModule:(BOOL)arg2;
- (id)privateModuleMapPathWithMacroExpansionScope:(id)arg1;
- (id)moduleMapPathWithMacroExpansionScope:(id)arg1 isFrameworkModule:(char *)arg2;
- (void)defineAuxiliaryFilesWithMacroExpansionScope:(id)arg1;
- (id)scopeByAlteringPathsWhereNecessaryWithMacroExpansionScope:(id)arg1;
- (void)computeProductDependenciesWithMacroExpansionScope:(id)arg1;
- (void)initializeBuildSettingsWithMacroExpansionScope:(id)arg1;
- (id)computeCustomContextForMacroExpansionScope:(id)arg1;
- (id)initializeTemporaryBuildSettingsWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
@property(readonly) BOOL isUITest;
@property(readonly) BOOL isUnitTest;
- (id)additonalFileRefsForBuildPhase:(id)arg1 macroExpansionScope:(id)arg2;
- (id)additionalEntitlementsForMacroExpansionScope:(id)arg1;
- (id)requiredBuiltProductsDir;
- (id)buildPhaseInjectionsWhenEmbedding;
- (BOOL)isEmbeddable;
- (id)runpathSearchPathForEmbeddedFrameworks;
- (BOOL)canEmbedCompilerSanitizerLibraries;
- (id)iconNamePrefix;
@property(readonly) BOOL canDisableBitcodeDespitePlatform;
@property(readonly) BOOL validateEmbeddedBinaries;
@property(readonly) BOOL wantsSigningEditing;
@property(readonly) BOOL wantsBundleIdentifierEditing;
@property(readonly) BOOL provisioningProfileRequired;
@property(readonly) BOOL provisioningProfileSupported;
- (id)infoPlistAdditions;
@property(readonly) BOOL isCapabilitiesUnsupported;
@property(readonly) BOOL wantsInfoEditorHidden;
@property(readonly) BOOL wantsSimpleTargetEditing;
- (BOOL)hasInfoPlist;
- (id)defaultPackageType;
- (id)packageTypes;
- (id)allowedFileTypesForBuildPhaseIdentifier:(id)arg1;
- (BOOL)allowsBuildPhaseWithIdentifier:(id)arg1;
- (id)allowedBuildPhaseClasses;
- (id)overridingMacros;
- (id)defaultMacros;
- (id)defaultTargetName;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

