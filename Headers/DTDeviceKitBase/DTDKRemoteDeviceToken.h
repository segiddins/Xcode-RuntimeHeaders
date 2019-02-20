//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTDKRemoteDeviceConnection, DTDKRemoteDeviceConsoleController, DVTDispatchLock, DVTNotificationToken, DVTPlatform, NSArray, NSError, NSMutableArray, NSNumber, NSSet, NSString;

@interface DTDKRemoteDeviceToken : NSObject
{
    DVTPlatform *_platform;
    NSMutableArray *_connections;
    DVTDispatchLock *_connectionsLock;
    DVTNotificationToken *_connectionRemovedToken;
    DVTNotificationToken *_connectionAddedToken;
    NSError *_developerDiskImageMountError;
    _Bool _inReloadApplications;
    _Bool _inReloadSystemApplications;
    _Bool _inReloadProvisioningProfiles;
    DTDKRemoteDeviceConnection *_primaryConnection;
    DTDKRemoteDeviceConsoleController *_deviceConsoleController;
    NSString *_deviceName;
    NSNumber *_deviceECID;
    NSString *_deviceIMEI;
    NSString *_deviceClass;
    NSString *_deviceActivationState;
    NSString *_deviceType;
    NSString *_deviceWiFiMAC;
    NSString *_deviceBluetoothMAC;
    NSString *_deviceCodename;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_deviceSerialNumber;
    NSString *_deviceColorString;
    NSString *_deviceEnclosureColorString;
    NSString *_deviceArchitecture;
    NSNumber *_deviceTotalCapacity;
    NSNumber *_deviceAvailableCapacity;
    NSString *_deviceToolsType;
    NSNumber *_isPasscodeLockedObj;
    NSNumber *_isChargingObj;
    NSNumber *_deviceProductionSOC;
    NSNumber *_canBeWatchCompanionObj;
    NSArray *_supportedDeviceFamilies;
    NSNumber *_deviceBatteryCapacity;
    NSString *_deviceDevelopmentStatus;
    NSNumber *_deviceChipID;
    NSSet *_applications;
    NSSet *_systemApplications;
    NSSet *_provisioningProfiles;
    DTDKRemoteDeviceConnection *_primaryWiredConection;
    DTDKRemoteDeviceConnection *_primaryWirelessConection;
    NSString *_deviceIdentifier;
    NSArray *_applicationDictionaries;
    NSArray *_systemApplicationDictionaries;
    long long _deviceSSHPort;
    long long _deviceTelnetPort;
    long long _deviceRsyncPort;
    long long _deviceMountPort;
    long long _deviceNFSPort;
    id _darwinNotificationService;
    NSString *_deviceSoftwareVersion;
}

+ (id)keyPathsForValuesAffectingApplications;
+ (id)keyPathsForValuesAffectingDeviceIsSupported;
+ (id)keyPathsForValuesAffectingDeviceIsActivated;
+ (id)keyPathsForValuesAffectingDevelopmentFlag;
+ (id)keyPathsForValuesAffectingDeviceIsProduction;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceIsProduction;
+ (id)keyPathsForValuesAffectingHasLoaded_canBeWatchCompanion;
+ (id)keyPathsForValuesAffectingCanBeWatchCompanion;
+ (id)keyPathsForValuesAffectingHasLoaded_isCharging;
+ (id)keyPathsForValuesAffectingIsCharging;
+ (id)keyPathsForValuesAffectingHasLoaded_isPasscodeLocked;
+ (id)keyPathsForValuesAffectingIsPasscodeLocked;
+ (id)keyPathsForValuesAffectingDeviceHasStandardTools;
+ (id)keyPathsForValuesAffectingDeviceHasInternalTools;
+ (id)keyPathsForValuesAffectingDeviceCrashReporterKey;
+ (id)keyPathsForValuesAffectingDeviceSoftwareVersion;
+ (id)keyPathsForValuesAffectingDeviceProcessorDescription;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceChipID;
+ (id)keyPathsForValuesAffectingDeviceChipID;
+ (id)keyPathsForValuesAffectingHasLoadedDeviceDevelopmentStatus;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceBatteryCapacity;
+ (id)keyPathsForValuesAffectingDeviceBatteryCapacity;
+ (id)keyPathsForValuesAffectingDeviceHasBattery;
+ (id)keyPathsForValuesAffectingHasLoaded_supportedDeviceFamilies;
+ (id)keyPathsForValuesAffectingHasLoaded_canBeWatchCompanionObj;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceProductionSOC;
+ (id)keyPathsForValuesAffectingHasLoaded_isChargingObj;
+ (id)keyPathsForValuesAffectingHasLoaded_isPasscodeLockedObj;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceToolsType;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceAvailableCapacity;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceTotalCapacity;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceArchitecture;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceEnclosureColorString;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceColorString;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceSerialNumber;
+ (id)keyPathsForValuesAffectingHasLoaded_buildVersion;
+ (id)keyPathsForValuesAffectingHasLoaded_productVersion;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceCodename;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceBluetoothMAC;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceWiFiMAC;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceType;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceActivationState;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceClass;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceIMEI;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceECID;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceName;
+ (id)_wirelessHostID;
+ (id)keyPathsForValuesAffectingHasDirectConnection;
+ (id)keyPathsForValuesAffectingDeviceIsPaired;
+ (id)keyPathsForValuesAffectingHasWirelessConnection;
+ (id)keyPathsForValuesAffectingHasWiredConnection;
+ (id)keyPathsForValuesAffectingDeviceAddresses;
+ (id)keyPathsForValuesAffectingDeviceHostname;
+ (id)keyPathsForValuesAffectingWakeupToken;
+ (id)keyPathsForValuesAffectingDeviceClassForDisplay;
+ (id)keyPathsForValuesAffectingLocalizedDeviceModel;
+ (id)keyPathsForValuesAffectingIsConnected;
+ (id)keyPathsForValuesAffectingIsSupportedOS;
+ (id)tokenWithDeviceIdentifier:(id)arg1;
+ (id)deviceLock;
+ (id)devices;
@property(copy, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property(retain) id darwinNotificationService; // @synthesize darwinNotificationService=_darwinNotificationService;
@property _Bool inReloadProvisioningProfiles; // @synthesize inReloadProvisioningProfiles=_inReloadProvisioningProfiles;
@property _Bool inReloadSystemApplications; // @synthesize inReloadSystemApplications=_inReloadSystemApplications;
@property _Bool inReloadApplications; // @synthesize inReloadApplications=_inReloadApplications;
@property long long deviceNFSPort; // @synthesize deviceNFSPort=_deviceNFSPort;
@property long long deviceMountPort; // @synthesize deviceMountPort=_deviceMountPort;
@property long long deviceRsyncPort; // @synthesize deviceRsyncPort=_deviceRsyncPort;
@property long long deviceTelnetPort; // @synthesize deviceTelnetPort=_deviceTelnetPort;
@property long long deviceSSHPort; // @synthesize deviceSSHPort=_deviceSSHPort;
@property(copy, nonatomic) NSArray *systemApplicationDictionaries; // @synthesize systemApplicationDictionaries=_systemApplicationDictionaries;
@property(copy, nonatomic) NSArray *applicationDictionaries; // @synthesize applicationDictionaries=_applicationDictionaries;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) DTDKRemoteDeviceConnection *primaryWirelessConection; // @synthesize primaryWirelessConection=_primaryWirelessConection;
@property(retain, nonatomic) DTDKRemoteDeviceConnection *primaryWiredConection; // @synthesize primaryWiredConection=_primaryWiredConection;
@property(copy, nonatomic) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(copy, nonatomic) NSSet *systemApplications; // @synthesize systemApplications=_systemApplications;
@property(copy, nonatomic) NSSet *applications; // @synthesize applications=_applications;
@property(copy, nonatomic) NSNumber *deviceChipID; // @synthesize deviceChipID=_deviceChipID;
@property(copy, nonatomic) NSString *deviceDevelopmentStatus; // @synthesize deviceDevelopmentStatus=_deviceDevelopmentStatus;
@property(copy, nonatomic) NSNumber *deviceBatteryCapacity; // @synthesize deviceBatteryCapacity=_deviceBatteryCapacity;
@property(copy, nonatomic) NSArray *supportedDeviceFamilies; // @synthesize supportedDeviceFamilies=_supportedDeviceFamilies;
@property(copy, nonatomic) NSNumber *canBeWatchCompanionObj; // @synthesize canBeWatchCompanionObj=_canBeWatchCompanionObj;
@property(copy, nonatomic) NSNumber *deviceProductionSOC; // @synthesize deviceProductionSOC=_deviceProductionSOC;
@property(copy, nonatomic) NSNumber *isChargingObj; // @synthesize isChargingObj=_isChargingObj;
@property(copy, nonatomic) NSNumber *isPasscodeLockedObj; // @synthesize isPasscodeLockedObj=_isPasscodeLockedObj;
@property(copy, nonatomic) NSString *deviceToolsType; // @synthesize deviceToolsType=_deviceToolsType;
@property(copy, nonatomic) NSNumber *deviceAvailableCapacity; // @synthesize deviceAvailableCapacity=_deviceAvailableCapacity;
@property(copy, nonatomic) NSNumber *deviceTotalCapacity; // @synthesize deviceTotalCapacity=_deviceTotalCapacity;
@property(copy, nonatomic) NSString *deviceArchitecture; // @synthesize deviceArchitecture=_deviceArchitecture;
@property(copy, nonatomic) NSString *deviceEnclosureColorString; // @synthesize deviceEnclosureColorString=_deviceEnclosureColorString;
@property(copy, nonatomic) NSString *deviceColorString; // @synthesize deviceColorString=_deviceColorString;
@property(copy, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy, nonatomic) NSString *deviceCodename; // @synthesize deviceCodename=_deviceCodename;
@property(copy, nonatomic) NSString *deviceBluetoothMAC; // @synthesize deviceBluetoothMAC=_deviceBluetoothMAC;
@property(copy, nonatomic) NSString *deviceWiFiMAC; // @synthesize deviceWiFiMAC=_deviceWiFiMAC;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *deviceActivationState; // @synthesize deviceActivationState=_deviceActivationState;
@property(copy, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSString *deviceIMEI; // @synthesize deviceIMEI=_deviceIMEI;
@property(copy, nonatomic) NSNumber *deviceECID; // @synthesize deviceECID=_deviceECID;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) DTDKRemoteDeviceConsoleController *deviceConsoleController; // @synthesize deviceConsoleController=_deviceConsoleController;
@property(retain, nonatomic) DTDKRemoteDeviceConnection *primaryConnection; // @synthesize primaryConnection=_primaryConnection;
- (void).cxx_destruct;
- (id)startTCPRelay;
- (id)editExportsXPCConnection;
- (id)tcprelayXPCConnection;
- (id)takeWirelessPowerAssertionWithName:(id)arg1 deatils:(id)arg2 andTimeout:(double)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)startDarwinNotificationListener;
- (void)uninstallProvisioningProfiles:(id)arg1;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1;
- (void)installProvisioningProfile:(id)arg1;
- (void)reload_provisioningProfiles;
- (void)fetchApplications:(CDUnknownBlockType)arg1;
- (id)fetchApplications;
- (void)reload_systemApplications;
- (void)reload_applications;
- (void)renameDevice:(id)arg1;
- (id)installedProvisioningProfileWithUUID:(id)arg1;
@property(readonly, nonatomic) _Bool deviceIsSupported;
- (_Bool)deviceIsActivated;
- (id)setDevelopmentFlag:(_Bool)arg1;
- (_Bool)developmentFlag;
- (void)setDeviceIsProduction:(_Bool)arg1;
@property(readonly, nonatomic) _Bool deviceIsProduction;
@property(readonly) _Bool hasLoaded_deviceIsProduction;
@property(readonly) _Bool hasLoaded_canBeWatchCompanion;
@property(readonly, nonatomic) _Bool canBeWatchCompanion;
@property(readonly) _Bool hasLoaded_isCharging;
@property(readonly, nonatomic) _Bool isCharging;
@property(readonly) _Bool hasLoaded_isPasscodeLocked;
@property(readonly, nonatomic) _Bool isPasscodeLocked;
@property(readonly, nonatomic) _Bool deviceHasStandardTools;
@property(readonly, nonatomic) _Bool deviceHasInternalTools;
@property(readonly, copy, nonatomic) NSString *deviceCrashReporterKey;
@property(readonly, copy, nonatomic) NSString *deviceProcessorDescription;
@property(readonly) _Bool hasLoaded_deviceChipID;
- (id)reload_deviceChipID;
- (_Bool)syncSetDevelopmentFlag:(BOOL)arg1 error:(id *)arg2;
@property(readonly) _Bool hasLoaded_deviceDevelopmentStatus;
- (id)reload_deviceDevelopmentStatus;
@property(readonly) _Bool hasLoaded_deviceBatteryCapacity;
- (id)reload_deviceBatteryCapacity;
- (_Bool)deviceHasBattery;
- (_Bool)hasLoaded_supportedDeviceFamilies;
- (id)reload_supportedDeviceFamilies;
- (id)reloadIfNeeded_supportedDeviceFamilies;
- (_Bool)hasLoaded_canBeWatchCompanionObj;
- (id)reload_canBeWatchCompanionObj;
- (id)reloadIfNeeded_canBeWatchCompanionObj;
- (_Bool)hasLoaded_deviceProductionSOC;
- (id)reload_deviceProductionSOC;
- (id)reloadIfNeeded_deviceProductionSOC;
- (_Bool)hasLoaded_isChargingObj;
- (id)reload_isChargingObj;
- (id)reloadIfNeeded_isChargingObj;
- (_Bool)hasLoaded_isPasscodeLockedObj;
- (id)reload_isPasscodeLockedObj;
- (id)reloadIfNeeded_isPasscodeLockedObj;
@property(readonly) _Bool hasLoaded_deviceToolsType;
- (id)reload_deviceToolsType;
- (id)reloadIfNeeded_deviceToolsType;
@property(readonly) _Bool hasLoaded_deviceAvailableCapacity;
- (id)reload_deviceAvailableCapacity;
- (id)reloadIfNeeded_deviceAvailableCapacity;
@property(readonly) _Bool hasLoaded_deviceTotalCapacity;
- (id)reload_deviceTotalCapacity;
- (id)reloadIfNeeded_deviceTotalCapacity;
@property(readonly) _Bool hasLoaded_deviceArchitecture;
- (id)reload_deviceArchitecture;
- (id)reloadIfNeeded_deviceArchitecture;
@property(readonly) _Bool hasLoaded_deviceEnclosureColorString;
- (id)reload_deviceEnclosureColorString;
- (id)reloadIfNeeded_deviceEnclosureColorString;
@property(readonly) _Bool hasLoaded_deviceColorString;
- (id)reload_deviceColorString;
- (id)reloadIfNeeded_deviceColorString;
@property(readonly) _Bool hasLoaded_deviceSerialNumber;
- (id)reload_deviceSerialNumber;
- (id)reloadIfNeeded_deviceSerialNumber;
@property(readonly) _Bool hasLoaded_buildVersion;
- (id)reload_buildVersion;
- (id)reloadIfNeeded_buildVersion;
@property(readonly) _Bool hasLoaded_productVersion;
- (id)reload_productVersion;
- (id)reloadIfNeeded_productVersion;
@property(readonly) _Bool hasLoaded_deviceCodename;
- (id)reload_deviceCodename;
- (id)reloadIfNeeded_deviceCodename;
@property(readonly) _Bool hasLoaded_deviceBluetoothMAC;
- (id)reload_deviceBluetoothMAC;
- (id)reloadIfNeeded_deviceBluetoothMAC;
@property(readonly) _Bool hasLoaded_deviceWiFiMAC;
- (id)reload_deviceWiFiMAC;
- (id)reloadIfNeeded_deviceWiFiMAC;
@property(readonly) _Bool hasLoaded_deviceType;
- (id)reload_deviceType;
- (id)reloadIfNeeded_deviceType;
@property(readonly) _Bool hasLoaded_deviceActivationState;
- (id)reload_deviceActivationState;
- (id)reloadIfNeeded_deviceActivationState;
@property(readonly) _Bool hasLoaded_deviceClass;
- (id)reload_deviceClass;
- (id)reloadIfNeeded_deviceClass;
@property(readonly) _Bool hasLoaded_deviceIMEI;
- (id)reload_deviceIMEI;
- (id)reloadIfNeeded_deviceIMEI;
@property(readonly) _Bool hasLoaded_deviceECID;
- (id)reload_deviceECID;
- (id)reloadIfNeeded_deviceECID;
@property(readonly) _Bool hasLoaded_deviceName;
- (id)reload_deviceName;
- (id)reloadIfNeeded_deviceName;
- (_Bool)uninstallApplicationWithIdentifier:(id)arg1 options:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)upgradeApplicationAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)installApplicationAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)transferPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)installApplicationBundleAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (id)checkDeviceCapabilities:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3;
- (_Bool)simulateLatitude:(id)arg1 andLongitude:(id)arg2 withError:(id *)arg3;
- (_Bool)stopSimulatingLocationWithError:(id *)arg1;
- (id)copyAndProcessSharedCache;
- (id)developerDiskImageMountError;
- (_Bool)mountDeveloperDiskImageWithError:(id *)arg1;
- (id)developerDiskImageForDeviceType:(id)arg1 productVersion:(id)arg2 buildVersion:(id)arg3;
- (_Bool)mountDeveloperDiskImage:(id)arg1 withError:(id *)arg2;
- (id)exactSymbolsDirectory:(id *)arg1;
- (id)idealExistingSymbolsDirectory:(id *)arg1;
- (struct _AMDServiceConnection *)startLocationSimulationServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startSharedCacheCopyingServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startXcodeDeviceMonitorServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startSyslogServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startCrashReportCopyMobileServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startCrashReportMoverServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startAppInstallationServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startDebugServerServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startServiceWithIdentifier:(id)arg1 andError:(id *)arg2;
- (id)deviceArbitrationForcedCheckIn;
- (id)deviceArbitrationCheckIn;
- (id)_deviceArbitrationCheckIn:(id)arg1;
- (id)startXcodeDeviceArbitrationService;
- (id)startHouseArrestServiceForAppIdentifier:(id)arg1;
- (id)startXcodeDeviceMonitorService;
- (id)wirelessInstrumentsServer;
- (id)wiredInstrumentsServer;
- (id)primaryInstrumentsServer;
- (id)startInstrumentsServerService;
- (id)startSyslogService;
- (id)startAppListService;
- (id)startLocationSimulationService;
- (id)startSharedCacheCopyingService;
- (id)startCrashReportCopyMobileService;
- (id)startCrashReportMoverService;
- (id)startAppInstallationService;
- (id)startSpringboardService;
- (id)startDarwinNotificationService;
- (id)startDebugServerServiceWithExtension:(id)arg1;
- (id)_debugServiceArrayWithExtension:(id)arg1 services:(id)arg2;
- (id)startFirstServiceOf:(id)arg1 unlockKeybag:(_Bool)arg2;
- (id)startFirstServiceOf:(id)arg1;
- (id)startServiceWithIdentifier:(id)arg1;
- (void)unpair;
- (void)disableWireless;
- (id)enableWireless;
- (_Bool)isWirelessEnabled;
- (id)wakeup;
- (int)executeInSession:(CDUnknownBlockType)arg1;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
@property(readonly, nonatomic) _Bool hasDirectConnection;
- (_Bool)_hasDirectConnection;
@property(readonly, copy, nonatomic) NSArray *connections; // @dynamic connections;
- (void)_updatePrimaryConnection;
@property(readonly, nonatomic) DTDKRemoteDeviceToken *activeProxiedDeviceToken;
@property(readonly, copy, nonatomic) NSSet *proxiedDeviceTokens;
@property(readonly) _Bool deviceIsPaired;
@property(readonly, nonatomic) _Bool hasWirelessConnection;
@property(readonly, nonatomic) _Bool hasWiredConnection;
@property(readonly, copy, nonatomic) NSArray *deviceAddresses;
@property(readonly, copy, nonatomic) NSString *deviceHostname;
@property(readonly, nonatomic) void *wakeupToken;
@property(readonly, copy, nonatomic) NSString *deviceClassForDisplay;
@property(readonly, nonatomic) NSString *deviceModelUTI;
@property(readonly, nonatomic) NSString *localizedDeviceModel;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) _Bool isSupportedOS;
@property(readonly) DVTPlatform *platform;
- (id)init;

@end
