//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTLayerHostingView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTWindowActivationStateObserver-Protocol.h>
#import <IDEKit/IDEActivityViewDataConsumer-Protocol.h>

@class CALayer, DVTObservingToken, DVTStackBacktrace, IDEActivityMultiActionIndicatorLayer, IDEActivityPopUpWindowController, IDEActivityReport, IDEActivityReportLayer, IDEActivityStatusContainerLayer, IDEActivityViewDataSource, IDEWorkspaceWindowController, NSMapTable, NSString, NSView;
@protocol DVTCancellable;

@interface IDEActivityView : DVTLayerHostingView <IDEActivityViewDataConsumer, DVTWindowActivationStateObserver, DVTInvalidation>
{
    NSView *_layerView;
    IDEActivityMultiActionIndicatorLayer *_multiActionIndicatorLayer;
    IDEActivityStatusContainerLayer *_issuesContainerLayer;
    IDEActivityReportLayer *_currentActivityReportLayer;
    CALayer *_reportLayerContainerLayer;
    CALayer *_backgroundLayer;
    CALayer *_reportLayerTree;
    IDEActivityPopUpWindowController *_popUpController;
    DVTObservingToken *_popUpControllerIsValidToken;
    IDEWorkspaceWindowController *_workspaceWindowController;
    NSMapTable *_strongReportsToStrongReportLayers;
    IDEActivityViewDataSource *_dataSource;
    id <DVTCancellable> _activationStateObserverToken;
    DVTObservingToken *_visibleStatusCategoriesObservingToken;
    DVTObservingToken *_indeterminateReportInProgressObservingToken;
    struct {
        unsigned int setup:1;
        unsigned int displayedReportIsCompleted:1;
        unsigned int forcedDisplayedReportUpdateIsScheduled:1;
        unsigned int _reserved:5;
    } _flags;
}

+ (struct CGSize)scaledSizeWithMaximumWidth:(double)arg1 forToolbarDisplayMode:(unsigned long long)arg2 sizeMode:(unsigned long long)arg3;
+ (struct CGSize)defaultSizeForToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
+ (void)initialize;
@property(retain, nonatomic) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)openLogNavigator;
- (void)openActivityPopUp;
- (void)cancelDisplayedReport:(id)arg1;
- (void)stopObservingActivityReports;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(id)arg1;
- (void)activityViewDataSource:(id)arg1 activityReportDidComplete:(id)arg2;
- (void)activityReportListDidChangeForActivityViewDataSource:(id)arg1;
- (void)updateActionIndicators;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidEndLiveResize;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)disableActions:(CDUnknownBlockType)arg1;
- (void)makeSureIssuesLayerIsVisible;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)setupOrTearDown;
- (void)tearDown;
- (void)setup;
- (void)teardownLayers;
- (void)viewDidChangeEffectiveAppearance;
- (void)setupLayers;
- (id)_buildMultiActionIndicatorLayer;
- (id)_buildAllStatusLayer;
- (id)_buildReportLayerTree;
- (id)_backgroundLayer;
- (void)_updateCurrentActivityReportForWindowActivationState;
- (id)clickableLayerAtPoint:(struct CGPoint)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGRect)insetReportLayerBounds;
- (struct CGRect)insetRootLayerBounds;
@property struct CGSize contentSize;
- (void)sizeToFitToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
- (void)activityViewDataSource:(id)arg1 workspaceRepresentingTypeStringDidChangeTo:(id)arg2;
- (void)activityViewDataSource:(id)arg1 issueCountDidChangeForIssueCategory:(id)arg2;
- (void)unschedulePendingForcedDisplayedReportUpdate;
- (void)scheduleForcedDisplayedReportUpdate;
- (void)chooseAndDisplayNextActivityReportAfterIdlePreDelay;
- (void)chooseAndDisplayNextActivityReportAfterReportCompleted;
- (void)chooseAndDisplayNextActivityReportAfterMinimumTimeExpiredOrDelayExpired;
- (void)chooseAndDisplayNextActivityReportAfterChangeInReports;
- (id)nextActivityReportToDisplay;
- (void)delayedSetDisplayedReport:(id)arg1;
- (void)activityViewDataSource:(id)arg1 displayDelayTimeWasMetForActivityReport:(id)arg2;
- (void)tryToDisplayReport:(id)arg1;
- (void)setDisplayedReport:(id)arg1;
- (id)activityReportLayerForReport:(id)arg1;
- (void)setActivityReportLayer:(id)arg1 forReport:(id)arg2;
- (void)activityViewDataSource:(id)arg1 minimumDisplayTimeWasMetForActivityReport:(id)arg2;
@property(readonly) IDEActivityReport *displayedReport;
- (id)activityReports;
- (id)orderedActivityReports;
- (id)activityReportManager;
- (id)workspaceTabController;
- (id)workspace;
- (id)workspaceDocument;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activityViewCommonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

