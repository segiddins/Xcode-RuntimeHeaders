//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCCompilerSpecification.h>

@interface XCCompilerSpecificationInterfaceBuilder : XCCompilerSpecification
{
}

- (id)doSpecialCodeGenerationSetupForCommand:(id)arg1 withInputNodes:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)sourceGenerationVersion:(id)arg1;
- (id)sourceGenerationLanguages:(id)arg1;
- (BOOL)shouldGenerateSwiftSources:(id)arg1;
- (id)buildSettingForSourceGenerationVersion;
- (id)buildSettingForSourceGeneration;
- (id)buildSettingPrefix;
- (id)generatedFilePathsForInputFilePath:(id)arg1 macroExpansionScope:(id)arg2 outputFilePath:(id)arg3 error:(id *)arg4;
- (id)doSpecialDependencySetupForCommand:(id)arg1 withInputNodes:(id)arg2 withMacroExpansionScope:(id)arg3;
- (void)_addDeploymentTargetArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)_addTargetDeviceArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)_targetDeviceArgumentNameForTargetedDeviceFamily:(id)arg1 platformName:(id)arg2;
- (id)platformDefinitionForPlatformName:(id)arg1;
- (id)_platformDefinitionsByPlatformName;

@end

