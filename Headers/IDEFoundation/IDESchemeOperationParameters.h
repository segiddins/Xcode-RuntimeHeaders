//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEExecutionEnvironment, IDERunDestination, IDESchemeActionsInvocationRecord, IDESchemeCommand, NSArray, NSDictionary, NSNumber, NSString;
@protocol IDEBuildOperationClientInfo, IDETestRunDestinationPool;

@interface IDESchemeOperationParameters : NSObject
{
    BOOL _collectBuildTimeStatistics;
    BOOL _collectTimelineMetrics;
    long long _schemeTask;
    long long _buildCommand;
    IDEExecutionEnvironment *_executionEnvironment;
    IDERunDestination *_runDestination;
    IDESchemeCommand *_schemeCommand;
    NSString *_commandName;
    IDESchemeActionsInvocationRecord *_invocationRecord;
    DVTFilePath *_filePathForSingleFileAction;
    id <IDETestRunDestinationPool> _testingRunDestinationPool;
    NSArray *_overridingTestingSpecifierGroups;
    NSArray *_overridingTestPlanReferences;
    NSArray *_onlyTestConfigurations;
    NSArray *_skipTestConfigurations;
    NSArray *_additionalLaunchCommandLineArguments;
    NSDictionary *_overridingLaunchEnvironmentVariables;
    NSNumber *_parallelTestingEnabledOverride;
    NSNumber *_parallelTestingWorkerCountOverride;
    NSNumber *_parallelTestingMaximumWorkerCount;
    NSNumber *_testTimeoutsEnabled;
    NSNumber *_defaultTestExecutionTimeAllowance;
    NSNumber *_maximumTestExecutionTimeAllowance;
    NSString *_contextString;
    id <IDEBuildOperationClientInfo> _buildOperationClientInfo;
    NSNumber *_traceCollectionEnabled;
    NSDictionary *_performanceTestConfiguration;
}

+ (id)operationParametersWithSchemeTask:(long long)arg1 buildCommand:(long long)arg2 executionEnvironment:(id)arg3 runDestination:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7;
- (void).cxx_destruct;
@property(retain) NSDictionary *performanceTestConfiguration; // @synthesize performanceTestConfiguration=_performanceTestConfiguration;
@property(retain) NSNumber *traceCollectionEnabled; // @synthesize traceCollectionEnabled=_traceCollectionEnabled;
@property(retain) id <IDEBuildOperationClientInfo> buildOperationClientInfo; // @synthesize buildOperationClientInfo=_buildOperationClientInfo;
@property BOOL collectTimelineMetrics; // @synthesize collectTimelineMetrics=_collectTimelineMetrics;
@property(copy) NSString *contextString; // @synthesize contextString=_contextString;
@property BOOL collectBuildTimeStatistics; // @synthesize collectBuildTimeStatistics=_collectBuildTimeStatistics;
@property(copy) NSNumber *maximumTestExecutionTimeAllowance; // @synthesize maximumTestExecutionTimeAllowance=_maximumTestExecutionTimeAllowance;
@property(copy) NSNumber *defaultTestExecutionTimeAllowance; // @synthesize defaultTestExecutionTimeAllowance=_defaultTestExecutionTimeAllowance;
@property(copy) NSNumber *testTimeoutsEnabled; // @synthesize testTimeoutsEnabled=_testTimeoutsEnabled;
@property(copy) NSNumber *parallelTestingMaximumWorkerCount; // @synthesize parallelTestingMaximumWorkerCount=_parallelTestingMaximumWorkerCount;
@property(copy) NSNumber *parallelTestingWorkerCountOverride; // @synthesize parallelTestingWorkerCountOverride=_parallelTestingWorkerCountOverride;
@property(copy) NSNumber *parallelTestingEnabledOverride; // @synthesize parallelTestingEnabledOverride=_parallelTestingEnabledOverride;
@property(copy) NSDictionary *overridingLaunchEnvironmentVariables; // @synthesize overridingLaunchEnvironmentVariables=_overridingLaunchEnvironmentVariables;
@property(copy) NSArray *additionalLaunchCommandLineArguments; // @synthesize additionalLaunchCommandLineArguments=_additionalLaunchCommandLineArguments;
@property(copy) NSArray *skipTestConfigurations; // @synthesize skipTestConfigurations=_skipTestConfigurations;
@property(copy) NSArray *onlyTestConfigurations; // @synthesize onlyTestConfigurations=_onlyTestConfigurations;
@property(copy) NSArray *overridingTestPlanReferences; // @synthesize overridingTestPlanReferences=_overridingTestPlanReferences;
@property(copy) NSArray *overridingTestingSpecifierGroups; // @synthesize overridingTestingSpecifierGroups=_overridingTestingSpecifierGroups;
@property(retain) id <IDETestRunDestinationPool> testingRunDestinationPool; // @synthesize testingRunDestinationPool=_testingRunDestinationPool;
@property(copy) DVTFilePath *filePathForSingleFileAction; // @synthesize filePathForSingleFileAction=_filePathForSingleFileAction;
@property(retain) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property long long buildCommand; // @synthesize buildCommand=_buildCommand;
@property long long schemeTask; // @synthesize schemeTask=_schemeTask;
- (id)init;

@end

