//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/DBGGaugeEditor.h>

#import <DebuggerUI/IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h>
#import <DebuggerUI/IDEGraphDelegate-Protocol.h>

@class DVTCapacitySegment, DVTMeterView, IDECoreChartPlotGraph, NSButton, NSByteCountFormatter, NSString, NSTextField, NSView;

@interface DBGGaugeMemoryEditor : DBGGaugeEditor <IDEDebugGaugeReportTopSectionContentDelegate, IDEGraphDelegate>
{
    NSView *_topSectionUtilizationView;
    DVTCapacitySegment *_remainderCapacitySegment;
    DVTCapacitySegment *_processCapacitySegment;
    BOOL _useLogScaleInSpeedometer;
    BOOL _usePhysicalFootprint;
    BOOL _shownUIForMemoryCap;
    NSString *_topChartName;
    NSString *_bottomChartName;
    NSByteCountFormatter *_byteFormatter;
    NSView *_topSectionSpeedometerView;
    DVTMeterView *_topSectionSpeedometer;
    NSTextField *_topSectionSpeedTopNumberLabel;
    NSTextField *_topSectionSpeedTopUnitLabel;
    NSTextField *_topSectionSpeedBottomNumberLabel;
    NSTextField *_topSectionSpeedBottomUnitLabel;
    NSButton *_profileButton;
    NSView *_topGraphContainer;
    IDECoreChartPlotGraph *_topGraph;
    NSTextField *_topGraphDescription;
    NSTextField *_topGraphDuration;
    NSTextField *_topGraphHigh;
    NSTextField *_topGraphLow;
    NSTextField *_cap;
    NSView *_bottomGraphContainer;
    IDECoreChartPlotGraph *_bottomGraph;
    NSTextField *_bottomGraphDescription;
    NSTextField *_bottomGraphDuration;
    NSTextField *_bottomGraphHigh;
    NSTextField *_bottomGraphLow;
    NSView *_disabledMessageContainer;
    NSTextField *_disabledMessageText;
}

+ (void)initialize;
- (void).cxx_destruct;
@property __weak NSTextField *disabledMessageText; // @synthesize disabledMessageText=_disabledMessageText;
@property __weak NSView *disabledMessageContainer; // @synthesize disabledMessageContainer=_disabledMessageContainer;
@property __weak NSTextField *bottomGraphLow; // @synthesize bottomGraphLow=_bottomGraphLow;
@property __weak NSTextField *bottomGraphHigh; // @synthesize bottomGraphHigh=_bottomGraphHigh;
@property __weak NSTextField *bottomGraphDuration; // @synthesize bottomGraphDuration=_bottomGraphDuration;
@property __weak NSTextField *bottomGraphDescription; // @synthesize bottomGraphDescription=_bottomGraphDescription;
@property __weak IDECoreChartPlotGraph *bottomGraph; // @synthesize bottomGraph=_bottomGraph;
@property __weak NSView *bottomGraphContainer; // @synthesize bottomGraphContainer=_bottomGraphContainer;
@property __weak NSTextField *cap; // @synthesize cap=_cap;
@property __weak NSTextField *topGraphLow; // @synthesize topGraphLow=_topGraphLow;
@property __weak NSTextField *topGraphHigh; // @synthesize topGraphHigh=_topGraphHigh;
@property __weak NSTextField *topGraphDuration; // @synthesize topGraphDuration=_topGraphDuration;
@property __weak NSTextField *topGraphDescription; // @synthesize topGraphDescription=_topGraphDescription;
@property __weak IDECoreChartPlotGraph *topGraph; // @synthesize topGraph=_topGraph;
@property __weak NSView *topGraphContainer; // @synthesize topGraphContainer=_topGraphContainer;
@property __weak NSButton *profileButton; // @synthesize profileButton=_profileButton;
@property __weak NSTextField *topSectionSpeedBottomUnitLabel; // @synthesize topSectionSpeedBottomUnitLabel=_topSectionSpeedBottomUnitLabel;
@property __weak NSTextField *topSectionSpeedBottomNumberLabel; // @synthesize topSectionSpeedBottomNumberLabel=_topSectionSpeedBottomNumberLabel;
@property __weak NSTextField *topSectionSpeedTopUnitLabel; // @synthesize topSectionSpeedTopUnitLabel=_topSectionSpeedTopUnitLabel;
@property __weak NSTextField *topSectionSpeedTopNumberLabel; // @synthesize topSectionSpeedTopNumberLabel=_topSectionSpeedTopNumberLabel;
@property __weak DVTMeterView *topSectionSpeedometer; // @synthesize topSectionSpeedometer=_topSectionSpeedometer;
@property __weak NSView *topSectionSpeedometerView; // @synthesize topSectionSpeedometerView=_topSectionSpeedometerView;
- (void)primitiveInvalidate;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (void)setPathStyleForGraph:(id)arg1 entry:(id)arg2 path:(id)arg3;
- (BOOL)lineFilledForGraph:(id)arg1 entry:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (id)topSectionTitleAccessoryView;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)_addGraphViews:(id)arg1;
- (void)_addDisabledMessage:(id)arg1 toStackView:(id)arg2;
- (void)_showUIForMemoryCap;
- (void)addSectionsToView:(id)arg1;
- (void)_configureBottomGraphLabels;
- (void)_configureTopGraphLabels;
- (void)_setupMemoryGraph:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (id)instrumentsToolIdentifierForAnalysis;
- (void)_setupTopSectionComponentViews;
- (void)_setupSpeedometer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

