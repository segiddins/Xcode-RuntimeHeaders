//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTLibraryKit/NSCollectionViewDelegate-Protocol.h>

@class NSCollectionView, NSCollectionViewLayout, NSIndexPath;

@protocol NSCollectionViewDelegateFlowLayout <NSCollectionViewDelegate>

@optional
- (struct CGSize)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

