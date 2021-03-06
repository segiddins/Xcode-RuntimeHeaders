//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTNotificationToken, DVTObservingToken, NSMutableDictionary;

@interface IDEOverridingPropertiesDeviceCache : NSObject
{
    DVTDispatchLock *_cacheLock;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_deviceIdentifierCacheKeys;
    NSMutableDictionary *_buildableCacheKeys;
    DVTObservingToken *_deviceObservingToken;
    DVTNotificationToken *_buildablesNotificationToken;
    unsigned long long _hitCount;
    unsigned long long _missCount;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_observeBuildables;
- (void)_observeDevices;
- (void)_evictCachesForBuildable:(id)arg1;
- (void)_evictCachesForDevice:(id)arg1;
- (void)_installOverrdingBuildProperties:(id)arg1 device:(id)arg2 buildable:(id)arg3 buildParameters:(id)arg4;
- (id)_cachedOverridingPropertiesForDevice:(id)arg1 buildable:(id)arg2 buildParameters:(id)arg3;
- (id)_cacheKeyForDevice:(id)arg1 buildable:(id)arg2 buildParameters:(id)arg3;
- (id)overridingPropertiesForDevice:(id)arg1 buildable:(id)arg2 buildParameters:(id)arg3 createBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

