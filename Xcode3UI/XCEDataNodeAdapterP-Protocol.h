//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDEConfigurableDataNode, NSArray, NSCell, NSEvent, NSImage, NSObject, NSOutlineView, NSString, NSTableColumn, NSView, NSViewController;

@protocol XCEDataNodeAdapterP <NSObject>

@optional
- (void)dataNode:(IDEConfigurableDataNode *)arg1 clearForwardingCell:(NSCell *)arg2;
- (void)dataNode:(IDEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 copyWithZone:(struct _NSZone *)arg3 copiedCell:(NSCell *)arg4;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 trackMouse:(NSEvent *)arg3 inRect:(struct CGRect)arg4 ofView:(NSView *)arg5 untilMouseUp:(BOOL)arg6;
- (unsigned long long)dataNode:(IDEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 hitTestForEvent:(NSEvent *)arg3 inRect:(struct CGRect)arg4 ofView:(NSView *)arg5;
- (void)dataNode:(IDEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 drawWithFrame:(struct CGRect)arg3 inView:(NSView *)arg4;
- (NSArray *)dataArrayForConsistencyCheck;
- (NSString *)dataNode:(IDEConfigurableDataNode *)arg1 toolTipForTableColumn:(NSTableColumn *)arg2 forCell:(NSCell *)arg3 rect:(struct CGRect *)arg4 mouseLocation:(struct CGPoint)arg5;
- (NSString *)dataNode:(IDEConfigurableDataNode *)arg1 toolTipForTableColumn:(NSTableColumn *)arg2;
- (NSString *)representedFilenameForDataNode:(IDEConfigurableDataNode *)arg1;
- (void)dataNodeClear:(IDEConfigurableDataNode *)arg1;
- (BOOL)shouldSortChildrenOfNode:(IDEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeDragDeletable:(IDEConfigurableDataNode *)arg1;
- (void)dataNode:(IDEConfigurableDataNode *)arg1 acceptDroppedItems:(NSArray *)arg2 atIndex:(long long)arg3;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 canAcceptDroppedItems:(NSArray *)arg2 atChildIndex:(long long)arg3;
- (struct CGRect)dataNode:(IDEConfigurableDataNode *)arg1 frameOfOutlineCellAtRow:(long long)arg2 defaultFrame:(struct CGRect)arg3;
- (double)heightOfRowForDataNode:(IDEConfigurableDataNode *)arg1;
- (NSArray *)inspectorViewControllersForDataNode:(IDEConfigurableDataNode *)arg1 editor:(NSViewController *)arg2;
- (NSViewController *)editorViewControllerForDataNode:(IDEConfigurableDataNode *)arg1;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 matchesPersistentObjectComponent:(NSString *)arg2;
- (NSString *)dataNodePersistentObjectComponent:(IDEConfigurableDataNode *)arg1;
- (long long)compareDataNode:(IDEConfigurableDataNode *)arg1 withDataNode:(IDEConfigurableDataNode *)arg2;
- (void)refreshDataNode:(IDEConfigurableDataNode *)arg1;
- (void)removeDataNode:(IDEConfigurableDataNode *)arg1;
- (BOOL)dropPaths:(NSArray *)arg1 atIndex:(long long)arg2 ofNode:(IDEConfigurableDataNode *)arg3;
- (void)renameChild:(IDEConfigurableDataNode *)arg1 withinDataNode:(IDEConfigurableDataNode *)arg2;
- (void)removeChild:(IDEConfigurableDataNode *)arg1 fromDataNode:(IDEConfigurableDataNode *)arg2;
- (IDEConfigurableDataNode *)instantiateAddedChildWithData:(id)arg1 forDataNode:(IDEConfigurableDataNode *)arg2;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 handleReturnKey:(NSEvent *)arg2 forOutlineView:(NSOutlineView *)arg3 changeFocus:(BOOL)arg4;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 handleMouseDown:(NSEvent *)arg2 forOutlineView:(NSOutlineView *)arg3 inRow:(long long)arg4 atRelativeLocation:(struct CGPoint)arg5;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 doubleClickInColumn:(NSTableColumn *)arg2;
- (BOOL)filterChildData:(NSObject *)arg1 parentNode:(IDEConfigurableDataNode *)arg2 designatedAdapter:(NSObject *)arg3;
- (void)instantiateChildrenForDataNode:(IDEConfigurableDataNode *)arg1;
- (NSImage *)dataNodeImage:(IDEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeSelectable:(IDEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeExpandedByDefault:(IDEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeExpandable:(IDEConfigurableDataNode *)arg1;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 outlineViewIsGroupItem:(NSOutlineView *)arg2;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 outlineViewShouldShowOutlineCell:(NSOutlineView *)arg2;
- (NSCell *)dataNode:(IDEConfigurableDataNode *)arg1 outlineView:(NSOutlineView *)arg2 dataCellForTableColumn:(NSTableColumn *)arg3;
- (void)dataNode:(IDEConfigurableDataNode *)arg1 outlineView:(NSOutlineView *)arg2 willDisplayCell:(NSCell *)arg3 forTableColumn:(NSTableColumn *)arg4;
- (BOOL)dataNode:(IDEConfigurableDataNode *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2;
- (void)dataNode:(IDEConfigurableDataNode *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3;
- (id)dataNode:(IDEConfigurableDataNode *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2;
- (void)dataNodeConfigure:(IDEConfigurableDataNode *)arg1;
@end

