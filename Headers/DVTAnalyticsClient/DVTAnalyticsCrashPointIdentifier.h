//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTAnalyticsPointIdentifierProtocol-Protocol.h>
#import <DVTAnalyticsClient/DVTAnalyticsServiceURLComponentProviding-Protocol.h>
#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class DVTAnalyticsAppIdentifier, NSArray, NSDictionary, NSString;

@interface DVTAnalyticsCrashPointIdentifier : NSObject <DVTAnalyticsServiceURLComponentProviding, DVTServicesJSONSerialization, DVTAnalyticsPointIdentifierProtocol>
{
    DVTAnalyticsAppIdentifier *_appIdentifier;
    NSString *_analyticsPointIdentifier;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)crashPointIdentifierWithAppIdentifier:(id)arg1 crashPointId:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *analyticsPointIdentifier; // @synthesize analyticsPointIdentifier=_analyticsPointIdentifier;
@property(readonly) DVTAnalyticsAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(readonly, copy) NSString *description;
- (id)JSONRepresentation;
@property(readonly) NSDictionary *parameters;
@property(readonly) NSArray *pathComponents;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

