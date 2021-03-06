//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LeakAnalyzer : NSObject
{
    unsigned int _task;
}

+ (id)descriptionForLeakErrorCode:(int)arg1;
+ (id)serializedLeakDataWithCount:(unsigned int)arg1 leaks:(CDStruct_cbbc06c7 *)arg2 contents:(id *)arg3 references:(CDStruct_3b01f0aa)arg4 layouts:(id)arg5 timestamp:(unsigned long long)arg6;
+ (void)deserializeLeakData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (id)findLeaksWithOptions:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTask:(unsigned int)arg1;

@end

