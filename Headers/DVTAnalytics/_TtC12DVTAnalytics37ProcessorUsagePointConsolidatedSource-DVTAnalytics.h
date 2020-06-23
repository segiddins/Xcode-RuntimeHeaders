//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/_TtC12DVTAnalytics37ProcessorUsagePointConsolidatedSource.h>

@class DVTAnalyticsAppIdentifier, DVTAnalyticsAppStoreSourceUserDefaultsKey, NSArray, NSString, _TtC12DVTAnalytics19AnalyticsReportType;

@interface _TtC12DVTAnalytics37ProcessorUsagePointConsolidatedSource (DVTAnalytics)
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;
- (BOOL)updateFromNetworkWithSession:(id)arg1 error:(id *)arg2;
- (void)cacheAnalyticsPoints:(id)arg1;
- (void)fetchFromDisk;
- (id)cachedPathForAnalyticsPoint:(id)arg1;
@property(nonatomic, readonly) DVTAnalyticsAppStoreSourceUserDefaultsKey *userDefaultsKey;
@property(nonatomic, readonly) DVTAnalyticsAppIdentifier *appIdentifier;
@property(nonatomic, readonly) BOOL isBeta;
@property(nonatomic, readonly) NSString *buildNumber;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSArray *analyticsPoints;
@property(nonatomic, readonly) _TtC12DVTAnalytics19AnalyticsReportType *reportType;
@end

