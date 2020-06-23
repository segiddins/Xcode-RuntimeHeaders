//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, XCSUIBotSummaryStackedBarGraph, XCSUIBotSummaryStackedBarGraphColumn;
@protocol XCSUIBotSummaryStackedBarGraphDelegate;

@interface XCSUIBotSummaryStackedBarGraphController : NSObject
{
    BOOL _suppressSuccessBarsIfNoData;
    double _barSpacing;
    double _barWidth;
    NSArray *_graphData;
    NSArray *_visibleGraphData;
    unsigned long long _maxVisibleColumns;
    NSObject<XCSUIBotSummaryStackedBarGraphDelegate> *_delegate;
    XCSUIBotSummaryStackedBarGraphColumn *_popoverTargetColumn;
    XCSUIBotSummaryStackedBarGraph *_graphView;
    unsigned long long _xAxisLabelHeight;
    unsigned long long _yAxisLabelHeight;
}

@property unsigned long long yAxisLabelHeight; // @synthesize yAxisLabelHeight=_yAxisLabelHeight;
@property unsigned long long xAxisLabelHeight; // @synthesize xAxisLabelHeight=_xAxisLabelHeight;
@property(retain, nonatomic) XCSUIBotSummaryStackedBarGraph *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) BOOL suppressSuccessBarsIfNoData; // @synthesize suppressSuccessBarsIfNoData=_suppressSuccessBarsIfNoData;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *popoverTargetColumn; // @synthesize popoverTargetColumn=_popoverTargetColumn;
@property __weak NSObject<XCSUIBotSummaryStackedBarGraphDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned long long maxVisibleColumns; // @synthesize maxVisibleColumns=_maxVisibleColumns;
@property(copy) NSArray *visibleGraphData; // @synthesize visibleGraphData=_visibleGraphData;
@property(copy) NSArray *graphData; // @synthesize graphData=_graphData;
@property double barWidth; // @synthesize barWidth=_barWidth;
@property double barSpacing; // @synthesize barSpacing=_barSpacing;
- (void).cxx_destruct;
- (void)layoutGraph;
- (unsigned long long)columnsThatFit;
- (id)emptyColumnColor;
- (id)barGraphLogAspect;
- (id)initWithGraphView:(id)arg1;

@end

