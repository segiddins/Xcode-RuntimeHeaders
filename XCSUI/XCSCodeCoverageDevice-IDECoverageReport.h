//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageDevice.h>

#import <XCSUI/IDECoverage_Device-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface XCSCodeCoverageDevice (IDECoverageReport) <IDECoverage_Device>
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_name;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_modelName;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, nonatomic) BOOL ide_coverage_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_coverage_deviceID;
@property(readonly, copy, nonatomic) NSString *ide_coverage_UTI;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, copy, nonatomic) NSString *ide_coverage_identifier;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

