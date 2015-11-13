//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTServicesJSONSerialization-Protocol.h>
#import <DVTAnalytics/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface DVTCrashPointSource : NSObject <DVTServicesJSONSerialization, NSCopying>
{
    BOOL _isBeta;
    NSArray *_crashPoints;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSArray *crashPoints; // @synthesize crashPoints=_crashPoints;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONRepresentation;
- (id)descriptionForUserDefaultsKeyWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)cachedPathForCrashPoint:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 isBeta:(BOOL)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

