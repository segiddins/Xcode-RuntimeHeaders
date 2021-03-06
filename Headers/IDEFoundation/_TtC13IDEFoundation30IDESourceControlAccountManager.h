//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTSourceControlAccountManager-Protocol.h>

@class MISSING_TYPE, NSArray;

@interface _TtC13IDEFoundation30IDESourceControlAccountManager : NSObject <DVTSourceControlAccountManager>
{
    MISSING_TYPE *accountsRepositoriesQueue;
    MISSING_TYPE *accountsRepositoriesOperationQueue;
    MISSING_TYPE *shouldLoadAccounts;
    MISSING_TYPE *credentialsManager;
    MISSING_TYPE *_knownRepositories;
    MISSING_TYPE *_accounts;
    MISSING_TYPE *sourceControlManager;
    MISSING_TYPE *userDefaults;
    MISSING_TYPE *isLoadingHostedAccounts;
    MISSING_TYPE *accountsMutationLock;
    MISSING_TYPE *queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)knownRepositoryForURL:(id)arg1 sourceControlSystem:(id)arg2;
- (id)authenticationStrategyForURL:(id)arg1 usingAccount:(id)arg2;
- (void)loadAccountsFrom:(id)arg1;
- (id)hostedAccountsForUrl:(id)arg1;
- (void)loadHostedAccounts;
@property(nonatomic, readonly) NSArray *hostedAccounts;
- (void)updateUserDefaults;
- (void)remove:(id)arg1 deleteFromKeychain:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remove:(id)arg1 deleteFromKeychain:(BOOL)arg2;
- (void)remove:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1;
- (void)add:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAccount:(id)arg1;
- (id)existingAccountLikeAccount:(id)arg1 addingIfNew:(BOOL)arg2;
- (id)existingAccountForRepository:(id)arg1 authenticationStrategy:(id)arg2 createIfNeeded:(BOOL)arg3;
- (void)synchronizeSSHKeyPassphrasesFor:(id)arg1;
- (void)reloadTrustedServerFingerprints;
- (void)accountChanged:(id)arg1 previousUsername:(id)arg2;
- (id)initWithSavedAccounts:(BOOL)arg1 sourceControlManager:(id)arg2 credentialsManager:(id)arg3 userDefaults:(id)arg4;
- (id)initWithSavedAccounts:(BOOL)arg1 sourceControlManager:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;
@property(nonatomic, readonly) NSArray *accounts;
@property(nonatomic, readonly) NSArray *knownRepositories;

@end

