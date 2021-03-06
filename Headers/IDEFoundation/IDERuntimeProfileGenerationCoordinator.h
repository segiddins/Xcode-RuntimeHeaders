//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDERuntimeProfileGenerationCoordinator : NSObject
{
}

+ (void)_addProfileDataPath:(id)arg1 toGroup:(id)arg2;
+ (id)_addFileGroupForPath:(id)arg1 container:(id)arg2;
+ (void)_updateEnvironmentVariables:(id)arg1 forEmittingRawProfilesToDevicePath:(id)arg2;
+ (void)_addOptimizationProfileFromFilePath:(id)arg1 toContainer:(id)arg2;
+ (BOOL)_mergeOptimizationProfilesFromDirectoryAtPath:(id)arg1 toFileAtPath:(id)arg2 withToolchain:(id)arg3 warnings:(id)arg4 returningError:(id *)arg5;
+ (id)validProfilesFromProfiles:(id)arg1 withToolchain:(id)arg2 errorStrings:(id *)arg3;
+ (BOOL)isValidProfData:(id)arg1 withToolchain:(id)arg2 errorString:(id *)arg3;
+ (BOOL)_mergeOptimizationProfiles:(id)arg1 aggregateFile:(id)arg2 toFileAtPath:(id)arg3 withToolchain:(id)arg4 returningError:(id *)arg5;
+ (BOOL)_downloadProfiles:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
+ (BOOL)_prepareForDownloadingProfilesToDirectory:(id)arg1 placingMergedProfileAt:(id)arg2 error:(id *)arg3;
+ (id)logAspect;
+ (void)presentPGOResult:(id)arg1 inWorkspace:(id)arg2;
+ (BOOL)setupProfileGenerationForLaunchSession:(id)arg1 error:(id *)arg2;
+ (BOOL)downloadProfiles:(id)arg1 toDirectory:(id)arg2 placingMergedProfileAt:(id)arg3 addingMergedProfileToContainer:(id)arg4 usingToolchain:(id)arg5 warnings:(id)arg6 error:(id *)arg7;
+ (id)mergedProfilePathForBuildable:(id)arg1 buildParameters:(id)arg2 doingCodeCoverage:(BOOL)arg3;
+ (id)destinationDirectoryForDownloadedRuntimeProfilesForBuildable:(id)arg1 buildParameters:(id)arg2;
+ (id)relevantBuildablesForOptimizationProfileGenerationForSchemeCommand:(id)arg1 buildSchemeAction:(id)arg2;

@end

