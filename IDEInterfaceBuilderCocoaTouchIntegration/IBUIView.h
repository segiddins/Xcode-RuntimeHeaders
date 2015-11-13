//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRemoteView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBIDEUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSceneUpdateRequestConfiguring-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIInstantiatedView-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsExtendedEdgeProvider-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsIntegratedObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class DVTNotificationToken, IBCocoaTouchTargetRuntime, IBEdgeInsetsWrapper, IBUIAccessibilityConfiguration, IBUISimulatedBarMetrics, IBUISimulatedMetricsContainer, IBUISimulatedOrientationMetrics, IBUISimulatedSizeMetrics, IBUISimulatedStatusBarMetrics, IBUIStoryboardPreviewingSegueTemplateStorage, IBUIViewController, NSArray, NSColor, NSDictionary, NSNumber, NSString, NSValue;

@interface IBUIView : IBRemoteView <IBDocumentArchiving, NSCoding, IBUIInstantiatedView, IBUISimulatedMetricsExtendedEdgeProvider, IBUISimulatedMetricsIntegratedObject, IBIDEUIViewControllerAutolayoutGuideDelegate, IBUIViewControllerAutolayoutGuideDelegate, IBUISimulatedMetricsObject, IBSceneUpdateRequestConfiguring>
{
    IBUISimulatedBarMetrics *simulatedTopBarMetrics;
    IBUISimulatedBarMetrics *simulatedBottomBarMetrics;
    IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics;
    IBUISimulatedOrientationMetrics *simulatedOrientationMetrics;
    IBUISimulatedSizeMetrics *simulatedDestinationMetrics;
    IBUIAccessibilityConfiguration *accessibilityConfiguration;
    NSString *restorationIdentifier;
    NSColor *backgroundColor;
    NSColor *backgroundColorAsRenderedByDevice;
    NSColor *explicitTintColor;
    BOOL opaqueForDevice;
    BOOL autoresizesSubviewsForDevice;
    BOOL clipsSubviews;
    double alpha;
    BOOL clearsContextBeforeDrawing;
    int contentMode;
    long long semanticContentAttribute;
    BOOL multipleTouchEnabled;
    long long tag;
    BOOL userInteractionEnabled;
    BOOL needsLayout;
    BOOL needsGeometry;
    NSArray *cachedBaselines;
    NSValue *cachedFrameworkLayoutInset;
    NSValue *cachedIntrinsicContentSize;
    NSNumber *cachedBaselineOffsetFromBottom;
    NSNumber *cachedFirstBaselineOffsetFromTop;
    NSValue *cachedLayoutMargins;
    struct CGRect contentStretch;
    IBCocoaTouchTargetRuntime *targetRuntime;
    NSNumber *cachedBackgroundAlphaComponent;
    NSArray *gestureRecognizers;
    struct CGSize previousFrameSize;
    NSArray *cachedGeometryInfos;
    NSDictionary *cachedGeometryForPreviousFrameSize;
    DVTNotificationToken *finishUndoObservationToken;
    CDStruct_c519178c ibInsetForRuntimeToggle;
    BOOL _preservesSuperviewLayoutMargins;
    BOOL _layoutMarginsFollowReadableWidth;
    IBUISimulatedMetricsContainer *_inheritedSimulatedMetrics;
    IBEdgeInsetsWrapper *_explicitLayoutMargins;
    unsigned long long _simulatedAppContext;
    IBUIViewController *_viewController;
    IBUIStoryboardPreviewingSegueTemplateStorage *_previewingSegueTemplateStorage;
    NSArray *_ibLayoutGuides;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbLayoutMargins;
+ (id)keyPathsForValuesAffectingEffectiveTintColor;
+ (id)keyPathsForValuesAffectingInheritedTintColor;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_size_height;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_size_width;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_origin_y;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_origin_x;
+ (unsigned long long)ibDefaultAutoresizingMaskForViewsUsingConstraints;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaHeightForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaYForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaWidthForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaXForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultTintColor;
+ (id)ibLayoutMetrics;
+ (id)keyPathsForValuesAffectingIbInspectedUseExplicitLayoutMargins;
+ (id)keyPathsForValuesAffectingIbInspectedAutoresizesSubviewsForDevice;
+ (id)keyPathsForValuesAffectingIbInspectedFrame;
+ (id)ibSimulatedMetricsKeyPathsAffectingEditorView;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (void)ibDidInstantiateForObject:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (long long)ibInstantiationSizeBehavior;
@property(copy, nonatomic) NSArray *ibLayoutGuides; // @synthesize ibLayoutGuides=_ibLayoutGuides;
@property(retain, nonatomic) IBUIStoryboardPreviewingSegueTemplateStorage *previewingSegueTemplateStorage; // @synthesize previewingSegueTemplateStorage=_previewingSegueTemplateStorage;
@property(nonatomic) __weak IBUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long simulatedAppContext; // @synthesize simulatedAppContext=_simulatedAppContext;
@property(nonatomic) BOOL layoutMarginsFollowReadableWidth; // @synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth;
@property(nonatomic) BOOL preservesSuperviewLayoutMargins; // @synthesize preservesSuperviewLayoutMargins=_preservesSuperviewLayoutMargins;
@property(retain, nonatomic) IBEdgeInsetsWrapper *explicitLayoutMargins; // @synthesize explicitLayoutMargins=_explicitLayoutMargins;
@property(retain, nonatomic) IBUISimulatedMetricsContainer *inheritedSimulatedMetrics; // @synthesize inheritedSimulatedMetrics=_inheritedSimulatedMetrics;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled;
@property(nonatomic, getter=isOpaqueForDevice) BOOL opaqueForDevice; // @synthesize opaqueForDevice;
@property(nonatomic, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled; // @synthesize multipleTouchEnabled;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute;
@property(nonatomic) int contentMode; // @synthesize contentMode;
@property(nonatomic) BOOL clipsSubviews; // @synthesize clipsSubviews;
@property(nonatomic) BOOL clearsContextBeforeDrawing; // @synthesize clearsContextBeforeDrawing;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) BOOL autoresizesSubviewsForDevice; // @synthesize autoresizesSubviewsForDevice;
@property(nonatomic) double alpha; // @synthesize alpha;
@property(copy, nonatomic) NSColor *explicitTintColor; // @synthesize explicitTintColor;
@property(copy) NSString *restorationIdentifier; // @synthesize restorationIdentifier;
- (void).cxx_destruct;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)ibDocumentDidChangeUserDefinedRuntimeAttributesInNonUndoableWay;
- (void)setIbExternalUserDefinedRuntimeAttributes:(id)arg1;
- (void)liveViewsBundleDidFinishBuilding:(id)arg1 error:(id)arg2;
- (void)setLiveViewsBundle:(id)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(id)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(id)arg1;
- (id)ibContainingItemForAutolayoutGuide:(id)arg1;
- (struct CGSize)intrinsicFrameSizeForRuntime:(id)arg1;
- (void)requestGeometryIfNeeded;
- (struct _IBEdgeInsets)defaultLayoutMargins;
- (BOOL)canHaveLayoutInsetOrIntrinsicContentSizeOrBasline;
- (void)populateGeometryMarshallingContext:(id)arg1;
- (void)configurePlaceholderDrawingAttributes:(id)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (struct CGSize)ibSimulatedViewPortSize;
- (id)defaultBackgroundColor;
- (void)drawBackground;
- (BOOL)drawsBackground;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)alwaysUsesTraitStorage;
- (id)ibFixedFramesByTraitCollection;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)userDefinedRuntimeAttributesToMarshallWithContext:(id)arg1;
- (BOOL)ibWantsPlaceholderContainingViewController;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (void)viewWillDraw;
- (void)layoutSubviews;
- (void)layoutSubviewsIfNeeded;
- (void)invalidateSubviewLayout;
- (void)ibCocoaTouchToolFontsDidChange;
- (void)restoreCachedGeometry:(id)arg1;
- (id)cachedGeometry;
- (void)invalidateCachedGeometry;
- (struct _IBEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsLayoutMargins;
- (double)ibShadowedFirstBaselineOffsetFromTop;
- (BOOL)ibSupportsFirstBaseline;
- (double)baselineOffsetFromBottom;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)ibLayoutFrameworkBounds;
- (CDStruct_c519178c)ibFrameworkLayoutInset;
- (void)cancelSubviewLayoutInvalidation;
- (BOOL)subviewLayoutIsInvalid;
- (void)invalidateCachedImageAndGeometry;
- (id)marshalledRepresentationForRendering;
- (id)marshallingContextForRendering;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (id)gestureRecognizers;
- (void)setTargetRuntime:(id)arg1;
- (BOOL)usesHonestUIEra;
@property(readonly, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime;
- (void)setAccessibilityConfiguration:(id)arg1;
- (id)accessibilityConfiguration;
- (void)setContentStretch:(struct CGRect)arg1;
- (struct CGRect)contentStretch;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateCachedGeometryForNewFrameSize:(struct CGSize)arg1;
- (struct CGRect)statusBarFrame;
- (struct CGRect)internalStatusBarFrame;
- (id)viewForStatusBarFrameCalculation;
- (id)rootIBUIViewAncestor;
- (id)superIBUIView;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesStatusBars;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesOpaqueBars;
@property(readonly, nonatomic) long long simulatedMetricsExtendedEdges;
- (id)effectiveOrientationMetrics;
- (id)simulatedMetricsContainerForSizing;
- (struct CGSize)effectiveFreeformSize;
- (id)effectiveSimulatedMetrics;
- (BOOL)canPresentSimulatedMetrics;
- (id)effectiveSimulatedMetricsCalculationPipeline;
- (id)simulatedMetricsForPipeline;
@property(copy) IBUISimulatedSizeMetrics *simulatedDestinationMetrics;
@property(copy) IBUISimulatedOrientationMetrics *simulatedOrientationMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedTopBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedBottomBarMetrics;
@property long long tag;
- (void)setHidden:(BOOL)arg1;
- (id)backgroundColorAsRenderedByDevice;
@property(readonly) NSColor *effectiveTintColor;
@property(readonly) NSColor *inheritedTintColor;
- (void)inheritedTintColorDidChange;
- (void)inheritedTintColorWillChange;
- (void)enumerateIBUIViewSubviews:(CDUnknownBlockType)arg1;
- (BOOL)isOpaque;
- (double)backgroundColorDeviceAlpha;
- (BOOL)prefersCachedImageBasedDrawing;
- (BOOL)compositesViewHierarchyInRemoteTool;
- (void)inheritedScrollViewExtendedEdgeInsetsDidChange;
- (void)setIbShadowedSubviews:(id)arg1;
- (void)unarchiveLayoutMarginsFollowReadableWidth:(id)arg1;
- (void)archiveLayoutMarginsFollowReadableWidth:(id)arg1;
- (void)unarchivePreservesSuperviewLayoutMargins:(id)arg1;
- (void)archivePreservesSuperviewLayoutMargins:(id)arg1;
- (void)unarchiveExplicitLayoutMargins:(id)arg1;
- (void)archiveExplicitLayoutMargins:(id)arg1;
- (id)explicitEvaluatedExplicitLayoutMarginsInConfiguration:(id)arg1 defaultValue:(id)arg2;
- (BOOL)ibShouldArchiveAutolayoutPropertiesWithNSViewProperties;
- (id)legacyArchivingDefaultValueForSimulatedMetricKeyPath:(id)arg1;
- (void)decodeSimulatedMetrics:(id)arg1;
- (void)encodeSimulatedMetrics:(id)arg1;
- (void)unarchiveSimulatedMetrics:(id)arg1;
- (void)archiveSimulatedMetrics:(id)arg1;
- (void)unarchiveBackgroundColor:(id)arg1;
- (void)archiveBackgroundColor:(id)arg1;
- (void)decodeBackgroundColor:(id)arg1;
- (void)encodeBackgroundColor:(id)arg1;
- (void)decodeTintColor:(id)arg1;
- (void)encodeTintColor:(id)arg1;
- (void)decodeTintColorWithUIViewProperties:(id)arg1;
- (void)encodeTintColorWithUIViewProperties:(id)arg1;
- (void)decodeExplicitLayoutMargins:(id)arg1;
- (void)encodeExplicitLayoutMargins:(id)arg1;
- (void)ibDecodeCachedGeometryFromPasteboard:(id)arg1;
- (void)ibEncodeCachedGeometryOntoPasteboard:(id)arg1;
- (void)enumerateCachedGeometryKeyPaths:(CDUnknownBlockType)arg1;
- (void)populateCachedGeometryInfos:(id)arg1;
- (id)cachedGeometryInfos;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)takeFrameSizeFromDefaultMetrics;
- (id)effectiveSimulatedMetricsForTargetRuntimeConversion;
- (id)barMetrics;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)setInspectedContentStretch_size_height:(double)arg1;
- (double)inspectedContentStretch_size_height;
- (void)setInspectedContentStretch_size_width:(double)arg1;
- (double)inspectedContentStretch_size_width;
- (void)setInspectedContentStretch_origin_y:(double)arg1;
- (double)inspectedContentStretch_origin_y;
- (void)setInspectedContentStretch_origin_x:(double)arg1;
- (double)inspectedContentStretch_origin_x;
- (void)ibDidInstantiateView;
- (id)ibUnderlyingViewInstance;
- (void)ibAddPreviewingSegueTemplateStorage:(id)arg1 forSegue:(id)arg2;
- (void)ibEnumerateIncrementallyMarshalledKeyPathsForChangeToKeyPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (id)ibMarshallingContextForRendering;
- (id)ibMarshalledRepresentationForRendering;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (id)ibDesignTimeDefaultIntrinsicContentSizeForSelfSizingContainers;
- (BOOL)ibWantsLayoutGuides;
- (id)ibPreferredItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (id)ibDefaultImageForAutolayoutGuide:(id)arg1;
- (id)ibDefaultLabelForAutolayoutGuide:(id)arg1;
- (id)ibChildItemsEligibleForNearestNeighborConstraints;
- (void)ibWillArbitrateInDocument:(id)arg1;
- (BOOL)ibWrapperViewForEditorCanvasFrameIsAffectedByChangeToProperty:(id)arg1;
- (id)ibWrapperViewForEditorCanvasFrame:(id)arg1;
- (id)ibLocalFontDescriptionKeyPaths;
- (CDUnknownBlockType)ibConvertDefaultFont:(id)arg1;
- (id)ibFontForFontManager;
@property(nonatomic) double ibInspectedDeltaHeightForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaYForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaWidthForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaXForRuntimeToggle;
- (CDStruct_c519178c)possiblyInvertedIbInsetForRuntimeToggle;
- (void)setPossiblyInvertedIbInsetForRuntimeToggle:(CDStruct_c519178c)arg1;
@property(nonatomic) CDStruct_c519178c ibInsetForRuntimeToggle;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)resizeIfNeededInDocument:(id)arg1 withContext:(id)arg2;
- (BOOL)shouldResizeWithParent:(id)arg1 hasOwningViewController:(BOOL)arg2;
- (struct CGSize)baseContentSizeForLayoutPolicy:(id)arg1 orientation:(int)arg2;
- (BOOL)ibCanBeSourceOfForceTouchSegue;
- (BOOL)ibSupportsNilBackgroundColor;
- (void)refreshSimulatedMetricsContentSize;
- (void)applyMetrics:(id)arg1 toKeyPath:(id)arg2;
- (void)setFrameSizeForApplyingSimulatedMetrics:(struct CGSize)arg1;
@property(copy) IBUISimulatedSizeMetrics *ibInspectedSimulatedDestinationMetrics;
@property(copy) IBUISimulatedOrientationMetrics *ibInspectedSimulatedOrientationMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedBottomBarMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedTopBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *ibInspectedSimulatedStatusBarMetrics;
- (void)ibUpdateInheritedSimulatedMetrics:(id)arg1;
- (BOOL)ibSupportsSimulatedMetrics;
- (id)ibInspectedDefaultTintColor;
- (BOOL)ibInspectedViewCanEditLayoutMargins;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibShouldReportDuplicateRestorationIdentifierWarningWithContext:(id)arg1;
- (BOOL)ibHasDuplicateRestorationIdentifierWithContext:(id)arg1;
- (id)ibRestorationIdentifierCountsForDescendantViews;
- (BOOL)isBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_aed8a530)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibWantsAddContentToExistCollectionForOriginatedOutletCollection:(id)arg1;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (id)ibPasteboardImageForRenderingDestination:(id)arg1;
- (id)ibViewFromPasteboardImage:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (id)ibPasteboardTypes;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMaximumSizeForTargetRuntime:(id)arg1;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)ibMinimumSizeForTargetRuntime:(id)arg1;
- (struct CGSize)ibEffectiveSimulatedMetricsContentSize;
- (BOOL)ibEffectiveHasSimulatedMetricsAffectingFixedSize;
- (struct CGSize)ibPreferredSize;
- (BOOL)ibOverridesFrameworkMetricsForPreferredSize;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (BOOL)ibIsValidTraitStorageListContainer;
- (id)ibCompiledCandidatesForToManyChildRelationshipKeyPath:(id)arg1 withPropertyStorage:(id)arg2;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (id)ibCompiledConfigurationsWithExplicitValuesForKeyPath:(id)arg1 withPropertyStorage:(id)arg2;
- (void)ibPopulateCompiledPerConfigurationToManyRelationshipOrder:(id)arg1;
- (id)ibDesignTimeConfigurableKeyPathForCompiledKeyPath:(id)arg1;
- (id)ibCompiledKeyPathForDesignTimeConfigurableKeyPath:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)ibEnumerateAdditionalLinesForEditorMeasurementDrawingWithBlock:(CDUnknownBlockType)arg1;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (BOOL)ibCanBeReferencedByConstraintWithContainingView:(id)arg1;
- (void)ibOptimisticallyDropRecomputableEditorState;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (id)ibSimulatedMetricsContainerForEditorView;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (id)ibDesignableContentView;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (id)viewControllerOrProxyObjectViewControllerConnectedToReceiverViaViewOutlet;
- (BOOL)ibPrefersFlippedFrameCoordinates;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)setIbInspectedAutoresizesSubviewsForDevice:(BOOL)arg1;
- (void)setIbInspectedUseExplicitLayoutMargins:(BOOL)arg1;
- (BOOL)ibInspectedUseExplicitLayoutMargins;
- (BOOL)ibInspectedAutoresizesSubviewsForDevice;
- (void)setIbInspectedFrame:(struct CGRect)arg1;
- (struct CGRect)ibInspectedFrame;
- (void)ibResumeAutoResizingSubviews:(id)arg1;
- (id)ibStopAutoResizingSubviewsWhileGrowingFromKnob:(CDUnion_aed8a530)arg1 inDocument:(id)arg2;
- (BOOL)ibRequiresLayoutInfoInCocoaTouchToolDuringCompilationOfDocument:(id)arg1;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (void)ibSizeToFitViewController:(id)arg1 context:(id)arg2;
- (void)ibCustomizeForInsertionIntoIBUITableView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibSizesToFillViewControllers;
- (void)ibCustomizeForInsertionIntoIBUIToolbar:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUINavigationItem:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalSearchableNumericAttributeKeyPaths;
- (CDUnknownBlockType)ibWillDelayInvalidationOfImageAndLayoutUntilFinishingUndoAndReturnDidFinishBlock;
- (void)ibApplyUndoValue:(id)arg1 toKeyPath:(id)arg2;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (BOOL)ibHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetrics;
- (BOOL)ibHasSimulatedSizeMetrics;
- (BOOL)ibHasSimulatedSizeMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedBarMetrics;
- (BOOL)ibSupportsInferredMetrics;
- (BOOL)ibPresentsSimulatedMetrics;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

