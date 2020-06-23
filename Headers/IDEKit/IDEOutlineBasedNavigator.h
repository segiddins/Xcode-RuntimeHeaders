//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class IDENavigableItem, IDENavigatorOutlineView, NSArray, NSMutableArray, NSString;
@protocol IDEOpenRequest;

@interface IDEOutlineBasedNavigator : IDENavigator <NSOutlineViewDelegate>
{
    NSArray *_selectedObjects;
    IDENavigableItem *_itemToSelectBasedOnItemBeingEdited;
    IDENavigatorOutlineView *_outlineView;
    id <IDEOpenRequest> _lastOpenRequest;
}

+ (id)keyPathsForValuesAffectingFilterProgress;
+ (id)keyPathsForValuesAffectingObjects;
+ (void)initialize;
@property(retain) id <IDEOpenRequest> lastOpenRequest; // @synthesize lastOpenRequest=_lastOpenRequest;
@property(retain) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)revertState;
- (long long)filterProgress;
- (void)setFilter:(id)arg1;
- (void)_updateSelectionToReflectActivelyEditedItem;
- (void)focusedEditorDidSelectItem;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)contextMenuSelection;
- (void)willForgetNavigableItems:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(readonly, nonatomic) NSArray *objects;
- (void)_toggleExpandedStateOf:(id)arg1;
- (BOOL)_openNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_shouldOpenNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (BOOL)delegateFirstResponder;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableSelectedObjects; // @dynamic mutableSelectedObjects;
@property(retain) NSArray *selectedObjects; // @dynamic selectedObjects;
@property(readonly) Class superclass;

@end

