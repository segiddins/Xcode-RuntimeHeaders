//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTKPRecordDecoder;
@protocol DTKPDatastream;

@interface DTKPSessionRecordEnumerator : NSObject
{
    unsigned long long _heartbeatTime;
    BOOL _finalEnumerator;
    BOOL _trustTriggerID;
    unsigned int _triggerCount;
    unsigned int _kdebugTriggerIndex;
    id <DTKPDatastream> _datastream;
    void *_session;
    DTKPRecordDecoder *_recordDecoder;
    const unsigned int *_triggerIDsToIndicesArray;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL trustTriggerID; // @synthesize trustTriggerID=_trustTriggerID;
@property(nonatomic) BOOL finalEnumerator; // @synthesize finalEnumerator=_finalEnumerator;
@property(nonatomic) unsigned int kdebugTriggerIndex; // @synthesize kdebugTriggerIndex=_kdebugTriggerIndex;
@property(nonatomic) unsigned int triggerCount; // @synthesize triggerCount=_triggerCount;
@property(nonatomic) const unsigned int *triggerIDsToIndicesArray; // @synthesize triggerIDsToIndicesArray=_triggerIDsToIndicesArray;
@property(retain, nonatomic) DTKPRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
@property(nonatomic) void *session; // @synthesize session=_session;
@property(retain, nonatomic) id <DTKPDatastream> datastream; // @synthesize datastream=_datastream;
- (unsigned long long)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithHeartbeatTime:(unsigned long long)arg1;

@end

