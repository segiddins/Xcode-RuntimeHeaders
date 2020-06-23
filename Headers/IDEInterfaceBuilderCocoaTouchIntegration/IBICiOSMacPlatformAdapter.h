//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBICAbstractCocoaTouchPlatformAdapter.h>

@interface IBICiOSMacPlatformAdapter : IBICAbstractCocoaTouchPlatformAdapter
{
}

+ (id)systemCatalogColors;
+ (id)platform;
- (id)compileBundleIconFromSelection:(id)arg1 options:(id)arg2;
- (BOOL)isValidOutputLocation:(long long)arg1 forBundleIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)selectCatalogItemsForCARCompilerFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)selectCatalogAppIconsFromCollection:(id)arg1 ignoringItems:(id)arg2 forLocation:(long long)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5;
- (id)selectLaunchImageRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (void)compileCARItems:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)selectCatalogItemsForCompilingCollection:(id)arg1 options:(id)arg2;
- (id)minimumDeploymentTargetSupportingARImageResources;
- (id)impliedIdiomsForOptions:(id)arg1;
- (id)defaultTargetDevices;
- (id)minimumDeploymentTargetSupportingIconsInCARFiles;
- (id)firstVersionSupportingLaunchStoryboards;
- (id)firstVersionSupportingOSVariantsForThinning;
- (id)firstVersionSupportingThinning;
- (id)simulatorPlatformIdentifier;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (BOOL)usesPNGCrush;

@end

