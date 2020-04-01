//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSTest.h>

#import <XCSUI/IDETestReport_TestRun-Protocol.h>

@class IDESchemeActionRunDestinationRecord, NSArray, NSImage, NSNumber, NSString;
@protocol IDETestReport_Base, IDETestReport_Device;

@interface XCSTest (IDETestReportModelObjects) <IDETestReport_TestRun>
- (void)ide_testReport_testRun_schemeActionsInvocationRecord:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
- (id)ide_sharedTests_testedDevice;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries;
- (void)setTestClassName:(id)arg1;
- (id)testClassName;
- (void)setTestName:(id)arg1;
- (id)testName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_runName;
@property(readonly, nonatomic) NSNumber *ide_testReport_common_duration;
@property(readonly, nonatomic) NSString *ide_testReport_common_statusTooltip;
@property(readonly, nonatomic) NSImage *ide_testReport_common_typeImage;
@property(readonly, nonatomic) NSImage *ide_testReport_common_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_common_title;
@property(readonly, nonatomic) BOOL ide_testReport_common_passed;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_UUID;
@property(readonly, nonatomic) id <IDETestReport_Device> ide_testReport_testRun_testedDevice;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_activities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent;
@property(readonly) Class superclass;
@end

