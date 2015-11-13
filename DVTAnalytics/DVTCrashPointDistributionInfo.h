//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSDate, NSString;

@interface DVTCrashPointDistributionInfo : NSObject <DVTServicesJSONSerialization>
{
    NSDate *_lastRefresh;
    NSArray *_timeSeries;
    NSArray *_osVersionSeries;
    NSArray *_deviceTypeSeries;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *deviceTypeSeries; // @synthesize deviceTypeSeries=_deviceTypeSeries;
@property(readonly) NSArray *osVersionSeries; // @synthesize osVersionSeries=_osVersionSeries;
@property(readonly) NSArray *timeSeries; // @synthesize timeSeries=_timeSeries;
@property(readonly) NSDate *lastRefresh; // @synthesize lastRefresh=_lastRefresh;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLastRefresh:(id)arg1 timeSeries:(id)arg2 osVersionSeries:(id)arg3 deviceTypeSeries:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

