//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTFilePath, DVTPlatform, DVTPortalAppIDFeatures, DVTPortalProfilePurpose, DVTSDK, IDEBuildParameters, IDEProvisionableEntitlements, IDEProvisioningEntitlementsExpansion, NSDictionary, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicTeam;

@protocol IDEProvisionable <NSObject>
@property(readonly, nonatomic) NSOrderedSet *configurations;
@property(readonly, nonatomic) NSString *name;
- (BOOL)supportsIOSMacForBuildParameters:(IDEBuildParameters *)arg1;
- (DVTPortalProfilePurpose *)provisioningPurposeForBuildParameters:(IDEBuildParameters *)arg1;
- (BOOL)signingRequiresTeamForBuildParameters:(IDEBuildParameters *)arg1;
- (BOOL)allowSigningWithoutTeamSelectionForBuildParameters:(IDEBuildParameters *)arg1;
- (void)noteProvisioningInputsChanged;
- (unsigned long long)entitlementsDestinationForBuildParameters:(IDEBuildParameters *)arg1;
- (IDEProvisioningEntitlementsExpansion *)entitlementsExpansionForBuildParameters:(IDEBuildParameters *)arg1;
- (IDEProvisionableEntitlements *)baseEntitlementsForBuildParameters:(IDEBuildParameters *)arg1;
- (DVTPortalAppIDFeatures *)appIDFeaturesForBuildParameters:(IDEBuildParameters *)arg1;
- (DVTPortalAppIDFeatures *)appIDFeaturesForBuildParameters:(IDEBuildParameters *)arg1 entitlements:(NSDictionary *)arg2 withEntitlementsExpansion:(IDEProvisioningEntitlementsExpansion *)arg3;
- (DVTFilePath *)entitlementsFilePathForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)signingCertificateIdentifierForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)provisioningProfileSpecifierForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)bundleIdentifierForBuildParameters:(IDEBuildParameters *)arg1;
- (BOOL)wantsBundleIdentifierEditingForBuildParameters:(IDEBuildParameters *)arg1;
- (long long)profileSupportForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)sdkVariantForBuildParameters:(IDEBuildParameters *)arg1;
- (DVTSDK *)sdkForBuildParameters:(IDEBuildParameters *)arg1;
- (DVTPlatform *)platformForBuildParameters:(IDEBuildParameters *)arg1;
- (id <IDEProvisioningBasicTeam>)teamForBuildParameters:(IDEBuildParameters *)arg1;
- (long long)provisioningStyleForBuildParameters:(IDEBuildParameters *)arg1;
@end

