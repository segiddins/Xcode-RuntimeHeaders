//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDETagToken : NSObject
{
    NSString *_tag;
    CDStruct_5017ad51 _state;
}

@property(readonly) CDStruct_5017ad51 state; // @synthesize state=_state;
@property(readonly) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
@property(readonly) NSString *toolTip;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compareTags:(id)arg1;
@property(readonly) BOOL usedInAnyCapacityByAll;
@property(readonly) BOOL usedIndirectlyByAll;
@property(readonly) BOOL usedDirectlyByAll;
- (id)initWithTag:(id)arg1 state:(CDStruct_5017ad51)arg2;

@end

