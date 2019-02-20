//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDEConfigurableDataNode, IDEConfigurableDataSource, NSArray, NSControl, NSMenu, NSOutlineView, NSPasteboard, NSString, NSTableColumn;
@protocol NSDraggingInfo;

@protocol XCEDataRootAdapterP <NSObject>

@optional
- (BOOL)dataSource:(IDEConfigurableDataSource *)arg1 filterDisplayedRootNode:(IDEConfigurableDataNode *)arg2;
- (void)dataSource:(IDEConfigurableDataSource *)arg1 acceptDroppedItems:(NSArray *)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataSource:(IDEConfigurableDataSource *)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (BOOL)useOrganizerStyleDragAndDrop;
- (void)dataSource:(IDEConfigurableDataSource *)arg1 outlineView:(NSOutlineView *)arg2 sortDescriptorsDidChange:(NSArray *)arg3;
- (BOOL)dataSource:(IDEConfigurableDataSource *)arg1 control:(NSControl *)arg2 didFailToFormatString:(NSString *)arg3 errorDescription:(NSString *)arg4;
- (unsigned long long)outlineView:(NSOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 createItemsFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 writeItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (NSArray *)dataSource:(IDEConfigurableDataSource *)arg1 pasteboardFilenamesForNodes:(NSArray *)arg2;
- (NSMenu *)dataSource:(IDEConfigurableDataSource *)arg1 contextMenuForSelectedNodes:(NSArray *)arg2;
- (void)dataSource:(IDEConfigurableDataSource *)arg1 askToDeleteRootNodes:(NSArray *)arg2 nonRootNodes:(NSArray *)arg3;
- (void)updateAndSaveRoots;
- (void)textDidEndEditing;
- (BOOL)selectDataNode:(IDEConfigurableDataNode *)arg1;
- (BOOL)doubleClickDataNode:(IDEConfigurableDataNode *)arg1 inColumn:(NSTableColumn *)arg2;
- (BOOL)removeRootDataNode:(IDEConfigurableDataNode *)arg1;
- (BOOL)moveDataNodes:(NSArray *)arg1 toRootIndex:(long long)arg2;
- (BOOL)addRootPaths:(NSArray *)arg1 atIndex:(long long)arg2;
@end
