//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEStoreKitEditor/_TtC17IDEStoreKitEditor17IDEStoreKitEditor.h>

#import <IDEStoreKitEditor/DVTReplacementViewDelegate-Protocol.h>

@interface _TtC17IDEStoreKitEditor17IDEStoreKitEditor (IDEStoreKitEditor) <DVTReplacementViewDelegate>
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
@end

