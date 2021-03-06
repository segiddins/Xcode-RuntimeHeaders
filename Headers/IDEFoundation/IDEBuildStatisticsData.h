//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBuildStatisticsData-Protocol.h>

@class DVTSystemStatisticsMeasurement, NSString;

@interface IDEBuildStatisticsData : NSObject <IDEBuildStatisticsData>
{
    NSString *_commandString;
    NSString *_title;
    unsigned long long _ordinal;
    DVTSystemStatisticsMeasurement *_startSystemStats;
    DVTSystemStatisticsMeasurement *_endSystemStats;
    double _elapsedUserTime;
    double _elapsedSystemTime;
}

- (void).cxx_destruct;
@property double elapsedSystemTime; // @synthesize elapsedSystemTime=_elapsedSystemTime;
@property double elapsedUserTime; // @synthesize elapsedUserTime=_elapsedUserTime;
@property(retain) DVTSystemStatisticsMeasurement *endSystemStats; // @synthesize endSystemStats=_endSystemStats;
@property(retain) DVTSystemStatisticsMeasurement *startSystemStats; // @synthesize startSystemStats=_startSystemStats;
@property unsigned long long ordinal; // @synthesize ordinal=_ordinal;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *commandString; // @synthesize commandString=_commandString;
- (void)emitContentsForAspect:(id)arg1 logLevel:(unsigned long long)arg2 indentLevel:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)defaultEmissionStringWithIndentLevel:(unsigned long long)arg1;
@property(readonly) long long numberOfVMPageouts;
@property(readonly) long long numberOfVMPageins;
@property(readonly) double elapsedWallClockTime;
@property(readonly) double endWallClockTime;
@property(readonly) double startWallClockTime;
- (id)initWithTitle:(id)arg1 commandString:(id)arg2 ordinal:(unsigned long long)arg3 startSystemStatisticsMeasurement:(id)arg4 endSystemStatisticsMeasurement:(id)arg5 elapsedUserTime:(double)arg6 elapsedSystemTime:(double)arg7;

@end

