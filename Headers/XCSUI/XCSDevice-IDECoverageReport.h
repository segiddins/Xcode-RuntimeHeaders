//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSDevice.h>

#import <XCSUI/IDECoverage_Device-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface XCSDevice (IDECoverageReport) <IDECoverage_Device>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_name;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_coverage_deviceID;
@property(readonly, nonatomic) BOOL ide_coverage_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_coverage_UTI;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
- (id)ide_coverage_identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

