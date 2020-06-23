//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningBasicProfile-Protocol.h>

@class DVTProvisioningProfile, IDEProfileSpecifier, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisioningBasicProfile : NSObject <IDEProvisioningBasicProfile>
{
    IDEProfileSpecifier *_specifier;
    DVTProvisioningProfile *_provisioningProfile;
}

+ (id)locateBasicProfileInProfiles:(id)arg1 matchingSpecifier:(id)arg2 bundleID:(id)arg3 platform:(id)arg4 provisioningStyle:(long long)arg5;
+ (id)basicMissingProfileWithSpecifier:(id)arg1;
+ (id)basicProfileWithDVTProvisioningProfile:(id)arg1 profileSpecifier:(id)arg2;
+ (id)basicProfileWithDVTProvisioningProfile:(id)arg1;
- (void).cxx_destruct;
@property(readonly) DVTProvisioningProfile *provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
@property(readonly) IDEProfileSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *automaticIdentitySelector;
@property(readonly) id <IDEProvisioningBasicTeam> team;
@property(readonly) BOOL existsOnDisk;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

