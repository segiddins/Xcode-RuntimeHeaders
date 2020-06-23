//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisionable-Protocol.h>

@class DVTLogAspect, DVTPlatform, IDEDistributionItem, IDEDistributionMethod, IDEDistributionProvisioningEntitlementsExpansion, IDEProfileSpecifier, NSArray, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEDistributionProvisionable : NSObject <IDEProvisionable>
{
    IDEDistributionProvisioningEntitlementsExpansion *_entitlementsExpansion;
    DVTPlatform *_platform;
    IDEDistributionItem *_distributionItem;
    NSString *_certificateSpecifier;
    IDEProfileSpecifier *_profileSpecifier;
    id <IDEProvisioningBasicTeam> _team;
    IDEDistributionMethod *_method;
    long long _provisioningStyle;
    NSArray *_entitlementsProcessors;
    DVTLogAspect *_logAspect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly, nonatomic) NSArray *entitlementsProcessors; // @synthesize entitlementsProcessors=_entitlementsProcessors;
@property(readonly, nonatomic) long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) IDEDistributionMethod *method; // @synthesize method=_method;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) IDEProfileSpecifier *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(copy, nonatomic) NSString *certificateSpecifier; // @synthesize certificateSpecifier=_certificateSpecifier;
@property(readonly, nonatomic) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
- (BOOL)supportsIOSMacForBuildParameters:(id)arg1;
- (BOOL)wantsBundleIdentifierEditingForBuildParameters:(id)arg1;
- (unsigned long long)entitlementsDestinationForBuildParameters:(id)arg1;
- (id)provisioningPurposeForBuildParameters:(id)arg1;
@property(readonly, nonatomic, getter=isInstallerPackage) BOOL installerPackage;
- (BOOL)allowSigningWithoutTeamSelectionForBuildParameters:(id)arg1;
- (BOOL)signingRequiresTeamForBuildParameters:(id)arg1;
- (void)noteProvisioningInputsChanged;
- (id)appIDFeaturesForBuildParameters:(id)arg1;
- (id)appIDFeaturesForBuildParameters:(id)arg1 entitlements:(id)arg2 withEntitlementsExpansion:(id)arg3;
- (id)entitlementsExpansionForBuildParameters:(id)arg1;
- (id)entitlementsFilePathForBuildParameters:(id)arg1;
- (id)baseEntitlementsForBuildParameters:(id)arg1;
- (id)provisioningProfileSpecifierForBuildParameters:(id)arg1;
- (id)signingCertificateIdentifierForBuildParameters:(id)arg1;
- (id)bundleIdentifierForBuildParameters:(id)arg1;
- (id)sdkVariantForBuildParameters:(id)arg1;
- (id)sdkForBuildParameters:(id)arg1;
- (id)platformForBuildParameters:(id)arg1;
- (long long)profileSupportForBuildParameters:(id)arg1;
- (id)teamForBuildParameters:(id)arg1;
- (long long)provisioningStyleForBuildParameters:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSOrderedSet *configurations;
- (id)initWithDistributionItem:(id)arg1 team:(id)arg2 method:(id)arg3 provisioningStyle:(long long)arg4 entitlementsProcessors:(id)arg5 logAspect:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
