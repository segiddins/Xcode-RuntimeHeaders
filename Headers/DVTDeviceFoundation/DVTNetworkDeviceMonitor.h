//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTDeviceFoundation/DVTNetworkDeviceServiceBrowserDelegate-Protocol.h>

@class DVTDispatchLock, DVTNetworkDeviceServiceBrowser, DVTObservingToken, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DVTNetworkDeviceMonitor : NSObject <DVTNetworkDeviceServiceBrowserDelegate>
{
    DVTObservingToken *_availableDevicesToken;
    NSObject<OS_dispatch_queue> *_deviceObservingQueue;
    NSMutableDictionary *_deviceObservingTokens;
    NSMutableDictionary *_deviceScanTimerSources;
    DVTDispatchLock *_deviceScanTimerSourcesLock;
    DVTNetworkDeviceServiceBrowser *_networkDeviceServiceBrowser;
    NSMutableDictionary *_deviceAddresses;
    DVTDispatchLock *_deviceAddressesLock;
    NSMutableDictionary *_activelyProxiedAddresses;
    NSMutableDictionary *_activelyAdvertisedAddresses;
    NSMutableDictionary *_activeDeviceBonjourProxies;
    DVTDispatchLock *_activeDeviceBonjourLock;
}

+ (void)start;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_potentialDeviceAddressesForDevice:(id)arg1;
- (void)_addPotentialDeviceAddress:(id)arg1;
- (void)_saveDeviceAddresses;
- (void)_restoreSavedDeviceAddresses;
- (id)_deviceForUnknownServiceName:(id)arg1 devicesToSearch:(id)arg2;
- (id)_deviceForAdvertisedServiceName:(id)arg1 devicesToSearch:(id)arg2;
- (id)_deviceForProxiedServiceName:(id)arg1 devicesToSearch:(id)arg2;
- (id)_deviceForServiceName:(id)arg1 type:(long long *)arg2;
- (void)_terminatePossiblyActiveProxyForDevice:(id)arg1;
- (void)_stopMonitoringNetworkStatusOfDevice:(id)arg1;
- (void)_attemptToConnectToDevice:(id)arg1 promisingDeviceAddress:(id)arg2;
- (void)_scanForDevice:(id)arg1 potentialAddresses:(id)arg2;
- (_Bool)_deviceIsActivelyAdvertising:(id)arg1;
- (void)_startMonitoringNetworkStatusOfDevice:(id)arg1;
- (void)_stopObservingDevice:(id)arg1;
- (void)_observeDevice:(id)arg1;
- (void)_observeAvailableDevices;
- (void)networkDeviceServiceBrowser:(id)arg1 didRemoveIPAddress:(id)arg2 deviceMACAddress:(id)arg3 serviceName:(id)arg4;
- (void)networkDeviceServiceBrowser:(id)arg1 didResolveIPAddress:(id)arg2 deviceMACAddress:(id)arg3 serviceName:(id)arg4;
- (void)networkDeviceServiceBrowser:(id)arg1 didFindServiceNamed:(id)arg2 shouldResolve:(_Bool *)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

