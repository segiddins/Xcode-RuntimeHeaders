//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSNumber, NSString;

@interface DVTAnalyticsPointOSVersionData : NSObject <DVTServicesJSONSerialization>
{
    NSString *_osVersion;
    NSNumber *_value;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSNumber *value; // @synthesize value=_value;
@property(readonly) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)JSONRepresentation;
- (id)initWithOSVersion:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

