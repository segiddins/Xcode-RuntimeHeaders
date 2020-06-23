//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestOperationCoordinatorEvents-Protocol.h>
#import <IDEFoundation/IDETestRunner-Protocol.h>
#import <IDEFoundation/XCTTestWorker-Protocol.h>

@class DVTDisallowFinishToken, DVTFilePath, DVTObservingToken, DVTOperation, DVTStackBacktrace, IDEExecutionEnvironment, IDERunDestination, IDERunOperation, IDESchemeCommand, IDETestIdentifier, IDETestOperationCoordinator, IDETestRunSpecification, IDETestRunnerResumeContext, NSMutableArray, NSMutableSet, NSNumber, NSString, _TtC13IDEFoundation28IDETestRunSpecificationGroup, _TtC13IDEFoundation29IDETestingInstallationTracker;
@protocol DVTOperationGroup, IDEBuildableProduct, IDETestDaemonController, IDETestRunnerEvents, IDETestingActivityGenerating, OS_dispatch_queue;

@interface IDETestRunner : NSObject <XCTTestWorker, IDETestOperationCoordinatorEvents, IDETestRunner>
{
    NSMutableArray *_testResults;
    NSMutableSet *_runningTests;
    id <IDETestRunnerEvents> _testEventsObserver;
    int _testRunnerPID;
    IDETestRunnerResumeContext *_resumeContext;
    IDETestOperationCoordinator *_currentTestOperationCoordinator;
    BOOL _needsToResyncStateWithRestartedOperation;
    BOOL _currentOperationSuccessfullyBootstrapped;
    BOOL _finished;
    IDEExecutionEnvironment *_executionEnvironment;
    NSString *_launchName;
    IDESchemeCommand *_schemeCommand;
    id <IDEBuildableProduct> _buildableProductForUIRecordingManager;
    _TtC13IDEFoundation29IDETestingInstallationTracker *_testingInstallationTracker;
    NSMutableArray *_testResultStack;
    double _testRunStartedTime;
    NSMutableSet *_testsThatHaveStarted;
    NSMutableArray *_suiteStack;
    DVTOperation<DVTOperationGroup> *_testSessionOperation;
    id <IDETestDaemonController> _daemonController;
    IDERunOperation *_currentTestRunOperation;
    long long _restartCount;
    unsigned long long _currentSuiteResyncIndex;
    IDETestIdentifier *_currentTestIdentifier;
    IDETestIdentifier *_crashingTestIdentifier;
    DVTDisallowFinishToken *_testOperationDisallowFinishToken;
    IDETestRunSpecification *_testRunSpecification;
    _TtC13IDEFoundation28IDETestRunSpecificationGroup *_testRunSpecificationGroup;
    NSNumber *_randomExecutionOrderingSeed;
    IDERunDestination *_runDestination;
    DVTFilePath *_runnerArtifactsDirectory;
    DVTObservingToken *_testRunnerPIDObservationToken;
    id <IDETestingActivityGenerating> _activityReporter;
    NSString *_deviceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_runnerIdentifier;
    CDUnknownBlockType _launchParametersBlock;
    NSString *_launchDescription;
    long long _executionStyle;
}

+ (id)_commandLineArgumentsForRunDestination:(id)arg1;
+ (id)_configurationOperationForLaunchSession:(id)arg1 testRunSpecification:(id)arg2 executionStyle:(long long)arg3 runDestination:(id)arg4 runnerArtifactsDirectory:(id)arg5 reportResultsToIDE:(BOOL)arg6 testsThatHaveStarted:(id)arg7 aggregateStatisticsFromLastLaunch:(id)arg8 randomExecutionOrderingSeed:(id)arg9 error:(id *)arg10;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) long long executionStyle; // @synthesize executionStyle=_executionStyle;
@property(readonly) NSString *launchDescription; // @synthesize launchDescription=_launchDescription;
@property(copy) CDUnknownBlockType launchParametersBlock; // @synthesize launchParametersBlock=_launchParametersBlock;
@property(readonly) NSString *runnerIdentifier; // @synthesize runnerIdentifier=_runnerIdentifier;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly) id <IDETestingActivityGenerating> activityReporter; // @synthesize activityReporter=_activityReporter;
@property(retain) DVTObservingToken *testRunnerPIDObservationToken; // @synthesize testRunnerPIDObservationToken=_testRunnerPIDObservationToken;
@property(retain) DVTFilePath *runnerArtifactsDirectory; // @synthesize runnerArtifactsDirectory=_runnerArtifactsDirectory;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) NSNumber *randomExecutionOrderingSeed; // @synthesize randomExecutionOrderingSeed=_randomExecutionOrderingSeed;
@property(retain) _TtC13IDEFoundation28IDETestRunSpecificationGroup *testRunSpecificationGroup; // @synthesize testRunSpecificationGroup=_testRunSpecificationGroup;
@property(retain) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
@property BOOL finished; // @synthesize finished=_finished;
@property BOOL currentOperationSuccessfullyBootstrapped; // @synthesize currentOperationSuccessfullyBootstrapped=_currentOperationSuccessfullyBootstrapped;
@property(retain) DVTDisallowFinishToken *testOperationDisallowFinishToken; // @synthesize testOperationDisallowFinishToken=_testOperationDisallowFinishToken;
@property(retain) IDETestIdentifier *crashingTestIdentifier; // @synthesize crashingTestIdentifier=_crashingTestIdentifier;
@property(retain) IDETestIdentifier *currentTestIdentifier; // @synthesize currentTestIdentifier=_currentTestIdentifier;
@property unsigned long long currentSuiteResyncIndex; // @synthesize currentSuiteResyncIndex=_currentSuiteResyncIndex;
@property long long restartCount; // @synthesize restartCount=_restartCount;
@property BOOL needsToResyncStateWithRestartedOperation; // @synthesize needsToResyncStateWithRestartedOperation=_needsToResyncStateWithRestartedOperation;
@property(retain) IDERunOperation *currentTestRunOperation; // @synthesize currentTestRunOperation=_currentTestRunOperation;
@property(retain) id <IDETestDaemonController> daemonController; // @synthesize daemonController=_daemonController;
@property(retain) DVTOperation<DVTOperationGroup> *testSessionOperation; // @synthesize testSessionOperation=_testSessionOperation;
@property(retain) NSMutableArray *suiteStack; // @synthesize suiteStack=_suiteStack;
@property(retain) NSMutableSet *testsThatHaveStarted; // @synthesize testsThatHaveStarted=_testsThatHaveStarted;
@property double testRunStartedTime; // @synthesize testRunStartedTime=_testRunStartedTime;
@property(retain) NSMutableArray *testResultStack; // @synthesize testResultStack=_testResultStack;
@property(readonly) _TtC13IDEFoundation29IDETestingInstallationTracker *testingInstallationTracker; // @synthesize testingInstallationTracker=_testingInstallationTracker;
@property(readonly) id <IDEBuildableProduct> buildableProductForUIRecordingManager; // @synthesize buildableProductForUIRecordingManager=_buildableProductForUIRecordingManager;
@property(readonly) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly) NSString *launchName; // @synthesize launchName=_launchName;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property __weak id <IDETestRunnerEvents> testEventsObserver; // @synthesize testEventsObserver=_testEventsObserver;
@property(retain) IDETestOperationCoordinator *currentTestOperationCoordinator;
@property(retain) IDETestRunnerResumeContext *resumeContext;
@property int testRunnerPID;
@property(readonly, copy) NSString *description;
- (void)testCaseWithIdentifier:(id)arg1 didFinishWithStatus:(id)arg2 duration:(double)arg3 rawOutput:(id)arg4 sessionState:(id)arg5;
- (void)testCaseWithIdentifier:(id)arg1 didFailWithMessage:(id)arg2 file:(id)arg3 line:(long long)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseWithIdentifier:(id)arg1 didMeasurePerformanceMetric:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testDidOutput:(id)arg1 sessionState:(id)arg2;
- (void)testCaseWithIdentifier:(id)arg1 didFinishActivity:(id)arg2 sessionState:(id)arg3;
- (void)testCaseWithIdentifier:(id)arg1 willStartActivity:(id)arg2 sessionState:(id)arg3;
- (void)testCaseWithIdentifier:(id)arg1 wasSkippedWithMessage:(id)arg2 file:(id)arg3 line:(long long)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseWithIdentifier:(id)arg1 didStartWithRawOutput:(id)arg2 sessionState:(id)arg3;
- (void)testSuiteDidFinishWithRunCount:(unsigned long long)arg1 skipCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3 unexpectedFailureCount:(unsigned long long)arg4 testDuration:(double)arg5 totalDuration:(double)arg6 rawOutput:(id)arg7 sessionState:(id)arg8;
- (void)testSuiteWithIdentifier:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuiteWithIdentifier:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)_unwindTestSuiteStackForResultsProcessor:(id)arg1;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)launchSessionStarted:(id)arg1 diagnosticLogPath:(id)arg2;
- (BOOL)_hasTestsLeftToRun;
- (id)_aggregateStatisticsFromLastLaunch;
- (BOOL)_addTestRunOperation:(id *)arg1;
@property(readonly) NSString *title;
@property(readonly) NSString *currentDiagnosticLogPath;
- (id)testOperationWithError:(id *)arg1;
- (id)_testRunOperationWithLaunchParameters:(id)arg1 error:(id *)arg2;
- (id)configurationOperationForLaunchSession:(id)arg1 error:(id *)arg2;
- (void)testProcessDidBecomeReadyForWork:(id)arg1;
- (void)shutdown;
- (void)executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)fetchDiscoveredTestClasses:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithTestRunSpecification:(id)arg1 testRunSpecificationGroup:(id)arg2 executionStyle:(long long)arg3 executionEnvironment:(id)arg4 runDestination:(id)arg5 launchParametersBlock:(CDUnknownBlockType)arg6 artifactsDirectory:(id)arg7 daemonController:(id)arg8 activityReporter:(id)arg9 testingInstallationTracker:(id)arg10;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

