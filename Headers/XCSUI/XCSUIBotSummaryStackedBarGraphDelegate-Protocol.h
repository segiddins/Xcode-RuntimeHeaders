//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSColor, NSEvent, XCSUIBotSummaryStackedBarGraph, XCSUIBotSummaryStackedBarGraphColumn;

@protocol XCSUIBotSummaryStackedBarGraphDelegate
- (NSColor *)emptyColumnColor;
- (void)mouseExitedGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 event:(NSEvent *)arg2;
- (void)mouseClickedOnGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)mouseMovedOverGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
@end

