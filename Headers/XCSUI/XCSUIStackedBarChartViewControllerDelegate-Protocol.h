//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class NSEvent, XCSUIBotSummaryStackedBarGraphColumn, XCSUIStackedBarChartViewController;

@protocol XCSUIStackedBarChartViewControllerDelegate <NSObject>
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userClickedOnGraphColumn:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userMousedOverGraphColumn:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userMouseExitedGraph:(id)arg2 event:(NSEvent *)arg3;
@end

