//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCLinkerSpecification.h>

@interface PBXLinkerSpecificationLd : XCLinkerSpecification
{
}

- (id)doSpecialDependencySetupForCommand:(id)arg1 withInputNodes:(id)arg2 withMacroExpansionScope:(id)arg3;
- (void)addSparseSDKSearchPathsToCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (BOOL)defaultToolchainIsPrimaryToolchain:(id)arg1;
- (BOOL)usesSwiftOpenSourceToolchain:(id)arg1;
- (BOOL)supportsSwiftInTheOS:(id)arg1;
- (BOOL)shouldProcessDependencyInfoFileWithMacroExpansionScope:(id)arg1;
- (id)versionWithMacroExpansionScope:(id)arg1;
- (id)discoveredToolInfoWithMacroExpansionScope:(id)arg1;
- (id)findExecutable:(id)arg1 withMacroExpansionScope:(id)arg2;

@end

