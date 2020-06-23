//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PBXFileType;
@protocol DVTMacroExpansion;

@interface XCBuildRuleDGSnapshot : NSObject
{
    NSString *_name;
    PBXFileType *_fileType;
    NSString<DVTMacroExpansion> *_filePatterns;
    NSString *_compilerSpecIdent;
    NSString *_script;
    NSArray<DVTMacroExpansion> *_outputFilePaths;
    NSArray *_outputFilesCompilerFlags;
    BOOL _hasInputs;
    BOOL _hasDependencyFile;
    BOOL _runOncePerArchitecture;
}

+ (id)compilerSpecIsScriptProxy;
+ (id)fileTypeIsPatternProxy;
+ (id)systemBuildRulesForPlatform:(id)arg1;
+ (id)systemBuildRulesForToolchains:(id)arg1 platform:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (id)outputFiles;
- (id)script;
- (id)compilerSpecificationIdentifier;
- (id)filePatterns;
- (id)fileType;
- (id)name;
- (void)printForDebugging;
- (id)init;
- (id)initWithInformationFromBuildRule:(id)arg1;
- (id)description;
- (id)compilerSpecificationWithMacroExpansionScope:(id)arg1;
- (id)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)computeDependenciesForBuildFileReference:(id)arg1 withOutputDirectory:(id)arg2 parameterMacros:(id)arg3 withMacroExpansionScope:(id)arg4;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 withOutputDirectory:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 withOutputDirectory:(id)arg4 parameterMacros:(id)arg5 withMacroExpansionScope:(id)arg6;
- (BOOL)appliesToReference:(id)arg1 architecture:(id)arg2 allArchitectures:(id)arg3 withMacroExpansionScope:(id)arg4;
- (BOOL)appliesToReference:(id)arg1 architecture:(id)arg2 withMacroExpansionScope:(id)arg3;
- (BOOL)_appliesToFileType:(id)arg1 architecture:(id)arg2 allArchitectures:(id)arg3 withMacroExpansionScope:(id)arg4;
- (BOOL)_filePath:(const char *)arg1 matchesPatternInPatternString:(id)arg2;

@end

