//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSError, NSNumber, NSString, XCActivityRecord, XCElementSnapshot, XCTTestIdentifier;

@protocol XCTestManager_IDEInterface
- (id)_XCT_handleCrashReportData:(NSData *)arg1 fromFileWithName:(NSString *)arg2;
- (id)_XCT_nativeFocusItemDidChangeAtTime:(NSNumber *)arg1 parameterSnapshot:(XCElementSnapshot *)arg2 applicationSnapshot:(XCElementSnapshot *)arg3;
- (id)_XCT_recordedEventNames:(NSArray *)arg1 timestamp:(NSNumber *)arg2 duration:(NSNumber *)arg3 startLocation:(NSDictionary *)arg4 startElementSnapshot:(XCElementSnapshot *)arg5 startApplicationSnapshot:(XCElementSnapshot *)arg6 endLocation:(NSDictionary *)arg7 endElementSnapshot:(XCElementSnapshot *)arg8 endApplicationSnapshot:(XCElementSnapshot *)arg9;
- (id)_XCT_recordedOrientationChange:(NSString *)arg1;
- (id)_XCT_recordedKeyEventsWithApplicationSnapshot:(XCElementSnapshot *)arg1 characters:(NSString *)arg2 charactersIgnoringModifiers:(NSString *)arg3 modifierFlags:(NSNumber *)arg4;
- (id)_XCT_recordedFirstResponderChangedWithApplicationSnapshot:(XCElementSnapshot *)arg1;
- (id)_XCT_exchangeCurrentProtocolVersion:(NSNumber *)arg1 minimumVersion:(NSNumber *)arg2;
- (id)_XCT_testMethod:(NSString *)arg1 ofClass:(NSString *)arg2 didMeasureMetric:(NSDictionary *)arg3 file:(NSString *)arg4 line:(NSNumber *)arg5;
- (id)_XCT_testCase:(NSString *)arg1 method:(NSString *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (id)_XCT_testCase:(NSString *)arg1 method:(NSString *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (id)_XCT_testCase:(NSString *)arg1 method:(NSString *)arg2 didStallOnMainThreadInFile:(NSString *)arg3 line:(NSNumber *)arg4;
- (id)_XCT_testCaseDidFinishForTestClass:(NSString *)arg1 method:(NSString *)arg2 withStatus:(NSString *)arg3 duration:(NSNumber *)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(NSString *)arg1 method:(NSString *)arg2 withMessage:(NSString *)arg3 file:(NSString *)arg4 line:(NSNumber *)arg5;
- (id)_XCT_testCaseWasSkippedForTestClass:(NSString *)arg1 method:(NSString *)arg2 withMessage:(NSString *)arg3 file:(NSString *)arg4 line:(NSNumber *)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(NSString *)arg1 method:(NSString *)arg2;
- (id)_XCT_testSuite:(NSString *)arg1 didFinishAt:(NSString *)arg2 runCount:(NSNumber *)arg3 skipCount:(NSNumber *)arg4 failureCount:(NSNumber *)arg5 unexpectedFailureCount:(NSNumber *)arg6 testDuration:(NSNumber *)arg7 totalDuration:(NSNumber *)arg8;
- (id)_XCT_testSuite:(NSString *)arg1 didFinishAt:(NSString *)arg2 runCount:(NSNumber *)arg3 withFailures:(NSNumber *)arg4 unexpected:(NSNumber *)arg5 testDuration:(NSNumber *)arg6 totalDuration:(NSNumber *)arg7;
- (id)_XCT_testSuite:(NSString *)arg1 didStartAt:(NSString *)arg2;
- (id)_XCT_initializationForUITestingDidFailWithError:(NSError *)arg1;
- (id)_XCT_didBeginInitializingForUITesting;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(NSNumber *)arg1 minimumVersion:(NSNumber *)arg2;
- (id)_XCT_reportTestWithIdentifier:(XCTTestIdentifier *)arg1 didExceedExecutionTimeAllowance:(NSNumber *)arg2;
- (id)_XCT_reportTestWithIdentifier:(XCTTestIdentifier *)arg1 didExceedMaxDuration:(NSNumber *)arg2;
- (id)_XCT_didFailToBootstrapWithError:(NSError *)arg1;
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_launchProcessWithPath:(NSString *)arg1 bundleID:(NSString *)arg2 arguments:(NSArray *)arg3 environmentVariables:(NSDictionary *)arg4;
- (id)_XCT_reportSelfDiagnosisIssue:(NSString *)arg1 description:(NSString *)arg2;
- (id)_XCT_logDebugMessage:(NSString *)arg1;
- (id)_XCT_logMessage:(NSString *)arg1;
@end

