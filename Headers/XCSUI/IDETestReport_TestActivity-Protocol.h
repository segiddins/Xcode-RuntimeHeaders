//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/IDETestReport_Base-Protocol.h>
#import <XCSUI/IDETest_ActivityAttachment_Base-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol IDETestReport_TestActivity <IDETest_ActivityAttachment_Base, IDETestReport_Base>
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_transitiveAttachments;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_directAttachments;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subitems;
@property(readonly, nonatomic) BOOL ide_test_activity_containsFailure;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subactivities;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_memoryGraphFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_memoryGraph;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_diagnosticReportFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_diagnosticReport;
@property(readonly, copy, nonatomic) id ide_test_activity_screenshot;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_finishTime;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_startTime;
@property(readonly, nonatomic) double ide_test_activity_duration;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_activityType;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_UUID;
@end

