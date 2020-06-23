//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSNumber, NSString;

@interface DVTAnalyticsPointTimeData : NSObject <DVTServicesJSONSerialization>
{
    NSString *_periodStart;
    NSNumber *_value;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) NSNumber *value; // @synthesize value=_value;
@property(readonly) NSString *periodStart; // @synthesize periodStart=_periodStart;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)JSONRepresentation;
- (id)initWithPeriodStart:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

