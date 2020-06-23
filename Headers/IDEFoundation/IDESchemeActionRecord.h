//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDESchemeActionResult, IDESchemeActionRunDestinationRecord, IDESchemeCommand, NSDate, NSString;

@interface IDESchemeActionRecord : NSObject
{
    BOOL _debuggerEnabled;
    BOOL _codeCoverageEnabled;
    BOOL _addressSanitizerEnabled;
    BOOL _threadSanitizerEnabled;
    BOOL _undefinedBehaviorSanitizerEnabled;
    BOOL _didSendFinishAction;
    IDESchemeCommand *_schemeCommand;
    NSString *_schemeCommandName;
    long long _schemeTask;
    NSString *_title;
    NSString *_testPlanName;
    NSDate *_startedTime;
    NSDate *_endedTime;
    NSDate *_corePhaseOperationStartedTime;
    IDESchemeActionResult *_buildResult;
    IDESchemeActionResult *_actionResult;
    NSString *_contextString;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
    DVTFilePath *_localRecordDirectoryFilePath;
    DVTFilePath *_creatingWorkspaceFilePath;
    long long _actionIndex;
}

+ (long long)schemeTaskForString:(id)arg1;
+ (id)stringForSchemeTask:(long long)arg1;
+ (id)schemeCommandForString:(id)arg1;
+ (id)keyPathsForValuesAffectingTestsSkippedCount;
+ (id)keyPathsForValuesAffectingTestsFailedCount;
+ (id)keyPathsForValuesAffectingTestsCount;
+ (id)keyPathsForValuesAffectingAnalyzerWarningCount;
+ (id)keyPathsForValuesAffectingErrorCount;
+ (id)keyPathsForValuesAffectingWarningCount;
+ (id)keyPathsForValuesAffectingIsRecording;
+ (id)keyPathsForValuesAffectingStatus;
+ (BOOL)getSchemeTask:(long long *)arg1 fromDictionaryRepresentation:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL didSendFinishAction; // @synthesize didSendFinishAction=_didSendFinishAction;
@property(readonly, nonatomic) long long actionIndex; // @synthesize actionIndex=_actionIndex;
@property(retain, nonatomic) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
@property(retain, nonatomic) DVTFilePath *localRecordDirectoryFilePath; // @synthesize localRecordDirectoryFilePath=_localRecordDirectoryFilePath;
@property(retain, nonatomic) IDESchemeActionRunDestinationRecord *runDestinationRecord; // @synthesize runDestinationRecord=_runDestinationRecord;
@property(copy, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(nonatomic) BOOL undefinedBehaviorSanitizerEnabled; // @synthesize undefinedBehaviorSanitizerEnabled=_undefinedBehaviorSanitizerEnabled;
@property(nonatomic) BOOL threadSanitizerEnabled; // @synthesize threadSanitizerEnabled=_threadSanitizerEnabled;
@property(nonatomic) BOOL addressSanitizerEnabled; // @synthesize addressSanitizerEnabled=_addressSanitizerEnabled;
@property(nonatomic) BOOL codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property(nonatomic) BOOL debuggerEnabled; // @synthesize debuggerEnabled=_debuggerEnabled;
@property(retain, nonatomic) IDESchemeActionResult *actionResult; // @synthesize actionResult=_actionResult;
@property(retain, nonatomic) IDESchemeActionResult *buildResult; // @synthesize buildResult=_buildResult;
@property(copy, nonatomic) NSDate *corePhaseOperationStartedTime; // @synthesize corePhaseOperationStartedTime=_corePhaseOperationStartedTime;
@property(copy, nonatomic) NSDate *endedTime; // @synthesize endedTime=_endedTime;
@property(copy, nonatomic) NSDate *startedTime; // @synthesize startedTime=_startedTime;
@property(copy, nonatomic) NSString *testPlanName; // @synthesize testPlanName=_testPlanName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long schemeTask; // @synthesize schemeTask=_schemeTask;
@property(retain, nonatomic) NSString *schemeCommandName; // @synthesize schemeCommandName=_schemeCommandName;
@property(retain, nonatomic) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly, nonatomic) unsigned long long testsSkippedCount;
@property(readonly, nonatomic) unsigned long long testsFailedCount;
@property(readonly, nonatomic) unsigned long long testsCount;
@property(readonly, nonatomic) unsigned long long analyzerWarningCount;
@property(readonly, nonatomic) unsigned long long errorCount;
@property(readonly, nonatomic) unsigned long long warningCount;
@property(readonly, nonatomic) BOOL isRecording;
@property(readonly, nonatomic) long long status;
- (id)description;
- (void)updateWithActionIndex:(long long)arg1;
- (void)close;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1 forSchemeActionsInvocationRecord:(id)arg2;
- (id)dictionaryRepresentationForSchemeActionsInvocationRecord:(id)arg1;
- (BOOL)saveToContainer:(id)arg1 returningError:(id *)arg2;
- (BOOL)copyResourcesFromSchemeActionRecord:(id)arg1 error:(id *)arg2;
- (void)recordRunDestination:(id)arg1;
- (id)sparseActionRecordAtFilePath:(id)arg1 testIdentifiers:(id)arg2;
- (id)initWithTitle:(id)arg1 startedTime:(id)arg2 endedTime:(id)arg3 buildResult:(id)arg4 actionResult:(id)arg5 schemeCommand:(id)arg6 schemeCommandName:(id)arg7 schemeTask:(long long)arg8 runDestinationRecord:(id)arg9;
- (id)initWithLocalRecordDirectoryFilePath:(id)arg1 creatingWorkspaceFilePath:(id)arg2 schemeTask:(long long)arg3 resultBundleWriter:(id)arg4 testSummariesStream:(id)arg5 resultStream:(id)arg6;
- (id)initWithLocalRecordDirectoryFilePath:(id)arg1 creatingWorkspaceFilePath:(id)arg2 schemeTask:(long long)arg3;

@end

