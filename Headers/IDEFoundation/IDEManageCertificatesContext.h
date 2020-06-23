//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTDeveloperAccountManager, DVTPortalTeam, DVTSigningCertificateManager, IDEProvisioningPortal, IDEProvisioningTeamManager, NSSet;
@protocol IDEProvisioningBasicTeam, IDEProvisioningTeamAccountPairProvider;

@interface IDEManageCertificatesContext : NSObject
{
    id <IDEProvisioningBasicTeam> _team;
    DVTPortalTeam *_portalTeam;
    NSSet *_certificateTypes;
    DVTSigningCertificateManager *_certificateManager;
    IDEProvisioningPortal *_portal;
    id <IDEProvisioningTeamAccountPairProvider> _teamAccountPairProvider;
    IDEProvisioningTeamManager *_teamManager;
    DVTDeveloperAccountManager *_developerAccountManager;
    DVTDeveloperAccount *_developerAccount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTDeveloperAccount *developerAccount; // @synthesize developerAccount=_developerAccount;
@property(retain, nonatomic) DVTDeveloperAccountManager *developerAccountManager; // @synthesize developerAccountManager=_developerAccountManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) id <IDEProvisioningTeamAccountPairProvider> teamAccountPairProvider; // @synthesize teamAccountPairProvider=_teamAccountPairProvider;
@property(retain, nonatomic) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
@property(retain, nonatomic) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain, nonatomic) NSSet *certificateTypes; // @synthesize certificateTypes=_certificateTypes;
@property(readonly, nonatomic) DVTPortalTeam *portalTeam; // @synthesize portalTeam=_portalTeam;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (id)sessionWithError:(id *)arg1;
- (id)sessionProviderWithError:(id *)arg1;
- (id)initWithTeam:(id)arg1;

@end
