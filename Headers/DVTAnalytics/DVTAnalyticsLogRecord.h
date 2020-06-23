//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol DVTAnalyticsLogProtocol;

@interface DVTAnalyticsLogRecord : NSObject
{
    NSString *_analyticsLogIdentifier;
    id <DVTAnalyticsLogProtocol> _locatedAnalyticsLog;
    NSError *_locationError;
}

@property(readonly) NSError *locationError; // @synthesize locationError=_locationError;
@property(readonly) id <DVTAnalyticsLogProtocol> locatedAnalyticsLog; // @synthesize locatedAnalyticsLog=_locatedAnalyticsLog;
@property(readonly) NSString *analyticsLogIdentifier; // @synthesize analyticsLogIdentifier=_analyticsLogIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnalyticsLogIdentifier:(id)arg1 locatedAnalyticsLog:(id)arg2 locationError:(id)arg3;

@end

