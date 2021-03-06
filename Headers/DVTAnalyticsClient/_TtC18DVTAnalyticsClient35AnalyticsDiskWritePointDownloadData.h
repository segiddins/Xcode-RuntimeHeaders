//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class DVTAnalyticsPointDeviceFamilyDistribution, DVTAnalyticsPointOSVersionDistribution, DVTAnalyticsPointTimeDistribution, MISSING_TYPE, NSString, _TtC18DVTAnalyticsClient30AnalyticsDiskWritePointLogList;

@interface _TtC18DVTAnalyticsClient35AnalyticsDiskWritePointDownloadData : DVTAnalyticsData
{
    MISSING_TYPE *adamId;
    MISSING_TYPE *appVersion;
    MISSING_TYPE *appBuild;
    MISSING_TYPE *bundleId;
    MISSING_TYPE *diskWritePointIdentifier;
    MISSING_TYPE *osVersionDistribution;
    MISSING_TYPE *diskWritePointTimeSeries;
    MISSING_TYPE *deviceFamilyDistribution;
    MISSING_TYPE *diskWriteLogData;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC18DVTAnalyticsClient30AnalyticsDiskWritePointLogList *diskWriteLogData; // @synthesize diskWriteLogData;
@property(nonatomic, retain) DVTAnalyticsPointDeviceFamilyDistribution *deviceFamilyDistribution; // @synthesize deviceFamilyDistribution;
@property(nonatomic, retain) DVTAnalyticsPointTimeDistribution *diskWritePointTimeSeries; // @synthesize diskWritePointTimeSeries;
@property(nonatomic, retain) DVTAnalyticsPointOSVersionDistribution *osVersionDistribution; // @synthesize osVersionDistribution;
@property(nonatomic, copy) NSString *diskWritePointIdentifier;
@property(nonatomic, copy) NSString *bundleId;
@property(nonatomic, copy) NSString *appBuild;
@property(nonatomic, copy) NSString *appVersion;
@property(nonatomic, copy) NSString *adamId;

@end

