//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTAnalyticsServiceURLComponentProviding.h"
#import "DVTServicesJSONSerialization.h"

@class NSArray, NSDictionary, NSString;

@interface DVTAnalyticsAppIdentifier : NSObject <DVTAnalyticsServiceURLComponentProviding, DVTServicesJSONSerialization>
{
    BOOL _isBeta;
    NSString *_adamId;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)appIdentifierWithAdamId:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 isBeta:(BOOL)arg5;
@property(readonly) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
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

