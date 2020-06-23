//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIViewAutolayoutGuide, NSString, NSValue;

@interface IBUIScrollView : IBUIView <IBDocumentArchiving>
{
    NSValue *_cachedContentSize;
    NSValue *_lastNonNilCachedContentSize;
    NSValue *_cachedEffectiveContentInset;
    BOOL _directionalLockEnabled;
    BOOL _alwaysBounceVertical;
    BOOL _alwaysBounceHorizontal;
    BOOL _bounces;
    BOOL _scrollEnabled;
    BOOL _pagingEnabled;
    BOOL _showsHorizontalScrollIndicator;
    BOOL _showsVerticalScrollIndicator;
    BOOL _delaysContentTouches;
    BOOL _canCancelContentTouches;
    BOOL _bouncesZoom;
    int _indicatorStyle;
    int _keyboardDismissMode;
    long long _contentInsetAdjustmentBehavior;
    double _minimumZoomScale;
    double _maximumZoomScale;
    IBUIViewAutolayoutGuide *_contentLayoutGuide;
    IBUIViewAutolayoutGuide *_frameLayoutGuide;
    struct CGPoint _contentOffsetAdjustment;
    CDStruct_c519178c _contentInset;
    CDStruct_c519178c _scrollIndicatorInsets;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)viewAutolayoutGuideWithTargetRuntime:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedUseScrollViewLayoutGuides;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMaxY;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMinY;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMinX;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMaxY;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMinY;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMinX;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) IBUIViewAutolayoutGuide *frameLayoutGuide; // @synthesize frameLayoutGuide=_frameLayoutGuide;
@property(retain, nonatomic) IBUIViewAutolayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(nonatomic) int keyboardDismissMode; // @synthesize keyboardDismissMode=_keyboardDismissMode;
@property(nonatomic) struct CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
@property BOOL bouncesZoom; // @synthesize bouncesZoom=_bouncesZoom;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) BOOL canCancelContentTouches; // @synthesize canCancelContentTouches=_canCancelContentTouches;
@property(nonatomic) BOOL delaysContentTouches; // @synthesize delaysContentTouches=_delaysContentTouches;
@property(nonatomic) int indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
@property(nonatomic) long long contentInsetAdjustmentBehavior; // @synthesize contentInsetAdjustmentBehavior=_contentInsetAdjustmentBehavior;
@property(nonatomic) CDStruct_c519178c scrollIndicatorInsets; // @synthesize scrollIndicatorInsets=_scrollIndicatorInsets;
@property(nonatomic) BOOL showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(nonatomic) BOOL showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) BOOL bounces; // @synthesize bounces=_bounces;
@property(nonatomic) BOOL alwaysBounceHorizontal; // @synthesize alwaysBounceHorizontal=_alwaysBounceHorizontal;
@property(nonatomic) BOOL alwaysBounceVertical; // @synthesize alwaysBounceVertical=_alwaysBounceVertical;
@property(nonatomic) BOOL directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property(nonatomic) CDStruct_c519178c contentInset; // @synthesize contentInset=_contentInset;
- (BOOL)canPresentSimulatedMetrics;
- (id)ibEffectiveViewLayoutGuides;
- (void)unarchiveFrameLayoutGuide:(id)arg1;
- (void)archiveFrameLayoutGuide:(id)arg1;
- (void)unarchiveContentLayoutGuide:(id)arg1;
- (void)archiveContentLayoutGuide:(id)arg1;
- (BOOL)contentFitsWithinBounds;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (BOOL)prefersCachedImageBasedDrawing;
- (id)valueForKey:(id)arg1;
- (void)inheritedScrollViewExtendedEdgeInsetsDidChange;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)populateCachedGeometryInfos:(id)arg1;
@property(readonly) struct CGSize contentSize;
- (void)setCachedContentSize:(id)arg1;
- (void)setContentOffsetAdjustmentAfterConstraining:(struct CGPoint)arg1;
@property(readonly) CDStruct_c519178c effectiveContentInset;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setEnableScrollViewLayoutGuides:(BOOL)arg1 document:(id)arg2;
@property(nonatomic) BOOL ibInspectedUseScrollViewLayoutGuides;
- (void)setIbInspectedScrollIndicatorInsetsMaxY:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMaxY;
- (void)setIbInspectedScrollIndicatorInsetsMinY:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMinY;
- (void)setIbInspectedScrollIndicatorInsetsMaxX:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMaxX;
- (void)setIbInspectedScrollIndicatorInsetsMinX:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMinX;
- (void)setIbInspectedContentInsetMaxY:(double)arg1;
- (double)ibInspectedContentInsetMaxY;
- (void)setIbInspectedContentInsetMinY:(double)arg1;
- (double)ibInspectedContentInsetMinY;
- (void)setIbInspectedContentInsetMaxX:(double)arg1;
- (double)ibInspectedContentInsetMaxX;
- (void)setIbInspectedContentInsetMinX:(double)arg1;
- (double)ibInspectedContentInsetMinX;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1 originalFrame:(struct CGRect)arg2 isFinalFrame:(BOOL)arg3;
- (void)ibWasAddedToAutolayoutDocument:(id)arg1;
- (void)ibViewControllerEffectiveSimulatedMetricsDidChange;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;
- (BOOL)ibAllowsScrollingInEditor;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibDesignableContentView;
- (Class)ibEditorClass;
- (id)ibLocalNonUndoableDisplayOnlyKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

