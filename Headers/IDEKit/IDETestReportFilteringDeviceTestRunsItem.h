//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_DeviceTestRuns-Protocol.h>

@class NSArray, NSImage, NSNumber, NSString;
@protocol IDETestReport_Base, IDETestReport_Device, IDETestReport_DeviceTestRuns;

@interface IDETestReportFilteringDeviceTestRunsItem : NSObject <IDETestReport_DeviceTestRuns>
{
    id <IDETestReport_DeviceTestRuns> _deviceTestRuns;
    NSArray *_ide_testReport_deviceTestRuns_testRuns;
}

@property(copy, nonatomic) NSArray *ide_testReport_deviceTestRuns_testRuns; // @synthesize ide_testReport_deviceTestRuns_testRuns=_ide_testReport_deviceTestRuns_testRuns;
@property(retain) id <IDETestReport_DeviceTestRuns> deviceTestRuns; // @synthesize deviceTestRuns=_deviceTestRuns;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
@property(readonly, nonatomic) id <IDETestReport_Device> ide_testReport_deviceTestRuns_device;
@property(readonly, nonatomic) NSNumber *ide_testReport_common_duration;
@property(readonly, nonatomic) NSString *ide_testReport_common_statusTooltip;
@property(readonly, nonatomic) BOOL ide_testReport_common_passed;
@property(readonly, nonatomic) NSImage *ide_testReport_common_typeImage;
@property(readonly, nonatomic) NSImage *ide_testReport_common_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_common_title;
- (id)initWithDeviceTestRuns:(id)arg1 activeRuns:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent; // @dynamic ide_testReport_base_parent;
@property(readonly, nonatomic) BOOL ide_testReport_deviceTestRuns_mixedStatus;
@property(readonly) Class superclass;

@end

