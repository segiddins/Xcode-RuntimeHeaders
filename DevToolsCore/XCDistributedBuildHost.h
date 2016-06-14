//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/XCNetworkHostObserver-Protocol.h>

@class NSHost, NSMutableSet, NSString;

@interface XCDistributedBuildHost : NSObject <XCNetworkHostObserver>
{
    NSString *_hostSpec;
    unsigned long long _port;
    NSString *_composedOsVersionString;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_architecture;
    NSMutableSet *_compilerVersions;
    NSMutableSet *_sdkVersions;
    NSHost *_host;
    unsigned long long _cpuCount;
    long long _cpuSpeed;
    unsigned long long _jobCount;
    BOOL _isReachable;
    BOOL _isSharing;
    BOOL _hasHostInfo;
    BOOL _isTrackedManually;
    unsigned int _hashValue;
    int _hostType;
}

+ (id)distributedBuildHostWithSpec:(id)arg1;
+ (id)_hostNameForHostSpec:(id)arg1;
+ (void)_finishedFetchingHostInfoInBackground;
+ (void)_fetchHostInfoInBackground:(id)arg1;
+ (id)_launchInfoForDictionary:(id)arg1;
+ (id)_displayStringForSDKVersionString:(id)arg1;
+ (id)_displayStringForCompilerVersionString:(id)arg1;
- (void)networkHostOnlineStatusChanged:(BOOL)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)processingPower;
- (unsigned long long)cpuSpeed;
- (long long)concurrentJobCount;
- (long long)cpuCount;
- (void)refresh;
- (id)description;
- (BOOL)isEqualToBuildHost:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)hasSDK:(id)arg1;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)isCompatibleHost;
- (id)sdkVersionStringsForDisplay;
- (id)sdkVersionStrings;
- (id)compilerVersionStringsForDisplay;
- (id)compilerVersionStrings;
- (id)OSVersionString;
- (unsigned long long)port;
- (void)setPort:(unsigned long long)arg1;
- (id)hostSpec;
- (void)setBonjourServiceName:(id)arg1;
- (id)bonjourServiceName;
- (id)sdkVersionForSDKPackage:(id)arg1;
- (void)setTrackedManually:(BOOL)arg1;
- (BOOL)isTrackedManually;
- (BOOL)wasDiscoveredByBonjour;
- (id)statusString;
- (id)statusSortKey;
- (void)clearHostInfo;
- (void)setHasHostInfo:(BOOL)arg1;
- (BOOL)hasHostInfo;
- (id)setSystemInfoFromData:(id)arg1;
- (void)setSystemInfoFromDictionary:(id)arg1;
- (id)launchInfoForSystemInfoFetch;
- (void)fetchSystemInfo:(id)arg1;
- (void)setIsSharing:(BOOL)arg1;
- (BOOL)isSharing;
- (void)setIsReachable:(BOOL)arg1;
- (BOOL)isReachable;
- (void)_allocateHost;
- (id)_host;
- (void)dealloc;
- (id)initWithHostSpec:(id)arg1 port:(unsigned long long)arg2;
- (id)initWithHostSpec:(id)arg1;
- (int)hostType;
- (BOOL)isLocalHost;

@end

