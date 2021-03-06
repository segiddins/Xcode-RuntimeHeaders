//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTEmptyContentPlaceholder, NSArray, NSTrackingArea, XCSUIBotSummaryStackedBarGraphColumn, XCSUIBotSummaryStackedBarGraphController;

@interface XCSUIBotSummaryStackedBarGraph : NSView
{
    CDUnknownBlockType _resizeHandler;
    NSArray *_graphData;
    NSArray *_issuesSeriesData;
    XCSUIBotSummaryStackedBarGraphController *_controller;
    unsigned long long _largestBarValue;
    NSTrackingArea *_tracker;
    XCSUIBotSummaryStackedBarGraphColumn *_columnInMouseHoverEvent;
    XCSUIBotSummaryStackedBarGraphColumn *_columnInMouseDownEvent;
    DVTEmptyContentPlaceholder *_emptyContentPlaceholder;
}

- (void).cxx_destruct;
@property(retain) DVTEmptyContentPlaceholder *emptyContentPlaceholder; // @synthesize emptyContentPlaceholder=_emptyContentPlaceholder;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *columnInMouseDownEvent; // @synthesize columnInMouseDownEvent=_columnInMouseDownEvent;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *columnInMouseHoverEvent; // @synthesize columnInMouseHoverEvent=_columnInMouseHoverEvent;
@property(retain) NSTrackingArea *tracker; // @synthesize tracker=_tracker;
@property unsigned long long largestBarValue; // @synthesize largestBarValue=_largestBarValue;
@property __weak XCSUIBotSummaryStackedBarGraphController *controller; // @synthesize controller=_controller;
@property(copy) NSArray *issuesSeriesData; // @synthesize issuesSeriesData=_issuesSeriesData;
@property(copy, nonatomic) NSArray *graphData; // @synthesize graphData=_graphData;
@property(copy) CDUnknownBlockType resizeHandler; // @synthesize resizeHandler=_resizeHandler;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)graphTypeString;
- (id)accessibilityContents;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)drawGraphData;
- (void)drawXAxisLabels;
- (void)drawYAxisLabels;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)_columnInEvent:(id)arg1;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1;

@end

