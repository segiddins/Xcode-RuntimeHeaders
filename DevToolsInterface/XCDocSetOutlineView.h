//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

#import <DevToolsInterface/NSOutlineViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, XCDocSetOutlineViewController;

@interface XCDocSetOutlineView : NSOutlineView <NSOutlineViewDelegate>
{
    XCDocSetOutlineViewController *_controller;
    NSMutableDictionary *_itemToDocSetCellDict;
    long long _rowOfContextualMenuClick;
}

- (void)setController:(id)arg1;
- (id)controller;
- (void)reloadData;
- (id)outlineViewItemForEvent:(id)arg1;
- (id)itemAtOutlineViewRow:(long long)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)invalidateAllDocSetCellCaches;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)redisplayAndUnselectOutlineViewItem:(id)arg1;
- (void)redisplayOutlineViewItem:(id)arg1;
- (void)removeSyndicationButtonsForPublisher:(id)arg1;
- (void)subscribeToFeedForGroup:(id)arg1;
- (void)subscribeFailed:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_docOutlineViewWindowWillClose:(id)arg1;
- (id)docSetsColumnInOutlineView;
- (void)dealloc;
- (void)awakeFromNib;
- (id)itemToDocSetCellDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

