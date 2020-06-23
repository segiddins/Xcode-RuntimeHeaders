//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEProductsUI/IDEGraphDelegate-Protocol.h>

@class IDEAnalyticsMetricsStackedBarGraph, IDEAnalyticsStackBarLegendView, NSArray, NSButton, NSDictionary, NSNumber, NSString, NSTextField, NSView, _TtC12DVTAnalytics23AnalyticsMetricsDataset;

@interface IDEAnalyticsMetricsStackedBarGraphViewController : DVTViewController <IDEGraphDelegate>
{
    NSTextField *_graphTitleField;
    NSTextField *_graphSubTitleField;
    NSTextField *_errorField;
    NSString *_metricsName;
    NSString *_appName;
    NSString *_helpBookAnchorID;
    NSView *_graphContentView;
    IDEAnalyticsStackBarLegendView *_legendView;
    NSTextField *_graphXAxisLabel;
    NSButton *_helpButton;
    _TtC12DVTAnalytics23AnalyticsMetricsDataset *_fullDataSet;
    NSDictionary *_dataToGraph;
    NSArray *_versions;
    NSArray *_values;
    NSNumber *_valueChange;
    NSDictionary *_colorMap;
    NSArray *_stackOrder;
    NSString *_unitString;
    NSString *_legendUnitString;
    IDEAnalyticsMetricsStackedBarGraph *_barGraph;
}

- (void).cxx_destruct;
@property(retain) IDEAnalyticsMetricsStackedBarGraph *barGraph; // @synthesize barGraph=_barGraph;
@property(retain) NSString *legendUnitString; // @synthesize legendUnitString=_legendUnitString;
@property(retain) NSString *unitString; // @synthesize unitString=_unitString;
@property(retain) NSArray *stackOrder; // @synthesize stackOrder=_stackOrder;
@property(retain) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain) NSNumber *valueChange; // @synthesize valueChange=_valueChange;
@property(retain) NSArray *values; // @synthesize values=_values;
@property(retain) NSArray *versions; // @synthesize versions=_versions;
@property(retain) NSDictionary *dataToGraph; // @synthesize dataToGraph=_dataToGraph;
@property(retain) _TtC12DVTAnalytics23AnalyticsMetricsDataset *fullDataSet; // @synthesize fullDataSet=_fullDataSet;
@property __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property __weak NSTextField *graphXAxisLabel; // @synthesize graphXAxisLabel=_graphXAxisLabel;
@property __weak IDEAnalyticsStackBarLegendView *legendView; // @synthesize legendView=_legendView;
@property __weak NSView *graphContentView; // @synthesize graphContentView=_graphContentView;
@property(retain, nonatomic) NSString *helpBookAnchorID; // @synthesize helpBookAnchorID=_helpBookAnchorID;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *metricsName; // @synthesize metricsName=_metricsName;
@property __weak NSTextField *errorField; // @synthesize errorField=_errorField;
@property __weak NSTextField *graphSubTitleField; // @synthesize graphSubTitleField=_graphSubTitleField;
@property __weak NSTextField *graphTitleField; // @synthesize graphTitleField=_graphTitleField;
- (id)dataUnavailableString;
- (id)colorForChartNamed:(id)arg1;
- (BOOL)lineFilledForGraph:(id)arg1 entry:(id)arg2;
- (void)updateLegendData;
- (void)viewDidLoad;
- (void)updateBarGraphView;
- (void)removeBarGraphView;
- (void)addBarGraphView;
- (void)helpButtonClicked:(id)arg1;
- (void)updateWithFullDataSet:(id)arg1 dataToGraph:(id)arg2 versions:(id)arg3 values:(id)arg4 colorMap:(id)arg5 stackOrder:(id)arg6 unitString:(id)arg7 legendUnitString:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

