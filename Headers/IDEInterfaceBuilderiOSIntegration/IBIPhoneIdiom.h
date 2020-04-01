//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderiOSIntegration/IBiOSIdiom.h>

@class IBCocoaTouchDeviceSubtype;

@interface IBIPhoneIdiom : IBiOSIdiom
{
    IBCocoaTouchDeviceSubtype *_iPhone3_5InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone4_0InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone4_7InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone5_5InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone5_9InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone6_1InchSubtype;
    IBCocoaTouchDeviceSubtype *_iPhone6_5InchSubtype;
}

- (void).cxx_destruct;
- (id)normalizedMaskPath_iPhone5_9InchSubtype;
- (id)normalizedMaskPath_iPhone6_1InchSubtype;
- (id)normalizedMaskPath_iPhone6_5InchSubtype;
- (id)normalizedDeviceMaskPathForSubtype:(id)arg1;
- (struct CGSize)pageSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (struct CGSize)formSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (long long)legacyTypeForScreenMetrics:(id)arg1;
- (id)screenMetricsForLegacyType:(long long)arg1;
- (double)defaultEditingZoomFactorForCanvasBackingScaleFactor:(double)arg1;
- (id)unsupportedSegueClasses;
- (id)supportedOSVersions;
- (id)supportedAdBannerSizes;
- (id)splitViewDetailMemberConfigurationForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)splitViewMasterMemberConfigurationForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)backwardsDeploymentConfiguration;
- (id)nextScreenMetricsForTogglingFromMetrics:(id)arg1;
- (BOOL)detailUsesSplitScreen:(id)arg1 screenMetrics:(id)arg2;
- (BOOL)masterUsesSplitScreen:(id)arg1 screenMetrics:(id)arg2;
- (id)iPhone3_5InchScreenMetrics;
- (id)iPhone4_0InchScreenMetrics;
- (id)iPhone4_7InchScreenMetrics;
- (id)iPhone5_5InchScreenMetrics;
- (id)iPhone5_9InchScreenMetrics;
- (long long)deviceIconIdiom;
- (id)iPhone3_5InchSubtype;
- (id)iPhone4_0InchSubtype;
- (id)iPhone4_7InchSubtype;
- (id)iPhone5_5InchSubtype;
- (id)iPhone6_1InchSubtype;
- (id)iPhone5_9InchSubtype;
- (id)iPhone6_5InchSubtype;
- (id)presentationOrderedSiblingIdioms;
- (id)resourceIdiomVariant;
- (long long)defaultOrientationForArchiving;
- (id)defaultOrientationMetrics;
- (id)defaultSubtypeForArchiving;
- (id)defaultSubtype;
- (BOOL)supportsBranchingForTraitVariations;
- (long long)deviceInterfaceIdiom;
- (id)icon;
- (BOOL)supportsSplitViewControllersOnIOS7AndEarlier;
- (BOOL)ignoresStatusBarForUIBarStyleComputation;
- (BOOL)supportsBarItemLandscapeImages;
- (BOOL)supportsSearchBarsEmbeddedInBarButtonItems;
- (BOOL)supportsTopToolbars;
- (BOOL)supportsForceTouchSeguesInDocument:(id)arg1;
- (id)xibArchiveType;
- (id)colorListName;
- (id)archiveIdentifier;
- (id)identifier;
- (id)idiomName;

@end

