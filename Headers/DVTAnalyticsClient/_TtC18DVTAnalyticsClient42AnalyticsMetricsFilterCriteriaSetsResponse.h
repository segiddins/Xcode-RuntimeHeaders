//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TtC18DVTAnalyticsClient38AnalyticsMetricsFilterCriteriaResponse;

@interface _TtC18DVTAnalyticsClient42AnalyticsMetricsFilterCriteriaSetsResponse : NSObject
{
    // Error parsing type: , name: defaultCriteria
    // Error parsing type: , name: deviceFamilies
    // Error parsing type: , name: percentiles
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)dvt_servicesTypeInstanceDidFinishLoadingWithContext:(id)arg1 error:(id *)arg2;
@property(nonatomic, copy) NSArray *percentiles;
@property(nonatomic, copy) NSArray *deviceFamilies;
@property(nonatomic, retain) _TtC18DVTAnalyticsClient38AnalyticsMetricsFilterCriteriaResponse *defaultCriteria; // @synthesize defaultCriteria;

@end

