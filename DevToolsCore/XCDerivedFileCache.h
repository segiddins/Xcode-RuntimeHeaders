//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface XCDerivedFileCache : NSObject
{
    NSString *_basePath;
    NSMutableDictionary *_signaturesToPaths;
    long long _disableCachePruningCount;
    NSMutableSet *_registeredLockingClientIds;
    NSMutableDictionary *_lockedFilePaths;
}

+ (id)hashStringFromCommandLine:(id)arg1 inputFilePaths:(id)arg2;
+ (id)sharedDerivedFileCache;
+ (id)sharedDerivedFileCacheWithBasePath:(id)arg1;
+ (int)emptyCaches;
+ (id)defaultBasePath;
+ (id)defaultSharedBasePath;
+ (void)initialize;
- (BOOL)pathWasUnlockedForWriting:(id)arg1 byClientId:(id)arg2;
- (int)lockStateOfPath:(id)arg1;
- (void)unlockPath:(id)arg1 byClientId:(id)arg2;
- (BOOL)lockPath:(id)arg1 forWriting:(BOOL)arg2 byClientId:(id)arg3;
- (id)_lockInfoForPath:(id)arg1;
- (void)unregisterLockingClientId:(id)arg1;
- (void)registerLockingClientId:(id)arg1;
- (id)derivedFilePathForDomain:(id)arg1 inputFilePaths:(id)arg2 commandLine:(id)arg3;
- (id)derivedFilePathForDomain:(id)arg1 inputFilePaths:(id)arg2 commandLineHashString:(id)arg3;
- (id)basePath;
- (void)dealloc;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (void)disableCachePruning;
- (void)enableCachePruning;
- (void)_pruneCache;
- (void)pruneCacheToNumberOfBytes:(unsigned long long)arg1 minimumCacheEntryAgeForRemoval:(double)arg2;

@end

