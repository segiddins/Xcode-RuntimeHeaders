//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXBundleProductType.h>

@interface PBXXCTestBundleProductType : PBXBundleProductType
{
}

- (void)addProductTypeSpecificArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (BOOL)shouldEmbedSwiftStandardLibraries;
- (id)computeCustomContextForMacroExpansionScope:(id)arg1;
- (id)macroExpansionScopeByAddingMacroDefinitionTablesToScope:(id)arg1;
- (void)_addAdditionalTestingSearchPathsToMacroDefinitionTable:(id)arg1 usingScope:(id)arg2;
- (void)_addSettingsForTestHost:(id)arg1 toMacroDefinitionTable:(id)arg2 usingScope:(id)arg3;
- (id)_pluginDirectoryForTestHost:(id)arg1 macroExpansionScope:(id)arg2;
- (id)_adjustedTestHostFromOriginalTestHost:(id)arg1 addingOverridesToMacroDefinitionTable:(id)arg2 macroExpansionScope:(id)arg3;
- (id)additionalEntitlementsForMacroExpansionScope:(id)arg1;
- (void)_addSettingsForXCTRunnerToMacroDefinitionTable:(id)arg1 usingScope:(id)arg2;
- (id)_XCTRunnerBundleIdentifierWithMacroExpansionScope:(id)arg1;
- (id)_XCTRunnerBundleIdentifierFromInfoPlistAtPath:(id)arg1;
- (id)_XCTRunnerInfoPlistPreprocessorDefinitions;
- (id)_XCTRunnerInfoPlistReplacements;
- (id)defaultMacros;
- (BOOL)canDisableBitcodeDespitePlatform;

@end
