//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAssetCapsule.h>

@class IBICAssetGroupView, NSSet;

@interface IBICGroupedRepCapsule : IBICAssetCapsule
{
    IBICAssetGroupView *_groupSubview;
    NSSet *_assetRepIdentifiers;
}

+ (void)initialize;
@property(copy, nonatomic) NSSet *assetRepIdentifiers; // @synthesize assetRepIdentifiers=_assetRepIdentifiers;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (double)suggestedMaxWidthForContent;
- (void)layoutTopDown;
- (id)targettedAssetComponentIDsAtPoint:(struct CGPoint)arg1;
- (id)assetComponentIDAtPoint:(struct CGPoint)arg1;
- (BOOL)isComponentID:(id)arg1 hitByPoint:(struct CGPoint)arg2;
- (struct CGRect)frameForImageOfComponentWithAssetComponentID:(id)arg1;
- (struct CGRect)bandSelectionFrameForAssetComponentID:(id)arg1;
- (struct CGSize)iconSize;
- (void)setHighlightedDragDestinationAssetRepIdentifiers:(id)arg1;
- (void)setContextFocusedAssetComponentIDs:(id)arg1;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (void)reloadValues;
- (id)allImageRepIdentifiersForImageRepViews;
- (id)assetRepIdentifierForRepView:(id)arg1;
- (id)repViewForAssetRepIdentifier:(id)arg1;
- (void)pullRecursiveDelegatedValuesForGroup:(id)arg1 path:(id)arg2;
- (void)pullInvididualDelegatedValuesForGroup:(id)arg1 path:(id)arg2;
- (id)rebuildRootGroupView;
- (void)setDrawsWithKeyAppearance:(BOOL)arg1;

@end

