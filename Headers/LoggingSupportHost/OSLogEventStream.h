//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupportHost/OSLogEventStreamBase.h>

@class NSObject, NSPredicate, OSLogEventSource, _OSLogCatalogFilter, _OSLogIndex;
@protocol OS_dispatch_queue;

@interface OSLogEventStream : OSLogEventStreamBase
{
    _OSLogCatalogFilter *_catalogFilter;
    _OSLogIndex *_index;
    OSLogEventSource *_source;
    struct _os_timesync_db_s *_tsdb;
}

- (void).cxx_destruct;
@property(nonatomic) struct _os_timesync_db_s *tsdb; // @synthesize tsdb=_tsdb;
@property(readonly, nonatomic) OSLogEventSource *source; // @synthesize source=_source;
@property(retain, nonatomic) _OSLogIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) _OSLogCatalogFilter *catalogFilter; // @synthesize catalogFilter=_catalogFilter;
- (void)activateStreamFromPosition:(id)arg1;
- (void)activateStreamFromLastBoot;
- (void)_activateStreamFromTimeIntervalSinceLastBoot:(double)arg1;
- (void)activateStreamFromDate:(id)arg1;
- (void)_activateStreamInRange:(struct os_timesync_range_s *)arg1;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @dynamic filterPredicate;
- (void)_foreachIndexFile:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 skipNonSignpostFiles:(BOOL)arg2;
- (id)_initWithSource:(id)arg1 flags:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) unsigned long long flags; // @dynamic flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target; // @dynamic target;

@end
