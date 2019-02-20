//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalProfilePurpose, IDEProvisionableSnapshot, NSSet;

@interface IDEProvisionableStatusEvalutorInputs : NSObject
{
    IDEProvisionableSnapshot *_provisionableSnapshot;
    NSSet *_provisioningProfiles;
    NSSet *_signingCertificates;
    NSSet *_deviceSnapshots;
    DVTPortalProfilePurpose *_provisioningPurpose;
}

@property(retain, nonatomic) DVTPortalProfilePurpose *provisioningPurpose; // @synthesize provisioningPurpose=_provisioningPurpose;
@property(retain, nonatomic) NSSet *deviceSnapshots; // @synthesize deviceSnapshots=_deviceSnapshots;
@property(retain, nonatomic) NSSet *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain, nonatomic) IDEProvisionableSnapshot *provisionableSnapshot; // @synthesize provisionableSnapshot=_provisionableSnapshot;
- (void).cxx_destruct;

@end
