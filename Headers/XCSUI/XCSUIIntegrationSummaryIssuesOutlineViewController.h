//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <XCSUI/NSMenuDelegate-Protocol.h>
#import <XCSUI/NSOutlineViewDataSource-Protocol.h>
#import <XCSUI/NSOutlineViewDelegate-Protocol.h>
#import <XCSUI/XCSUIIntegrationSummaryIssuesOutlineSelectionDelegate-Protocol.h>
#import <XCSUI/XCSUIIntegrationSummaryIssuesTableCellViewActionTarget-Protocol.h>

@class DVTOutlineView, NSArray, NSIndexSet, NSString, XCSIntegration, XCSIntegrationIssues, XCSUIInsetHorizontalDividerLine, XCSUIIntegrationSummaryIssuesOutlineContextMenuActions, XCSUIIntegrationSummaryIssuesTableCellView;

@interface XCSUIIntegrationSummaryIssuesOutlineViewController : DVTViewController <NSMenuDelegate, XCSUIIntegrationSummaryIssuesOutlineSelectionDelegate, XCSUIIntegrationSummaryIssuesTableCellViewActionTarget, NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    XCSUIIntegrationSummaryIssuesTableCellView *_templateIssuesCellView;
    XCSUIIntegrationSummaryIssuesOutlineContextMenuActions *_contextMenuActionsTarget;
    NSIndexSet *_selectedIndexesBeforeRefreshing;
    BOOL _isPerformingInitialLoadAndExpansion;
    NSArray *_issueSections;
    XCSIntegration *_integration;
    XCSIntegrationIssues *_integrationIssues;
    CDUnknownBlockType _selectionChangedCallback;
    CDUnknownBlockType _outlineDidExpandOrCollapseItemsCallback;
    CDUnknownBlockType _doubleClickCallback;
    NSArray *_sections;
    DVTOutlineView *_olv;
    XCSUIInsetHorizontalDividerLine *_dividerLine;
}

@property __weak XCSUIInsetHorizontalDividerLine *dividerLine; // @synthesize dividerLine=_dividerLine;
@property __weak DVTOutlineView *olv; // @synthesize olv=_olv;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) CDUnknownBlockType doubleClickCallback; // @synthesize doubleClickCallback=_doubleClickCallback;
@property(copy, nonatomic) CDUnknownBlockType outlineDidExpandOrCollapseItemsCallback; // @synthesize outlineDidExpandOrCollapseItemsCallback=_outlineDidExpandOrCollapseItemsCallback;
@property(copy, nonatomic) CDUnknownBlockType selectionChangedCallback; // @synthesize selectionChangedCallback=_selectionChangedCallback;
@property(retain, nonatomic) XCSIntegrationIssues *integrationIssues; // @synthesize integrationIssues=_integrationIssues;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
@property(copy, nonatomic) NSArray *issueSections; // @synthesize issueSections=_issueSections;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (id)issuesTableCellViewFromSuperview:(id)arg1;
- (void)fixIt:(id)arg1 editingMode:(long long)arg2;
- (void)provisioningFailureFixIt:(id)arg1;
- (void)missingProjectWorkspaceFixIt:(id)arg1;
- (void)invalidDestinationFixIt:(id)arg1;
- (void)schemeMissingFixIt:(id)arg1;
- (void)triggerErrorFixIt:(id)arg1;
- (void)deviceFailureFixIt:(id)arg1;
- (void)scmFailureFixIt:(id)arg1;
- (void)updateContextMenuForSelectedItems:(id)arg1;
- (id)_newItemInMenu:(id)arg1 withTitle:(id)arg2 submenu:(id)arg3;
- (id)_newItemInMenu:(id)arg1 withTitle:(id)arg2 action:(SEL)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
@property(readonly, nonatomic) double outlineViewContentHeight;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (double)heightOfRowForIssue:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)showRadarForIssue:(id)arg1;
- (void)configureIssuesCell:(id)arg1 withIssue:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)updateViewHeightToFit;
- (void)refreshIssueGroups;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)allIssues;
- (id)selectedIssues;
- (id)selectedIssue;
- (void)primitiveInvalidate;
- (void)viewDidAppear;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

