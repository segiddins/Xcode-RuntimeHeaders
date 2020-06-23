//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSCollectionView, NSCollectionViewItem, NSIndexPath, NSString, NSView;

@protocol NSCollectionViewDataSource <NSObject>
- (NSCollectionViewItem *)collectionView:(NSCollectionView *)arg1 itemForRepresentedObjectAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(NSCollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSView *)collectionView:(NSCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(NSCollectionView *)arg1;
@end

