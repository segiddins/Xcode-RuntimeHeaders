//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalTeam, DVTProvisioningContext, DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEProvisioningLedgerEntry, IDEProvisioningPortal, IDEProvisioningRepairContext;
@protocol IDERepairable;

@interface IDEProvisioningRepairExecutionContext : NSObject
{
    IDEProvisioningRepairContext *_repairContext;
    IDEProvisioningLedgerEntry *_repairLedgerEntry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDEProvisioningLedgerEntry *repairLedgerEntry; // @synthesize repairLedgerEntry=_repairLedgerEntry;
@property(readonly, nonatomic) DVTProvisioningContext *provisioningContext;
@property(readonly, nonatomic) unsigned long long successiveRepairCount;
@property(readonly, nonatomic) IDEProvisioningPortal *portal;
@property(readonly, nonatomic) DVTProvisioningProfileManager *provisioningProfileManager;
@property(readonly, nonatomic) DVTSigningCertificateManager *signingCertificateManager;
@property(readonly, nonatomic) DVTPortalTeam *team;
@property(readonly, nonatomic) id <IDERepairable> repairable;
- (id)sessionWithLedgerEntry:(id)arg1 error:(id *)arg2;
- (id)initWithRepairContext:(id)arg1 repairLedgerEntry:(id)arg2;

@end

