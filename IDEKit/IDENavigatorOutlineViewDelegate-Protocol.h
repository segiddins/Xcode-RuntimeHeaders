//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>

@class NSArray, NSCell, NSOutlineView;

@protocol IDENavigatorOutlineViewDelegate <DVTOutlineViewDelegate>

@optional
- (struct _NSRange)outlineView:(NSOutlineView *)arg1 initialSelectionRangeForCell:(NSCell *)arg2 proposedRange:(struct _NSRange)arg3;
- (NSArray *)outlineView:(NSOutlineView *)arg1 childItemsForItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 isGroupHeaderItem:(id)arg2;
@end

