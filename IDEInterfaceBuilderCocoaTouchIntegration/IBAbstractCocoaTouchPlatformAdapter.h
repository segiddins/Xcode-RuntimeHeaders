//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAbstractPlatformAdapter.h>

@class IBICCocoaTouchPNGCrushTool, IBSimulatorToolDVTTaskExecutionContext;

@interface IBAbstractCocoaTouchPlatformAdapter : IBICAbstractPlatformAdapter
{
    IBSimulatorToolDVTTaskExecutionContext *_sharedExecutionContext;
    IBICCocoaTouchPNGCrushTool *_pngCrusher;
}

- (void).cxx_destruct;
- (id)selectIconSetRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (BOOL)copyAssetRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)rasterizeVectorImageRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)rasterizePDFImage:(id)arg1 toPath:(id)arg2 scale:(double)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)writePNGImageData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)firstVersionSupportingOnDemandResources;
- (BOOL)canHostPDFContentOutsideOfCARFiles;
- (void)compileCARItems:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)simulatorPlatformIdentifier;
- (id)compileLaunchImageFromSelection:(id)arg1 options:(id)arg2;
- (void)appendLaunchImagesEntryForRep:(id)arg1 toResultsIfNeeded:(id)arg2;
- (void)appendLaunchImagesEntryForSlot:(id)arg1 withLaunchImageName:(id)arg2 toResultsIfNeeded:(id)arg3;
- (BOOL)slotShouldHaveUILaunchImagesInfoPlistEntry:(id)arg1;
- (id)launchImagesInfoPlistEntryForSlot:(id)arg1 withLaunchImageName:(id)arg2;
- (struct CGSize)infoPlistPointSizeForLaunchScreenSlot:(id)arg1;
- (id)compileAppIconFromSelection:(id)arg1 options:(id)arg2;
- (id)propcessSystemPNGOutputImages:(id)arg1 forClass:(Class)arg2 withImageName:(id)arg3 fromCollection:(id)arg4 options:(id)arg5 populatingResults:(id)arg6 andReturningEmptyPlaceholder:(id *)arg7;
- (id)propcessSystemPNGOutputImagesForClass:(Class)arg1 withImageName:(id)arg2 fromCollection:(id)arg3 ignoringItems:(id)arg4 options:(id)arg5 populatingResults:(id)arg6 andReturningEmptyPlaceholder:(id *)arg7;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (id)targetPlatformForArguments:(id)arg1;
- (id)minimumDeploymentTargetSupportingAppIcons;
- (id)minimumDeploymentTargetSupportingDataInCARFiles;
- (id)minimumDeploymentTargetSupportingSpriteAtlasesInCARFiles;
- (id)absoluteMinimumDeploymentTarget;
- (id)minimumDeploymentTargetSupportingPDFInCARFiles;
- (id)minimumDeploymentTargetSupportingJPGInCARFiles;
- (id)minimumDeploymentTargetSupportingCARFiles;
- (BOOL)usesPNGCrush;
- (id)initWithPlatformIdentifier:(id)arg1 extension:(id)arg2;

@end

