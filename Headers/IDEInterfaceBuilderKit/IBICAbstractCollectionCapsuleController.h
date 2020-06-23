//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICGroupedRepCapsuleController.h>

@class NSMutableArray;

@interface IBICAbstractCollectionCapsuleController : IBICGroupedRepCapsuleController
{
    NSMutableArray *_assets;
    NSMutableArray *_selectionIndicators;
}

- (void).cxx_destruct;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingEnded:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (void)clearHighlightingForDragOperation;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (id)chooseDropTargetGettingAllowedDragOperations:(unsigned long long *)arg1 forDraggingInfo:(id)arg2;
- (BOOL)isValidPath:(id)arg1 forDroppingOnComponentWithID:(id)arg2;
- (void)groupedRepCapsule:(id)arg1 configureAssetView:(id)arg2 forAssetRepIdentifier:(id)arg3;
- (void)groupedRepCapsule:(id)arg1 configureGroupView:(id)arg2 forGroupWithPath:(id)arg3;
- (id)groupedRepCapsule:(id)arg1 detailAreaPathForIdentifier:(id)arg2;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (BOOL)canProduceImageForPasteboard:(id)arg1 forFileTypesForDropLocation:(id)arg2;
- (id)assetComponentForAssetComponentID:(id)arg1;
- (id)rootAssetForComponentID:(id)arg1;
- (id)assetComponentIDForAssetComponent:(id)arg1;
- (void)removeAssetComponentIDsFromUIImmediately:(id)arg1;
- (BOOL)displaysChildrenOfItem:(id)arg1;
- (id)displayableDescendants;
- (void)pushData;
- (id)assetsForDataPush;
- (void)loadView;
- (id)assets;
- (id)asset;
- (id)assetCapsule;
- (id)allowedFileTypesForDragAndDrop;
- (Class)primaryChildClassForDrop;
- (id)possibleChildClassesForDrop;
- (Class)assetClass;

@end

