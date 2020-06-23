//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/NSPathCellDelegate-Protocol.h>

@class DVTPathCell, DVTPathComponentCell, NSArray, NSMenu, NSMenuItem, NSString;
@protocol DVTPathCellItem, _TtP6DVTKit25DVTPathCellItemDataSource_;

@protocol DVTPathCellDelegate <NSPathCellDelegate>

@optional
- (void)pathCell:(DVTPathCell *)arg1 didEndDragForComponentCell:(DVTPathComponentCell *)arg2;
- (BOOL)pathCell:(DVTPathCell *)arg1 beginDragForComponentCell:(DVTPathComponentCell *)arg2;
- (NSString *)pathCell:(DVTPathCell *)arg1 toolTipForPathComponentCell:(DVTPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCell:(DVTPathCell *)arg1 accessibilityDescriptionForPathComponentCell:(DVTPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (long long)pathCell:(DVTPathCell *)arg1 textAlignmentOfTitleForPathComponentCell:(DVTPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCell:(DVTPathCell *)arg1 titleForPathComponentCell:(DVTPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCellNoSelectionTitle;
- (struct CGPoint)pathCell:(DVTPathCell *)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (NSMenuItem *)pathCell:(DVTPathCell *)arg1 menuItemForItem:(id <DVTPathCellItem>)arg2 defaultMenuItem:(NSMenuItem *)arg3;
- (void)pathCell:(DVTPathCell *)arg1 didUpdateMenu:(NSMenu *)arg2;
- (BOOL)pathCell:(DVTPathCell *)arg1 performAlternateReveal:(id <DVTPathCellItem>)arg2 fromFrame:(struct CGRect)arg3;
- (BOOL)pathCell:(DVTPathCell *)arg1 shouldEnableSelection:(id <DVTPathCellItem>)arg2;
- (BOOL)pathCell:(DVTPathCell *)arg1 shouldInitiallyShowMenuSearch:(id <DVTPathCellItem>)arg2;
- (id <_TtP6DVTKit25DVTPathCellItemDataSource_>)pathCell:(DVTPathCell *)arg1 childItemDataSourceForItem:(id <DVTPathCellItem>)arg2;
- (NSArray *)pathCell:(DVTPathCell *)arg1 childItemsForItem:(id <DVTPathCellItem>)arg2;
- (BOOL)pathCell:(DVTPathCell *)arg1 didClickComponentCell:(DVTPathComponentCell *)arg2 item:(id <DVTPathCellItem>)arg3 pathComponentCellOffset:(double)arg4;
- (BOOL)pathCell:(DVTPathCell *)arg1 shouldPopUpMenuForPathComponentCell:(DVTPathComponentCell *)arg2 item:(id <DVTPathCellItem>)arg3;
- (BOOL)pathCell:(DVTPathCell *)arg1 shouldSeparateDisplayOfChildItemsForItem:(id <DVTPathCellItem>)arg2;
- (BOOL)pathCell:(DVTPathCell *)arg1 shouldDisplayChildrenForItem:(id <DVTPathCellItem>)arg2;
- (void)pathCell:(DVTPathCell *)arg1 willDismissMenuDisplayingItems:(NSArray *)arg2;
- (void)pathCell:(DVTPathCell *)arg1 willDisplayChildren:(NSArray *)arg2 mostProximateChildItem:(id <DVTPathCellItem>)arg3;
@end
