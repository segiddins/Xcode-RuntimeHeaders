//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@interface NSBox (IBNSBoxIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedContentViewMarginsWidth;
+ (id)keyPathsForValuesAffectingIbInspectedContentViewMarginsHeight;
+ (long long)ibDevelopmentTargetForDocumentContentView;
+ (id)ibKeyPathForDocumentContentView;
+ (id)keyPathsForValuesAffectingIbArchivedDesignableContentView;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
- (void)setIbInspectedContentViewMarginsWidth:(double)arg1;
- (double)ibInspectedContentViewMarginsWidth;
- (void)setIbInspectedContentViewMarginsHeight:(double)arg1;
- (double)ibInspectedContentViewMarginsHeight;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibEffectiveContentViewToUseForDocument:(id)arg1;
- (id)ibVerifyContentViewCurrentContentView;
- (BOOL)ibNeedsUpgradePromptToXcode7ForDocument:(id)arg1;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibChildView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg2;
- (BOOL)ibVerifyFrameAndBoundsIntegrality;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
- (long long)ibBaselineCount;
- (CDStruct_d2b197d1)ibInsetToDesignableContentArea;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibSizeWithoutClippingTitle;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (id)ibWidgetType;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibDefaultFontKeyPath;
- (BOOL)ibIsTitled;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (id)ibUnembedableChildren;
- (void)ibDidRemoveContentViewFromDocumentDuringVerifyContentView;
- (void)ibDidAddContentViewToDocumentDuringVerifyContentView;
- (BOOL)ibShouldPropagateFramesDuringFrameDecisionForChildItem:(id)arg1;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (id)ibArchivedDesignableContentView;
- (id)ibDesignableContentView;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (void)ibSwizzledNSBoxEncodeWithCoder:(id)arg1;
- (id)ibSwizzledNSBoxInitWithCoder:(id)arg1;
@end

