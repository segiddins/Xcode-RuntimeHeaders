//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTTestPerformanceMetricOutput, IDETestIdentifier, IDETestResult, IDETestResultMessage, NSError, NSString, XCActivityRecord, XCTIssue;
@protocol IDETestRunner;

@protocol IDETestRunnerEvents
- (void)testRunner:(id <IDETestRunner>)arg1 didFinishTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResult:(IDETestResult *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 didSkipTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResultMessage:(IDETestResultMessage *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testCaseWithIdentifier:(IDETestIdentifier *)arg2 didRecordIssue:(XCTIssue *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 didStartTestWithIdentifier:(IDETestIdentifier *)arg2 rawOutput:(NSString *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuiteDidFinishWithRunCount:(unsigned long long)arg2 skipCount:(unsigned long long)arg3 failureCount:(unsigned long long)arg4 unexpectedFailureCount:(unsigned long long)arg5 testDuration:(double)arg6 totalDuration:(double)arg7 rawOutput:(NSString *)arg8;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuite:(IDETestIdentifier *)arg2 willFinishAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuite:(IDETestIdentifier *)arg2 didStartAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 willFinishWithError:(NSError *)arg2 didCancel:(BOOL)arg3;
- (void)testRunnerDidBecomeReadyForWork:(id <IDETestRunner>)arg1;
- (void)testRunner:(id <IDETestRunner>)arg1 didLaunchWithDiagnosticLogPath:(NSString *)arg2;
@end

