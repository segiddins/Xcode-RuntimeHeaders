//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, _TtC18DVTAnalyticsClient38AnalyticsMetricsFilterCriteriaResponse;

@interface _TtC18DVTAnalyticsClient31AnalyticsMetricsDatasetResponse : NSObject
{
    // Error parsing type: , name: points
    // Error parsing type: , name: normalizedRunningTime
    // Error parsing type: , name: filterCriteria
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)dvt_servicesTypeInstanceDidFinishLoadingWithContext:(id)arg1 error:(id *)arg2;
@property(nonatomic, retain) _TtC18DVTAnalyticsClient38AnalyticsMetricsFilterCriteriaResponse *filterCriteria; // @synthesize filterCriteria;
@property(nonatomic, retain) NSNumber *normalizedRunningTime; // @synthesize normalizedRunningTime;
@property(nonatomic, copy) NSArray *points;

@end

