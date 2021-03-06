//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class IDETestIdentifier, NSArray, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDETestResult : NSObject <NSCopying>
{
    IDETestIdentifier *_identifier;
    NSString *_testName;
    NSString *_configurationName;
    unsigned long long _status;
    NSDate *_date;
    double _duration;
    NSMutableArray *_mutablePerformanceMetrics;
    NSMutableArray *_mutableMessages;
    NSMutableArray *_mutableIssues;
    NSMutableSet *_mutableValidatedSourceCodeLocations;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *mutableValidatedSourceCodeLocations; // @synthesize mutableValidatedSourceCodeLocations=_mutableValidatedSourceCodeLocations;
@property(retain) NSMutableArray *mutableIssues; // @synthesize mutableIssues=_mutableIssues;
@property(retain) NSMutableArray *mutableMessages; // @synthesize mutableMessages=_mutableMessages;
@property(retain) NSMutableArray *mutablePerformanceMetrics; // @synthesize mutablePerformanceMetrics=_mutablePerformanceMetrics;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSDate *date; // @synthesize date=_date;
@property unsigned long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, copy) NSString *testName; // @synthesize testName=_testName;
@property(readonly, copy) IDETestIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addDynamicallyReportedSourceCodeLocation:(id)arg1;
@property(readonly, copy) NSSet *dynamicallyReportedSourceCodeLocations;
- (void)addIssue:(id)arg1;
@property(readonly, copy) NSArray *issues;
- (void)addMessage:(id)arg1;
@property(readonly, copy) NSArray *messages;
- (void)addPerformanceMetric:(id)arg1;
@property(readonly, copy) NSArray *performanceMetrics;
- (id)initWithIdentifier:(id)arg1 testName:(id)arg2 configurationName:(id)arg3;

@end

