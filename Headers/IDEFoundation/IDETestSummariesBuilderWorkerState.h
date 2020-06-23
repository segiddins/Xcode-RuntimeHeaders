//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESchemeActionTestNoticeSummary, IDETestIdentifier, NSMutableArray;

@interface IDETestSummariesBuilderWorkerState : NSObject
{
    double _duration;
    IDETestIdentifier *_currentTestIdentifier;
    NSMutableArray *_testSuiteStack;
    NSMutableArray *_performanceMetricSummaries;
    NSMutableArray *_failureSummaries;
    IDESchemeActionTestNoticeSummary *_skipNoticeSummary;
    NSMutableArray *_activitySummaries;
    NSMutableArray *_currentActivityStack;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *currentActivityStack; // @synthesize currentActivityStack=_currentActivityStack;
@property(readonly) NSMutableArray *activitySummaries; // @synthesize activitySummaries=_activitySummaries;
@property(retain) IDESchemeActionTestNoticeSummary *skipNoticeSummary; // @synthesize skipNoticeSummary=_skipNoticeSummary;
@property(readonly) NSMutableArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(readonly) NSMutableArray *performanceMetricSummaries; // @synthesize performanceMetricSummaries=_performanceMetricSummaries;
@property(readonly) NSMutableArray *testSuiteStack; // @synthesize testSuiteStack=_testSuiteStack;
@property(retain) IDETestIdentifier *currentTestIdentifier; // @synthesize currentTestIdentifier=_currentTestIdentifier;
@property double duration; // @synthesize duration=_duration;
- (id)init;

@end
