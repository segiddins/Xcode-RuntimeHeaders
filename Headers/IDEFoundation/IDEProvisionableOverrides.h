//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, DVTPortalAppIDFeatures, DVTPortalProfilePurpose, DVTSDK, IDEProvisionableEntitlements, IDEProvisioningEntitlementsExpansion, IDEProvisioningTeamReference, NSDictionary, NSNumber, NSString;

@interface IDEProvisionableOverrides : NSObject
{
    NSString *_configuration;
    NSNumber *_profileSupport;
    NSNumber *_provisioningStyle;
    DVTPortalProfilePurpose *_provisioningPurpose;
    IDEProvisioningTeamReference *_team;
    DVTPlatform *_platform;
    DVTSDK *_sdk;
    NSString *_sdkVariant;
    NSString *_profileSpecifier;
    NSString *_certificateIdentifier;
    NSString *_bundleIdentifier;
    NSString *_entitlementsFile;
    NSDictionary *_entitlements;
    IDEProvisionableEntitlements *_baseEntitlements;
    IDEProvisioningEntitlementsExpansion *_entitlementsExpansion;
    NSNumber *_entitlementsDestination;
    DVTPortalAppIDFeatures *_appIDFeatures;
    NSNumber *_allowSigningWithoutTeamSelection;
    NSNumber *_signingRequiresTeam;
}

+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(id)arg2 provisioningStyle:(id)arg3 provisioningPurpose:(id)arg4 team:(id)arg5 platform:(id)arg6 sdk:(id)arg7 sdkVariant:(id)arg8 profileSpecifier:(id)arg9 certificateIdentifier:(id)arg10 bundleIdentifier:(id)arg11 entitlementsFile:(id)arg12 entitlements:(id)arg13 baseEntitlements:(id)arg14 entitlementsExpansion:(id)arg15 entitlementsDestination:(id)arg16 allowSigningWithoutTeamSelection:(id)arg17 signingRequiresTeam:(id)arg18 appIDFeatures:(id)arg19;
+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *signingRequiresTeam; // @synthesize signingRequiresTeam=_signingRequiresTeam;
@property(readonly, nonatomic) NSNumber *allowSigningWithoutTeamSelection; // @synthesize allowSigningWithoutTeamSelection=_allowSigningWithoutTeamSelection;
@property(readonly, nonatomic) DVTPortalAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
@property(readonly, nonatomic) NSNumber *entitlementsDestination; // @synthesize entitlementsDestination=_entitlementsDestination;
@property(readonly, nonatomic) IDEProvisioningEntitlementsExpansion *entitlementsExpansion; // @synthesize entitlementsExpansion=_entitlementsExpansion;
@property(readonly, nonatomic) IDEProvisionableEntitlements *baseEntitlements; // @synthesize baseEntitlements=_baseEntitlements;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSString *entitlementsFile; // @synthesize entitlementsFile=_entitlementsFile;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *certificateIdentifier; // @synthesize certificateIdentifier=_certificateIdentifier;
@property(readonly, nonatomic) NSString *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(readonly, nonatomic) NSString *sdkVariant; // @synthesize sdkVariant=_sdkVariant;
@property(readonly, nonatomic) DVTSDK *sdk; // @synthesize sdk=_sdk;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) IDEProvisioningTeamReference *team; // @synthesize team=_team;
@property(readonly, nonatomic) DVTPortalProfilePurpose *provisioningPurpose; // @synthesize provisioningPurpose=_provisioningPurpose;
@property(readonly, nonatomic) NSNumber *provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) NSNumber *profileSupport; // @synthesize profileSupport=_profileSupport;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;

@end

