//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTSysmonTapRecordDecoder, NSArray;

@interface DTSysmonRecordEnumerator : NSObject
{
    unsigned long long _heartbeatTime;
    DTSysmonTapRecordDecoder *_recordDecoder;
    NSArray *_samples;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(retain, nonatomic) DTSysmonTapRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
- (unsigned long long)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithHeartbeatTime:(unsigned long long)arg1;

@end
