//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_TestRun-Protocol.h>

@class IDESchemeActionRunDestinationRecord, NSArray, NSImage, NSNumber, NSString;
@protocol IDETestReport_Base, IDETestReport_Device;

@interface IDETestReportTestRunItem : NSObject <IDETestReport_TestRun>
{
    BOOL _ide_testReport_common_passed;
    NSArray *_ide_testReport_testRun_perfMetrics;
    NSString *_ide_testReport_testRun_testName;
    NSString *_ide_testReport_testRun_testClassName;
    NSString *_ide_testReport_testRun_runName;
    id <IDETestReport_Device> _ide_testReport_testRun_testedDevice;
    IDESchemeActionRunDestinationRecord *_ide_testReport_testRun_schemeActionRunDestinationRecord;
    NSString *_ide_testReport_testRun_UUID;
    NSArray *_ide_testReport_testRun_failureSummaries;
    NSString *_ide_testReport_testRun_testableBlueprintName;
    NSString *_ide_testReport_testRun_testableBlueprintPath;
    NSArray *_ide_testReport_testRun_activities;
    NSNumber *_ide_testReport_common_duration;
    NSString *_ide_testReport_base_identifier;
}

@property(copy, nonatomic) NSString *ide_testReport_base_identifier; // @synthesize ide_testReport_base_identifier=_ide_testReport_base_identifier;
@property(retain, nonatomic) NSNumber *ide_testReport_common_duration; // @synthesize ide_testReport_common_duration=_ide_testReport_common_duration;
@property(nonatomic) BOOL ide_testReport_common_passed; // @synthesize ide_testReport_common_passed=_ide_testReport_common_passed;
@property(copy, nonatomic) NSArray *ide_testReport_testRun_activities; // @synthesize ide_testReport_testRun_activities=_ide_testReport_testRun_activities;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath; // @synthesize ide_testReport_testRun_testableBlueprintPath=_ide_testReport_testRun_testableBlueprintPath;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName; // @synthesize ide_testReport_testRun_testableBlueprintName=_ide_testReport_testRun_testableBlueprintName;
@property(copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries; // @synthesize ide_testReport_testRun_failureSummaries=_ide_testReport_testRun_failureSummaries;
@property(copy, nonatomic) NSString *ide_testReport_testRun_UUID; // @synthesize ide_testReport_testRun_UUID=_ide_testReport_testRun_UUID;
@property(retain, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord; // @synthesize ide_testReport_testRun_schemeActionRunDestinationRecord=_ide_testReport_testRun_schemeActionRunDestinationRecord;
@property(retain, nonatomic) id <IDETestReport_Device> ide_testReport_testRun_testedDevice; // @synthesize ide_testReport_testRun_testedDevice=_ide_testReport_testRun_testedDevice;
@property(copy, nonatomic) NSString *ide_testReport_testRun_runName; // @synthesize ide_testReport_testRun_runName=_ide_testReport_testRun_runName;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testClassName; // @synthesize ide_testReport_testRun_testClassName=_ide_testReport_testRun_testClassName;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testName; // @synthesize ide_testReport_testRun_testName=_ide_testReport_testRun_testName;
@property(copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics; // @synthesize ide_testReport_testRun_perfMetrics=_ide_testReport_testRun_perfMetrics;
- (void).cxx_destruct;
- (void)ide_testReport_testRun_schemeActionsInvocationRecord:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) NSString *ide_testReport_common_statusTooltip;
@property(readonly, nonatomic) NSImage *ide_testReport_common_typeImage;
@property(readonly, nonatomic) NSImage *ide_testReport_common_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_common_title;
- (id)initWithTestName:(id)arg1 testClassName:(id)arg2 testPlanRunName:(id)arg3 device:(id)arg4 runDestinationRecord:(id)arg5 failureSummaries:(id)arg6 performanceMetrics:(id)arg7 activities:(id)arg8 testableBlueprintName:(id)arg9 testableBlueprintPath:(id)arg10 passed:(BOOL)arg11 duration:(double)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent; // @dynamic ide_testReport_base_parent;
@property(readonly) Class superclass;

@end

