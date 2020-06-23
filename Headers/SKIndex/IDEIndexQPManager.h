//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndex, NSMutableArray, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IDEIndexQPManager : NSObject
{
    IDEIndex *_index;
    NSObject<OS_dispatch_queue> *_qp_queue;
    NSMutableArray *_masterBlocks;
    NSMutableArray *_recentQueryProviders;
    NSTimer *_purgeTimer;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (void)_logRecents;
- (void)_cancelPurgeTimer;
- (void)_purgeTimeout:(id)arg1;
- (void)_scheduleQPPurge;
- (void)_addQueryProviderToRecents:(id)arg1 highPriority:(BOOL)arg2;
- (void)purgeAllQPs;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (void)findBestIndexableForFile:(id)arg1 outIndexable:(id *)arg2 outMainFile:(id *)arg3 outHadToSettle:(char *)arg4;
- (id)queryProviderForFileNoBuildSettings:(id)arg1;
- (void)dealloc;
- (id)initWithIndex:(id)arg1;

@end
