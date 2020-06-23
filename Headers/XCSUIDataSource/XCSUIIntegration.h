//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSUIDataSourceSnapshotsObserver-Protocol.h>
#import <XCSUIDataSource/XCSUISnapshot-Protocol.h>

@class NSArray, NSDate, NSString, XCSIntegration, XCSService, XCSUIDataSource, XCSUIIntegrationStatus;

@interface XCSUIIntegration : NSObject <XCSUIDataSourceSnapshotsObserver, XCSUISnapshot>
{
    BOOL _isControlIntegration;
    BOOL _isPending;
    BOOL _isCompleted;
    BOOL _loadMoreItem;
    XCSService *_service;
    XCSIntegration *_integration;
    NSString *_identifier;
    NSString *_botIdentifier;
    NSString *_serviceIdentifier;
    NSString *_integrationNumber;
    NSString *_botName;
    long long _successStreak;
    NSDate *_endedTime;
    NSDate *_startedTime;
    NSDate *_queuedDate;
    XCSUIIntegrationStatus *_status;
    NSArray *_cachedReports;
    NSString *_integrationTypeString;
    XCSUIDataSource *_dataSource;
}

+ (id)snapshotWithIntegration:(id)arg1 dataSource:(id)arg2;
+ (id)loadMoreItemForBotSnapshot:(id)arg1;
@property(nonatomic) __weak XCSUIDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *integrationTypeString; // @synthesize integrationTypeString=_integrationTypeString;
@property(retain, nonatomic) NSArray *cachedReports; // @synthesize cachedReports=_cachedReports;
@property(retain, nonatomic) XCSUIIntegrationStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property(retain, nonatomic) NSDate *startedTime; // @synthesize startedTime=_startedTime;
@property(retain, nonatomic) NSDate *endedTime; // @synthesize endedTime=_endedTime;
@property(readonly, nonatomic) long long successStreak; // @synthesize successStreak=_successStreak;
@property(nonatomic, getter=isLoadMoreItem) BOOL loadMoreItem; // @synthesize loadMoreItem=_loadMoreItem;
@property(nonatomic) BOOL isCompleted; // @synthesize isCompleted=_isCompleted;
@property(readonly, nonatomic) BOOL isPending; // @synthesize isPending=_isPending;
@property(readonly, nonatomic) BOOL isControlIntegration; // @synthesize isControlIntegration=_isControlIntegration;
@property(readonly, copy, nonatomic) NSString *botName; // @synthesize botName=_botName;
@property(copy, nonatomic) NSString *integrationNumber; // @synthesize integrationNumber=_integrationNumber;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *botIdentifier; // @synthesize botIdentifier=_botIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dataSource:(id)arg1 integrationStepChanged:(id)arg2 serviceSnapshot:(id)arg3 botSnapshot:(id)arg4 integrationSnapshot:(id)arg5;
- (void)refreshDataFromIntegration:(id)arg1 useMainQueue:(BOOL)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIntegration:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

