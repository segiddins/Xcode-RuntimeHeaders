//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisioningTeamAccountPairProvider-Protocol.h>

@class DVTDeveloperAccountManager, DVTDispatchLock, DVTStackBacktrace, IDEProvisioningPortal, IDEProvisioningSessionManager, NSMutableDictionary, NSString;
@protocol DVTInvalidation;

@interface IDEProvisioningTeamAccountPairManager : NSObject <DVTInvalidation, IDEProvisioningTeamAccountPairProvider>
{
    DVTDispatchLock *_lock;
    id <DVTInvalidation> _accountsToken;
    NSMutableDictionary *_teamIDToPairMap;
    DVTDeveloperAccountManager *_accountManager;
    IDEProvisioningSessionManager *_sessionManager;
    IDEProvisioningPortal *_portal;
}

+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
@property(retain, nonatomic) IDEProvisioningSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (id)_teamIDToPairMapForTesting;
- (id)_pairForTeam:(id)arg1 error:(id *)arg2;
- (id)pairForTeam:(id)arg1 error:(id *)arg2;
- (void)invalidateCachedPairMap;
- (id)sessionProviders;
- (void)primitiveInvalidate;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

