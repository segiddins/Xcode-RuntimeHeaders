//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSMutableArray, NSMutableDictionary;

@interface XCRezBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    NSMutableArray *_regions;
    NSMutableDictionary *_resourceFilesByRegion;
}

+ (id)defaultName;
- (void).cxx_destruct;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (void)mergeFiles:(id)arg1 forRegion:(id)arg2 usingLinker:(id)arg3 withMacroExpansionScope:(id)arg4;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 usingBuildRule:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)buildFilesToCountBaseNames;

@end

