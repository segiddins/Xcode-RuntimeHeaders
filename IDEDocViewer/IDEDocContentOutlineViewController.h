//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEDocViewer/IDEDocNavigator.h>

#import <IDEDocViewer/NSOutlineViewDataSource-Protocol.h>
#import <IDEDocViewer/NSOutlineViewDelegate-Protocol.h>

@class DSANode, IDEDocContentOutlineView, NSString, _IDEDocContentOutlineViewRootNode;

@interface IDEDocContentOutlineViewController : IDEDocNavigator <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DSANode *_selectedNode;
    BOOL _disableOutlineViewSelectionChangeDelegate;
    BOOL _didRestoreExpansionState;
    _IDEDocContentOutlineViewRootNode *_rootNode;
    IDEDocContentOutlineView *outlineView;
}

+ (id)groupFont;
+ (id)nonGroupFont;
+ (id)outlineBackgroundColor;
@property(retain) DSANode *selectedNode; // @synthesize selectedNode=_selectedNode;
@property IDEDocContentOutlineView *outlineView; // @synthesize outlineView;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)updateWithURL:(id)arg1 node:(id)arg2 webView:(id)arg3;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

