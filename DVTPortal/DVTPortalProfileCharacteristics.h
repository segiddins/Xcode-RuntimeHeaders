//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, DVTPortalProfileType, DVTPortalTeam, NSDictionary, NSSet, NSString;

@interface DVTPortalProfileCharacteristics : NSObject
{
    BOOL _forceExplicitAppID;
    DVTPortalTeam *_team;
    DVTPortalProfileType *_profileType;
    NSString *_bundleID;
    NSDictionary *_features;
    NSDictionary *_containers;
    DVTPlatform *_platform;
    NSSet *_manualStyleProfileDevices;
    NSString *_manualStyleProfileName;
}

+ (id)_errorFeatures:(id)arg1 mustMatchContainers:(id)arg2;
+ (BOOL)_allContainers:(id)arg1 haveFeaturesEnabled:(id)arg2 error:(id *)arg3;
@property BOOL forceExplicitAppID; // @synthesize forceExplicitAppID=_forceExplicitAppID;
@property(readonly, nonatomic) NSString *manualStyleProfileName; // @synthesize manualStyleProfileName=_manualStyleProfileName;
@property(readonly, nonatomic) NSSet *manualStyleProfileDevices; // @synthesize manualStyleProfileDevices=_manualStyleProfileDevices;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSDictionary *containers; // @synthesize containers=_containers;
@property(readonly, copy, nonatomic) NSDictionary *features; // @synthesize features=_features;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) DVTPortalProfileType *profileType; // @synthesize profileType=_profileType;
@property(readonly, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)description;
- (void)_setFeaturesToValues:(id)arg1 containerTypesToValues:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTeam:(id)arg1 type:(id)arg2 manualStyleProfileDevices:(id)arg3 manualStyleProfileName:(id)arg4 bundleID:(id)arg5 featuresToValues:(id)arg6 containerTypesToValues:(id)arg7 platform:(id)arg8 error:(id *)arg9;

@end

