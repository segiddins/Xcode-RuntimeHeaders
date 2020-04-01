//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString, XCSDevice, XCSIntegration;

@interface XCSTest : XCSObject
{
    BOOL _passed;
    XCSIntegration *_integration;
    XCSDevice *_testedDevice;
    NSString *_keyPath;
    NSDate *_date;
    double _startTime;
    double _endTime;
    double _duration;
    NSString *_testPlanRun;
    NSArray *_failureSummaries;
    NSArray *_activities;
    NSString *_testableBlueprintPath;
    NSString *_testableBlueprintName;
    NSString *_deviceIdentifier;
    NSMutableArray *_somePerfMetrics;
}

+ (id)gregorianCalendar;
@property(retain, nonatomic) NSMutableArray *somePerfMetrics; // @synthesize somePerfMetrics=_somePerfMetrics;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *testableBlueprintName; // @synthesize testableBlueprintName=_testableBlueprintName;
@property(copy, nonatomic) NSString *testableBlueprintPath; // @synthesize testableBlueprintPath=_testableBlueprintPath;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(retain, nonatomic) NSString *testPlanRun; // @synthesize testPlanRun=_testPlanRun;
@property(nonatomic) BOOL passed; // @synthesize passed=_passed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) XCSDevice *testedDevice; // @synthesize testedDevice=_testedDevice;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (BOOL)_validateWithPerfMetrics:(struct NSArray *)arg1 errors:(id *)arg2;
- (BOOL)_validateWithIntegration:(id)arg1 device:(id)arg2 keyPath:(id)arg3 date:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 duration:(double)arg7 passed:(BOOL)arg8 failureSummaries:(id)arg9 activities:(id)arg10 testableBlueprintName:(id)arg11 testableBlueprintPath:(id)arg12;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithIntegration:(id)arg1 device:(id)arg2 keyPath:(id)arg3 date:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 duration:(double)arg7 passed:(BOOL)arg8 testPlanRun:(id)arg9 failureSummaries:(id)arg10 activities:(id)arg11 testableBlueprintName:(id)arg12 testableBlueprintPath:(id)arg13 validationErrors:(id *)arg14;
- (BOOL)setTestPerfMetrics:(struct NSArray *)arg1 errors:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *perfMetrics;

@end

