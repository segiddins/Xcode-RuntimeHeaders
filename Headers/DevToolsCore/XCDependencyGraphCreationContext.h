//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PBXTargetBuildContext, XCDependencyNode;

@interface XCDependencyGraphCreationContext : NSObject
{
    PBXTargetBuildContext *_buildContext;
    NSString *_productBundleIdentifier;
    BOOL _hasSetUpWellKnownNodes;
    XCDependencyNode *_sourceDirectory;
    XCDependencyNode *_sourceInfoPlistFile;
    XCDependencyNode *_derivedFilesDir;
    XCDependencyNode *_productDirectory;
    XCDependencyNode *_productWrapperDir;
    XCDependencyNode *_productMainArtifact;
    XCDependencyNode *_productInfoPlistFile;
    XCDependencyNode *_productPkgInfoFile;
    XCDependencyNode *_productMainExecutableFile;
    XCDependencyNode *_productResourcesDir;
    XCDependencyNode *_productOnDemandResourcesDir;
    NSMutableDictionary *_assetPackConstructionInfosByTagSet;
    NSMapTable *_derivedNodePerFileCompilerFlags;
    NSMutableArray *_validityCheckingBlocks;
    BOOL _needsVFSConstruction;
    BOOL _hasReportedEmptyBundleIdentifierWithAssetPacks;
    NSMutableSet *_outputNodesOfGeneratedHeaders;
}

- (void).cxx_destruct;
@property BOOL hasReportedEmptyBundleIdentifierWithAssetPacks; // @synthesize hasReportedEmptyBundleIdentifierWithAssetPacks=_hasReportedEmptyBundleIdentifierWithAssetPacks;
@property(nonatomic) BOOL needsVFSConstruction; // @synthesize needsVFSConstruction=_needsVFSConstruction;
@property(readonly, nonatomic) NSMutableSet *outputNodesOfGeneratedHeaders; // @synthesize outputNodesOfGeneratedHeaders=_outputNodesOfGeneratedHeaders;
- (void)debugPrintWellKnownDependencyNodes;
- (id)dependencyGraphCreationMetric;
- (id)dependencyGraphCreationTimingSection;
- (id)allAssetPackConstructionInfos;
- (id)assetPackConstructionInfoForAssetTagSet:(id)arg1;
- (id)productOnDemandResourcesDirectory;
- (id)localizedResourcesDirectoryForDirectory:(id)arg1 region:(id)arg2;
- (id)productResourcesDirectory;
- (id)productMainExecutableFile;
- (id)productPkgInfoFile;
- (id)productInfoPlistFile;
- (id)productMainArtifact;
- (id)productWrapperDirectory;
- (id)productDirectory;
- (id)derivedFilesDirectory;
- (id)sourceInfoPlistFile;
- (id)sourceDirectory;
- (void)removeAllCompilerRequestedLinkerParameters;
- (id)compilerRequestedLinkerParameters;
- (void)setHasReportedNonSupportOfInterfacer:(BOOL)arg1;
- (BOOL)hasReportedNonSupportOfInterfacer;
- (id)preprocessingInfoDictionaries;
- (void)generateHeadermapFilesWithMacroExpansionScope:(id)arg1;
- (void)defineFileContents:(id)arg1 forAuxiliaryFileAtPath:(id)arg2 withPosixPermissions:(unsigned long long)arg3;
- (void)generateCompilationDatabasesWithMacroExpansionScope:(id)arg1;
- (id)pathToCompilationDatabaseContainingCommandsOfToolWithIdentifier:(id)arg1 outputDirectory:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)pathToCompilationDatabaseContainingCommandsOfToolsWithIdentifiers:(id)arg1 outputDirectory:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)findDependencyNodeForPath:(id)arg1;
- (id)fileContentsForAuxiliaryFileAtPath:(id)arg1;
- (id)compilerSpecificationWithIdentifier:(id)arg1;
- (BOOL)effectiveSDKPackageIsCompatibleWithCommandLineTool:(id)arg1 forFileAtPath:(id)arg2;
- (void)setHeadermap:(id)arg1 forIdentifier:(id)arg2;
- (id)headermapForIdentifier:(id)arg1;
- (id)_searchPathsForCurrentStateAndOtherFlagsBuildSettingsName:(id)arg1 builtinSystemHeaderSearchPaths:(id)arg2 builtinFrameworkSearchPaths:(id)arg3 withMacroExpansionScope:(id)arg4;
- (id)filePathListWithIdentifier:(id)arg1;
- (BOOL)shouldCancelDependencyGraphCreation;
- (id)dependencyGraphParameters;
- (id)createCommandWithPath:(id)arg1 withMacroExpansionScope:(id)arg2 ruleInfo:(id)arg3;
- (void)_setMacroExpansionScope:(id)arg1;
- (id)sceneKitCommands;
- (id)productArtifactNodes;
- (id)embeddedFileNodes;
- (id)kernelModuleObjectFiles;
- (id)outputNodesOfCommandsWhichModifyLinkedBinaries;
- (id)strippedBinaryNodes;
- (id)generatedDsymFiles;
- (id)nonMasterObjectFiles;
- (unsigned long long)currentPhaseNumber;
- (void)setAutoIncrementsPhaseNumber:(BOOL)arg1;
- (void)incrementCurrentPhaseNumber;
- (void)setHeadermapToolInvocation:(id)arg1 forFilePath:(id)arg2;
- (id)buildFileRefForPath:(id)arg1;
- (unsigned long long)countForBuildFileBaseName:(id)arg1;
- (void)addCompilerRequestedLinkerParameters:(id)arg1;
- (id)effectiveSearchPathsForSearchPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)languageDialectsUsed;
- (id)preprocessingInfoForIndexingSourceFilesWithCompiler:(id)arg1 languageDialect:(id)arg2;
- (int)headerDependenciesMethod;
- (id)buildInfoForFileAtPath:(id)arg1;
- (id)searchPathsForRezWithMacroExpansionScope:(id)arg1;
- (id)effectiveRezSearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveLibrarySearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveSystemFrameworkSearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveFrameworkSearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveSystemHeaderSearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveUserHeaderSearchPathsWithMacroExpansionScope:(id)arg1;
- (id)effectiveHeaderSearchPathsWithMacroExpansionScope:(id)arg1;
- (void)addDerivedFileCache:(id)arg1;
- (void)removeSearchPathArgumentsFromArrayOfCommandLineArguments:(id)arg1;
- (void)setConstantFlags:(id)arg1 forBuildToolWithIdentifier:(id)arg2;
- (id)constantFlagsForBuildToolWithIdentifier:(id)arg1;
- (id)baseDirectoryPath;
- (void)setCopiedFilePath:(id)arg1 forSourceFilePath:(id)arg2;
- (void)checkDeploymentTargetAgainstSDKForCommandLineTool:(id)arg1;
- (BOOL)eventNamed:(id)arg1 hasOccurredForEventType:(id)arg2;
- (void)rememberThatEventNamed:(id)arg1 hasOccurredForEventType:(id)arg2;
- (void)setResolvedExecutablePath:(id)arg1 forToolSpecification:(id)arg2 executable:(id)arg3;
- (id)resolvedExecutablePathForToolSpecification:(id)arg1 executable:(id)arg2;
- (id)commandLineToolSearchPath;
- (id)naturalPathForPath:(id)arg1;
- (id)invokeTask:(id)arg1 forInputs:(id)arg2 withMacroExpansionScope:(id)arg3 options:(id)arg4;
- (id)invokeTask:(id)arg1 forInputs:(id)arg2 withMacroExpansionScope:(id)arg3 optionTable:(id)arg4;
- (id)newMacroDefinitionTableWithCommonMacrosForInputFile:(id)arg1 label:(id)arg2 macroExpansionScope:(id)arg3;
- (id)uniqueOutputBaseNameForInputFilePath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)additionalInfoPlistContentFileNodes;
- (void)defineFileContents:(id)arg1 forAuxiliaryFileAtPath:(id)arg2;
- (id)absolutePathForPath:(id)arg1;
- (void)createProductStructureFileAtNode:(id)arg1 withContents:(id)arg2;
- (void)createProductStructureSymlinkAtNode:(id)arg1 toPath:(id)arg2;
- (void)createProductStructureDirectoryForNode:(id)arg1;
- (id)createCommandWithRuleInfo:(id)arg1 commandPath:(id)arg2 arguments:(id)arg3 forNode:(id)arg4 toolSpecification:(id)arg5 withMacroExpansionScope:(id)arg6;
- (id)createCommandOfClass:(Class)arg1 withIdentifer:(id)arg2 inMacroExpansionScope:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (id)createDirectoryAtPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)makeSymlinkToFileAtPath:(id)arg1 atPath:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)copyAndRemoveArchitectures:(id)arg1 fromFileAtPath:(id)arg2 outputPath:(id)arg3 macroExpansionScope:(id)arg4;
- (id)dittoFileAtPath:(id)arg1 toPath:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)copyFileAtPath:(id)arg1 toPath:(id)arg2 ruleName:(id)arg3 withMacroExpansionScope:(id)arg4;
- (id)touchFileAtPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)addNodeToClean:(id)arg1;
- (void)addPath:(id)arg1 toFilePathListWithIdentifier:(id)arg2;
- (void)addProductNode:(id)arg1;
- (id)productBundleIdentifier;
- (void)addDependencyAnalysisBuildCommandOnlyNoticeMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildOnlyNoticeMessageFormat:(id)arg1;
- (void)addDependencyAnalysisNoticeMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildCommandOnlyWarningMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildOnlyWarningMessageFormat:(id)arg1;
- (void)addDependencyAnalysisWarningMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildCommandOnlyErrorMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildOnlyErrorMessageFormat:(id)arg1;
- (void)addDependencyAnalysisErrorMessageFormat:(id)arg1;
- (void)setGccLanguageDialect:(id)arg1;
- (id)gccLanguageDialect;
- (id)virtualDependencyNodeForIdentifier:(id)arg1;
- (id)dependencyNodeForPath:(id)arg1;
- (id)dependencyNodeForPath:(id)arg1 relativeToNode:(id)arg2;
- (void)setGeneratedKextInfoFile:(id)arg1;
- (id)generatedKextInfoFile;
- (void)setCompilerMandatedLinkerPriority:(unsigned long long)arg1;
- (unsigned long long)compilerMandatedLinkerPriority;
- (void)setCompilerMandatedLinker:(id)arg1;
- (id)compilerMandatedLinker;
- (void)setCompilerMandatedLibrarianPriority:(unsigned long long)arg1;
- (unsigned long long)compilerMandatedLibrarianPriority;
- (void)setCompilerMandatedLibrarian:(id)arg1;
- (id)compilerMandatedLibrarian;
- (void)setCompilerDriverForLinking:(id)arg1;
- (id)compilerDriverForLinking;
- (void)clearAllCompilersUsedForAllArchitectures;
- (id)compilersUsedForArchitecture:(id)arg1;
- (id)objectFiles;
- (id)derivedNodePerFileCompilerFlags;
- (id)universalBinariesByVariant;
- (id)thinLinkedBinariesByVariant;
- (id)resources;
- (id)privateHeaders;
- (id)publicHeaders;
- (void)setLastGccLanguageDialectUsed:(id)arg1;
- (id)lastGccLanguageDialectUsed;
- (void)setSwiftABIVersion:(id)arg1;
- (id)swiftABIVersion;
- (void)setSwiftUsed:(BOOL)arg1;
- (BOOL)swiftUsed;
- (void)setCPlusPlusUsed:(BOOL)arg1;
- (BOOL)cPlusPlusUsed;
- (id)platformDomain;
- (id)validityCheckingBlocks;
- (void)addValidityCheckingBlock:(CDUnknownBlockType)arg1;
- (id)buildOperationContext;
- (id)targetSnapshot;
- (id)buildContext;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithBuildContext:(id)arg1;

@end

