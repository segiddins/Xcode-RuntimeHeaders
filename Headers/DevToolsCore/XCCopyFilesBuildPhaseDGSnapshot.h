//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSString;
@protocol DVTMacroExpansion;

@interface XCCopyFilesBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    long long _dstSubfolderSpec;
    NSString<DVTMacroExpansion> *_dstPath;
}

+ (id)defaultName;
- (void).cxx_destruct;
- (id)destinationPath;
- (long long)destinationSubfolder;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;

@end

