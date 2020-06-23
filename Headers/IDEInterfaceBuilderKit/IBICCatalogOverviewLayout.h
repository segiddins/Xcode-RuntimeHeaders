//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewLayout.h>

@class NSMutableArray;

@interface IBICCatalogOverviewLayout : NSCollectionViewLayout
{
    NSMutableArray *_layoutAttributes;
    struct CGSize _contentSize;
    double _rowSpacing;
    struct NSEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) struct NSEdgeInsets margins; // @synthesize margins=_margins;
- (void)invalidateLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)computeLayoutStartingFromIndex:(long long)arg1;
- (id)delegate;

@end
