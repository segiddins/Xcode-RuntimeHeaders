//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSNumber, NSString;

@interface _TtC25DVTAnalyticsMetricsClient29AnalyticsMetricsPointResponse : NSObject
{
    MISSING_TYPE *summary;
    MISSING_TYPE *rawSummary;
    MISSING_TYPE *percentageBreakdown;
    MISSING_TYPE *version;
    MISSING_TYPE *lowSampleCount;
    MISSING_TYPE *errorMargin;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) NSNumber *errorMargin; // @synthesize errorMargin;
@property(nonatomic, retain) NSNumber *lowSampleCount; // @synthesize lowSampleCount;
@property(nonatomic, copy) NSString *version;
@property(nonatomic, copy) NSArray *percentageBreakdown;
@property(nonatomic, retain) NSNumber *rawSummary; // @synthesize rawSummary;
@property(nonatomic, retain) NSNumber *summary; // @synthesize summary;

@end

