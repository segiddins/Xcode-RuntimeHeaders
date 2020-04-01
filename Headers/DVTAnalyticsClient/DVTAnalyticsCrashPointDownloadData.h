//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsCrashPointData.h>

@class DVTAnalyticsCrashPointLogList, DVTAnalyticsPointDeviceFamilyDistribution, DVTAnalyticsPointOSVersionDistribution, DVTAnalyticsPointTimeDistribution;

@interface DVTAnalyticsCrashPointDownloadData : DVTAnalyticsCrashPointData
{
    DVTAnalyticsPointOSVersionDistribution *_osVersionDistribution;
    DVTAnalyticsPointDeviceFamilyDistribution *_deviceFamilyDistribution;
    DVTAnalyticsPointTimeDistribution *_crashPointTimeSeries;
    DVTAnalyticsCrashPointLogList *_logList;
}

+ (id)crashPointForSession:(id)arg1 crashPointIdentifier:(id)arg2 distributionOptions:(id)arg3 error:(id *)arg4;
@property(retain) DVTAnalyticsCrashPointLogList *logList; // @synthesize logList=_logList;
@property(retain) DVTAnalyticsPointTimeDistribution *crashPointTimeSeries; // @synthesize crashPointTimeSeries=_crashPointTimeSeries;
@property(retain) DVTAnalyticsPointDeviceFamilyDistribution *deviceFamilyDistribution; // @synthesize deviceFamilyDistribution=_deviceFamilyDistribution;
@property(retain) DVTAnalyticsPointOSVersionDistribution *osVersionDistribution; // @synthesize osVersionDistribution=_osVersionDistribution;
- (void).cxx_destruct;
- (id)JSONRepresentation;

@end

