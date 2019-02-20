//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudSupport/IDEInitialization-Protocol.h>
#import <iCloudSupport/NSNetServiceBrowserDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface iCloudServiceCenter : NSObject <IDEInitialization, NSNetServiceBrowserDelegate>
{
    BOOL _initiatedMonitors;
    NSRecursiveLock *_monitorsLock;
    NSMutableSet *_monitorClasses;
    NSMutableSet *_monitors;
    NSMutableDictionary *_monitorsByUUID;
    NSRecursiveLock *_observersLock;
    NSMutableSet *_observers;
    NSMutableDictionary *_observersByContainer;
    NSRecursiveLock *_requestQueueLock;
    NSMutableDictionary *_requestQueues;
    NSMapTable *_authorizationHelperByMonitor;
}

+ (id)sharedInstance;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)_fetchAccountInformationForObservers:(id)arg1 onMonitor:(id)arg2;
- (void)_fetchServerStatusForObservers:(id)arg1 onMonitor:(id)arg2;
- (void)_fetchFilesForObservers:(id)arg1 container:(id)arg2 onMonitor:(id)arg3;
- (id)_monitors;
- (void)notifyObserversOfDeviceRemoved:(id)arg1;
- (void)notifyObserversOfDeviceAdded:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1 forDevice:(id)arg2 forContainer:(id)arg3;
- (void)fetchDataForObserver:(id)arg1 forDevice:(id)arg2 forContainer:(id)arg3;
- (void)registerObserver:(id)arg1 forContainer:(id)arg2;
- (void)_fetchDataForObserver:(id)arg1 forDevice:(id)arg2 forContainer:(id)arg3 initial:(BOOL)arg4;
- (void)registerGlobalObserver:(id)arg1;
- (void)sendCommand:(id)arg1 toMonitorWithID:(id)arg2 usingProcessor:(id)arg3;
- (id)monitorForID:(id)arg1;
- (void)stopSimulatingLocationOnDevice:(id)arg1 usingProcessor:(id)arg2;
- (void)startSimulatingLocationWithLatitude:(id)arg1 longitude:(id)arg2 onDevice:(id)arg3 usingProcessor:(id)arg4;
- (void)fetchHeapForPID:(int)arg1 fromDevice:(id)arg2 usingProcessor:(id)arg3;
- (void)fetchSampleForPID:(int)arg1 fromDevice:(id)arg2 usingProcessor:(id)arg3;
- (id)knownDevices;
- (void)stopMonitor:(id)arg1;
- (void)processQueueForMonitor:(id)arg1;
- (void)startMonitor:(id)arg1;
- (void)_cleanUpOldMonitorForNewMonitor:(id)arg1;
- (id)getSharedSecretFromKeychain;
- (void)authorizeCommunicationOnMonitor:(id)arg1;
- (id)_authorizationHelperForMonitor:(id)arg1;
- (void)initiateMonitors;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
