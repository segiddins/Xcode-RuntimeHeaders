//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTPlatform, DVTPortalCertificatePurpose, DVTPortalProfileType, DVTProvisioningProfile, IDEProfileQualification, IDEProvisioningDeviceRequirement, IDEProvisioningRepairExecutionContext, NSArray, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicTeam;

@protocol IDERepairable <NSObject>
@property(readonly, nonatomic) NSArray *instigatingErrors;
@property(readonly, nonatomic) BOOL wantsRepairStatusSuppressed;
@property(readonly, nonatomic) DVTPortalProfileType *profileType;
@property(readonly, nonatomic) id <IDEProvisioningBasicProfile> profile;
@property(readonly, nonatomic) IDEProvisioningDeviceRequirement *deviceRequirement;
@property(readonly, nonatomic) NSString *machineID;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) DVTPlatform *platform;
@property(readonly, nonatomic) DVTPortalCertificatePurpose *certificatePurpose;
@property(readonly, nonatomic) long long provisioningStyle;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team;
@property(readonly, nonatomic) NSString *repairableName;
- (BOOL)profileCharacteristicsWithContext:(IDEProvisioningRepairExecutionContext *)arg1 profileCharacteristics:(id *)arg2 error:(id *)arg3;
- (IDEProfileQualification *)profileQualificationWithProfile:(DVTProvisioningProfile *)arg1;
@end

