//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTDeveloperAccount, DVTFilePath, DVTPlatform, DVTPortalProfilePurpose, DVTSDK, IDEProvisioningUserAction, NSArray, NSError, NSSet, NSString;

@protocol IDEProvisioningErrorProvider
@property(readonly, nonatomic) long long repairMode;
@property(readonly, nonatomic) long long task;
@property(readonly, nonatomic) long long environment;
- (NSError *)provisionableMissingMacCatalystBundleIdentifierPrefixInAutomaticError:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (NSError *)noAccountsError;
- (NSError *)provisionableUnableToRepairEntitlementsError:(NSString *)arg1 entitlements:(NSArray *)arg2;
- (NSError *)provisionablePlatformMismatchForAssetError:(NSString *)arg1 assetType:(NSString *)arg2 platformName:(NSString *)arg3;
- (NSError *)provisionableEntitlementsRequireDevelopmentSigning:(NSString *)arg1 certificateIdentifier:(NSString *)arg2 sdk:(DVTSDK *)arg3;
- (NSError *)provisionableEntitlementsRequireProfileError:(NSString *)arg1;
- (NSError *)provisionableEntitlementsRequireSigningError:(NSString *)arg1;
- (NSError *)provisionableHasConflictingAutomaticSigningSettingsError:(NSString *)arg1 conflictingFeatures:(NSSet *)arg2;
- (NSError *)provisionableEntitlementsFileNotFoundError:(NSString *)arg1 entitlementsFilePath:(DVTFilePath *)arg2;
- (NSError *)provisionableUnknownPlatformError:(NSString *)arg1;
- (NSError *)provisionableProfileSpecifiedButUnsupportedError:(NSString *)arg1 profileName:(NSString *)arg2;
- (NSError *)provisionableNoProfileSpecifiedError:(NSString *)arg1 requiredFeatureNames:(NSArray *)arg2;
- (NSError *)provisionableProfileTypeDoesntMatchIdentitySelectorError:(NSString *)arg1 signingIdentity:(NSString *)arg2 automaticSelector:(NSString *)arg3;
- (NSError *)provisionableHasExplicitSigningIdentitySpecifiedInAutomaticError:(NSString *)arg1 signingIdentity:(NSString *)arg2 automaticSelector:(NSString *)arg3;
- (NSError *)provisionableHasProfileSpecifiedInAutomaticError:(NSString *)arg1 profileName:(NSString *)arg2;
- (NSError *)noProfileTypeErrorForPlatform:(DVTPlatform *)arg1 purpose:(DVTPortalProfilePurpose *)arg2;
- (NSError *)provisionableMissingTeamOrProfileSelectionError:(NSString *)arg1;
- (NSError *)provisionableMissingTeamSelectionForProfileSpecifierError:(NSString *)arg1 profileSpecifier:(NSString *)arg2;
- (NSError *)provisionableMissingTeamSelectionError:(NSString *)arg1;
- (NSError *)provisionableMissingBundleIdentifierError:(NSString *)arg1;
- (NSError *)provisionableUnknownProvisioningFailureError:(NSString *)arg1;
- (NSError *)accountLogInFailureError:(DVTDeveloperAccount *)arg1;
- (NSError *)userActionError:(IDEProvisioningUserAction *)arg1;
@end

