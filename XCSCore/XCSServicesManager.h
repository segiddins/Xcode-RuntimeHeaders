//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSCore/XCSServiceConnectionDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface XCSServicesManager : NSObject <XCSServiceConnectionDelegate>
{
    NSArray *_defaultsArray;
    NSMutableArray *_services;
    NSMapTable *_statusChangedListeners;
    NSMapTable *_advisoryStatusChangedListeners;
    NSMapTable *_servicesChangedListeners;
    NSMutableSet *_servicesUserCanCreateBotsOn;
    NSMutableSet *_servicesUserCanViewBotsOn;
    BOOL _isRunningInTestContext;
    BOOL _ignoreUserDefaults;
    NSString *_clientApplicationName;
    CDUnknownBlockType _serviceInfoCallback;
}

+ (id)sharedInstanceForTesting:(BOOL)arg1;
+ (id)sharedInstance;
+ (id)_commonSharedInstanceForTesting:(BOOL)arg1 ignoreUserDefaults:(BOOL)arg2;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoCallback; // @synthesize serviceInfoCallback=_serviceInfoCallback;
@property(nonatomic) BOOL ignoreUserDefaults; // @synthesize ignoreUserDefaults=_ignoreUserDefaults;
@property(retain, nonatomic) NSString *clientApplicationName; // @synthesize clientApplicationName=_clientApplicationName;
- (void).cxx_destruct;
- (void)maintenanceTaskStatusChangedInService:(id)arg1;
- (void)serviceConnectionStatusDidDisconnect:(id)arg1;
- (void)serviceConnectionStatusDidConnect:(id)arg1;
- (BOOL)canUserViewBotsOnService:(id)arg1;
- (BOOL)canUserEditBotOnService:(id)arg1;
- (BOOL)canUserCreateBotOnService:(id)arg1;
- (void)refreshACLCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)existingServiceMatchingConnectionAddress:(id)arg1;
- (id)existingServiceMatchingNetServiceName:(id)arg1;
- (id)serviceMatchingURLString:(id)arg1;
- (id)serviceMatchingClientUUID:(id)arg1;
- (void)reloadServices;
- (void)deactivateService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)activateService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_legacyAccountsCachePath;
- (void)cacheAccounts:(id)arg1;
- (id)accounts;
- (void)removeAccountForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccountForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccountForConnectionAddress:(id)arg1 withUserName:(id)arg2 password:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateCache;
- (void)enableService:(id)arg1 enabled:(BOOL)arg2;
- (id)dictionaryForService:(id)arg1;
- (void)resetForTesting;
- (void)resetAccounts;
- (void)removeServicesChangedCallbackLisenter:(id)arg1;
- (void)_fireServicesChangedCallbackForService:(id)arg1;
- (void)addServicesChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeAdvisoryStatusChangedCallbackLisenter:(id)arg1;
- (void)_fireAdvisoryStatusChangedCallbackForService:(id)arg1 bot:(id)arg2 integration:(id)arg3;
- (void)addAdvisoryStatusChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_fireStatusChangedCallbackForService:(id)arg1 bot:(id)arg2 integration:(id)arg3;
- (void)removeStatusChangedCallbackLisenter:(id)arg1;
- (void)addStatusChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *enabledServices;
@property(readonly, nonatomic) NSArray *services;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

