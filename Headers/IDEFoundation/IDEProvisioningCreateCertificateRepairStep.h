//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@class DVTPortalCertificateType;

@interface IDEProvisioningCreateCertificateRepairStep : IDEProvisioningRepairStep
{
    DVTPortalCertificateType *_type;
}

+ (id)createCertificateRepairStepWithCertificateType:(id)arg1;
@property(readonly, nonatomic) DVTPortalCertificateType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)activityDescription;
- (id)stepDescription;
- (id)initWithType:(id)arg1;

@end

