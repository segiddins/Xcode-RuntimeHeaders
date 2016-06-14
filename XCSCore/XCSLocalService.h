//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer, NSURL, XCSService;

@interface XCSLocalService : NSObject
{
    XCSService *_cachedService;
    NSTimer *_maintenanceTaskTimer;
    BOOL _isPerformingMaintenanceTask;
    BOOL _attemptGuestAuthentication;
    BOOL _stateChanged;
    NSArray *_bots;
    NSString *_versionsDisplayString;
    NSString *_platformsDisplayString;
    NSArray *_currentMaintenanceTasks;
    NSString *_displayName;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _statusChangedCallback;
    CDUnknownBlockType _advisoryStatusChangedCallback;
    CDUnknownBlockType _serviceInfoCallback;
}

+ (id)sharedItemWithService:(id)arg1;
+ (void)resetSharedItems;
+ (void)initialize;
@property(nonatomic) BOOL stateChanged; // @synthesize stateChanged=_stateChanged;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoCallback; // @synthesize serviceInfoCallback=_serviceInfoCallback;
@property(copy, nonatomic) CDUnknownBlockType advisoryStatusChangedCallback; // @synthesize advisoryStatusChangedCallback=_advisoryStatusChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType statusChangedCallback; // @synthesize statusChangedCallback=_statusChangedCallback;
@property(nonatomic) BOOL attemptGuestAuthentication; // @synthesize attemptGuestAuthentication=_attemptGuestAuthentication;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *currentMaintenanceTasks; // @synthesize currentMaintenanceTasks=_currentMaintenanceTasks;
@property(nonatomic) BOOL isPerformingMaintenanceTask; // @synthesize isPerformingMaintenanceTask=_isPerformingMaintenanceTask;
@property(retain, nonatomic) NSString *platformsDisplayString; // @synthesize platformsDisplayString=_platformsDisplayString;
@property(retain, nonatomic) NSString *versionsDisplayString; // @synthesize versionsDisplayString=_versionsDisplayString;
@property(retain, nonatomic) NSArray *bots; // @synthesize bots=_bots;
- (void).cxx_destruct;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)loginWithStoredCredentials:(CDUnknownBlockType)arg1;
- (void)_pollServiceForMaintenaceTasks:(id)arg1;
- (void)pollServiceForMaintenaceTasks;
@property(readonly, nonatomic) XCSService *service;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) BOOL isResolving;
@property(readonly, nonatomic) BOOL isResolved;
@property(readonly, nonatomic) NSString *clientUUID;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *connectionAddress;
@property(readonly, nonatomic) BOOL enabled;
@property(readonly, nonatomic) BOOL messageChannelConnected;
@property(readonly, nonatomic) NSString *identifier;
- (void)_observeLocalBot:(id)arg1;
- (void)fetchServerInfo:(CDUnknownBlockType)arg1;
- (void)_updateBuildQueue;
- (void)populateBots:(CDUnknownBlockType)arg1;
- (id)initWithService:(id)arg1;
- (void)flushLocalData;

@end
