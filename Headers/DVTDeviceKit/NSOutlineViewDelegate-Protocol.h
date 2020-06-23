//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTDeviceKit/NSControlTextEditingDelegate-Protocol.h>

@class NSCell, NSEvent, NSIndexSet, NSNotification, NSOutlineView, NSString, NSTableColumn, NSTableRowView, NSView;

@protocol NSOutlineViewDelegate <NSControlTextEditingDelegate>

@optional
- (void)outlineViewItemDidCollapse:(NSNotification *)arg1;
- (void)outlineViewItemWillCollapse:(NSNotification *)arg1;
- (void)outlineViewItemDidExpand:(NSNotification *)arg1;
- (void)outlineViewItemWillExpand:(NSNotification *)arg1;
- (void)outlineViewSelectionIsChanging:(NSNotification *)arg1;
- (void)outlineViewColumnDidResize:(NSNotification *)arg1;
- (void)outlineViewColumnDidMove:(NSNotification *)arg1;
- (void)outlineViewSelectionDidChange:(NSNotification *)arg1;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)outlineView:(NSOutlineView *)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (void)outlineView:(NSOutlineView *)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 isGroupItem:(id)arg2;
- (NSCell *)outlineView:(NSOutlineView *)arg1 dataCellForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldTrackCell:(NSCell *)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldShowCellExpansionForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldTypeSelectForEvent:(NSEvent *)arg2 withCurrentSearchString:(NSString *)arg3;
- (id)outlineView:(NSOutlineView *)arg1 nextTypeSelectMatchFromItem:(id)arg2 toItem:(id)arg3 forString:(NSString *)arg4;
- (NSString *)outlineView:(NSOutlineView *)arg1 typeSelectStringForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (double)outlineView:(NSOutlineView *)arg1 heightOfRowByItem:(id)arg2;
- (NSString *)outlineView:(NSOutlineView *)arg1 toolTipForCell:(NSCell *)arg2 rect:(struct CGRect *)arg3 tableColumn:(NSTableColumn *)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(NSOutlineView *)arg1 didDragTableColumn:(NSTableColumn *)arg2;
- (void)outlineView:(NSOutlineView *)arg1 didClickTableColumn:(NSTableColumn *)arg2;
- (void)outlineView:(NSOutlineView *)arg1 mouseDownInHeaderOfTableColumn:(NSTableColumn *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldSelectTableColumn:(NSTableColumn *)arg2;
- (NSIndexSet *)outlineView:(NSOutlineView *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldSelectItem:(id)arg2;
- (BOOL)selectionShouldChangeInOutlineView:(NSOutlineView *)arg1;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (void)outlineView:(NSOutlineView *)arg1 willDisplayCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (void)outlineView:(NSOutlineView *)arg1 didRemoveRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (void)outlineView:(NSOutlineView *)arg1 didAddRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (NSTableRowView *)outlineView:(NSOutlineView *)arg1 rowViewForItem:(id)arg2;
- (NSView *)outlineView:(NSOutlineView *)arg1 viewForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
@end

