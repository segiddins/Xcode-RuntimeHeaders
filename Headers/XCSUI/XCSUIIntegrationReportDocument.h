//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class DVTObservingToken, NSError, NSString, XCSIntegration;

@interface XCSUIIntegrationReportDocument : IDEEditorDocument <XCSUIDataSourceSnapshotsObserver>
{
    DVTObservingToken *_maintenanceTasksObserverToken;
    NSString *_serviceClientUUID;
    XCSIntegration *_integration;
    NSError *_errorFetchingIntegration;
}

+ (id)keyPathsForValuesAffectingIDE_DisplayName;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingBot;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *errorFetchingIntegration; // @synthesize errorFetchingIntegration=_errorFetchingIntegration;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void)fetchIntegrationWithID:(id)arg1 botID:(id)arg2 service:(id)arg3;
- (void)addMaintenanceTasksObserverForService:(id)arg1;
- (void)dataSource:(id)arg1 accountWasRemovedForService:(id)arg2;
- (id)displayName;
- (id)bot;
- (void)updateBotIntegration:(id)arg1;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;

@end

