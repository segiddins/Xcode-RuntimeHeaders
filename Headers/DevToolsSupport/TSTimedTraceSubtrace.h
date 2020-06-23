//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSTimedTraceSubtrace : NSObject
{
    double _startTime;
    NSString *_userDescription;
    double _lastMarkTime;
    unsigned long long _markCount;
    double _averageTimeBetweenMarks;
}

+ (void)initialize;
- (void).cxx_destruct;
- (double)averageTimeBetweenMarks;
- (double)lastMarkTime;
- (void)setLastMarkTime:(double)arg1;
- (id)description;
- (id)userDescription;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)initWithStartTime:(double)arg1 userDescription:(id)arg2;

@end

