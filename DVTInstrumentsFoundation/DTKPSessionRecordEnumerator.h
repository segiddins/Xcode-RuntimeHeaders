//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTKPRecordDecoder;
@protocol DTKPDatastream;

@interface DTKPSessionRecordEnumerator : NSObject
{
    BOOL _finalEnumerator;
    unsigned int _triggerCount;
    unsigned int _kdebugTriggerIndex;
    id <DTKPDatastream> _datastream;
    DTKPRecordDecoder *_recordDecoder;
    const unsigned int *_triggerIDsToIndicesArray;
}

@property(nonatomic) BOOL finalEnumerator; // @synthesize finalEnumerator=_finalEnumerator;
@property(nonatomic) unsigned int kdebugTriggerIndex; // @synthesize kdebugTriggerIndex=_kdebugTriggerIndex;
@property(nonatomic) unsigned int triggerCount; // @synthesize triggerCount=_triggerCount;
@property(nonatomic) const unsigned int *triggerIDsToIndicesArray; // @synthesize triggerIDsToIndicesArray=_triggerIDsToIndicesArray;
@property(retain, nonatomic) DTKPRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
@property(retain, nonatomic) id <DTKPDatastream> datastream; // @synthesize datastream=_datastream;
- (void).cxx_destruct;
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;

@end

