//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTFilePath, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDELogStore, IDETestRunSession, IDEWorkspace, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, _TtC13IDEFoundation21IDEAdHocTestSelection, _TtC13IDEFoundation24IDETestPlanChangeHandler;
@protocol DVTCancellable, DVTInvalidation, IDETestManagerUITestingPermissionSheetDelegate, IDETestMetadataDatabase;

@interface IDETestManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSSet *_testableProviders;
    NSSet *_testables;
    NSMutableDictionary *_testablesByFileURL;
    NSMapTable *_testableProvidersToObservingTokens;
    NSMapTable *_testablesToObservingTokens;
    NSMutableSet *_searchedTestables;
    NSMutableSet *_testableObservingTokens;
    NSMapTable *_subtestObservingTokenMapTable;
    id <DVTInvalidation> _blueprintsChangedObserver;
    DVTNotificationToken *_buildOperationObserver;
    DVTNotificationToken *_cleanBuildFolderObserver;
    DVTNotificationToken *_testableChangedHackNotification;
    DVTObservingToken *_activeSchemeObserver;
    id <DVTCancellable> _delayedNotifyObserversOfChangedTestablesToken;
    DVTTimeSlicedMainThreadWorkQueue *_changedTestableNotificationQueue;
    BOOL _forcingReloadAll;
    NSMutableDictionary *_dataSources;
    NSMutableDictionary *_testRunGenerationCountsByID;
    DVTDelayedInvocation *_forceReloadAllTestablesInvocation;
    BOOL _didRunTests;
    BOOL _loadingComplete;
    IDETestRunSession *_testRunSession;
    NSSet *_generateCoverageReportSessions;
    IDELogStore *_logStore;
    _TtC13IDEFoundation21IDEAdHocTestSelection *_testsLastRun;
    _TtC13IDEFoundation21IDEAdHocTestSelection *_testsLastProfiled;
    id <IDETestMetadataDatabase> _testDatabase;
    NSMutableDictionary *_testableStateByTestableName;
    NSMutableDictionary *_fileChangeBrokersByFileURL;
    unsigned long long _testSessionGenerationCounter;
    NSMutableArray *_concurrentTestRunSessions;
    _TtC13IDEFoundation24IDETestPlanChangeHandler *_testPlanDeletionHandler;
    _TtC13IDEFoundation24IDETestPlanChangeHandler *_testPlanTargetDeletionHandler;
    _TtC13IDEFoundation24IDETestPlanChangeHandler *_testPlanTargetNameChangeHandler;
    NSArray *_testConfigurationsLastRun;
    NSArray *_testConfigurationsLastProfiled;
    DVTFilePath *_actionResultsBundleWithBaselineOverridesFilePath;
    id <IDETestManagerUITestingPermissionSheetDelegate> _UITestingPermissionSheetDelegate;
}

+ (id)staticLibraryDependenciesForBlueprint:(id)arg1 inWorkspace:(id)arg2;
+ (id)testLocationsForFileURL:(id)arg1 fromTestablesByFileURL:(id)arg2 testablesInScheme:(id)arg3 compositeStateBlock:(CDUnknownBlockType)arg4;
+ (id)testsForFileURL:(id)arg1 fromTestablesByFileURL:(id)arg2;
+ (void)initialize;
+ (id)testingTypeIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IDETestManagerUITestingPermissionSheetDelegate> UITestingPermissionSheetDelegate; // @synthesize UITestingPermissionSheetDelegate=_UITestingPermissionSheetDelegate;
@property(retain) DVTFilePath *actionResultsBundleWithBaselineOverridesFilePath; // @synthesize actionResultsBundleWithBaselineOverridesFilePath=_actionResultsBundleWithBaselineOverridesFilePath;
@property(copy) NSArray *testConfigurationsLastProfiled; // @synthesize testConfigurationsLastProfiled=_testConfigurationsLastProfiled;
@property(copy) NSArray *testConfigurationsLastRun; // @synthesize testConfigurationsLastRun=_testConfigurationsLastRun;
@property(retain, nonatomic) _TtC13IDEFoundation24IDETestPlanChangeHandler *testPlanTargetNameChangeHandler; // @synthesize testPlanTargetNameChangeHandler=_testPlanTargetNameChangeHandler;
@property(retain, nonatomic) _TtC13IDEFoundation24IDETestPlanChangeHandler *testPlanTargetDeletionHandler; // @synthesize testPlanTargetDeletionHandler=_testPlanTargetDeletionHandler;
@property(retain, nonatomic) _TtC13IDEFoundation24IDETestPlanChangeHandler *testPlanDeletionHandler; // @synthesize testPlanDeletionHandler=_testPlanDeletionHandler;
@property(retain) NSMutableArray *concurrentTestRunSessions; // @synthesize concurrentTestRunSessions=_concurrentTestRunSessions;
@property unsigned long long testSessionGenerationCounter; // @synthesize testSessionGenerationCounter=_testSessionGenerationCounter;
@property(readonly) NSMutableDictionary *fileChangeBrokersByFileURL; // @synthesize fileChangeBrokersByFileURL=_fileChangeBrokersByFileURL;
@property(readonly) NSMutableDictionary *testableStateByTestableName; // @synthesize testableStateByTestableName=_testableStateByTestableName;
@property(readonly) id <IDETestMetadataDatabase> testDatabase; // @synthesize testDatabase=_testDatabase;
@property BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(retain) _TtC13IDEFoundation21IDEAdHocTestSelection *testsLastProfiled; // @synthesize testsLastProfiled=_testsLastProfiled;
@property(retain) _TtC13IDEFoundation21IDEAdHocTestSelection *testsLastRun; // @synthesize testsLastRun=_testsLastRun;
@property BOOL didRunTests; // @synthesize didRunTests=_didRunTests;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(copy) NSSet *generateCoverageReportSessions; // @synthesize generateCoverageReportSessions=_generateCoverageReportSessions;
@property(retain) IDETestRunSession *testRunSession; // @synthesize testRunSession=_testRunSession;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)asyncApplyBaselineRecord:(id)arg1 forTestBundleRunDestinationRecord:(id)arg2 behavior:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)displayWorkspaceSheetForUITestingPermissionWithReply:(CDUnknownBlockType)arg1;
- (void)asyncApplyBaselineRecord:(id)arg1 forBlueprintProviderRelativePath:(id)arg2 blueprintName:(id)arg3 testBundleRunDestinationRecord:(id)arg4 behavior:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)testablesForFileURL:(id)arg1;
- (id)testForIdentifier:(id)arg1;
- (id)fileURLForTestIdentifier:(id)arg1;
- (id)testLocationsForFileURL:(id)arg1;
- (id)testsForFileURL:(id)arg1;
- (id)_bestTestableForFileURL:(id)arg1;
- (id)testableDataSourceForTestingSystemWithIdentifier:(id)arg1;
- (void)setTestableDataSource:(id)arg1 forTestingSystemWithIdentifier:(id)arg2;
- (void)didCompleteFor:(id)arg1;
- (id)testOperationForTestRunSpecificationGroups:(id)arg1 executionEnvironment:(id)arg2 runDestinationPool:(id)arg3 actionRecord:(id)arg4 schemeIdentifier:(id)arg5 outSchemeActionResultOperation:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7 actionCallbackBlock:(CDUnknownBlockType)arg8 error:(id *)arg9;
- (void)finishTestingForTestingSpecifier:(id)arg1;
- (void)_purgeInvalidRuntimeDiscoveredTestsForTest:(id)arg1 withSkippedTests:(id)arg2;
- (BOOL)_shouldPurgeRuntimeDiscoveredTestTestResultForTest:(id)arg1;
- (unsigned long long)_latestGenerationForAncestorsOfTest:(id)arg1;
- (void)startTestingFor:(id)arg1;
- (void)resetTestsLastRun;
- (unsigned long long)compositeStateOfTests:(id)arg1;
- (unsigned long long)stateOfTestable:(id)arg1;
- (id)noticesForTest:(id)arg1;
- (id)performanceMetricsForTest:(id)arg1;
- (unsigned long long)stateOfTest:(id)arg1;
- (BOOL)isTestablePendingRun:(id)arg1;
- (BOOL)isTestPendingRun:(id)arg1;
- (void)_cancelAndRemoveAllTestObservingTokens;
- (void)_unregisterSubtestsObservanceForAllTestsInTestable:(id)arg1;
- (void)_unregisterSubtestsObservanceForTest:(id)arg1 inTestable:(id)arg2;
- (void)_registerSubtestsObservance:(id)arg1 forTest:(id)arg2 inTestable:(id)arg3;
- (void)_loadTestsForTestable:(id)arg1;
- (void)_checkLoadingComplete;
- (void)_updateTestsLastRunOrProfiledForRemovedTests:(id)arg1;
- (void)_diffPrevious:(id)arg1 current:(id)arg2 onlyNew:(id *)arg3 onlyOld:(id *)arg4;
- (void)_forceReloadAllTestables;
- (void)_delayedForceReloadAllTestables;
- (void)_notifyObserversOfChangedTestable:(id)arg1;
- (void)_notifyUpdatedTestFilesForTestable:(id)arg1 addedFiles:(id)arg2 removedFiles:(id)arg3;
- (void)removeObserver:(id)arg1 ofFile:(id)arg2;
- (void)addObserver:(id)arg1 ofFile:(id)arg2;
- (void)setTestablesObserved:(id)arg1 byObserver:(id)arg2;
- (id)_stateForTestable:(id)arg1;
- (void)_notifyAllTestablesObservers;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_cleanBuildFolder:(id)arg1;
- (void)_blueprintsDidChange:(id)arg1;
- (void)_updateAllFileChangeBrokerObservers;
- (void)addCoverageReportOperation:(id)arg1;
- (void)_removeCoverageReportOperation:(id)arg1;
- (unsigned long long)_lastRunSessionGenerationCountForTestable:(id)arg1;
- (unsigned long long)_lastRunSessionGenerationCountForTest:(id)arg1;
- (void)processNewTestResult:(id)arg1 forTest:(id)arg2;
- (void)setLastRunSessionGenerationCount:(unsigned long long)arg1 forTest:(id)arg2;
- (void)removeRunningTest:(id)arg1;
- (void)addRunningTest:(id)arg1;
- (void)_updateForCurrentTestableProviders:(id)arg1;
- (void)_updateWithTestableProvidersToRemove:(id)arg1 toAdd:(id)arg2;
- (void)_updateWithTestablesToRemove:(id)arg1 toAdd:(id)arg2;
@property(readonly) NSSet *testables;
@property(readonly) NSSet *testableProviders;
- (void)_removeInvalidTestableStateForInvalidTestables:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

