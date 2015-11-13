//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELogProvider.h>

@class DVTObservingToken, IDELogStore, IDEWorkspace, NSMapTable;

@interface DBGConsoleLogProvider : IDELogProvider
{
    IDEWorkspace *_workspace;
    DVTObservingToken *_launchSessionsObserverToken;
    DVTObservingToken *_launchSessionsStateObserverToken;
    DVTObservingToken *_launchSessionsConsoleAdaptorsObserverToken;
    NSMapTable *_terminationTokenForConsoleAdaptorTable;
    NSMapTable *_logSectionForLaunchSessionTable;
    NSMapTable *_consoleAdaptorsForLaunchSessionTable;
    NSMapTable *_notificationCenterObserverArrayForConsoleAdaptors;
    IDELogStore *_logStore;
}

+ (id)keyPathsForValuesAffectingLogRecords;
+ (id)_logStorePrefix;
- (void).cxx_destruct;
- (void)_handleConsoleItemAdded:(id)arg1 forLaunchSession:(id)arg2;
- (void)_handleConsoleAdaptorOutputTerminated:(id)arg1 forLaunchSession:(id)arg2;
- (id)domainIdentifier;
- (id)ideModelObjectTypeIdentifier;
- (void)_handleConsoleAdaptorRemoved:(id)arg1 forLaunchSession:(id)arg2;
- (void)_handleConsoleAdaptorAdded:(id)arg1 forLaunchSession:(id)arg2;
- (id)keyForConsole:(id)arg1 launchSession:(id)arg2;
- (void)_handleConsoleAdaptorsChanged:(id)arg1 forLaunchSession:(id)arg2;
- (void)_handleLaunchSessionStateChanged:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)interestedInSchemeCommand:(id)arg1;
- (id)logRecords;
- (id)initWithDomainItem:(id)arg1;

@end

