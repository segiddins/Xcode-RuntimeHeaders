//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/NSCopying-Protocol.h>

@class DVTAnalyticsAppStoreSourceUserDefaultsKey, NSString;

@interface DVTCrashPointSource : NSObject <NSCopying>
{
    BOOL _hasCompletedInitialLoading;
    BOOL _isBeta;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
    DVTAnalyticsAppStoreSourceUserDefaultsKey *_userDefaultsKey;
}

- (void).cxx_destruct;
@property(readonly) DVTAnalyticsAppStoreSourceUserDefaultsKey *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(readonly) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 isBeta:(BOOL)arg4;
- (id)init;

@end

