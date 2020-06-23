//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEIODebugGaugesUI/DTTimelineGraphDelegate-Protocol.h>

@class DTTimelineDecoratedPlane, DTTimelineGraph, IDEGFXGaugeGPUFrameTimelineDecorator, IDEGFXGaugeVerticalAxisLabel, IDEGaugeStackedBarDetailsLabelViewController, IDEGaugeStackedBarDetailsPopoverController, IDETimelineGraphStackedBarDecorator, NSArray, NSMutableArray, NSString, NSTextField, NSView;

@interface IDEGFXGaugeFrameBreakdownReportSection : DVTViewController <DTTimelineGraphDelegate>
{
    DTTimelineGraph *_timelineView;
    NSView *_labelView;
    IDEGFXGaugeVerticalAxisLabel *_verticalLabelView;
    NSTextField *_gpuTitleView;
    NSArray *_titles;
    NSArray *_colors;
    IDETimelineGraphStackedBarDecorator *_cpuDecorator;
    IDEGFXGaugeGPUFrameTimelineDecorator *_gpuDecorator;
    unsigned long long _lastDuration;
    DTTimelineDecoratedPlane *_rulerPlane;
    IDEGaugeStackedBarDetailsPopoverController *_detailsPopoverController;
    IDEGaugeStackedBarDetailsLabelViewController *_cpuLabel;
    IDEGaugeStackedBarDetailsLabelViewController *_gpuLabel;
    NSMutableArray *_breakdownLabels;
    BOOL _isActive;
    unsigned long long _targetFrametime;
    BOOL _interactionEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled; // @synthesize interactionEnabled=_interactionEnabled;
- (id)_createSwatchLabelForTitle:(id)arg1 color:(id)arg2;
- (void)_createAndAddLabels;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2 withEventNanosecondOffset:(long long)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)_scrollToEndOfTimeline;
- (void)addFrame:(id)arg1 gpuFrameTime:(float)arg2 atTimeOffset:(double)arg3;
- (void)primitiveInvalidate;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)_setupPopover;
- (id)initWithFrameIntervalTitles:(id)arg1 andColors:(id)arg2 andTargetFramerate:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

