//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/DTFileSystemEventStreamDelegate-Protocol.h>

@class DTFileSystemEventStream, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface XCFileSystemWatcher : NSObject <DTFileSystemEventStreamDelegate>
{
    DTFileSystemEventStream *_eventStream;
    unsigned long long _lastSeenEventId;
    BOOL _isStarted;
    NSMutableDictionary *_registeredPathsToWatchers;
    NSMapTable *_watchersToRegisteredPaths;
    NSMutableArray *_watchersCache;
    NSMutableArray *_watchedPaths;
    NSMutableArray *_sortedRegisteredPaths;
    BOOL _registeredPathsChanged;
}

- (void)unregisterWatcher:(id)arg1;
- (void)unregisterWatcher:(id)arg1 forPath:(id)arg2;
- (void)unregisterWatcher:(id)arg1 forPaths:(id)arg2;
- (void)registerWatcher:(id)arg1 forPath:(id)arg2;
- (void)registerWatcher:(id)arg1 forPaths:(id)arg2;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)flushAsync;
- (void)flushSync;
- (BOOL)isStarted;
- (void)stop;
- (void)start;
- (void)_recreateEventStreamIfNecessary;
- (void)_recreateEventStream;
- (BOOL)_rebuildEventStreamPathListIfNecessary;
- (id)allWatchers;
- (void)dealloc;
- (void)close;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

