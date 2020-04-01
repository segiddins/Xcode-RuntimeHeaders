//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_Test-Protocol.h>

@class NSArray, NSImage, NSMutableArray, NSNumber, NSString;
@protocol IDETestReport_Base;

@interface IDETestReportTestItem : NSObject <IDETestReport_Test>
{
    NSString *_ide_testReport_test_testName;
    NSString *_ide_testReport_test_testClassName;
    NSString *_ide_testReport_base_identifier;
    NSMutableArray *_mutableTestRunsByDevice;
}

@property(readonly, nonatomic) NSMutableArray *mutableTestRunsByDevice; // @synthesize mutableTestRunsByDevice=_mutableTestRunsByDevice;
@property(copy, nonatomic) NSString *ide_testReport_base_identifier; // @synthesize ide_testReport_base_identifier=_ide_testReport_base_identifier;
@property(copy, nonatomic) NSString *ide_testReport_test_testClassName; // @synthesize ide_testReport_test_testClassName=_ide_testReport_test_testClassName;
@property(copy, nonatomic) NSString *ide_testReport_test_testName; // @synthesize ide_testReport_test_testName=_ide_testReport_test_testName;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *testRunsByDevice;
@property(readonly, nonatomic) NSArray *ide_testReport_test_allTestRunsAcrossDevices;
@property(readonly, nonatomic) NSNumber *ide_testReport_common_duration;
@property(readonly, nonatomic) NSString *ide_testReport_common_statusTooltip;
@property(readonly, nonatomic) BOOL ide_testReport_common_passed;
@property(readonly, nonatomic) NSImage *ide_testReport_common_typeImage;
@property(readonly, nonatomic) NSImage *ide_testReport_common_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_common_title;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_test_testRunsByDevice;
- (void)addDeviceTestRunsItem:(id)arg1;
- (id)initWithTestName:(id)arg1 testClassName:(id)arg2 testTargetName:(id)arg3 testRunsByDevice:(id)arg4;
- (id)initWithTestName:(id)arg1 testClassName:(id)arg2 testRunsByDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent; // @dynamic ide_testReport_base_parent;
@property(readonly, nonatomic) BOOL ide_testReport_test_mixedStatus;
@property(readonly) Class superclass;

@end

