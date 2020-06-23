//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalAppIDFeatures, DVTPortalProgram, DVTPortalTeam, NSString;

@interface DVTPortalAppID : NSObject
{
    BOOL _isWildcard;
    DVTPortalProgram *_portalProgram;
    DVTPortalAppIDFeatures *_features;
    NSString *_appID;
    NSString *_name;
    NSString *_portalID;
    DVTPortalTeam *_team;
}

+ (id)errorForManagedUpdateAppID:(id)arg1 features:(id)arg2;
+ (id)errorForManagedAddAppID:(id)arg1;
+ (id)errorForUnsupportedFeatures:(id)arg1 program:(id)arg2;
+ (id)errorForPermissionsFailure;
+ (id)_errorForInconsistentPostFeatureEnableResponseWithExpectedFeatures:(id)arg1 actualFeatures:(id)arg2;
+ (id)_deleteAppIDServiceWithTeam:(id)arg1 appID:(id)arg2;
+ (id)_updateAppIDServiceWithTeam:(id)arg1 program:(id)arg2 portalID:(id)arg3 features:(id)arg4;
+ (id)_addAppIDServiceWithTeam:(id)arg1 program:(id)arg2 name:(id)arg3 appID:(id)arg4 features:(id)arg5;
+ (id)_appIDForBundleID:(id)arg1 features:(id)arg2 requiresExplicitAppID:(BOOL)arg3;
+ (id)_nameForBundleID:(id)arg1 features:(id)arg2 requiresExplicitAppID:(BOOL)arg3 xcodeManaged:(BOOL)arg4;
+ (id)createAppIDWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 bundleID:(id)arg4 features:(id)arg5 requiresExplicitAppID:(BOOL)arg6 xcodeManaged:(BOOL)arg7 error:(id *)arg8;
+ (id)createAppIDWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 bundleID:(id)arg4 features:(id)arg5 requiresExplicitAppID:(BOOL)arg6 error:(id *)arg7;
+ (id)_listAppIDsServiceWithTeam:(id)arg1 program:(id)arg2;
+ (id)_legacyAppIDsWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
+ (id)appIDsWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
+ (BOOL)_usePortalDeveloperAPI;
- (void).cxx_destruct;
@property(nonatomic) BOOL isWildcard; // @synthesize isWildcard=_isWildcard;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) DVTPortalAppIDFeatures *features; // @synthesize features=_features;
@property(readonly, nonatomic) DVTPortalProgram *portalProgram; // @synthesize portalProgram=_portalProgram;
- (BOOL)isManagedByXcode;
- (BOOL)matchesBundleID:(id)arg1;
- (BOOL)removeWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)enableFeatures:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (BOOL)removeFeatures:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)description;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *portalIdentifier;
- (id)featuresWithSession:(id)arg1 error:(id *)arg2;

@end

