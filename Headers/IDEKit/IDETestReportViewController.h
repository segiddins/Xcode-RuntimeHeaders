//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>
#import <IDEKit/QLPreviewPanelDataSource-Protocol.h>

@class DVTBorderedView, DVTLozengeTextField, DVTObservingToken, DVTOutlineView, DVTScopeBarButton, DVTSearchField, IDETestReportBaselineUpdateController, IDETestReportBatchBaselineUpdateWindow, IDETestReportTestRunFetcher, NSArray, NSButton, NSDictionary, NSMapTable, NSMutableArray, NSMutableIndexSet, NSOperationQueue, NSPopover, NSScrollView, NSString, NSURL, NSView;
@protocol IDEClientTrackingToken, IDETestReport_RootObject;

@interface IDETestReportViewController : IDEViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, IDETestsInTestableObserver, NSPopoverDelegate, QLPreviewPanelDataSource>
{
    NSOperationQueue *testPlaceholderQueryQueue;
    IDETestReportBaselineUpdateController *_baselineUpdatesController;
    unsigned long long _countOfTestablesToUpdate;
    unsigned long long _countOfTestManagerTestables;
    IDETestReportTestRunFetcher *_testRunFetcher;
    IDETestReportBatchBaselineUpdateWindow *_updateWindow;
    unsigned long long _selectedBaselineRecordBehavior;
    BOOL _prefetchingLazyLoadedTestRuns;
    NSMapTable *_filteredTestsAndGroupItems;
    NSPopover *_setBaselinePopover;
    BOOL _enableBaselineUpdatingUI;
    DVTObservingToken *_controllerContentViewLayoutObservingToken;
    BOOL _readyToReloadView;
    DVTObservingToken *_accessoryViewAlertOptionsToken;
    id <IDEClientTrackingToken> _clientTrackingToken;
    NSMutableArray *_activitiesViewCurrentSelectedDocumentLocationObservers;
    NSMutableArray *_currentlyExpandedTestItemIdentifiers;
    NSMutableArray *_testRunPickerRows;
    NSMapTable *_testRunPickerRowsAndSelectedTestRun;
    NSMutableArray *_remoteDownloadHelpers;
    NSURL *_quickLookURL;
    NSView *_quickLookPanelOriginView;
    NSMutableIndexSet *_multilineAssertionRowIndexes;
    NSMutableArray *_assertionOutlineObjects;
    id _scrollViewBoundsDidChangeObserver;
    id _windowDidBecomeMainObserver;
    struct CGRect _masterCellViewXIBFrame;
    struct CGRect _masterCellViewTextFieldFrame;
    struct CGRect _masterCellViewButtonFrame;
    NSMutableArray *_filteredGroupsWithNamesMatchingFilterPredicate;
    BOOL _failingOnly;
    BOOL _passedOnly;
    BOOL _failedExpectedOnly;
    BOOL _perfOnly;
    id <IDETestReport_RootObject> _rootObject;
    CDUnknownBlockType _testSelectedCallback;
    CDUnknownBlockType _activitySelectedCallback;
    DVTBorderedView *_filterBarBorderedView;
    DVTSearchField *_filterField;
    DVTLozengeTextField *_lozengeTextField;
    DVTScopeBarButton *_scopeBarAllButton;
    DVTScopeBarButton *_scopeBarPassedButton;
    DVTScopeBarButton *_scopeBarFailedButton;
    DVTScopeBarButton *_scopeBarUnitAndPerfTestsButton;
    DVTScopeBarButton *_scopeBarPerformanceTestsButton;
    NSButton *_setBaselinesButton;
    DVTOutlineView *_testsOutlineView;
    NSScrollView *_testsScrollView;
    NSView *_testHostView;
    NSArray *_deviceColumns;
    NSArray *_perfMetricColumns;
    NSArray *_filteredTests;
    NSArray *_outlineViewRootItems;
    NSArray *_filteredOutlineViewRootItems;
    NSArray *_perfTestMetricNames;
    NSDictionary *_fetchedTests;
    NSDictionary *_testItemsByIdentifier;
}

+ (BOOL)alwayShowQuickLookButton;
+ (void)initialize;
@property(retain, nonatomic) NSDictionary *testItemsByIdentifier; // @synthesize testItemsByIdentifier=_testItemsByIdentifier;
@property(copy) NSDictionary *fetchedTests; // @synthesize fetchedTests=_fetchedTests;
@property(copy) NSArray *perfTestMetricNames; // @synthesize perfTestMetricNames=_perfTestMetricNames;
@property BOOL perfOnly; // @synthesize perfOnly=_perfOnly;
@property BOOL failedExpectedOnly; // @synthesize failedExpectedOnly=_failedExpectedOnly;
@property BOOL passedOnly; // @synthesize passedOnly=_passedOnly;
@property BOOL failingOnly; // @synthesize failingOnly=_failingOnly;
@property(copy) NSArray *filteredOutlineViewRootItems; // @synthesize filteredOutlineViewRootItems=_filteredOutlineViewRootItems;
@property(copy) NSArray *outlineViewRootItems; // @synthesize outlineViewRootItems=_outlineViewRootItems;
@property(copy) NSArray *filteredTests; // @synthesize filteredTests=_filteredTests;
@property(retain) NSArray *perfMetricColumns; // @synthesize perfMetricColumns=_perfMetricColumns;
@property(retain) NSArray *deviceColumns; // @synthesize deviceColumns=_deviceColumns;
@property __weak NSView *testHostView; // @synthesize testHostView=_testHostView;
@property __weak NSScrollView *testsScrollView; // @synthesize testsScrollView=_testsScrollView;
@property __weak DVTOutlineView *testsOutlineView; // @synthesize testsOutlineView=_testsOutlineView;
@property __weak NSButton *setBaselinesButton; // @synthesize setBaselinesButton=_setBaselinesButton;
@property __weak DVTScopeBarButton *scopeBarPerformanceTestsButton; // @synthesize scopeBarPerformanceTestsButton=_scopeBarPerformanceTestsButton;
@property __weak DVTScopeBarButton *scopeBarUnitAndPerfTestsButton; // @synthesize scopeBarUnitAndPerfTestsButton=_scopeBarUnitAndPerfTestsButton;
@property __weak DVTScopeBarButton *scopeBarFailedButton; // @synthesize scopeBarFailedButton=_scopeBarFailedButton;
@property __weak DVTScopeBarButton *scopeBarPassedButton; // @synthesize scopeBarPassedButton=_scopeBarPassedButton;
@property __weak DVTScopeBarButton *scopeBarAllButton; // @synthesize scopeBarAllButton=_scopeBarAllButton;
@property __weak DVTLozengeTextField *lozengeTextField; // @synthesize lozengeTextField=_lozengeTextField;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property __weak DVTBorderedView *filterBarBorderedView; // @synthesize filterBarBorderedView=_filterBarBorderedView;
@property(readonly, nonatomic) NSArray *currentlyExpandedTestItemIdentifiers; // @synthesize currentlyExpandedTestItemIdentifiers=_currentlyExpandedTestItemIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType activitySelectedCallback; // @synthesize activitySelectedCallback=_activitySelectedCallback;
@property(copy, nonatomic) CDUnknownBlockType testSelectedCallback; // @synthesize testSelectedCallback=_testSelectedCallback;
@property(retain, nonatomic) id <IDETestReport_RootObject> rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)quickLookRow:(id)arg1;
- (id)parentTestItemOfActivity:(id)arg1;
- (void)configureMasterCellView:(id)arg1 activity:(id)arg2 isMasterActivity:(BOOL)arg3 isFirstActivity:(BOOL)arg4 startTime:(id)arg5;
- (void)selectItemWithIdentifier:(id)arg1;
- (void)expandItemsWithIdentifiers:(id)arg1;
- (void)updateBaselineForPerfMetric:(id)arg1 inTestRun:(id)arg2 newBaseline:(double)arg3 newAllowedSTD:(id)arg4;
- (id)assertionsAttributedStringForTestFailures:(id)arg1 noBaselines:(id)arg2;
- (id)assertionsInTestRun:(id)arg1;
- (id)noBaselineWarningsInTestRun:(id)arg1;
- (BOOL)testRunHasMissingBaseline:(id)arg1;
- (void)showTestAssertionsForTestRun:(id)arg1 inTest:(id)arg2 button:(id)arg3;
- (void)_showBaselinePopoverForTest:(id)arg1 test:(id)arg2 relativeTo:(id)arg3;
- (void)popoverDidClose:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)configureAndSizeMultilineActivitiesTableCellView:(id)arg1 itemLevel:(unsigned long long)arg2;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)showResultsForTestRun:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)combinedAssertionsStringForFailureSummaries:(id)arg1;
- (struct CGSize)requiredSizeForAssertion:(id)arg1 itemLevel:(unsigned long long)arg2;
- (id)attributedStringForTestName:(id)arg1 parentGroupName:(id)arg2;
- (void)copy:(id)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)itemIsAssertionFailure:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)contextMenu_openActivity:(id)arg1;
- (void)contextMenu_showInFinder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_processActivity:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)testHasAssertions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showTestForClassName:(id)arg1 methodName:(id)arg2;
- (void)filterFieldAction:(id)arg1;
- (void)reloadAndFilterOutline;
- (id)filteredTestsRespectingScopeFiltersInTestGroup:(id)arg1 withFilterString:(id)arg2;
- (void)testablesChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)observePerfTestGroupTestables;
- (void)setBaselinesAction:(id)arg1;
- (BOOL)_testsProvideBlueprintInfo;
- (void)scopeBarUnitAndPerfTests:(id)arg1;
- (void)scopeBarPerformance:(id)arg1;
- (void)scopeBarFailed:(id)arg1;
- (void)scopeBarPassed:(id)arg1;
- (void)scopeBarAll:(id)arg1;
- (void)scopeBarChanged;
- (void)commitScopeBarState;
- (void)restoreScopeBarState;
- (void)prefetchLazyLoadedTestRuns;
- (void)reloadAndExpandOutlineView;
- (id)allPerfTestGroups;
- (id)testClassesWithScopeBarFiltering;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSMutableArray *mutableCurrentlyExpandedTestItemIdentifiers; // @dynamic mutableCurrentlyExpandedTestItemIdentifiers;
@property(readonly) Class superclass;

@end
