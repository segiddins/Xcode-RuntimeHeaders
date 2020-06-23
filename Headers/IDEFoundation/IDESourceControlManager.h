//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, _TtC13IDEFoundation30IDESourceControlAccountManager, _TtC13IDEFoundation34IDESourceControlFingerprintManager;
@protocol OS_dispatch_queue;

@interface IDESourceControlManager : NSObject
{
    NSMutableArray *_registeredWorkspaces;
    NSObject<OS_dispatch_queue> *_registeredWorkspacesDispatchQueue;
    NSMutableArray *_legacyWorkingTrees;
    NSOperationQueue *_operationQueue;
    long long _maxConcurrentOperationCount;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _showChangeBar;
    BOOL _showUpstreamChangesInChangeBar;
    BOOL _automaticallyAddNewFiles;
    BOOL _preselectCommitSheetFiles;
    BOOL _waitingForAuthentication;
    BOOL _showMergeCommits;
    BOOL _shouldLoadAccounts;
    NSObject<OS_dispatch_queue> *_legacyWorkingTreesDispatchQueue;
    _TtC13IDEFoundation30IDESourceControlAccountManager *_accountManager;
    _TtC13IDEFoundation34IDESourceControlFingerprintManager *_fingerprintManager;
    double _minimumLocalStatusRequestDelay;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (void)setDisableLoadingAccounts:(BOOL)arg1;
+ (BOOL)disableLoadingAccounts;
+ (void)setEnableLoadingAccounts:(BOOL)arg1;
+ (BOOL)enableLoadingAccounts;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlReachabilityLogAspect;
+ (id)sourceControlFileStatusLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sharedSourceControlManager;
- (void).cxx_destruct;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
@property(readonly) _TtC13IDEFoundation34IDESourceControlFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property(readonly) _TtC13IDEFoundation30IDESourceControlAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly) BOOL shouldLoadAccounts; // @synthesize shouldLoadAccounts=_shouldLoadAccounts;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
- (void)reportSourceControlOperation:(unsigned long long)arg1;
- (void)_reportNewUICloneOperation:(unsigned long long)arg1;
- (void)_reportNewUIEditorOperation:(unsigned long long)arg1;
- (void)_reportNewUIContextOperation:(unsigned long long)arg1;
- (void)_reportConfigurationOperation:(unsigned long long)arg1;
- (void)_reportCommitNavigatorOperation:(unsigned long long)arg1;
- (void)_reportEditorOperation:(unsigned long long)arg1;
- (void)_reportMenuOperation:(unsigned long long)arg1;
- (void)_reportCommitOperation:(unsigned long long)arg1;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingTreeAtFilePath:(id)arg1;
- (id)workingTreeForFilePath:(id)arg1;
- (void)unregisterWorkspace:(id)arg1;
- (void)registerWorkspace:(id)arg1;
- (id)workingCopyForFilePath:(id)arg1;
@property(readonly) NSArray *workingCopies;
- (void)asyncPerformBlockOnWorkingTreeQueue:(CDUnknownBlockType)arg1;
- (void)addLegacyWorkingTree:(id)arg1;
@property(readonly) NSArray *legacyWorkingTrees; // @synthesize legacyWorkingTrees=_legacyWorkingTrees;
@property BOOL showMergeCommits;
@property BOOL preselectCommitSheetFiles;
@property BOOL automaticallyAddNewFiles;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property BOOL showUpstreamChangesInChangeBar; // @synthesize showUpstreamChangesInChangeBar=_showUpstreamChangesInChangeBar;
@property BOOL showChangeBar; // @synthesize showChangeBar=_showChangeBar;
@property BOOL enableSourceControl;
- (id)_blacklistedDirectories;
@property(readonly) BOOL isSCMNetworkDebuggingEnabled;
@property(readonly) BOOL isPullRequestSupportEnabled;
- (id)initWithSavedAccounts:(BOOL)arg1 credentialsManager:(id)arg2 userDefaults:(id)arg3;
- (id)initWithSavedAccounts:(BOOL)arg1;

@end

