//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@class DVTPortalProfileCharacteristics;

@interface IDEProvisioningCreateProfileRepairStep : IDEProvisioningRepairStep
{
    DVTPortalProfileCharacteristics *_characteristics;
}

+ (id)createProfileRepairStepWithCharacteristics:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) DVTPortalProfileCharacteristics *characteristics; // @synthesize characteristics=_characteristics;
- (BOOL)_installPortalProfile:(id)arg1 profileManager:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)activityDescription;
- (id)stepDescription;
- (id)initWithCharacteristics:(id)arg1;

@end

