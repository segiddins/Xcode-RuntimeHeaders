//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableDictionary;

@interface IDEITunesSoftwareServiceApplicationDescriptionCache : NSObject
{
    DVTDispatchLock *_cacheLock;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)cacheITunesApplicationDescriptions:(id)arg1;
- (id)cachedITunesApplicationDescriptionForDescription:(id)arg1;
- (id)_cacheKeyForITunesApplicationDescription:(id)arg1;
- (id)_cacheKeyForApplicationDescription:(id)arg1;
- (id)init;

@end

