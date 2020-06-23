//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>
#import <GPUToolsServices/NSSecureCoding-Protocol.h>

@class DYDeviceInfo;

@interface DYInvestigatorConfig : NSObject <NSCopying, NSSecureCoding>
{
    DYDeviceInfo *_deviceInfo;
    unsigned long long _overviewSamplePeriod;
    unsigned long long _overviewSampleCount;
    unsigned long long _overviewDuration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long overviewDuration; // @synthesize overviewDuration=_overviewDuration;
@property(readonly, nonatomic) unsigned long long overviewSampleCount; // @synthesize overviewSampleCount=_overviewSampleCount;
@property(readonly, nonatomic) unsigned long long overviewSamplePeriod; // @synthesize overviewSamplePeriod=_overviewSamplePeriod;
@property(readonly, nonatomic) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long profilingFlags;
@property(readonly, nonatomic) int traceMode;
@property(readonly, nonatomic) BOOL isLegacyDevice;
- (void)_setOverviewDuration:(unsigned long long)arg1 SamplePeriod:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceInfo:(id)arg1;
- (id)init;

@end

