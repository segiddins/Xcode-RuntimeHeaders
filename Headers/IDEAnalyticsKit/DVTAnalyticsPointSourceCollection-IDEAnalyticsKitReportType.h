//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/DVTAnalyticsPointSourceCollection.h>

@interface DVTAnalyticsPointSourceCollection (IDEAnalyticsKitReportType)
+ (id)analyticsPointSourceCollectionsForReportType:(id)arg1 product:(id)arg2;
+ (id)sourceForVersion:(id)arg1 rootVersion:(id)arg2 product:(id)arg3 reportType:(id)arg4;
+ (id)diskWritePointConsolidatedSourceForAppIdentifier:(id)arg1 extensionIdentifier:(id)arg2 versionCachePath:(id)arg3;
+ (id)processorUsagePointConsolidatedSourceForAppIdentifier:(id)arg1 extensionIdentifier:(id)arg2 versionCachePath:(id)arg3;
+ (id)crashPointParameterizedAppStoreSourceForAppIdentifier:(id)arg1 extensionIdentifier:(id)arg2 productVersion:(id)arg3 versionCachePath:(id)arg4;
@end

