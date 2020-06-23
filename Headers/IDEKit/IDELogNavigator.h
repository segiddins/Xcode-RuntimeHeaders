//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTBorderView, DVTObservingToken, DVTScopeBarView, DVTScrollView, IDELogNavigatorRootItem, NSButton, NSDictionary, NSImage, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSPredicate, NSSet, NSString;

@interface IDELogNavigator : IDEOutlineBasedNavigator <NSMenuDelegate, DVTOutlineViewDelegate>
{
    NSImage *_buildIconImage;
    NSMutableSet *_expandedItems;
    NSMutableArray *_stateChangeObservingTokens;
    BOOL _restoringState;
    BOOL _keepSelectionWhenRestoringState;
    BOOL _workspaceBotFilteringAllowed;
    BOOL _workspaceBotFilteringEnabled;
    DVTObservingToken *_outlineViewExpandingObserverToken;
    DVTObservingToken *_botWorkspaceFilterAllowedObservingToken;
    DVTObservingToken *_botWorkspaceFilterObservingToken;
    BOOL _recentsOnlyFilteringEnabled;
    BOOL _groupByTime;
    NSPredicate *_groupingPredicate;
    DVTScopeBarView *_scopeBarView;
    NSString *_filterPatternString;
    IDELogNavigatorRootItem *_rootItem;
    NSDictionary *_stateSavingSelectedObjects;
    NSMutableSet *_mutableCollapsedItemIdentifiers;
    NSMutableSet *_mutableExpandedItemIdentifiers;
    NSButton *_byGroupedButton;
    NSButton *_byTimeButton;
    DVTScrollView *_logNavigatorScrollView;
    DVTBorderView *_dividerView;
    NSLayoutConstraint *_scopeBarViewHeightConstraint;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingWorkspaceBotFilteringEnabled;
+ (id)groupByTimeDefault;
+ (void)initialize;
- (void).cxx_destruct;
@property __weak NSLayoutConstraint *scopeBarViewHeightConstraint; // @synthesize scopeBarViewHeightConstraint=_scopeBarViewHeightConstraint;
@property __weak DVTBorderView *dividerView; // @synthesize dividerView=_dividerView;
@property __weak DVTScrollView *logNavigatorScrollView; // @synthesize logNavigatorScrollView=_logNavigatorScrollView;
@property(nonatomic) BOOL groupByTime; // @synthesize groupByTime=_groupByTime;
@property(retain, nonatomic) NSButton *byTimeButton; // @synthesize byTimeButton=_byTimeButton;
@property(retain, nonatomic) NSButton *byGroupedButton; // @synthesize byGroupedButton=_byGroupedButton;
@property(readonly, copy) NSMutableSet *mutableExpandedItemIdentifiers; // @synthesize mutableExpandedItemIdentifiers=_mutableExpandedItemIdentifiers;
@property(readonly, copy) NSMutableSet *mutableCollapsedItemIdentifiers; // @synthesize mutableCollapsedItemIdentifiers=_mutableCollapsedItemIdentifiers;
@property(copy) NSDictionary *stateSavingSelectedObjects; // @synthesize stateSavingSelectedObjects=_stateSavingSelectedObjects;
@property(retain, nonatomic) IDELogNavigatorRootItem *rootItem; // @synthesize rootItem=_rootItem;
@property(nonatomic) BOOL recentsOnlyFilteringEnabled; // @synthesize recentsOnlyFilteringEnabled=_recentsOnlyFilteringEnabled;
@property(copy, nonatomic) NSString *filterPatternString; // @synthesize filterPatternString=_filterPatternString;
@property(retain) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
@property(copy) NSPredicate *groupingPredicate; // @synthesize groupingPredicate=_groupingPredicate;
- (void)_revealNavigableItem:(id)arg1 loadEditor:(BOOL)arg2;
- (void)revealNavigableItems:(id)arg1 loadEditor:(BOOL)arg2;
- (void)_teardownTableCellView:(id)arg1;
- (void)willForgetNavigableItems:(id)arg1;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)_imageForLogRecord:(id)arg1;
- (id)_addStatusViewIfNecessary:(id)arg1 statusImageKeyPathOrNil:(id)arg2 statusImagesKeyPathOrNil:(id)arg3;
- (id)_addTextualStatusViewIfNecessary:(id)arg1;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForLoadMoreNavItem:(id)arg1;
- (id)_tableCellViewForLogRecordNavItem:(id)arg1;
- (id)_tableCellViewForLogHeaderNavItem:(id)arg1;
- (id)_tableCellViewForBotRunReportNavItem:(id)arg1;
- (id)_tableCellViewForBotRunNavItem:(id)arg1;
- (id)_tableCellViewForBotNavItem:(id)arg1;
- (id)_tableCellViewForBotServiceNavItem:(id)arg1;
- (id)_tableCellViewForGenericNavItem:(id)arg1;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (void)_updateVisibilityOfStatusViewIfNecessary:(id)arg1 statusView:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)prefersStrongSelection;
- (void)setOutputSelection:(id)arg1;
- (void)setSelectedObjects:(id)arg1;
@property(copy) NSString *visibleRectString;
- (void)revealNavigableItems:(id)arg1;
- (void)reloadNavigableItem:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_configureStateSavingObservers;
- (id)filterDefinitionIdentifier;
- (void)_clearFilter;
@property(nonatomic) BOOL workspaceBotFilteringEnabled;
@property(nonatomic) BOOL workspaceBotFilteringAllowed;
- (void)_updateFilter;
- (id)_localLogRecords;
- (id)_recentLogRecords;
- (BOOL)_isFiltered;
- (id)filterButtonMenu;
- (id)filterButtonAccessibilityDescription;
- (void)menuCmd_notifyWhenWatchedIntegrationFinishes:(id)arg1;
- (void)menuCmd_copyLink:(id)arg1;
- (void)menuCmd_viewIntegrationInBrowser:(id)arg1;
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_deleteIntegration:(id)arg1;
- (void)menuCmd_cancelIntegration:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)menuCmd_deleteBot:(id)arg1;
- (void)menuCmd_redefineBot:(id)arg1;
- (void)menuCmd_editBot:(id)arg1;
- (void)menuCmd_openInWorkspace:(id)arg1;
- (void)menuCmd_showInFinder:(id)arg1;
- (void)menuCmd_duplicateBot:(id)arg1;
- (void)menuCmd_createBot:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)selectedIDECINavigableObjects;
- (BOOL)canOpenInWorkspace:(id)arg1;
- (BOOL)canShowInFinder:(id)arg1;
- (BOOL)isCINavigable:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)setRootNavigableItem:(id)arg1;
- (id)findLogInItem:(id)arg1 equalTo:(id)arg2;
- (id)recursiveFindNavigableItemForRecord:(id)arg1 fromNavigableItem:(id)arg2;
- (id)_recursiveFindNavigableItemForRepresentedObject:(id)arg1 fromNavigableItem:(id)arg2;
- (void)updateByGroupAction:(id)arg1;
- (void)updateByTimeAction:(id)arg1;
- (void)loadView;
- (void)_expandLogItems;
- (id)dvt_extraBindings;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)isLoadMoreItem:(id)arg1;
- (id)domainIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly) Class superclass;

@end

