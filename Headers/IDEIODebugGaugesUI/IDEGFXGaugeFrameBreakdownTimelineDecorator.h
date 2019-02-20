//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class NSArray, NSMutableArray;

@interface IDEGFXGaugeFrameBreakdownTimelineDecorator : DTTimelineDecorator
{
    unsigned long long _stackCount;
    NSMutableArray *_tickPositions;
    NSMutableArray *_stackData;
    unsigned long long _duration;
    NSArray *_stackTitles;
    NSArray *_stackColors;
}

@property(copy, nonatomic) NSArray *stackColors; // @synthesize stackColors=_stackColors;
@property(copy, nonatomic) NSArray *stackTitles; // @synthesize stackTitles=_stackTitles;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (id)dataAtTime:(unsigned long long)arg1;
- (void)addFrameData:(id)arg1 atTick:(id)arg2;
- (void)setDefaultsForPlane:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentDataIndex;
- (id)initWithDuration:(unsigned long long)arg1 stackTitles:(id)arg2 stackColors:(id)arg3;
- (id)init;

@end
