//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class MISSING_TYPE, NSArray, NSNumber, NSString;

@interface _TtC18DVTAnalyticsClient27AnalyticsDiskWritePointList : DVTAnalyticsData
{
    MISSING_TYPE *adamId;
    MISSING_TYPE *appVersion;
    MISSING_TYPE *appBuild;
    MISSING_TYPE *bundleId;
    MISSING_TYPE *numDiskWritePoints;
    MISSING_TYPE *sortedBy;
    MISSING_TYPE *topDiskWritePoints;
    MISSING_TYPE *rootVersion;
    MISSING_TYPE *rootBuild;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *rootBuild;
@property(nonatomic, copy) NSString *rootVersion;
@property(nonatomic, copy) NSArray *topDiskWritePoints;
@property(nonatomic, copy) NSString *sortedBy;
@property(nonatomic, retain) NSNumber *numDiskWritePoints; // @synthesize numDiskWritePoints;
@property(nonatomic, copy) NSString *bundleId;
@property(nonatomic, copy) NSString *appBuild;
@property(nonatomic, copy) NSString *appVersion;
@property(nonatomic, copy) NSString *adamId;

@end
