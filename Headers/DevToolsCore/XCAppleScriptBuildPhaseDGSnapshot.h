//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSString;

@interface XCAppleScriptBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    BOOL _isSharedContext;
    NSString *_contextName;
}

+ (id)defaultName;
- (void).cxx_destruct;
- (id)contextName;
- (BOOL)isSharedContext;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;

@end

