//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, IDEProvisioningEntitlementsExpansion, NSDictionary, NSNumber, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisionableOverrides : NSObject
{
    NSString *_configuration;
    long long _profileSupport;
    id <IDEProvisioningBasicTeam> _team;
    DVTPlatform *_platform;
    NSString *_profileSpecifier;
    NSString *_certificateIdentifier;
    NSString *_bundleIdentifier;
    NSString *_entitlementsFile;
    NSDictionary *_baseEntitlements;
    IDEProvisioningEntitlementsExpansion *_entitlementsExpansion;
    NSNumber *_allowSigningWithoutTeamSelection;
}

+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(long long)arg2 team:(id)arg3 platform:(id)arg4 profileSpecifier:(id)arg5 certificateIdentifier:(id)arg6 bundleIdentifier:(id)arg7 entitlementsFilePath:(id)arg8 baseEntitlements:(id)arg9 entitlementsExpansion:(id)arg10 allowSigningWithoutTeamSelection:(id)arg11;
+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(long long)arg2 team:(id)arg3 platform:(id)arg4 profileSpecifier:(id)arg5 certificateIdentifier:(id)arg6 bundleIdentifier:(id)arg7 entitlementsFile:(id)arg8 baseEntitlements:(id)arg9 entitlementsExpansion:(id)arg10 allowSigningWithoutTeamSelection:(id)arg11;
@property(readonly, nonatomic) NSNumber *allowSigningWithoutTeamSelection; // @synthesize allowSigningWithoutTeamSelection=_allowSigningWithoutTeamSelection;
@property(readonly, nonatomic) IDEProvisioningEntitlementsExpansion *entitlementsExpansion; // @synthesize entitlementsExpansion=_entitlementsExpansion;
@property(readonly, nonatomic) NSDictionary *baseEntitlements; // @synthesize baseEntitlements=_baseEntitlements;
@property(readonly, nonatomic) NSString *entitlementsFile; // @synthesize entitlementsFile=_entitlementsFile;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *certificateIdentifier; // @synthesize certificateIdentifier=_certificateIdentifier;
@property(readonly, nonatomic) NSString *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) long long profileSupport; // @synthesize profileSupport=_profileSupport;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;

@end

