//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTDTraceTapMemo, DTDTraceTapRecordDecoder;

@interface DTDTraceRecordEnumerator : NSObject
{
    DTDTraceTapRecordDecoder *_recordDecoder;
    DTDTraceTapMemo *_memo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DTDTraceTapMemo *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) DTDTraceTapRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;

@end

