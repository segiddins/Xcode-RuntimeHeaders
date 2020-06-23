//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <DebuggerUI/IDEBreakpointNavigatorModelObserver-Protocol.h>
#import <DebuggerUI/IDEBreakpointNavigatorSupport-Protocol.h>
#import <DebuggerUI/IDEBreakpointObserver-Protocol.h>
#import <DebuggerUI/NSMenuDelegate-Protocol.h>
#import <DebuggerUI/NSOutlineViewDelegate-Protocol.h>

@class DVTObservingToken, IDEBreakpointManager, IDEBreakpointNavigatorModel, NSArray, NSMutableArray, NSMutableSet, NSPasteboard, NSString;
@protocol DVTInvalidation;

@interface IDEBreakpointNavigableNavigator : IDEOutlineBasedNavigator <IDEBreakpointObserver, IDEBreakpointNavigatorModelObserver, IDEBreakpointNavigatorSupport, NSOutlineViewDelegate, NSMenuDelegate>
{
    NSMutableSet *_collapsedItems;
    NSMutableSet *_collapsedItemsBeforeFiltering;
    IDEBreakpointNavigatorModel *_model;
    BOOL _restoringState;
    DVTObservingToken *_selectedObjectsListToken;
    id <DVTInvalidation> _rowSizeStyleChangedObserver;
    NSMutableArray *_copiedBreakpoints;
    NSMutableArray *_enableDisableLocations;
    NSArray *_draggedItems;
    NSPasteboard *_draggedPasteboard;
    BOOL _filterOnModifiedBreakpoints;
    BOOL _filterOnEnabledBreakpoints;
    IDEBreakpointManager *_breakpointManager;
    NSString *_filterString;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(nonatomic) BOOL filterOnEnabledBreakpoints; // @synthesize filterOnEnabledBreakpoints=_filterOnEnabledBreakpoints;
@property(nonatomic) BOOL filterOnModifiedBreakpoints; // @synthesize filterOnModifiedBreakpoints=_filterOnModifiedBreakpoints;
@property(retain, nonatomic) IDEBreakpointManager *breakpointManager; // @synthesize breakpointManager=_breakpointManager;
- (id)_collapsedItemsAsNameTree;
- (void)_setCollapsedItemsFromNameTree:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_stateChanged;
- (void)deleteSelectedItems:(id)arg1;
- (void)createAndEditBreakpointOfClass:(Class)arg1;
- (void)_createBreakpoint:(id)arg1;
- (void)_showBreakpointEditorForNavigableItem:(id)arg1;
- (void)selectBreakpoint:(id)arg1 showEditor:(BOOL)arg2;
- (BOOL)_navigableItemRepresentsEditableBreakpoint:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (void)_addMenuItemToMenu:(id)arg1 forBucket:(id)arg2;
- (void)_addMoveMenuToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (void)_enableBreakpointLocations:(id)arg1;
- (void)_addEnableBreakpointLocationsMenuItemToMenu:(id)arg1;
- (void)_addDeleteMenuItemsToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (void)_editRightClickedBreakpoint:(id)arg1;
- (void)_addEditMenuItemToMenu:(id)arg1 itemToEdit:(id)arg2;
- (void)_shareOrUnshareBreakpoints:(id)arg1;
- (void)_addShareOrUnshareMenuItemToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (void)_enableOrDisableBreakpoints:(id)arg1;
- (void)_addEnableOrDisableMenuItemToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (BOOL)_canDeleteRightClickedItems:(id)arg1;
- (BOOL)_canEditRightClickedItems:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (struct CGSize)_breakpointSizeForRowSizeStyle:(long long)arg1;
- (unsigned long long)_itemDepth:(id)arg1;
- (void)_setCollapsedItems:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)willForgetNavigableItems:(id)arg1;
- (void)_bindImageAndTitleOfTableViewCell:(id)arg1;
- (id)_tableCellViewForFileBreakpointGroupNavItem:(id)arg1;
- (id)_tableCellViewForBreakpointGroupNavItem:(id)arg1;
- (void)_breakpointButtonClicked:(id)arg1;
- (id)_tableCellViewForBreakpointNavItem:(id)arg1;
- (void)_unbindForBreakpointButton:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)_nonWatchpointItems:(id)arg1;
- (void)_moveBreakpointsForNavigableItems:(id)arg1 toBucket:(id)arg2;
- (void)_moveRightClickedBreakpointsToBucket:(id)arg1;
- (void)breakpointsWereRemoved:(id)arg1;
- (void)breakpointWasAdded:(id)arg1;
- (void)breakpointLocationsAdded:(id)arg1 removed:(id)arg2;
- (void)_clearDraggedItems;
- (void)_selectItemNearDeletedItemIndex:(long long)arg1 parentItem:(id)arg2;
- (long long)_smallestRowIndexOfNavigableItemInArray:(id)arg1 forDeleting:(BOOL)arg2;
- (void)_deleteBreakpointsForNavigableItems:(id)arg1;
- (void)_deleteDraggedItems;
- (BOOL)_canDeleteDraggedItems;
- (void)_deleteDisabledBreakpointsFromRightClickedItems;
- (void)_deleteRightClickedItems;
- (void)_deleteSelectedItems;
- (void)_repaintRowForBreakpoint:(id)arg1;
- (BOOL)_isItemExpandedIncludingParents:(id)arg1;
- (void)_expandNavigableItemForBreakpointIfItemAndAncestorsAreNotInCollapsedSet:(id)arg1;
- (void)_pushSelection;
- (void)revealNavigableItems:(id)arg1;
- (id)_createEnablementFilterPredicates;
- (void)_clearFilter;
- (void)_updateFilter;
- (id)_breakpointsForNavigableItems:(id)arg1;
- (id)_breakpointsForNavigableItem:(id)arg1;
- (void)setRootNavigableItem:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)filterButtonMenu;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterDefinitionIdentifier;
- (id)domainIdentifier;
- (void)_updateBreakpointButtonSizesForAllRows;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

