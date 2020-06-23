//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDate, XCSIntegration, XCSStats;

@interface XCSBuildQueueIntegration : XCSObject
{
    XCSIntegration *_integration;
    XCSStats *_stats;
    NSDate *_expectedCompletionDate;
    NSDate *_expectedStartDate;
}

@property(retain, nonatomic) NSDate *expectedStartDate; // @synthesize expectedStartDate=_expectedStartDate;
@property(retain, nonatomic) NSDate *expectedCompletionDate; // @synthesize expectedCompletionDate=_expectedCompletionDate;
@property(retain, nonatomic) XCSStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_validateStatsWithIntegration:(id)arg1 stats:(id)arg2 expectedCompletionDate:(id)arg3 expectedStartDate:(id)arg4 errors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

