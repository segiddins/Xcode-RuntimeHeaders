//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTTestRunnerSession-Protocol.h>
#import <XCTDaemonControl/XCTestManager_IDEInterface-Protocol.h>

@class DTXConnection, DTXProxyChannel, NSString, XCTCapabilities, XCTestConfiguration;
@protocol OS_dispatch_queue, XCTDebugLogDelegate, XCTTestRunnerConnectionProvider, XCTTestRunnerSessionDelegate, XCTestDriverInterface;

@interface XCTTestRunnerSession : NSObject <XCTestManager_IDEInterface, XCTTestRunnerSession>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <XCTDebugLogDelegate> _logDelegate;
    id <XCTTestRunnerSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <XCTTestRunnerConnectionProvider> _connectionProvider;
    XCTestConfiguration *_testConfiguration;
    DTXConnection *_connection;
    DTXProxyChannel *_proxyChannel;
    XCTCapabilities *_runnerCapabilities;
}

+ (Class)XCTTestIdentifierClass;
+ (Class)XCTSourceCodeContextClass;
+ (Class)XCTSourceCodeLocationClass;
+ (Class)XCTMutableIssueClass;
+ (id)exportedCapabilities;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) XCTCapabilities *runnerCapabilities; // @synthesize runnerCapabilities=_runnerCapabilities;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(retain) DTXConnection *connection; // @synthesize connection=_connection;
@property(readonly) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
@property(readonly) id <XCTTestRunnerConnectionProvider> connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <XCTTestRunnerSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (id)_XCT_reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;
- (id)_XCT_logDebugMessage:(id)arg1;
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureMetric:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didFinishActivity:(id)arg3;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 willStartActivity:(id)arg3;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didStallOnMainThreadInFile:(id)arg3 line:(id)arg4;
- (id)_XCT_testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(id)arg4;
- (id)_XCT_testCaseWithIdentifier:(id)arg1 didRecordIssue:(id)arg2;
- (id)_XCT_testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseWasSkippedForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(id)arg1 method:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 skipCount:(id)arg4 failureCount:(id)arg5 unexpectedFailureCount:(id)arg6 testDuration:(id)arg7 totalDuration:(id)arg8;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 withFailures:(id)arg4 unexpected:(id)arg5 testDuration:(id)arg6 totalDuration:(id)arg7;
- (id)_XCT_testSuiteWithIdentifier:(id)arg1 didRecordIssue:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didStartAt:(id)arg2;
- (id)_XCT_initializationForUITestingDidFailWithError:(id)arg1;
- (id)_XCT_didBeginInitializingForUITesting;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_testRunnerReadyWithCapabilities:(id)arg1;
- (id)_XCT_reportTestWithIdentifier:(id)arg1 didExceedExecutionTimeAllowance:(id)arg2;
- (id)_XCT_didFailToBootstrapWithError:(id)arg1;
@property(readonly) id <XCTestDriverInterface> testRunnerProxy;
- (void)notifyDisconnected;
- (void)notifyConnectionError:(id)arg1;
- (void)notifyTestRunnerReady;
- (void)notifyConnectionAcquired;
- (void)setupConnection:(id)arg1;
- (void)invalidate;
- (void)processWithToken:(id)arg1 exitedWithStatus:(long long)arg2;
- (void)stopTrackingProcessWithToken:(id)arg1;
- (void)processWithBundleID:(id)arg1 path:(id)arg2 pid:(int)arg3 crashedUnderSymbol:(id)arg4;
- (void)shutdown;
- (void)executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)fetchDiscoveredTestClasses:(CDUnknownBlockType)arg1;
- (void)startExecutingTests;
- (void)initiateSession;
- (id)initWithTestRunnerConnectionProvider:(id)arg1 testConfiguration:(id)arg2;
- (id)initForRemoteDevice:(id)arg1 testConfiguration:(id)arg2;
- (id)initForSimulatorDevice:(id)arg1 testConfiguration:(id)arg2;
- (id)initForLocalComputerWithTestConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

