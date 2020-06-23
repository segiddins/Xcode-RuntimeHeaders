//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUITabBar, NSArray, NSString;

@interface IBUITabBarController : IBUIViewController <IBDocumentArchiving>
{
    NSArray *_viewControllers;
    BOOL _displaysAllTabsForReordering;
    IBUITabBar *_tabBar;
    IBUIViewController *_selectedViewController;
    NSArray *_simulatedTabBarItems;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) NSArray *simulatedTabBarItems; // @synthesize simulatedTabBarItems=_simulatedTabBarItems;
@property(retain, nonatomic) IBUIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(nonatomic) BOOL displaysAllTabsForReordering; // @synthesize displaysAllTabsForReordering=_displaysAllTabsForReordering;
@property(retain, nonatomic) IBUITabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void).cxx_destruct;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)simulatedMetricsFromParentChainForPipeline;
- (id)displayedChildViewController;
- (BOOL)displaysContentView;
- (BOOL)ownsBottomBar;
- (BOOL)ownsTopBar;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
@property(nonatomic) long long selectedViewControllerIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (id)ibExplanatoryTextForEditor;
- (id)ibImageForOwnedScene;
- (Class)ibEditorClass;
- (BOOL)ibTabBarShouldArchiveItems:(id)arg1;
- (id)ibMetricChainForDownstreamController:(id)arg1 viaSegue:(id)arg2 succeedingMetric:(id)arg3;
- (void)setIbInspectedSimulatedTopBarMetrics:(id)arg1;
- (void)setIbInspectedSimulatedBottomBarMetrics:(id)arg1;
- (void)ibUpdateTabBarAfterSettingSimulatedMetrics:(id)arg1;
- (id)ibSimulatedMetricsContainerForEditorView;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (void)ibWillAcceptPastedObjects:(id)arg1 atIndexes:(id)arg2 intoToManyRelation:(id)arg3 inDocument:(id)arg4 insertionContext:(id)arg5;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibClipsChild:(id)arg1;
- (id)ibLabelQualifierForChild:(id)arg1;
- (BOOL)ibRequiresTabBarItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresTabBarItemForChildViewController:(id)arg1;
- (id)ibPasteboardTypes;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (id)selectedViewControllers;
- (id)unselectedViewControllers;
- (id)ibSegueSourceToManyRelationshipKeyPaths;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (id)ibLeafMetricForValidationWithPrecedingMetric:(id)arg1;
- (id)ibLocalNonUndoableDisplayOnlyKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

