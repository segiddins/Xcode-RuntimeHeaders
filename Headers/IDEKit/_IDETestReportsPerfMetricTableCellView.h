//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDETestReportViewController, NSButton;
@protocol IDETestReport_TestRun;

@interface _IDETestReportsPerfMetricTableCellView : NSTableCellView
{
    NSButton *_button;
    id <IDETestReport_TestRun> _testRun;
    IDETestReportViewController *_reportViewController;
}

@property __weak IDETestReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property __weak NSButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)showPerfPopover:(id)arg1;

@end

