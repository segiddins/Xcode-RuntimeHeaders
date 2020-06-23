//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupportHost/OSLogEventStreamBase.h>

@class NSArray, NSDate, NSEnumerator, _OSLogEventSerializationMetadata;
@protocol OSLogEventDeserializerDataSourceDelegate;

@interface OSLogDeserializedEventStream : OSLogEventStreamBase
{
    _OSLogEventSerializationMetadata *_metadata;
    id <OSLogEventDeserializerDataSourceDelegate> _dataSourceDelegate;
    NSArray *_curEventArray;
    NSEnumerator *_eventDictionaryEnumerator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSEnumerator *eventDictionaryEnumerator; // @synthesize eventDictionaryEnumerator=_eventDictionaryEnumerator;
@property(readonly, nonatomic) NSArray *curEventArray; // @synthesize curEventArray=_curEventArray;
@property(readonly, nonatomic) id <OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
- (void)activate;
- (void)activateStreamFromDate:(id)arg1;
- (void)_updateEventArray;
- (id)_eventArrayFromData:(id)arg1;
- (void)_iterateThroughEventsWithProxy:(id)arg1 filter:(id)arg2 startingDate:(id)arg3;
- (id)_nextEventDictionary;
- (id)initWithDataSourceDelegate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastDate;
@property(readonly, nonatomic) NSDate *firstDate;

@end

