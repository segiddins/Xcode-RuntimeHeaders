//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSOutlineViewDataSource-Protocol.h>
#import <DevToolsInterface/NSOutlineViewDelegate-Protocol.h>
#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class NSMapTable, NSOutlineView, NSString;

@interface PBXOutlineDataSourceSplitter : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate, XCSelectionSource>
{
    NSObject *_mainDataSource;
    NSMapTable *_columnSourceMap;
    NSOutlineView *_outlineView;
    unsigned long long _lastDragEnteredOp;
}

- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)outlineView:(id)arg1 hasChangedActiveState:(BOOL)arg2;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)outlineViewColumnDidMove:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)removeTableColumnWithIdentifier:(id)arg1;
- (id)insertNewTableColumnWithIdentifier:(id)arg1 dataSource:(id)arg2 atIndex:(long long)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setDataSource:(id)arg1 forTableColumn:(id)arg2;
- (id)dataSourceForTableColumn:(id)arg1;
- (void)setMainDataSource:(id)arg1;
- (id)mainDataSource;
- (void)finalize;
- (void)dealloc;
- (id)initWithOutlineView:(id)arg1 mainDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

