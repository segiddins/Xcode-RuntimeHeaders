//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogEventSerializationMetadata : NSObject
{
    NSMutableDictionary *_indexToStringMapping;
    NSMutableDictionary *_stringToIndexMapping;
    unsigned long long _flags;
    NSPredicate *_filterPredicate;
    unsigned long long _maxLogEventBatchSize;
    unsigned long long _serializedEventCount;
    NSDate *_firstDate;
    NSDate *_lastDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property(nonatomic) unsigned long long serializedEventCount; // @synthesize serializedEventCount=_serializedEventCount;
@property(nonatomic) unsigned long long maxLogEventBatchSize; // @synthesize maxLogEventBatchSize=_maxLogEventBatchSize;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSMutableDictionary *stringToIndexMapping; // @synthesize stringToIndexMapping=_stringToIndexMapping;
@property(readonly, nonatomic) NSMutableDictionary *indexToStringMapping; // @synthesize indexToStringMapping=_indexToStringMapping;
- (id)stringForIndex:(id)arg1;
- (id)indexForString:(id)arg1;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (id)init;

@end
