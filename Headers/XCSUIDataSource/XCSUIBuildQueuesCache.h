//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSUICache-Protocol.h>

@class DVTDispatchLock, NSArray, NSMutableDictionary;

@interface XCSUIBuildQueuesCache : NSObject <XCSUICache>
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_buildQueueByClientUUID;
}

- (void).cxx_destruct;
- (id)buildQueueIntegrationsForServiceIdentifier:(id)arg1;
- (void)cacheBuildQueueIntegrations:(id)arg1 forService:(id)arg2;
- (void)purgeSnapshotsForService:(id)arg1;
- (void)purgeSnapshot:(id)arg1;
- (void)cacheSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)description;
- (id)init;

@end

