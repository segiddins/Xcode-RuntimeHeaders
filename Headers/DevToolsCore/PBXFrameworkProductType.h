//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXBundleProductType.h>

@interface PBXFrameworkProductType : PBXBundleProductType
{
}

- (BOOL)supportsDefinesModule;
- (void)generateStubAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (void)generateInstallAPIForLinkedProductWithMacroExpansionScope:(id)arg1;
- (void)createTBDSymlinksForLinkedProductWithMacroExpansionScope:(id)arg1 forFileName:(id)arg2;
- (void)registerSwiftmoduleProductStructureCreatorsWithMacroExpansionScope:(id)arg1;
- (id)wrapperSubpathForSwiftmodule;
- (void)registerCoreProductStructureCreatorsWithMacroExpansionScope:(id)arg1;
- (void)addBaseLinkerFlagsWithMacroExpansionScope:(id)arg1;
- (void)computeProductDependenciesWithMacroExpansionScope:(id)arg1;

@end

