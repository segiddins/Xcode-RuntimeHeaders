//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTAnalyticsAppStoreSourceUserDefaultsKey : NSObject
{
    BOOL _isBeta;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
}

@property(nonatomic) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(retain, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly) NSString *stringValue;
- (id)initWithBundleIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 isBeta:(BOOL)arg4;

@end

