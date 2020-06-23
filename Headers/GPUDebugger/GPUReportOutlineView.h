//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface GPUReportOutlineView : NSOutlineView
{
    NSMutableDictionary *_cachedAutolayoutHeightDrivenWidthConstraintsByIdentifier;
    NSMutableDictionary *_cachedAutolayoutHeightDrivenCellViewsByIdentifier;
    NSMutableIndexSet *_temporaryRowIndexesForDynamicHeightItems;
    NSMutableSet *_itemsGettingHeightComputed;
    NSMutableSet *_itemsWithDynamicHeight;
}

- (void).cxx_destruct;
- (double)heightForItem:(id)arg1 givenContentHeight:(double)arg2;
- (double)heightForItem:(id)arg1 givenContentHeight:(double)arg2 dynamicHeightViewIdentifier:(id)arg3 willSetupDynamicHeightBlock:(CDUnknownBlockType)arg4;
- (void)syncRowHeights;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)prototypeTableCellViewForIdentifier:(id)arg1;
- (void)dealloc;

@end
