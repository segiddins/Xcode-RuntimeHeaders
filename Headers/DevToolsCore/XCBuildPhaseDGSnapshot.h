//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMacroDefinitionTable, DVTRegularExpression, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, XCBuildPhaseSpecification;

@interface XCBuildPhaseDGSnapshot : NSObject
{
    XCBuildPhaseSpecification *_type;
    NSString *_name;
    DVTMacroDefinitionTable *_buildSettings;
    NSArray *_allBuildRules;
    NSArray *_buildFileRefs;
    NSMutableArray *_effectiveBuildFileRefs;
    NSMutableDictionary *_inputFileBucketsByName;
    DVTRegularExpression *_hiDpiRegex;
    NSSet *_hiDpiImageLowercaseSuffixes;
    BOOL _runOnlyForDeploymentPostprocessing;
}

+ (id)defaultName;
- (void).cxx_destruct;
- (id)buildFilesToCountBaseNames;
- (BOOL)runOnlyForDeploymentPostprocessing;
- (id)allBuildRules;
- (id)buildFileRefs;
- (id)customBuildRules;
- (id)buildSettings;
- (id)name;
- (id)type;
- (void)printForDebugging;
- (id)init;
- (id)initWithTargetSnapshot:(id)arg1;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForAllBuildFileReferencesWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)groupDependencyNode:(id)arg1 ifNecessaryForLaterProcessingWithMacroExpansionScope:(id)arg2;
- (id)filteredBuildFileReferencesWithMacroExpansionScope:(id)arg1;
- (BOOL)shouldResolveBuildRulesForFileReferences;
- (id)buildRuleForReference:(id)arg1 architecture:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)buildRuleForDependencyNode:(id)arg1 ofType:(id)arg2 architecture:(id)arg3 withMacroExpansionScope:(id)arg4;

@end

