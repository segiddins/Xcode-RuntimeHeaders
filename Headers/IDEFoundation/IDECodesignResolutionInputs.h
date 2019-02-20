//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTAppIDFeatures, DVTPlatform, NSArray, NSDictionary, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDECodesignResolutionInputs : NSObject <NSCopying>
{
    BOOL _requiresProvisioningProfile;
    BOOL _usingTeamBasedSigning;
    DVTAppIDFeatures *_requiredFeatures;
    NSArray *_requiredCodesignableDevices;
    NSDictionary *_requiredEntitlements;
    NSString *_certificateKind;
    NSString *_provisioningProfilePlatform;
    unsigned long long _provisioningProfilePurpose;
    NSString *_bundleIdentifier;
    NSString *_targetName;
    NSString *_certificateSpecifier;
    NSString *_profileSpecifier;
    id <IDEProvisioningBasicTeam> _team;
    long long _provisioningStyle;
    DVTPlatform *_platform;
    NSString *_portalTeamID;
    NSString *_codesignIdentity;
    NSString *_provisioningProfileUUID;
}

@property(retain) NSString *provisioningProfileUUID; // @synthesize provisioningProfileUUID=_provisioningProfileUUID;
@property(retain) NSString *codesignIdentity; // @synthesize codesignIdentity=_codesignIdentity;
@property(retain) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(retain) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain) NSString *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(retain) NSString *certificateSpecifier; // @synthesize certificateSpecifier=_certificateSpecifier;
@property BOOL usingTeamBasedSigning; // @synthesize usingTeamBasedSigning=_usingTeamBasedSigning;
@property(retain) NSString *targetName; // @synthesize targetName=_targetName;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property unsigned long long provisioningProfilePurpose; // @synthesize provisioningProfilePurpose=_provisioningProfilePurpose;
@property BOOL requiresProvisioningProfile; // @synthesize requiresProvisioningProfile=_requiresProvisioningProfile;
@property(retain) NSString *provisioningProfilePlatform; // @synthesize provisioningProfilePlatform=_provisioningProfilePlatform;
@property(retain) NSString *certificateKind; // @synthesize certificateKind=_certificateKind;
@property(retain) NSDictionary *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain, nonatomic) NSArray *requiredCodesignableDevices; // @synthesize requiredCodesignableDevices=_requiredCodesignableDevices;
@property(retain) DVTAppIDFeatures *requiredFeatures; // @synthesize requiredFeatures=_requiredFeatures;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
