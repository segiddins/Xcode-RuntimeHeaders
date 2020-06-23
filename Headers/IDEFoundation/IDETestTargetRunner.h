//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestRunnerEvents-Protocol.h>
#import <IDEFoundation/IDETestTargetRunner-Protocol.h>
#import <IDEFoundation/XCTTestSchedulerDelegate-Protocol.h>

@class DVTDisallowFinishToken, DVTOperation, DVTStackBacktrace, IDETestRunSpecification, NSMutableArray, NSMutableSet, NSOutputStream, NSString, NSURL, _TtC13IDEFoundation28IDETestRunSpecificationGroup;
@protocol DVTOperationGroup, IDETestMetadataDatabase, IDETestTargetRunnerEvents, IDETestWorkerProvider, OS_dispatch_queue, XCTTestScheduler;

@interface IDETestTargetRunner : NSObject <XCTTestSchedulerDelegate, IDETestTargetRunner, IDETestRunnerEvents>
{
    BOOL _hasNotifiedObserverOfStart;
    BOOL _shouldParallelize;
    id <IDETestTargetRunnerEvents> _testEventsObserver;
    IDETestRunSpecification *_testRunSpecification;
    _TtC13IDEFoundation28IDETestRunSpecificationGroup *_testRunSpecificationGroup;
    id <XCTTestScheduler> _scheduler;
    NSMutableArray *_testResults;
    unsigned long long _state;
    DVTOperation<DVTOperationGroup> *_operation;
    NSMutableSet *_workerProxies;
    DVTDisallowFinishToken *_disallowFinishToken;
    id <IDETestWorkerProvider> _workerProvider;
    NSURL *_artifactsDirectory;
    NSOutputStream *_logStream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    id <IDETestMetadataDatabase> _testDatabase;
    NSMutableArray *_workerErrors;
    long long _requestedWorkerCount;
    long long _numberOfTestClasses;
}

+ (id)logFileURLForArtifactsDirectory:(id)arg1;
+ (id)artifactsDirectoryURLForTestRunSpecification:(id)arg1 testSessionDirectory:(id)arg2;
+ (id)keyPathsForValuesAffectingFinished;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL shouldParallelize; // @synthesize shouldParallelize=_shouldParallelize;
@property long long numberOfTestClasses; // @synthesize numberOfTestClasses=_numberOfTestClasses;
@property long long requestedWorkerCount; // @synthesize requestedWorkerCount=_requestedWorkerCount;
@property(retain) NSMutableArray *workerErrors; // @synthesize workerErrors=_workerErrors;
@property(readonly) id <IDETestMetadataDatabase> testDatabase; // @synthesize testDatabase=_testDatabase;
@property(retain) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain) NSOutputStream *logStream; // @synthesize logStream=_logStream;
@property(retain) NSURL *artifactsDirectory; // @synthesize artifactsDirectory=_artifactsDirectory;
@property(retain) id <IDETestWorkerProvider> workerProvider; // @synthesize workerProvider=_workerProvider;
@property(retain) DVTDisallowFinishToken *disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
@property(retain) NSMutableSet *workerProxies; // @synthesize workerProxies=_workerProxies;
@property(retain) DVTOperation<DVTOperationGroup> *operation; // @synthesize operation=_operation;
@property BOOL hasNotifiedObserverOfStart; // @synthesize hasNotifiedObserverOfStart=_hasNotifiedObserverOfStart;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSMutableArray *testResults; // @synthesize testResults=_testResults;
@property(retain) id <XCTTestScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain) _TtC13IDEFoundation28IDETestRunSpecificationGroup *testRunSpecificationGroup; // @synthesize testRunSpecificationGroup=_testRunSpecificationGroup;
@property(retain) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
@property __weak id <IDETestTargetRunnerEvents> testEventsObserver; // @synthesize testEventsObserver=_testEventsObserver;
- (void)testRunner:(id)arg1 didFinishTestWithIdentifier:(id)arg2 withTestResult:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 didSkipTestWithIdentifier:(id)arg2 withTestResultMessage:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 didFailTestWithIdentifier:(id)arg2 withTestResultMessage:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 didMeasurePerformanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 didOutput:(id)arg2;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 didFinishActivity:(id)arg3;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 willStartActivity:(id)arg3;
- (void)testRunner:(id)arg1 didStartTestWithIdentifier:(id)arg2 rawOutput:(id)arg3;
- (void)testRunner:(id)arg1 testSuiteDidFinishWithRunCount:(unsigned long long)arg2 skipCount:(unsigned long long)arg3 failureCount:(unsigned long long)arg4 unexpectedFailureCount:(unsigned long long)arg5 testDuration:(double)arg6 totalDuration:(double)arg7 rawOutput:(id)arg8;
- (void)testRunner:(id)arg1 testSuite:(id)arg2 willFinishAt:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 testSuite:(id)arg2 didStartAt:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 willFinishWithError:(id)arg2 didCancel:(BOOL)arg3;
- (void)testRunner:(id)arg1 didLaunchWithDiagnosticLogPath:(id)arg2;
- (void)testRunnerDidBecomeReadyForWork:(id)arg1;
- (void)testScheduler:(id)arg1 queueDidChange:(id)arg2;
- (void)finishLogging;
- (void)logMessage:(id)arg1;
- (void)initializeLogging;
- (void)notifyObserverOfStartIfNecessary;
- (void)purgeStaleClassesInTestDatabase:(id)arg1;
- (void)startWithTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)requestTestPlanUsingWorker:(id)arg1;
- (void)handleCancellation;
- (void)observeOperationCancellation;
- (void)considerFinishingWithCancellation:(BOOL)arg1;
- (void)failWithError:(id)arg1;
- (void)requestNewWorkerIfNeeded;
- (void)workerWasProvided:(id)arg1;
- (void)requestNewWorker;
- (void)setupOperation;
- (id)proxyForWorker:(id)arg1;
@property(readonly) BOOL successfullyBootstrapped;
@property(readonly) BOOL finished;
- (void)primitiveInvalidate;
- (id)initWithTestRunSpecification:(id)arg1 testRunSpecificationGroup:(id)arg2 workerProvider:(id)arg3 scheduler:(id)arg4 testDatabase:(id)arg5 artifactsDirectory:(id)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
