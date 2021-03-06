//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, DVTPortalTeam, DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEProvisioningLedger, IDEProvisioningPortal, IDEProvisioningRepairStepGenerator, _TtC13DVTFoundation22DVTProvisioningContext;
@protocol IDEProvisioningTeamAccountPairProvider, IDERepairable;

@interface IDEProvisioningRepairContext : NSObject
{
    IDEProvisioningRepairStepGenerator *_repairStepGenerator;
    DVTLogAspect *_logAspect;
    id <IDERepairable> _repairable;
    DVTPortalTeam *_team;
    DVTSigningCertificateManager *_signingCertificateManager;
    DVTProvisioningProfileManager *_provisioningProfileManager;
    IDEProvisioningLedger *_provisioningLedger;
    id <IDEProvisioningTeamAccountPairProvider> _teamAccountPairProvider;
    unsigned long long _successiveRepairCount;
    _TtC13DVTFoundation22DVTProvisioningContext *_provisioningContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC13DVTFoundation22DVTProvisioningContext *provisioningContext; // @synthesize provisioningContext=_provisioningContext;
@property(nonatomic) unsigned long long successiveRepairCount; // @synthesize successiveRepairCount=_successiveRepairCount;
@property(readonly, nonatomic) id <IDEProvisioningTeamAccountPairProvider> teamAccountPairProvider; // @synthesize teamAccountPairProvider=_teamAccountPairProvider;
@property(readonly, nonatomic) IDEProvisioningLedger *provisioningLedger; // @synthesize provisioningLedger=_provisioningLedger;
@property(readonly, nonatomic) DVTProvisioningProfileManager *provisioningProfileManager; // @synthesize provisioningProfileManager=_provisioningProfileManager;
@property(readonly, nonatomic) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(readonly, nonatomic) id <IDERepairable> repairable; // @synthesize repairable=_repairable;
@property(readonly, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly, nonatomic) IDEProvisioningPortal *portal;
@property(readonly, nonatomic) IDEProvisioningRepairStepGenerator *repairStepGenerator; // @synthesize repairStepGenerator=_repairStepGenerator;
- (id)sessionWithError:(id *)arg1;
- (id)initWithRepairable:(id)arg1 signingCertificateManager:(id)arg2 provisioningProfileManager:(id)arg3 provisioningLedger:(id)arg4 teamAccountPairProvider:(id)arg5 provisioningContext:(id)arg6;

@end

