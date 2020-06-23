//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEFindNavigatorQueryParametersPresentedController-Protocol.h>
#import <IDEKit/IDEFindNavigatorRolloverRowViewDelegate-Protocol.h>
#import <IDEKit/IDEFindNavigatorScopeEditorDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTDelayedInvocation, IDEBatchFindNamedScope, IDEFindNavigatorAbstractScopeOutlineItem, IDEFindNavigatorScopeEditor, IDENavigableItemFilter, NSArray, NSDictionary, NSOutlineView, NSPopover, NSString;
@protocol IDEFindNavigatorScopeChooserControllerDelegate;

@interface IDEFindNavigatorScopeChooserController : IDEViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, NSPopoverDelegate, IDEFindNavigatorScopeEditorDelegate, IDEFindNavigatorRolloverRowViewDelegate, IDEFindNavigatorQueryParametersPresentedController>
{
    NSOutlineView *_scopeChooserOutlineView;
    IDEFindNavigatorAbstractScopeOutlineItem *_unfilteredRootItem;
    IDEFindNavigatorAbstractScopeOutlineItem *_filteredRootItem;
    IDEFindNavigatorScopeEditor *_scopeEditor;
    NSPopover *_popover;
    NSString *_editedPredicateName;
    NSArray *_filterMatchStrings;
    IDENavigableItemFilter *_filter;
    NSString *_filterText;
    NSDictionary *_predicatesToItems;
    NSDictionary *_namedScopesToItems;
    DVTDelayedInvocation *_refreshInvocation;
    id <IDEFindNavigatorScopeChooserControllerDelegate> _delegate;
    IDEBatchFindNamedScope *_namedScopeValue;
}

@property(retain, nonatomic) IDEBatchFindNamedScope *namedScopeValue; // @synthesize namedScopeValue=_namedScopeValue;
@property(retain) id <IDEFindNavigatorScopeChooserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)findNavigatorRolloverRowView:(id)arg1 updateMouseInside:(BOOL)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)pullNamedScopeFromOutline;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)isGroupItem:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)makeCellView;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)reloadOutline:(long long)arg1;
- (void)updateFilterText:(id)arg1;
- (void)expandItemAfterFiltering:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)filterItem:(id)arg1 filter:(id)arg2 ancestorPassedFilter:(BOOL)arg3 descendantPassedFilter:(char *)arg4;
- (id)generateWorkspaceItem;
- (id)generateDynamicContentItem;
- (void)exploreWorkspaceLocationScopeCandidates:(id)arg1 startingAt:(long long)arg2 visitedContainers:(id)arg3 root:(long long)arg4;
- (void)initiateItemExplorationQueue:(id)arg1;
- (id)generateSavedScopesItem;
- (id)generateRootItem;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)duplicateScope:(id)arg1;
- (void)createScopeFromSelection:(id)arg1;
- (id)scopesForDuplicating;
- (id)namedScopeForPromotingToNamedScope;
- (id)contextMenuSelectedItems;
- (void)popoverDidClose:(id)arg1;
- (void)singleClickedOutline:(id)arg1;
- (void)addNamedScope:(id)arg1;
- (id)newScopeNameGivenBaseName:(id)arg1;
- (void)doubleClickedOutline:(id)arg1;
- (void)initiateSearchFromOutlineItem;
- (void)clickedTableRowEditNamedScopeButton:(id)arg1;
- (void)deleteSelectedNamedScopes;
- (void)editNamedScopeItem:(id)arg1;
- (void)refresh:(id)arg1;
- (id)exportedPredicateFromSelectedOutlineItems;
- (id)exportedPredicateFromOutlineItems:(id)arg1;
- (void)selectOutlineItemsForPredicate:(id)arg1 expandToVisible:(BOOL)arg2;
- (void)selectOutlineItemsForNamedItems:(id)arg1 groupPredicates:(id)arg2 expandToVisible:(BOOL)arg3;
- (id)outlineItemForPredicate:(id)arg1;
- (id)outlineItemForNamedScope:(id)arg1;
- (void)expandParentsOfItem:(id)arg1 parentMap:(id)arg2;
- (void)populateParentMap:(id)arg1 fromItem:(id)arg2;
- (void)populateItemByNamedScopeIndex:(id)arg1 fromItem:(id)arg2;
- (void)populateItemByPredicateIndex:(id)arg1 fromItem:(id)arg2;
- (id)clickedOutlineItem;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

