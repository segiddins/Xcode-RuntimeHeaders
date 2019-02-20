//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTSourceControlAccountManager-Protocol.h>

@class DVTDispatchLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface IDESourceControlManager : NSObject <DVTSourceControlAccountManager>
{
    NSMutableOrderedSet *_accounts;
    NSMutableOrderedSet *_recentWorkspaceBlueprints;
    NSMutableOrderedSet *_knownRepositories;
    NSMutableDictionary *_knownHosts;
    NSMutableArray *_registeredWorkspaces;
    NSObject<OS_dispatch_queue> *_registeredWorkspacesDispatchQueue;
    NSObject<OS_dispatch_queue> *_recentWorkspaceBlueprintDispatchQueue;
    NSObject<OS_dispatch_queue> *_accountsRepositoriesQueue;
    NSMutableArray *_legacyRepositories;
    NSMutableArray *_legacyWorkingTrees;
    NSMutableArray *_extensions;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_holdingQueue;
    DVTDispatchLock *_holdingQueueLock;
    long long _maxConcurrentOperationCount;
    long long _automaticallyScanWorkspaces;
    long long _authenticationRetryAttempts;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _automaticallyAddNewFiles;
    BOOL _waitingForAuthentication;
    BOOL _shouldLoadAccounts;
    NSObject<OS_dispatch_queue> *_legacyWorkingTreesDispatchQueue;
    double _minimumLocalStatusRequestDelay;
    NSString *_pathOfWorkspaceJustCheckedOut;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlReachabilityLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sharedSourceControlManager;
@property(retain) NSString *pathOfWorkspaceJustCheckedOut; // @synthesize pathOfWorkspaceJustCheckedOut=_pathOfWorkspaceJustCheckedOut;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
@property(readonly) BOOL shouldLoadAccounts; // @synthesize shouldLoadAccounts=_shouldLoadAccounts;
@property(readonly) NSArray *legacyRepositories; // @synthesize legacyRepositories=_legacyRepositories;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly) NSDictionary *knownHostFingerprints; // @synthesize knownHostFingerprints=_knownHosts;
@property(readonly) NSOrderedSet *knownRepositories; // @synthesize knownRepositories=_knownRepositories;
@property(readonly) NSOrderedSet *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)performRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performRequest:(id)arg1 waitUntilFinished:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)handleError:(id)arg1 forRequest:(id)arg2 operation:(id)arg3 waitUntilFinished:(BOOL)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
@property long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void)_finishLogForRequest:(id)arg1 operation:(id)arg2 withResult:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_startLogForRequest:(id)arg1 operation:(id)arg2;
- (void)reportSourceControlOperation:(unsigned long long)arg1;
- (void)_reportConfigurationOperation:(unsigned long long)arg1;
- (void)_reportCommitNavigatorOperation:(unsigned long long)arg1;
- (void)_reportEditorOperation:(unsigned long long)arg1;
- (void)_reportMenuOperation:(unsigned long long)arg1;
- (void)_reportCommitOperation:(unsigned long long)arg1;
- (void)workingTreeRootForFilePath:(id)arg1 sourceControlExtension:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_upgradableSVNWorkingTreeRootForFilePath:(id)arg1;
- (id)_svnOriginURLForFilePath:(id)arg1;
- (void)workingTreeRootForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingTreeForFilePath:(id)arg1;
- (void)unregisterWorkspace:(id)arg1;
- (void)registerWorkspace:(id)arg1;
- (id)workingCopyForFilePath:(id)arg1;
- (id)extensionForRequest:(id)arg1;
- (id)commonExtensionForPaths:(id)arg1;
- (id)extensionForURL:(id)arg1;
- (id)extensionToUseForFilePath:(id)arg1;
- (void)scanForExtensionsInFilePath:(id)arg1;
- (id)extensionsAtFilePath:(id)arg1;
- (void)invalidateExtensionsRecursivelyForFilePath:(id)arg1;
- (void)invalidateExtensionsForFilePath:(id)arg1;
- (id)extensionsAssociatedWithFilePath:(id)arg1;
- (void)removeAssociatedExtension:(id)arg1 withPath:(id)arg2;
- (void)associateExtension:(id)arg1 withPath:(id)arg2;
- (id)extensionMatchingDirectoryIdentifier:(id)arg1;
- (id)extensionsMatchingProtocol:(id)arg1;
- (id)extensionMatchingIdentifier:(id)arg1;
- (void)addLegacyRepository:(id)arg1;
- (void)addLegacyWorkingTree:(id)arg1;
- (void)updateUserDefaults;
- (id)arrayOfRecentBlueprintDictionaries;
@property(readonly) NSArray *legacyWorkingTrees; // @synthesize legacyWorkingTrees=_legacyWorkingTrees;
- (id)arrayOfAccountsDictionaries;
- (id)repositoryWithRoot:(id)arg1 sourceControlExtension:(id)arg2;
- (id)repositoryForURL:(id)arg1 sourceControlExtension:(id)arg2;
@property BOOL automaticallyAddNewFiles;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property long long automaticallyScanWorkspaces;
@property BOOL enableSourceControl;
- (id)_blacklistedDirectories;
- (id)_directoryIdentifiers;
- (id)existingFingerprintForHost:(id)arg1;
- (id)existingFingerprintForRepository:(id)arg1;
- (void)addKnownHost:(id)arg1 fingerprint:(id)arg2;
- (void)loadKnownHostsFromDictionary:(id)arg1;
- (void)removeAccount:(id)arg1 deletingFromKeychain:(BOOL)arg2;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)_addAccount:(id)arg1;
- (void)accountChanged:(id)arg1 previousUsername:(id)arg2;
- (id)existingAccountForRepository:(id)arg1 authenticationStrategy:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)existingAccountLikeAccount:(id)arg1 addingIfNew:(BOOL)arg2;
- (id)knownRepositoryForURL:(id)arg1 sourceControlSystem:(id)arg2;
@property(retain) NSOrderedSet *recentWorkspaceBlueprints;
- (void)addRecentWorkspaceBlueprint:(id)arg1;
- (void)loadWorkspacesFromDefaults;
- (void)loadAccounts;
- (id)loadAccountsFromRepositoriesArray:(id)arg1 error:(id *)arg2;
- (id)loadAccountsFromArray:(id)arg1 error:(id *)arg2;
- (BOOL)saveAccountPassword:(id)arg1 previousUsername:(id)arg2 toKeychain:(struct OpaqueSecKeychainRef *)arg3 error:(id *)arg4;
- (BOOL)deletePasswordForAccount:(id)arg1 fromKeychain:(void *)arg2;
- (id)passwordFromKeychain:(void *)arg1 forDomain:(id)arg2 user:(id)arg3 fullURL:(id)arg4 error:(id *)arg5;
- (id)sshKeyPasswordFromKeychain:(void *)arg1 forKeyURL:(id)arg2 error:(id *)arg3;
- (void)loadExtensions;
- (void)loadPlugIns;
- (id)defaultExtension;
- (id)initWithSavedAccounts:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
