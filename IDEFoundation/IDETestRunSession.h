//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTProgressReporting-Protocol.h>
#import <IDEFoundation/IDETestsInTestableObserver-Protocol.h>

@class DVTStackBacktrace, IDETest, IDETestManager, NSDictionary, NSString;

@interface IDETestRunSession : NSObject <IDETestsInTestableObserver, DVTInvalidation, DVTProgressReporting>
{
    IDETestManager *_testManager;
    unsigned long long _lastReportedMax;
    IDETest *_currentTest;
    NSDictionary *_sessionStateByTestableName;
    unsigned long long _totalNumberOfTests;
    unsigned long long _currentTestNumber;
    unsigned long long _sessionGenerationCount;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingProgress;
@property(readonly) unsigned long long sessionGenerationCount; // @synthesize sessionGenerationCount=_sessionGenerationCount;
@property(nonatomic) unsigned long long currentTestNumber; // @synthesize currentTestNumber=_currentTestNumber;
@property(nonatomic) unsigned long long totalNumberOfTests; // @synthesize totalNumberOfTests=_totalNumberOfTests;
@property(retain) NSDictionary *sessionStateByTestableName; // @synthesize sessionStateByTestableName=_sessionStateByTestableName;
@property(retain) IDETest *currentTest; // @synthesize currentTest=_currentTest;
- (void).cxx_destruct;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (unsigned long long)_calculateTestsReported;
- (void)_updateStatisticsForTestable:(id)arg1;
- (void)_updateRunningTests:(id)arg1;
- (void)_updateWithTest:(id)arg1;
- (BOOL)_testableIsPendingRun:(id)arg1;
- (BOOL)_testIsPendingRun:(id)arg1;
- (void)_watchTestRunner:(id)arg1;
@property(readonly) long long progress;
- (void)_stopMonitoringTestables;
- (void)_startMonitoringTestablesWithSkippedTests:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithTestManager:(id)arg1 sessionGenerationCount:(unsigned long long)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

