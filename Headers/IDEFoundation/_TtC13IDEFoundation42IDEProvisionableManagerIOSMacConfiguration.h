//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProfileQualification, IDEProvisionableStatusEvaluation, MISSING_TYPE, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicSigningIdentity, IDEProvisioningBasicTeam;

@interface _TtC13IDEFoundation42IDEProvisionableManagerIOSMacConfiguration : NSObject
{
    MISSING_TYPE *configuration;
    MISSING_TYPE *evaluation;
    MISSING_TYPE *bundleIdentifierPlaceholder;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL wantsTeamSelectionRegardlessOfSigningStyle;
@property(nonatomic, readonly) long long signingStyle;
@property(nonatomic, retain) id <IDEProvisioningBasicSigningIdentity> signingIdentity;
@property(nonatomic, readonly) NSOrderedSet *signingIdentities;
@property(nonatomic, readonly) BOOL isSigningIdentityChangeable;
@property(nonatomic) BOOL useIOSAppID;
@property(nonatomic, readonly) BOOL wantsUniversalBundleIdentifierOption;
@property(nonatomic, copy) NSString *bundleIdentifierPlaceholder;
@property(nonatomic, copy) NSString *bundleIdentifier;
@property(nonatomic, readonly) BOOL wantsBundleIdentifierEditingLabel;
@property(nonatomic, readonly) BOOL wantsBundleIdentifierEditing;
@property(nonatomic, readonly) BOOL isBundleIdentifierReadOnly;
- (id)provisioningProfileDownloaderContextWithError:(id *)arg1;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@property(nonatomic, readonly) BOOL showEmptyProfileSelectionPlaceholder;
@property(nonatomic, readonly) IDEProfileQualification *profileQualification;
@property(nonatomic, retain) id <IDEProvisioningBasicProfile> provisioningProfile;
@property(nonatomic, readonly) long long profileSupport;
- (BOOL)isProfileChangeable;
@property(nonatomic, retain) id <IDEProvisioningBasicTeam> team;
@property(nonatomic, readonly) BOOL isTeamSelectionRequired;
- (BOOL)isRepairBusy;
- (id)initWithConfiguration:(id)arg1;
@property(nonatomic, readonly) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation;

// Remaining properties
@property(nonatomic, readonly) BOOL profileChangeable;
@property(nonatomic, readonly) BOOL repairBusy;

@end
