//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoggingSupportHost/_OSLogIndexTimeRangable-Protocol.h>

@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

__attribute__((visibility("hidden")))
@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable>
{
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    BOOL _timespanDetermined;
    unsigned long long _cot_header;
    unsigned long long _cot;
    unsigned long long _cet;
    unsigned long long _et;
    unsigned long long _ot;
    char *_path;
}

@property(readonly, nonatomic) char *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
- (void).cxx_destruct;
@property(readonly, nonatomic) const char *bootUUID;
- (id)copyMappedChunkStore:(id *)arg1;
- (BOOL)_determineTimespan;
- (BOOL)_loadCatalogMetadataForTimespan;
- (BOOL)_loadHeaderMetadata:(id)arg1;
- (void)dealloc;
- (id)initWithChunkStore:(id)arg1 error:(id *)arg2;
- (id)initWithTraceFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

