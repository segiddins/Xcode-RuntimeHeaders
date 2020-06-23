//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDESceneKitEditor/NSCollectionViewDataSource-Protocol.h>
#import <IDESceneKitEditor/NSCollectionViewDelegateFlowLayout-Protocol.h>

@class NSCollectionView, NSCollectionViewFlowLayout, NSString, SKEAssetCatalogDocument;

@interface SKEAssetCatalogMaterialsViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout>
{
    SKEAssetCatalogDocument *_document;
    NSCollectionView *_scenes;
    NSCollectionViewFlowLayout *_flowLayout;
}

- (void).cxx_destruct;
@property(readonly) SKEAssetCatalogDocument *document; // @synthesize document=_document;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)selectDocumentLocations:(id)arg1;
- (BOOL)canBecomeMainViewController;
- (void)newThumbnailReady:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
