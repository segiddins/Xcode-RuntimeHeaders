//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPredicate, OSLogEventSource, OSLogEventStream, _OSLogEventSerializationMetadata;
@protocol OS_dispatch_queue;

@interface OSLogEventSerializer : NSObject
{
    OSLogEventStream *_stream;
    unsigned long long _maxLogEventBatchSize;
    unsigned long long _curBatchSize;
    NSMutableArray *_curBatchDictionaries;
    _OSLogEventSerializationMetadata *_metadata;
    unsigned long long _serializedEventCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long serializedEventCount; // @synthesize serializedEventCount=_serializedEventCount;
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSMutableArray *curBatchDictionaries; // @synthesize curBatchDictionaries=_curBatchDictionaries;
@property(nonatomic) unsigned long long curBatchSize; // @synthesize curBatchSize=_curBatchSize;
@property(nonatomic) unsigned long long maxLogEventBatchSize; // @synthesize maxLogEventBatchSize=_maxLogEventBatchSize;
@property(readonly, nonatomic) OSLogEventStream *stream; // @synthesize stream=_stream;
- (void)_completeBatch:(CDUnknownBlockType)arg1;
- (id)_dictionaryForProxy:(id)arg1;
- (id)_dictForDecomposedMessage:(id)arg1;
- (id)_arrayForDecomposedMessage:(id)arg1;
- (id)_dictForDecomposedMessage:(id)arg1 index:(unsigned long long)arg2;
- (id)_dictForArg:(id)arg1;
- (id)_dictForPlaceholder:(id)arg1;
- (BOOL)_isBatchCompleted;
- (void)_serializeEvent:(id)arg1;
- (void)invalidate;
- (void)serializeFromPosition:(id)arg1;
- (void)serializeFromLastBoot;
- (void)serializeFromDate:(id)arg1;
@property(readonly, nonatomic) OSLogEventSource *source;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property(copy, nonatomic) NSPredicate *filterPredicate;
@property(nonatomic) unsigned long long flags;
- (id)initWithSource:(id)arg1 dataProcessingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
