//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESwiftPackageSupport/_TtC22IDESwiftPackageSupport24IDESwiftPackageBlueprint.h>

#import <IDESwiftPackageSupport/IDEProvisionable-Protocol.h>

@class NSOrderedSet;

@interface _TtC22IDESwiftPackageSupport24IDESwiftPackageBlueprint (IDESwiftPackageSupport1) <IDEProvisionable>
- (BOOL)supportsIOSMacForBuildParameters:(id)arg1;
- (id)provisioningPurposeForBuildParameters:(id)arg1;
- (BOOL)signingRequiresTeamForBuildParameters:(id)arg1;
- (BOOL)allowSigningWithoutTeamSelectionForBuildParameters:(id)arg1;
- (void)noteProvisioningInputsChanged;
- (id)entitlementsExpansionForBuildParameters:(id)arg1;
- (id)baseEntitlementsForBuildParameters:(id)arg1;
- (id)appIDFeaturesForBuildParameters:(id)arg1 entitlements:(id)arg2 withEntitlementsExpansion:(id)arg3;
- (id)appIDFeaturesForBuildParameters:(id)arg1;
- (unsigned long long)entitlementsDestinationForBuildParameters:(id)arg1;
- (id)entitlementsFilePathForBuildParameters:(id)arg1;
- (id)signingCertificateIdentifierForBuildParameters:(id)arg1;
- (id)provisioningProfileSpecifierForBuildParameters:(id)arg1;
- (id)bundleIdentifierForBuildParameters:(id)arg1;
- (BOOL)wantsBundleIdentifierEditingForBuildParameters:(id)arg1;
- (long long)profileSupportForBuildParameters:(id)arg1;
- (id)sdkVariantForBuildParameters:(id)arg1;
- (id)sdkForBuildParameters:(id)arg1;
- (id)platformForBuildParameters:(id)arg1;
- (id)teamForBuildParameters:(id)arg1;
- (long long)provisioningStyleForBuildParameters:(id)arg1;
@property(nonatomic, readonly) NSOrderedSet *configurations;
@end

