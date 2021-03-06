//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchPlatform.h>

#import <IDEInterfaceBuilderiOSIntegration/IDEInitialization-Protocol.h>

@interface IBiOSPlatform : IBCocoaTouchPlatform <IDEInitialization>
{
}

+ (void)customizeEstablishedViewOutletsForObject:(id)arg1 inDocument:(id)arg2;
+ (void)customizeObjectForLibraryInstantiation:(id)arg1;
+ (BOOL)supportsScrollTypesMask;
+ (BOOL)supportsPointerInteraction;
+ (Class)idiomClass;
+ (BOOL)ide_initializeWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)applicableTraits;
- (id)traitCollectionForConfiguration:(id)arg1;
- (id)variableValueForDisplayGamut:(long long)arg1;
- (id)variableValueForSizeClass:(long long)arg1;
- (long long)userInterfaceIdiomForConfiguration:(id)arg1;
- (long long)displayGamutForConfiguration:(id)arg1;
- (id)variablesAddedInXcode8;
- (long long)sizeClassForVariable:(id)arg1 inConfiguration:(id)arg2;
- (id)heightClassVariable;
- (id)widthClassVariable;
- (BOOL)allowLegacySegues;
- (BOOL)supportsLaunchScreen;
- (int)defaultUITableViewCellSeparatorStyle;
- (double)defaultUITableViewSectionHeaderFooterHeightForStyle:(int)arg1;
- (double)defaultUITableViewRowHeightForCellStyle:(int)arg1;
- (BOOL)defaultUICollectionViewPrefetchingEnabled;
- (id)defaultUILabelFont;
- (id)defaultFontForUIButtonType:(long long)arg1;
- (BOOL)supportsUITableViewAutomaticRowHeightByDefault;
- (BOOL)supportsUISegmentedControlSelectedSegmentTintColor;
- (BOOL)supportsUISpringLoadedInteractionSupporting;
- (BOOL)shouldUIVisualEffectViewAllowVibrancyEffectStyles;
- (BOOL)shouldUIVisualEffectViewAllowSystemBlurEffectStyles;
- (BOOL)supportsBlackBarsForSimulationMetrics;
- (BOOL)supportsNavigationBarWithPrompts;
- (BOOL)supportsPresentationSizeMetrics;
- (BOOL)supportsBottomBarMetrics;
- (BOOL)supportsStatusBarMetrics;
- (BOOL)documentEditor:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (void)populateGlobalIssues:(id)arg1 inDocument:(id)arg2;
- (long long)minimumVersionSupportingSystemSymbols;
- (long long)minimumVersionSupportingColorAppearances;
- (long long)minimumVersionSupportingNamedColors;
- (Class)resourceManagerClass;
- (BOOL)shouldPromptForDeviceConfigurationDuringAutomaticUpgrade;
- (id)osVersionsToCompileForDocument:(id)arg1 options:(id)arg2;
- (id)alternateTopLevelPathsForCompilationOutputPath:(id)arg1;
- (BOOL)shouldBackwardsDeployStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (BOOL)shouldValidateStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (id)systemDocumentDependency;
- (id)cocoaTouchTargetRuntime;
- (id)defaultTargetRuntimeForArchiving;
- (id)defaultTargetRuntime;
- (id)pathToOverlayToolNamed:(id)arg1;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (id)operatingSystemName;
- (id)identifier;
- (Class)documentPlatformAdapterClass;

@end

