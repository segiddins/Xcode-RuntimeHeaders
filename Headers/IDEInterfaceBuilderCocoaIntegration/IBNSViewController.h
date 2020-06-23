//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractViewController.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class IBSimulatedMetricsContainer, NSArray, NSDictionary, NSString, NSView;

@interface IBNSViewController : IBAbstractViewController <IBDocumentArchiving>
{
    BOOL _connectionsRequireClassSwapperForStoryboardCompilation;
    BOOL _encodeAsRuntimeInstance;
    NSString *_explicitStoryboardIdentifier;
    IBSimulatedMetricsContainer *_inheritedSimulatedMetrics;
    NSArray *_storyboardSegueTemplates;
    NSView *_view;
    NSString *_title;
    NSString *_nibName;
    NSString *_nibBundleIdentifier;
    NSDictionary *_externalObjectsTableForViewLoading;
    unsigned long long _showSeguePresentationStyle;
    NSString *_uniqueIdentifierForStoryboardCompilation;
    NSArray *_childViewControllers;
}

+ (id)keyPathsForValuesAffectingIbInspectedEffectiveAppearance;
+ (struct CGRect)ibDefaultFrameForView;
+ (Class)ibViewClass;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(nonatomic) BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(nonatomic) BOOL connectionsRequireClassSwapperForStoryboardCompilation; // @synthesize connectionsRequireClassSwapperForStoryboardCompilation=_connectionsRequireClassSwapperForStoryboardCompilation;
@property(copy) NSString *uniqueIdentifierForStoryboardCompilation; // @synthesize uniqueIdentifierForStoryboardCompilation=_uniqueIdentifierForStoryboardCompilation;
@property unsigned long long showSeguePresentationStyle; // @synthesize showSeguePresentationStyle=_showSeguePresentationStyle;
@property(copy) NSDictionary *externalObjectsTableForViewLoading; // @synthesize externalObjectsTableForViewLoading=_externalObjectsTableForViewLoading;
@property(copy) NSString *nibBundleIdentifier; // @synthesize nibBundleIdentifier=_nibBundleIdentifier;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)setView:(id)arg1;
- (id)view;
- (void)setStoryboardSegueTemplates:(id)arg1;
- (id)storyboardSegueTemplates;
- (void)setInheritedSimulatedMetrics:(id)arg1;
- (id)inheritedSimulatedMetrics;
- (void)setExplicitStoryboardIdentifier:(id)arg1;
- (id)explicitStoryboardIdentifier;
- (struct CGSize)effectiveSimulatedViewSize;
- (BOOL)ibUsesStandardIdentifierPropertySlice;
- (BOOL)ibCanSupportIdentifierProperty;
- (void)unarchivePlaceholderTable:(id)arg1;
- (void)archivePlaceholderTable:(id)arg1;
- (void)ibPrepareTopLevelControllerForStoryboardCompilation;
- (id)ibUniqueIdentifierForStoryboardCompilation;
- (long long)ibFrameDecisionStrategyDuringFrameDecisionForChild:(id)arg1 hasCleanStatus:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (id)ibTopLevelWindowTemplateForLayoutEngine:(id)arg1;
- (id)ibWindowWithCopiedViewHierarchySnapshotForLayoutEngine:(id)arg1 returningAddedRepresentedConstraintsForRepresentedViews:(id *)arg2;
- (void)ibDecodePlatformItems:(id)arg1;
- (void)ibEncodePlatformItems:(id)arg1;
- (void)ibUnArchivePlatformItems:(id)arg1;
- (void)ibArchivePlatformItems:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (BOOL)ibChildViewHasCustomLayoutButAllowsExplicitSizeConstraints:(id)arg1;
- (BOOL)ibChildAutolayoutItem:(id)arg1 hasOwnedSizeLayoutInDocument:(id)arg2;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibMakeDefaultView;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibCaptureDownstreamStoryboardPlaceholderTable:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibImageForOwnedScene;
- (CDUnknownBlockType)ibWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (BOOL)ibShouldUseClassSwapper;
- (void)ibPropagatePropertiesToCompiledSceneObject:(id)arg1;
- (id)ibInspectedEffectiveAppearance;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (id)ibDefaultViewForNewInstances;
- (struct CGSize)effectiveSimulatedContentSize;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (BOOL)ibIsValidCocoaEmbedSegueDestination;
- (BOOL)ibAllowsEditingTitle;
- (BOOL)ibRequiresOutletToStoryboard;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibRuntimeClassName;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
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

