//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSTestActivity.h>

#import <XCSUI/IDETestReport_TestActivity-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol IDETestReport_Base;

@interface XCSTestActivity (IDETestReport_TestActivity) <IDETestReport_TestActivity>
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subitems;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_transitiveAttachments;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_directAttachments;
@property(readonly, copy, nonatomic) NSDate *sortingTimestamp;
@property(readonly, nonatomic) BOOL ide_test_activity_containsFailure;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subactivities;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_memoryGraphFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_memoryGraph;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_diagnosticReportFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_diagnosticReport;
@property(readonly, copy, nonatomic) id ide_test_activity_screenshot;
@property(readonly, nonatomic) double ide_test_activity_duration;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_finishTime;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_startTime;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_UUID;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_activityType;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_attachment_base_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent;
@property(readonly) Class superclass;
@end

