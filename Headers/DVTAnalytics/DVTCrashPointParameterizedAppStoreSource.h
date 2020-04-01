//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/DVTCrashPointSource.h>

#import <DVTAnalytics/DVTAnalyticsAppStoreSourceProtocol-Protocol.h>

@class DVTAnalyticsAppIdentifier, DVTAnalyticsAppStoreSourceUserDefaultsKey, DVTAnalyticsDownloadMoreLogsOptions, DVTAnalyticsPointDistributionOptions, DVTCrashPointAppStoreSource, DVTCrashPointFilter, DVTCrashPointParameters, NSArray, NSMutableArray, NSString, _TtC12DVTAnalytics34AnalyticsAppStoreSourceRateLimiter;

@interface DVTCrashPointParameterizedAppStoreSource : DVTCrashPointSource <DVTAnalyticsAppStoreSourceProtocol>
{
    NSMutableArray *_analyticsPoints;
    NSArray *_defaultCrashPointListOptions;
    DVTAnalyticsPointDistributionOptions *_defaultCrashPointDownloadOptions;
    DVTAnalyticsDownloadMoreLogsOptions *_defaultCrashPointMoreLogsOptions;
    _TtC12DVTAnalytics34AnalyticsAppStoreSourceRateLimiter *_rateLimiter;
    Class _crashPointListClass;
    Class _crashPointDownloadDataClass;
    Class _crashPointMoreLogsClass;
    DVTCrashPointAppStoreSource *_appStoreSource;
    DVTCrashPointParameters *_filteredParameters;
    DVTCrashPointFilter *_filter;
}

+ (void)initialize;
@property(readonly) DVTCrashPointFilter *filter; // @synthesize filter=_filter;
@property(readonly) DVTCrashPointParameters *filteredParameters; // @synthesize filteredParameters=_filteredParameters;
@property __weak DVTCrashPointAppStoreSource *appStoreSource; // @synthesize appStoreSource=_appStoreSource;
@property(retain) Class crashPointMoreLogsClass; // @synthesize crashPointMoreLogsClass=_crashPointMoreLogsClass;
@property(retain) Class crashPointDownloadDataClass; // @synthesize crashPointDownloadDataClass=_crashPointDownloadDataClass;
@property(retain) Class crashPointListClass; // @synthesize crashPointListClass=_crashPointListClass;
@property(retain, nonatomic) _TtC12DVTAnalytics34AnalyticsAppStoreSourceRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(readonly) DVTAnalyticsDownloadMoreLogsOptions *_defaultCrashPointMoreLogsOptions; // @synthesize _defaultCrashPointMoreLogsOptions;
- (void).cxx_destruct;
- (id)_requestMoreLogsForCrashPointIdentifier:(id)arg1 withSession:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_requestCrashPointForIdentifier:(id)arg1 withSession:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_requestCrashPointForIdentifier:(id)arg1 withSession:(id)arg2 error:(id *)arg3;
@property(readonly) DVTAnalyticsPointDistributionOptions *_defaultCrashPointDownloadOptions; // @synthesize _defaultCrashPointDownloadOptions;
- (id)_requestTopCrashesListsForAppIdentifiers:(id)arg1 withSession:(id)arg2 options:(id)arg3;
- (id)_requestTopCrashesListsForAppIdentifiers:(id)arg1 withSession:(id)arg2;
- (id)_requestTopCrashesListForAppIdentifier:(id)arg1 withSession:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_requestTopCrashesListForAppIdentifier:(id)arg1 withSession:(id)arg2 error:(id *)arg3;
@property(readonly) NSArray *_defaultCrashPointListOptions; // @synthesize _defaultCrashPointListOptions;
@property(readonly) NSString *appExtensionPointIdentifier;
@property(readonly) DVTAnalyticsAppIdentifier *appIdentifier;
- (BOOL)downloadMoreLogsForCrashPoint:(id)arg1 withSession:(id)arg2 error:(id *)arg3;
@property(readonly) long long type;
- (id)_crashLogsFromLogDataList:(id)arg1 cachePath:(id)arg2;
- (id)_fetchCrashPointDataForIdentifier:(id)arg1 fromNetworkWithSession:(id)arg2 error:(id *)arg3;
- (id)_fetchCrashPoinListFromNetworkWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)updateFromNetworkWithSession:(id)arg1 error:(id *)arg2;
- (void)fetchFromDisk;
- (void)cacheAnalyticsPoints:(id)arg1;
- (id)_webServiceLock;
- (id)cachedPathForAnalyticsPoint:(id)arg1;
- (id)initWithParameters:(id)arg1 filter:(id)arg2 appStoreSource:(id)arg3 crashPointListClass:(Class)arg4 crashPointDownloadDataClass:(Class)arg5 crashPointMoreLogsClass:(Class)arg6;
- (id)initWithParameters:(id)arg1 filter:(id)arg2 appStoreSource:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 isBeta:(BOOL)arg4;

// Remaining properties
@property(copy) NSArray *analyticsPoints; // @dynamic analyticsPoints;
@property(readonly) NSString *buildNumber;
@property(readonly) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL hasCompletedInitialLoading;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isBeta;
@property(readonly, copy) NSMutableArray *mutableAnalyticsPoints; // @dynamic mutableAnalyticsPoints;
@property(readonly) Class superclass;
@property(readonly) DVTAnalyticsAppStoreSourceUserDefaultsKey *userDefaultsKey;
@property(readonly) NSString *version;

@end

