//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXNativeTarget.h>

@interface PBXAggregateTarget : PBXNativeTarget
{
}

+ (id)standardBuildPhaseClasses;
+ (id)targetTypeDisplayName;
+ (id)categorizedTargetName;
- (id)productReferenceExpectedFileTypeForConfigurationNamed:(id)arg1;
- (BOOL)productReferenceIsExecutable;
- (id)relevantToolSpecifications;
- (id)relevantToolSpecificationsForConfigurationsNamed:(id)arg1;
- (id)relevantToolSpecificationsForConfigurationNamed:(id)arg1;
- (BOOL)allowsZeroBuildPhases;
- (BOOL)allowsCopyFilesBuildPhases;
- (BOOL)allowsShellScriptBuildPhases;
- (BOOL)wantsTopLevelItemForBuildPhases;
- (BOOL)isAggregate;
- (BOOL)canPackageHeaders;
- (BOOL)canInstallHeaders;
- (BOOL)wantsProductSettings;
- (BOOL)hasUserConfigurableBuildRules;

@end

