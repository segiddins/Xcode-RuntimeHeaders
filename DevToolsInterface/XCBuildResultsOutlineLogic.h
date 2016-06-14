//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, PBXBuildResultsModule, XCBuildOperation, XCBuildResultAdapter, XCBuildResultsOutlineView, XCEConfigurableDataSource;

@interface XCBuildResultsOutlineLogic : NSObject
{
    PBXBuildResultsModule *_module;
    XCBuildOperation *_buildOperation;
    XCBuildResultsOutlineView *_outline;
    XCBuildResultsOutlineView *_outlineIssues;
    XCBuildResultsOutlineView *_activeOutline;
    XCEConfigurableDataSource *_dataSource;
    XCEConfigurableDataSource *_dataSourceIssues;
    BOOL _showSteps;
    BOOL _showWarnings;
    BOOL _showErrors;
    BOOL _showAnalyzerResults;
    BOOL _showAllResults;
    BOOL _startNotificationWasReceived;
    BOOL _stopNotificationWasReceived;
    BOOL _expandingWhileBuilding;
    XCBuildResultAdapter *_genericLogItemAdapter;
    XCBuildResultAdapter *_targetHeadingAdapter;
    XCBuildResultAdapter *_invocationAdapter;
    XCBuildResultAdapter *_errorAdapter;
    XCBuildResultAdapter *_warningAdapter;
    XCBuildResultAdapter *_analyzerWarningAdapter;
    XCBuildResultAdapter *_analyzerResultAdapter;
    XCBuildResultAdapter *_analyzerStepAdapter;
    XCBuildResultAdapter *_analyzerControlFlowStepAdapter;
    XCBuildResultAdapter *_analyzerEventStepAdapter;
    XCBuildResultAdapter *_unitTestAdapter;
    XCBuildResultAdapter *_headerInclusionAdapter;
    XCBuildResultAdapter *_noticeAdapter;
    XCBuildResultAdapter *_summaryItemAdapter;
    XCBuildResultAdapter *_issueCategoryAdapter;
    XCBuildResultAdapter *_issueOccurrenceAdapter;
    XCBuildResultAdapter *_issueOccurrenceSubStepAdapter;
    NSMapTable *_superitemMap;
    NSMapTable *_textLayoutsGenerationA;
    NSMapTable *_textLayoutsGenerationB;
    NSMutableDictionary *_issueCategoryNodes;
    NSString *_searchFieldValue;
}

+ (id)markerForOtherCategory;
+ (id)tooltipForLogMessage:(id)arg1;
+ (id)lessUnderlinedWhiteImage;
+ (id)lessWhiteImage;
+ (id)moreUnderlinedWhiteImage;
+ (id)moreWhiteImage;
+ (id)lessUnderlinedImage;
+ (id)lessImage;
+ (id)moreUnderlinedImage;
+ (id)moreImage;
+ (id)newImageWithTitle:(id)arg1 selected:(BOOL)arg2 underlined:(BOOL)arg3;
+ (id)condensedOverImage;
+ (id)condensedDownImage;
+ (id)condensedUpImage;
+ (id)expandedOverImage;
+ (id)expandedDownImage;
+ (id)expandedUpImage;
+ (id)buildFileInProgressIconImage;
+ (id)buildFileErrorsIconImage;
+ (id)buildFileWarningsIconImage;
+ (id)buildFileAnalyzerResultsIconImage;
+ (id)buildFileWithIssuesIconImage;
+ (id)buildFileSuccessIconImage;
+ (id)errorIconImage;
+ (id)warningIconImage;
+ (id)analyzerControlFlowStepIconImage;
+ (id)analyzerStepIconImage;
+ (id)analyzerEventStepIconImage;
+ (id)analyzerResultIconImage;
+ (id)analyzerWarningIconImage;
+ (id)noticeIconImage;
+ (id)targetToolIconImage;
+ (id)targetLibraryIconImage;
+ (id)targetFrameworkIconImage;
+ (id)targetBundleIconImage;
+ (id)targetAppIconImage;
+ (id)targetIconImage;
+ (id)sharedTextLayout;
@property(readonly, nonatomic) PBXBuildResultsModule *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *searchFieldValue; // @synthesize searchFieldValue=_searchFieldValue;
@property(readonly, nonatomic) BOOL showAllResults; // @synthesize showAllResults=_showAllResults;
@property(readonly, nonatomic) BOOL showAnalyzerResults; // @synthesize showAnalyzerResults=_showAnalyzerResults;
@property(readonly, nonatomic) BOOL showErrors; // @synthesize showErrors=_showErrors;
@property(readonly, nonatomic) BOOL showWarnings; // @synthesize showWarnings=_showWarnings;
@property(readonly, nonatomic) BOOL showSteps; // @synthesize showSteps=_showSteps;
- (void)dealloc;
- (id)initWithModule:(id)arg1 outlineView:(id)arg2 outlineIssuesView:(id)arg3;
- (void)selectMessage:(id)arg1 withinDataNode:(id)arg2;
- (BOOL)startingWithTextView:(id)arg1 findText:(id)arg2 ignoreCase:(BOOL)arg3 matchStyle:(int)arg4 backwards:(BOOL)arg5 wrap:(BOOL)arg6;
- (id)transcriptAttributedStringForDataNode:(id)arg1;
- (id)transcriptStringForDataNode:(id)arg1;
- (void)updateSearchFieldValue:(id)arg1;
- (id)buildOperation;
- (void)copyTranscriptToNewTextFile:(id)arg1;
- (void)_delayedShowAndMakeActive:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)attributedLogStringForItems:(id)arg1 inOutlineView:(id)arg2;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (BOOL)dataSource:(id)arg1 filterDisplayedRootNode:(id)arg2;
- (void)collapseAllTranscripts:(id)arg1;
- (void)expandAllTranscripts:(id)arg1;
- (void)expandSelectedTranscripts:(BOOL)arg1;
- (void)expandTranscripts:(BOOL)arg1 nodes:(id)arg2;
- (void)_recursiveSetTextExpanded:(BOOL)arg1 inDataNode:(id)arg2;
- (void)_scrollToEnd:(id)arg1;
- (void)_recursiveReplaceAdapter:(id)arg1 with:(id)arg2 inDataNode:(id)arg3;
- (void)setBuildOperation:(id)arg1 force:(BOOL)arg2;
- (void)_updateRootsByIssues;
- (void)updateByIssueView:(id)arg1;
- (void)_updateIssuesForSection:(id)arg1 nodesToExpand:(id)arg2;
- (void)_updateIssuesForMessage:(id)arg1 nodesToExpand:(id)arg2;
- (id)nodeForIssueItem:(id)arg1;
- (id)categoryForItem:(id)arg1;
- (void)buildOperationDidStop:(id)arg1;
- (void)testComputeCounts;
- (void)_updateToolbarAfterBuild;
- (void)setExpandingWhileBuilding:(BOOL)arg1;
- (BOOL)expandingWhileBuilding;
- (void)buildOperationDidUpdateBuildLogItems:(id)arg1;
- (void)updateByStepView:(id)arg1;
- (void)updateMapWithSuperitem:(id)arg1 forItem:(id)arg2;
- (id)superitemFor:(id)arg1;
- (id)textLayoutForDataNode:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading_Radar6707952:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading:(id)arg1;
- (id)nodeForLogItem:(id)arg1;
- (void)buildOperationDidReportStatus:(id)arg1;
- (void)buildOperationWillStart:(id)arg1;
- (void)noteActiveViewDidChangeTo:(id)arg1;
- (void)setShowAllResults:(BOOL)arg1;
- (void)setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)_restoreConfigurationForCurrentOutlineView;
- (void)_saveConfigurationForCurrentOutlineView;
- (void)_rebuildOutline;
- (void)_updateCounts;
- (void)_updateRoots;
- (void)scrollToEndOfOutline;
- (BOOL)shouldScrollToEndOfOutline;
- (void)scrollToEndOfOutlineView:(id)arg1;
- (BOOL)shouldScrollToEndOfOutlineView:(id)arg1;
- (BOOL)alwaysShowTargetInfo;
- (void)_configure;
- (id)_configureOutline:(id)arg1;
- (BOOL)filterLogItem:(id)arg1;
- (BOOL)filterLogMessage:(id)arg1;
- (BOOL)filterLogMessageSansSubitems:(id)arg1;
- (BOOL)filterLogSection:(id)arg1;
- (BOOL)logMessageHasFilteredSubItems:(id)arg1;
- (BOOL)logSectionHasFilteredSubItems:(id)arg1;
- (BOOL)iterateCountingOverSection:(id)arg1 errorCountPtr:(unsigned long long *)arg2 warningCountPtr:(unsigned long long *)arg3 analyzerCountPtr:(unsigned long long *)arg4 stopOnError:(BOOL)arg5 stopOnWarning:(BOOL)arg6 stopOnAnalyzer:(BOOL)arg7;
- (id)issueOccurrenceSubStepAdapter;
- (id)issueOccurrenceAdapter;
- (id)issueCategoryAdapter;
- (id)summaryItemAdapter;
- (id)noticeAdapter;
- (id)unitTestAdapter;
- (id)headerInclusionAdapter;
- (id)analyzerEventStepAdapter;
- (id)analyzerControlFlowStepAdapter;
- (id)analyzerStepAdapter;
- (id)analyzerResultAdapter;
- (id)analyzerWarningAdapter;
- (id)warningAdapter;
- (id)errorAdapter;
- (id)invocationAdapter;
- (id)targetHeadingAdapter;
- (id)genericLogItemAdapter;

@end

