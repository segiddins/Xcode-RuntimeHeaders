//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/DVTPortalProfileProtocol-Protocol.h>

@class DVTPlatform, DVTPortalProgram, DVTPortalTeam, NSData, NSDate, NSString;
@protocol DeveloperAPIBundleIDProtocol;

@interface DVTPortalProfile : NSObject <DVTPortalProfileProtocol>
{
    NSDate *_expirationDate;
    NSString *_name;
    NSString *_portalID;
    NSString *_UUID;
    NSData *_profileData;
    NSString *_managingApp;
    NSString *_portalSubPlatform;
    DVTPortalTeam *_team;
    DVTPlatform *_platform;
    id <DeveloperAPIBundleIDProtocol> _appID;
    DVTPortalProgram *_portalProgram;
    NSString *_status;
}

+ (id)_deleteProfileServiceWithTeam:(id)arg1 program:(id)arg2 profile:(id)arg3;
+ (id)_downloadProfileServiceWithPortalID:(id)arg1 team:(id)arg2 program:(id)arg3;
+ (id)_existingAppIDMatchingBundleID:(id)arg1 requiresExplicitAppID:(BOOL)arg2 candidateAppIDs:(id)arg3;
+ (BOOL)_existingAppIDMatchingBundleID:(id)arg1 requiresExplicitAppID:(BOOL)arg2 team:(id)arg3 platform:(id)arg4 session:(id)arg5 matchingAppID:(id *)arg6 error:(id *)arg7;
+ (BOOL)_requiresExplicitAppIDForFeatures:(id)arg1;
+ (BOOL)_updateContainersForAppID:(id)arg1 withCharacteristics:(id)arg2 session:(id)arg3 error:(id *)arg4;
+ (id)_preparedAppIDWithCharacteristics:(id)arg1 session:(id)arg2 error:(id *)arg3;
+ (BOOL)_existingAppIDWithCharacteristics:(id)arg1 session:(id)arg2 explicitAppIDRequired:(char *)arg3 appIDFeaturesNeedToBeAdded:(char *)arg4 existingAppID:(id *)arg5 error:(id *)arg6;
+ (id)_errorForProfileType:(id)arg1 unsupportedFeaturesError:(id)arg2 characteristics:(id)arg3;
+ (id)_errorForTeam:(id)arg1 unsupportedFeatures:(id)arg2 characteristics:(id)arg3;
+ (id)_errorForPermissionsFailure:(id)arg1;
+ (id)_errorForNoCertificates;
+ (id)_errorForBundleIdentifierUnavailable:(id)arg1 withUnderlyingError:(id)arg2;
+ (id)_errorForNoDevicesWhenRequiringProfileForPlatform:(id)arg1 withUnderlyingError:(id)arg2;
+ (id)_profileMatchingName:(id)arg1 session:(id)arg2 team:(id)arg3 profileType:(id)arg4 error:(id *)arg5;
+ (BOOL)_deletePreExistingProfileForType:(id)arg1 name:(id)arg2 session:(id)arg3 team:(id)arg4 error:(id *)arg5;
+ (id)_certificatesForProfileType:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
+ (id)_createAndDownloadNonTeamProvisioningProfileWithTeam:(id)arg1 session:(id)arg2 profileType:(id)arg3 platform:(id)arg4 appID:(id)arg5 manualStyleProfileDevices:(id)arg6 manualStyleProfileName:(id)arg7 overrideDeletionOfPreExistingProfile:(BOOL)arg8 error:(id *)arg9;
+ (id)_downloadTeamProfileServiceWithTeam:(id)arg1 platform:(id)arg2 appID:(id)arg3 profileType:(id)arg4;
+ (id)_downloadTeamProfileServiceWithTeam:(id)arg1 platform:(id)arg2 appID:(id)arg3;
+ (id)_requestProfileWithAppID:(id)arg1 type:(id)arg2 registeredDevices:(id)arg3 unregisteredDevices:(id)arg4 manualStyleProfileName:(id)arg5 team:(id)arg6 platform:(id)arg7 overrideDeletionOfPreExistingProfile:(BOOL)arg8 session:(id)arg9 error:(id *)arg10;
+ (BOOL)permittedToCreateProfileWithSession:(id)arg1 characteristics:(id)arg2 error:(id *)arg3;
+ (id)createProfileWithSession:(id)arg1 characteristics:(id)arg2 error:(id *)arg3;
+ (id)_listProfilesServiceWithTeam:(id)arg1 platform:(id)arg2;
+ (id)_legacyProfilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 error:(id *)arg4;
+ (id)profilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 sdkVariant:(id)arg4 error:(id *)arg5;
+ (id)profilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 error:(id *)arg4;
+ (id)profilesWithSession:(id)arg1 team:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) DVTPortalProgram *portalProgram; // @synthesize portalProgram=_portalProgram;
@property(retain, nonatomic) id <DeveloperAPIBundleIDProtocol> appID; // @synthesize appID=_appID;
@property(retain, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *portalSubPlatform; // @synthesize portalSubPlatform=_portalSubPlatform;
@property(copy, nonatomic) NSString *managingApp; // @synthesize managingApp=_managingApp;
@property(readonly, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesUUID:(id)arg1;
- (BOOL)removeWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)downloadWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)isXcodeManaged;
@property(readonly, nonatomic, getter=isTeamProfile) BOOL teamProfile;
- (BOOL)isActive;

@end

