//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEPortalInfoDelegate-Protocol.h>

@class DVTPlatform, NSArray, NSString;
@protocol IDEAppIDFeatureCoordination, IDEBlueprint, IDEBuildSettingsCoordination, IDEEntitlementsCoordination, IDEInfoPlistCoordination, IDELinkedFrameworksCoordination, IDEProvisioningBasicTeam;

@interface IDECapabilitiesContext : NSObject <IDEPortalInfoDelegate>
{
    BOOL _internal;
    NSObject<IDEEntitlementsCoordination> *_entitlementsCoordinator;
    NSObject<IDEInfoPlistCoordination> *_infoPlistCoordinator;
    NSObject<IDEBuildSettingsCoordination> *_buildSettingsCoordinator;
    NSObject<IDEAppIDFeatureCoordination> *_appIDFeatureCoordinator;
    NSObject<IDELinkedFrameworksCoordination> *_linkedFrameworksCoordinator;
    NSString *_platformIdentifier;
    NSString *_bundleIdentifier;
    id <IDEBlueprint> _blueprint;
    NSArray *_capabilityItemModels;
    NSString *_buildConfiguration;
}

+ (id)appIDFeaturesBasedOnEntitlements:(id)arg1 availableCapabilities:(id)arg2;
+ (id)capabilityItemsForPlatformIdentifier:(id)arg1;
+ (id)projectItemExtensionsForPlatform:(id)arg1;
+ (id)allCapabilityItems;
+ (id)projectItemExtensions;
- (void).cxx_destruct;
@property(readonly) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(readonly) NSArray *capabilityItemModels; // @synthesize capabilityItemModels=_capabilityItemModels;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly, getter=isInternal) BOOL internal; // @synthesize internal=_internal;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly) NSObject<IDELinkedFrameworksCoordination> *linkedFrameworksCoordinator; // @synthesize linkedFrameworksCoordinator=_linkedFrameworksCoordinator;
@property(readonly) NSObject<IDEAppIDFeatureCoordination> *appIDFeatureCoordinator; // @synthesize appIDFeatureCoordinator=_appIDFeatureCoordinator;
@property(readonly) NSObject<IDEBuildSettingsCoordination> *buildSettingsCoordinator; // @synthesize buildSettingsCoordinator=_buildSettingsCoordinator;
@property(readonly) NSObject<IDEInfoPlistCoordination> *infoPlistCoordinator; // @synthesize infoPlistCoordinator=_infoPlistCoordinator;
@property(readonly) NSObject<IDEEntitlementsCoordination> *entitlementsCoordinator; // @synthesize entitlementsCoordinator=_entitlementsCoordinator;
- (id)appIDFeatureStateBasedOnCapabilitiesAndEntitlementsForEntitlements:(id)arg1 expansion:(id)arg2;
- (id)appIDFeatureStateBasedOnCapabilitiesAndEntitlements;
- (id)expandEntitlements:(id)arg1 expansion:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) DVTPlatform *platform; // @dynamic platform;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> selectedProvisioningTeam; // @dynamic selectedProvisioningTeam;
@property(readonly) Class superclass;

@end

