//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSUICache-Protocol.h>

@class DVTDispatchLock, NSArray, NSMutableDictionary;

@interface XCSUIBotStatsCache : NSObject <XCSUICache>
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_stats;
}

- (void).cxx_destruct;
- (id)testsAddedForBot:(id)arg1;
- (id)coverageChangeForBot:(id)arg1;
- (void)purgeSnapshotsForService:(id)arg1;
- (void)purgeSnapshot:(id)arg1;
- (void)cacheSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)description;
- (id)init;

@end
