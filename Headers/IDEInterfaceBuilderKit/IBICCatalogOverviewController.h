//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAbstractCatalogDetailController.h>

#import <IDEInterfaceBuilderKit/DVTStatefulObject-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDragAndDropInsertionIndicatorDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICAssetCollectionViewItemDataSource-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICAssetOverviewCapsuleControllerDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCatalogOverviewLayoutDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCommandMenuDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCollectionViewDataSource-Protocol.h>

@class IBDragAndDropInsertionIndicator, IBICCatalogActionContext, IBICCommandMenuBuilder, IBICQuickLookController, IBMutableIdentityDictionary, NSCollectionView, NSString;

@interface IBICCatalogOverviewController : IBICAbstractCatalogDetailController <DVTStatefulObject, IBDragAndDropInsertionIndicatorDelegate, IBICAssetOverviewCapsuleControllerDelegate, IBICCommandMenuDelegate, IBICAssetCollectionViewItemDataSource, NSCollectionViewDataSource, IBICCatalogOverviewLayoutDelegate>
{
    IBMutableIdentityDictionary *_activeViewControllers;
    IBMutableIdentityDictionary *_catalogItemsToControllers;
    IBMutableIdentityDictionary *_catalogItemHeights;
    IBDragAndDropInsertionIndicator *_dragIndicator;
    long long _insertionIndex;
    IBICCatalogActionContext *_contextMenuActionContext;
    IBICQuickLookController *_quickLookController;
    IBICCommandMenuBuilder *_contextClickInsertionItemsMenuBuilder;
    BOOL _isPushingColorToPanel;
    NSCollectionView *_collectionView;
    IBMutableIdentityDictionary *_draggedImageCatalogContent;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IBMutableIdentityDictionary *draggedImageCatalogContent; // @synthesize draggedImageCatalogContent=_draggedImageCatalogContent;
@property(retain, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForItemAtIndexPath:(id)arg3 forWidth:(double)arg4;
- (void)collectionViewItem:(id)arg1 setHeight:(double)arg2 forCatalogItem:(id)arg3;
- (id)collectionViewItem:(id)arg1 indexPathForCatalogItem:(id)arg2;
- (void)collectionViewItem:(id)arg1 invalidateViewController:(id)arg2;
- (id)collectionViewItem:(id)arg1 createCatalogDetailControllerForCatalogItem:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)catalogItemAtIndexPath:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)backgroundColorAffectedViews;
- (void)pushColorToColorPanelIfNecessary;
- (id)selectedColorReps;
- (void)changeColor:(id)arg1;
- (void)orderFrontColorPanel:(id)arg1;
- (void)quickLookImageCatalogItems:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)detailDocumentViewLayoutDidComplete:(id)arg1;
- (void)assetOverviewCapsuleControllerDidFinishBandSelecting:(id)arg1;
- (void)assetOverviewCapsuleController:(id)arg1 didUpdateBandSelectionRect:(struct CGRect)arg2 withEvent:(id)arg3 andInitialSelection:(id)arg4;
- (id)assetOverviewCapsuleControllerInitialSelectionForBandSelection:(id)arg1;
- (void)assetOverviewCapsuleController:(id)arg1 assetCapsule:(id)arg2 cancelPreview:(id)arg3;
- (void)assetOverviewCapsuleController:(id)arg1 assetCapsule:(id)arg2 togglePreview:(id)arg3;
- (void)assetOverviewCapsuleController:(id)arg1 trackBandSelectionWithInitialMouseDown:(id)arg2 currentMouseDragged:(id)arg3 selectionBeforeMouseDown:(id)arg4;
- (id)assetOverviewCapsuleControllerInitialSelectionForFutureBandSelection:(id)arg1;
- (void)assetOverviewCapsuleController:(id)arg1 performDelete:(id)arg2;
- (void)assetOverviewCapsuleController:(id)arg1 didTrackContextMenuFromEvent:(id)arg2;
- (void)assetOverviewCapsuleController:(id)arg1 willTrackContextMenuFromEvent:(id)arg2;
- (id)assetOverviewCapsuleController:(id)arg1 menuForEvent:(id)arg2;
- (void)assetOverviewCapsuleController:(id)arg1 userDidDragItems:(id)arg2 withMouseDown:(id)arg3 andMouseDragged:(id)arg4;
- (void)assetOverviewCapsuleController:(id)arg1 userDidOpenItems:(id)arg2;
- (void)assetOverviewCapsuleController:(id)arg1 userDidSelectItems:(id)arg2 withEvent:(id)arg3;
- (void)updateQuickLookController;
- (struct CGRect)quicklookFrameForItem:(id)arg1 inView:(id)arg2;
- (id)objectsForSelectAll;
- (BOOL)validateMenuItem:(id)arg1;
- (id)commandMenuBuilderQuicklookController:(id)arg1;
- (id)commandMenuBuilderActionContext:(id)arg1;
- (id)commandMenuBuilderDocumentEditor:(id)arg1;
- (void)removeImageCatalogItems:(id)arg1;
- (id)contextMenu;
- (id)contextClickActionForInsertingNewAsset;
- (id)contextMenuFocusedItemsForEvent:(id)arg1;
- (void)refreshContentView;
- (id)orderedAssetControllers;
- (struct CGRect)dragAndDropInsertionIndicator:(id)arg1 dragAlignmentRectForRelatedObject:(id)arg2;
- (struct CGRect)dragAlignmentRectForAssetOverviewCapsuleController:(id)arg1;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (void)view:(id)arg1 draggingEnded:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (id)destinationContainerForItems:(id)arg1 withDraggingInfo:(id)arg2;
- (id)destinationContainerForItems:(id)arg1 atDraggingLocation:(struct CGPoint)arg2;
- (id)targetedItemForDragOperationWithDraggingInfo:(id)arg1;
- (id)targetedItemForDragOperationAtDraggingLocation:(struct CGPoint)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)draggedImageCatalogContentForDragInfo:(id)arg1;
- (id)dragTypesForView:(id)arg1;
- (void)updateDropIndicators:(id)arg1;
- (long long)displayInsertionIndexForItem:(id)arg1 intoContainer:(id)arg2;
- (id)assetCapsuleControllerAtPoint:(struct CGPoint)arg1;
- (BOOL)isController:(id)arg1 hitByPoint:(struct CGPoint)arg2;
- (void)drawsWithKeyAppearanceDidChange;
- (BOOL)item:(id)arg1 intersectsBandSelectionRect:(struct CGRect)arg2 fromView:(id)arg3;
- (void)updateSelectionOwner:(id)arg1 forBandSelectionHittingObjects:(id)arg2 withEvent:(id)arg3 initialSelection:(id)arg4;
- (id)bandSelectionCandidates;
- (void)_pushSelection:(id)arg1 toController:(id)arg2;
- (void)pushSelectionToViews;
- (id)capsuleProvidingParentItemForItem:(id)arg1;
- (BOOL)isSubEditorExistanceInSyncForItem:(id)arg1;
- (id)showAlternateDetailControllerTitle;
- (void)invalidateChildControllers:(id)arg1;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

