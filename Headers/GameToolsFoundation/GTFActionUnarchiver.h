//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSMutableArray;

@interface GTFActionUnarchiver : NSKeyedUnarchiver
{
    struct stack<NSMutableArray *, std::__1::deque<NSMutableArray *, std::__1::allocator<NSMutableArray *>>> _actionDataGrouping;
    NSMutableArray *_actionData;
    BOOL _lastGroupWasArray;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createTimelineModelFromData;
- (double)processActionRepeat:(id)arg1 startTime:(double)arg2 timelineModel:(id)arg3 track:(long long)arg4 loop:(id)arg5;
- (double)processActionGroup:(id)arg1 startTime:(double)arg2 timelineModel:(id)arg3 track:(long long)arg4 loop:(id)arg5;
- (double)processActionSequence:(id)arg1 startTime:(double)arg2 timelineModel:(id)arg3 track:(long long)arg4 loop:(id)arg5;
- (double)processAction:(id)arg1 actionType:(id)arg2 startTime:(double)arg3 timelineModel:(id)arg4 track:(long long)arg5 loop:(id)arg6;
- (double)processSCNAction:(id)arg1 actionType:(id)arg2 startTime:(double)arg3 timelineModel:(id)arg4 track:(long long)arg5 loop:(id)arg6;
- (BOOL)getActionBool:(id)arg1 forKey:(id)arg2;
- (struct SCNVector4)getVector4:(id)arg1 forKey:(id)arg2;
- (double)getActionFloat:(id)arg1 forKey:(id)arg2;
- (id)getActionNumber:(id)arg1 forKey:(id)arg2;
- (double)getActionDuration:(id)arg1;
- (id)getFirstValueFromArray:(id)arg1 withKey:(id)arg2;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (void)addPairToCurrentGroupWithKey:(id)arg1 value:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (Class)classForClassName:(id)arg1;
- (id)initForReadingWithData:(id)arg1;

@end

