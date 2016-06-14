//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningProfile-Protocol.h>

@class DVTPortalProfile, NSDate, NSString;

@interface IDEPortalProfileWrapper : NSObject <IDEProvisioningProfile>
{
    DVTPortalProfile *_portalProfile;
}

@property(readonly, nonatomic) DVTPortalProfile *portalProfile; // @synthesize portalProfile=_portalProfile;
- (void).cxx_destruct;
- (BOOL)isTeamProfile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *portalSubPlatformIdentifier;
@property(readonly, nonatomic) NSString *portalPlatformIdentifier;
@property(readonly, nonatomic) NSString *teamIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPortalProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

