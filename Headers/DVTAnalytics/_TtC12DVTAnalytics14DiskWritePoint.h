//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/DVTAnalyticsPointAbstractClass.h>

@class DVTAnalyticsPointDistributionInfo, DVTFilePath, MISSING_TYPE, NSString, _TtC12DVTAnalytics18DiskWritePointInfo, _TtC12DVTAnalytics19AnalyticsReportType, _TtC12DVTAnalytics30DiskWritePointDistributionInfo;
@protocol DVTAnalyticsPointIdentifierProtocol, DVTAnalyticsPointUserDataProtocol;

@interface _TtC12DVTAnalytics14DiskWritePoint : DVTAnalyticsPointAbstractClass
{
    MISSING_TYPE *pointInfo;
    MISSING_TYPE *diskWritePointDistributionInfo;
    MISSING_TYPE *path;
    MISSING_TYPE *$__lazy_storage_$_filename;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *inspectableIconImageName;
@property(nonatomic, readonly) NSString *inspectableAnalyticsLogReportTypeUserDescription;
@property(nonatomic, readonly) NSString *inspectableAnalyticsLogDetailsSectionTitle;
@property(nonatomic, readonly) _TtC12DVTAnalytics19AnalyticsReportType *reportType;
@property(nonatomic, readonly) BOOL isSystemTerminationEvent;
@property(nonatomic, readonly) NSString *inspectableTypeUserDescription;
@property(nonatomic, readonly) DVTFilePath *cachePath;
@property(nonatomic, readonly) unsigned long long sourceFileLine;
@property(nonatomic, readonly) NSString *sourceFileName;
@property(nonatomic, readonly) BOOL isTopPoint;
@property(nonatomic, readonly) DVTAnalyticsPointDistributionInfo *distributionInfo;
@property(nonatomic, readonly) NSString *chartTimePeriodDescription;
@property(nonatomic, readonly) unsigned long long chartViewValue;
@property(nonatomic, readonly) NSString *impactValuePluralFormatString;
@property(nonatomic, readonly) NSString *impactValueSingularFormatString;
@property(nonatomic, readonly) unsigned long long impactValue;
@property(nonatomic, readonly) id <DVTAnalyticsPointUserDataProtocol> userData;
@property(nonatomic, readonly) id <DVTAnalyticsPointIdentifierProtocol> analyticsPointIdentifier;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) _TtC12DVTAnalytics30DiskWritePointDistributionInfo *diskWritePointDistributionInfo; // @synthesize diskWritePointDistributionInfo;
@property(nonatomic, retain) _TtC12DVTAnalytics18DiskWritePointInfo *pointInfo; // @synthesize pointInfo;

@end

