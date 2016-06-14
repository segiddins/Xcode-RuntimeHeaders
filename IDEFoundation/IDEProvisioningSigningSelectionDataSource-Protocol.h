//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEProfileQualification, NSArray, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicSigningIdentity, IDEProvisioningBasicTeam;

@protocol IDEProvisioningSigningSelectionDataSource
@property(readonly) NSArray *errors;
@property(readonly) NSString *configurationName;
@property(retain, nonatomic) id <IDEProvisioningBasicSigningIdentity> signingIdentity;
@property(readonly, nonatomic) NSOrderedSet *signingIdentities;
@property(readonly) BOOL isSigningIdentityChangeable;
@property(readonly) NSString *repairBusyReason;
@property(readonly, getter=isRepairBusy) BOOL repairBusy;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification;
@property(retain, nonatomic) id <IDEProvisioningBasicProfile> provisioningProfile;
@property(readonly, getter=isProfileChangeable) BOOL profileChangeable;
@property(readonly) long long profileSupport;
@property(readonly) long long signingStyle;
@property(readonly, nonatomic) BOOL isTeamSelectionRequired;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@end

