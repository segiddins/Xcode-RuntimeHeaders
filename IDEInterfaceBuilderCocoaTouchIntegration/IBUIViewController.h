//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBIDEUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsIntegratedObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBPlaceholderDrawingAttributes, IBUINavigationItem, IBUISimulatedBarMetrics, IBUISimulatedMetricsContainer, IBUISimulatedOrientationMetrics, IBUISimulatedSizeMetrics, IBUISimulatedStatusBarMetrics, IBUITabBarItem, IBUIView, NSArray, NSMutableSet, NSString, NSValue;

@interface IBUIViewController : IBAbstractViewController <IBDocumentArchiving, NSCoding, IBUISimulatedMetricsIntegratedObject, IBIDEUIViewControllerAutolayoutGuideDelegate, IBUISimulatedMetricsObject, IBUIViewControllerAutolayoutGuideDelegate>
{
    NSString *_title;
    NSString *_explicitStoryboardIdentifier;
    NSString *_restorationIdentifier;
    NSArray *_storyboardSegueTemplates;
    NSArray *_storyboardPreviewSegueTemplates;
    NSArray *_storyboardCommitSegueTemplates;
    NSArray *_storyboardPreviewingRegistrants;
    NSMutableSet *_viewsWithPreviewingRegistrants;
    IBUIView *_view;
    IBUITabBarItem *_tabBarItem;
    IBUINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    IBUIViewController *_parentViewController;
    IBUISimulatedStatusBarMetrics *_simulatedStatusBarMetrics;
    IBUISimulatedBarMetrics *_simulatedTopBarMetrics;
    IBUISimulatedBarMetrics *_simulatedBottomBarMetrics;
    IBUISimulatedOrientationMetrics *_simulatedOrientationMetrics;
    IBUISimulatedSizeMetrics *_simulatedDestinationMetrics;
    IBUISimulatedMetricsContainer *_inheritedSimulatedMetrics;
    NSString *_nibName;
    long long _edgesForExtendedLayout;
    BOOL _extendedLayoutIncludesOpaqueBars;
    BOOL _automaticallyAdjustsScrollViewInsets;
    BOOL _autoresizesArchivedViewToFullSize;
    BOOL _wantsFullScreenLayout;
    BOOL _definesPresentationContext;
    BOOL _providesPresentationContextTransitionStyle;
    BOOL _useStoryboardIdentifierAsRestorationIdentifier;
    int _modalTransitionStyle;
    int _modalPresentationStyle;
    BOOL _hidesBottomBarWhenPushed;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    NSArray *_keyCommands;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    NSValue *_contentSizeForViewInPopover;
    NSValue *_freeformSize;
    IBPlaceholderDrawingAttributes *_placeholderDrawingAttributes;
    NSArray *_layoutGuides;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedSelectorNamesForKeyCommands;
+ (id)keyPathsForValuesAffectingIbInspectedNonNilValueForContentSizeForViewInPopover;
+ (id)keyPathsForValuesAffectingIbInspectedFreeformSize;
+ (id)keyPathsForValuesAffectingIbInspectedHasFreeformScreenSizeMetrics;
+ (id)keyPathsForValuesAffectingIbInspectedRestorationIdentifierPlaceholder;
+ (id)keyPathsForValuesAffectingIbInspectedUseStoryboardIdentifierAsRestorationIdentifier;
+ (id)keyPathsForValuesAffectingIbRestorationIdentifier;
+ (id)keyPathsForValuesAffectingIbInspectedExtendsLayoutUnderBottomBars;
+ (id)keyPathsForValuesAffectingIbInspectedExtendsLayoutUnderTopBars;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (id)keyPathsForValuesAffectingIbInspectedPresentsSimulatedMetrics;
+ (id)ibViewPasteboardType;
+ (Class)ibViewClass;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property IBUIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain) IBPlaceholderDrawingAttributes *placeholderDrawingAttributes; // @synthesize placeholderDrawingAttributes=_placeholderDrawingAttributes;
@property(copy) NSValue *freeformSize; // @synthesize freeformSize=_freeformSize;
@property(copy) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(copy) NSValue *contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover=_contentSizeForViewInPopover;
@property BOOL hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed=_hidesBottomBarWhenPushed;
@property int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property int modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property BOOL useStoryboardIdentifierAsRestorationIdentifier; // @synthesize useStoryboardIdentifierAsRestorationIdentifier=_useStoryboardIdentifierAsRestorationIdentifier;
@property BOOL providesPresentationContextTransitionStyle; // @synthesize providesPresentationContextTransitionStyle=_providesPresentationContextTransitionStyle;
@property BOOL definesPresentationContext; // @synthesize definesPresentationContext=_definesPresentationContext;
@property BOOL wantsFullScreenLayout; // @synthesize wantsFullScreenLayout=_wantsFullScreenLayout;
@property(copy) NSArray *topLevelObjectsToKeepAliveFromStoryboard; // @synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard;
@property(copy) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain) IBUINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(retain) IBUITabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
@property(nonatomic) BOOL autoresizesArchivedViewToFullSize; // @synthesize autoresizesArchivedViewToFullSize=_autoresizesArchivedViewToFullSize;
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property(nonatomic) BOOL extendedLayoutIncludesOpaqueBars; // @synthesize extendedLayoutIncludesOpaqueBars=_extendedLayoutIncludesOpaqueBars;
@property(nonatomic) long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(copy) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(retain, nonatomic) IBUIView *view; // @synthesize view=_view;
@property(copy) IBUISimulatedBarMetrics *simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics; // @synthesize simulatedStatusBarMetrics=_simulatedStatusBarMetrics;
@property(copy) IBUISimulatedOrientationMetrics *simulatedOrientationMetrics; // @synthesize simulatedOrientationMetrics=_simulatedOrientationMetrics;
@property(copy) IBUISimulatedSizeMetrics *simulatedDestinationMetrics; // @synthesize simulatedDestinationMetrics=_simulatedDestinationMetrics;
- (void).cxx_destruct;
- (id)layoutGuideForAttribute:(unsigned long long)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(id)arg1;
- (struct CGRect)drawableFrameForAutolayoutGuide:(id)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(id)arg1;
- (id)ibContainingItemForAutolayoutGuide:(id)arg1;
- (double)bottomLayoutGuideOffsetFromBottom;
- (double)topLayoutGuideOffsetFromTop;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (BOOL)isChildViewController:(id)arg1;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)insertViewController:(id)arg1 atIndex:(long long)arg2;
@property(copy) NSArray *viewControllers;
- (id)descendentViewControllers;
- (id)contentViewDisplayingViewController;
- (struct CGSize)ibSimulatedViewPortSize;
- (id)displayedViewController;
- (id)displayedChildViewController;
- (BOOL)displaysContentView;
- (id)containingSplitViewController;
- (id)containingNavigationController;
- (id)containingTabBarController;
- (id)containingViewControllerOfClass:(Class)arg1;
- (id)firstAncestorChildOfSplitViewController;
- (id)firstAncestorChildOfViewControllerOfClass:(Class)arg1;
- (id)bottomBarOwningController;
- (id)topBarOwningController;
- (BOOL)ownsBottomBar;
- (BOOL)ownsTopBar;
- (id)rootController;
- (id)effectiveView;
- (id)effectiveSimulatedScreenMetrics;
- (id)effectiveSimulatedDestinationMetrics;
- (id)effectiveSimulatedOrientationMetrics;
- (id)effectiveSimulatedBottomBarMetrics;
- (id)effectiveSimulatedTopBarMetrics;
- (id)effectiveSimulatedStatusBarMetrics;
- (id)effectiveSimulatedMetrics;
- (id)effectiveSimulatedMetricsCalculationPipeline;
- (id)innateSimulatedMetricsForPipeline;
- (id)simulatedMetricsFromParentChainForPipeline;
- (id)simulatedMetricsForPipeline;
- (void)resetAllSimulatedMetricsToNone;
- (void)resetAllSimulatedMetricsToInferred;
@property(copy, nonatomic) IBUISimulatedMetricsContainer *inheritedSimulatedMetrics;
- (void)setStoryboardSegueTemplates:(id)arg1;
- (id)storyboardSegueTemplates;
- (id)explicitStoryboardIdentifier;
- (void)setExplicitStoryboardIdentifier:(id)arg1;
- (BOOL)usesHonestUIEra;
- (void)decodeContentSizeForViewInPopoverWithCoder:(id)arg1;
- (void)encodeContentSizeForViewInPopoverWithCoder:(id)arg1;
- (void)encodeSynthesizedHorizontalForCoder:(id)arg1;
- (void)synchronizeOrientationWithDecoder:(id)arg1;
- (void)synchronizeView:(id)arg1;
- (void)decodeFreeformSize:(id)arg1;
- (void)encodeFreeformSize:(id)arg1;
- (void)unarchiveFreeformSize:(id)arg1;
- (void)archiveFreeformSize:(id)arg1;
- (void)decodeSimulatedMetrics:(id)arg1;
- (void)encodeSimulatedMetrics:(id)arg1;
- (void)unarchiveSimulatedMetrics:(id)arg1;
- (void)archiveSimulatedMetrics:(id)arg1;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesStatusBars;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesOpaqueBars;
@property(readonly, nonatomic) long long simulatedMetricsExtendedEdges;
- (id)simulatedMetricsContainerForSizing;
- (struct CGSize)effectiveFreeformSize;
- (struct CGSize)effectiveSimulatedViewSize;
- (struct CGSize)effectiveSimulatedContentSize;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibAddStoryboardCommitSegueTemplate:(id)arg1 inDocument:(id)arg2;
- (void)ibAddStoryboardPreviewSegueTemplate:(id)arg1 inDocument:(id)arg2;
- (void)ibAddStoryboardPreviewingRegistrantIfNecessaryForView:(id)arg1 inDocument:(id)arg2;
- (id)ibMarshalledRepresentationForRendering;
- (id)ibMarshallingContextForRendering;
- (void)ibUpdatePlaceholderDrawingAttributes;
- (BOOL)ibIsValidTraitStorageListContainer;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (id)ibPrefersMarginRelativeConstraintsToChildItem:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsEqualSizeConstraints:(id)arg1;
- (id)ibDefaultImageForAutolayoutGuide:(id)arg1;
- (id)ibDefaultLabelForAutolayoutGuide:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (void)ibDisableAutolayoutInDocument:(id)arg1;
- (void)ibVerifyXcode5LayoutGuidesWithDocument:(id)arg1 shouldRemoveDuplicateLayoutGuides:(BOOL)arg2 addingVerificationMessagesToArray:(id)arg3;
- (id)_removeDuplicateAutolayoutGuide:(id)arg1 document:(id)arg2;
- (void)ibDocumentDidChangeDevelopmentTarget:(id)arg1;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (id)effectiveSimulatedMetricsForTargetRuntimeConversion;
- (BOOL)ibEffectiveHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetrics;
- (BOOL)ibHasSimulatedSizeMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedSizeMetrics;
- (BOOL)ibHasSimulatedBarMetrics;
- (id)ibInspectedSelectorNamesForKeyCommands;
- (void)setIbInspectedSelectorNamesForKeyCommands:(id)arg1;
- (struct CGSize)ibInspectedNonNilValueForContentSizeForViewInPopover;
@property struct CGSize ibInspectedFreeformSize;
- (void)setIbInspectedHasFreeformScreenSizeMetrics:(BOOL)arg1;
- (BOOL)ibInspectedHasFreeformScreenSizeMetrics;
@property(copy) IBUISimulatedSizeMetrics *ibInspectedSimulatedDestinationMetrics;
@property(copy) IBUISimulatedOrientationMetrics *ibInspectedSimulatedOrientationMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedBottomBarMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedTopBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *ibInspectedSimulatedStatusBarMetrics;
- (BOOL)ibInspectedSupportsDestinationMetrics;
- (BOOL)ibSupportsSimulatedMetrics;
- (id)ibInspectedRestorationIdentifierPlaceholder;
- (void)setIbInspectedUseStoryboardIdentifierAsRestorationIdentifier:(BOOL)arg1;
- (BOOL)ibInspectedUseStoryboardIdentifierAsRestorationIdentifier;
- (void)setIbInspectedRestorationIdentifier:(id)arg1;
- (id)ibInspectedRestorationIdentifier;
- (void)setIbInspectedExtendsLayoutUnderBottomBars:(BOOL)arg1;
- (BOOL)ibInspectedExtendsLayoutUnderBottomBars;
- (void)setIbInspectedExtendsLayoutUnderTopBars:(BOOL)arg1;
- (BOOL)ibInspectedExtendsLayoutUnderTopBars;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (void)ibInheritedTintColorDidChange;
- (void)ibInheritedTintColorWillChange;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUITabBarController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibClipsChild:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (Class)ibEditorViewClass;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (BOOL)isChildViewSizable:(id)arg1;
- (BOOL)isChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)ibWillCopyChild:(id)arg1 forCompilationUnitLeaderOfUnitDownstreamFromUnit:(id)arg2;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (void)ibEstablishViewOutletsInDocument:(id)arg1;
- (void)ibDidAcceptView:(id)arg1 fromPasteboard:(id)arg2 inDocument:(id)arg3;
- (struct CGSize)ibViewControllerContentSizeForTargetRuntime:(id)arg1 context:(id)arg2;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (BOOL)ibRequiresOutletToStoryboard;
- (void)ibUpstreamController:(id)arg1 didBecomeDestinationOfSegue:(id)arg2;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (void)ibSwizzledIBUIViewControllerSetView:(id)arg1;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibImageForOwnedScene;
- (CDStruct_c519178c)ibExtendedEdgeInsets;
- (BOOL)ibShouldInsetScrollViewForBarMetrics:(id)arg1 inDirection:(long long)arg2;
- (void)ibSizeViewToFit;
- (void)ibPerformInspectorInstigatedSimulatedMetricsMutationBlock:(CDUnknownBlockType)arg1;
- (void)ibUpdateInheritedSimulatedMetrics:(id)arg1;
- (void)ibEffectiveSimulatedMetricsDidChange;
- (void)setViewFrameSize:(struct CGSize)arg1;
- (id)ibViewControllersWithSizedToFitViews;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibIsRequiredToHaveNavigationItem;
- (BOOL)ibIsRequiredToHaveToolbarItem;
- (BOOL)ibIsRequiredToHaveTabBarItem;
- (BOOL)ibRequiresNavigationItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresNavigationItemForChildViewController:(id)arg1;
- (BOOL)ibRequiresToolbarItemForChildViewController:(id)arg1;
- (BOOL)ibRequiresTabBarItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresTabBarItemForChildViewController:(id)arg1;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (void)ibDidRefactorIntoStoryboard:(id)arg1 withContext:(id)arg2;
- (void)ibWillRefactorOutOfStoryboard:(id)arg1 withContext:(id)arg2;
- (BOOL)ibSupportsInferredMetrics;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibSimulatedMetricsContainerForEditorView;
- (id)ibUserHostableDocumentClasses;
- (id)ibSubtitleForEditor;
- (BOOL)ibChildEditsWithSingleClick:(id)arg1;
- (BOOL)ibContainsResizableContent;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibInspectedPresentsSimulatedMetrics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

