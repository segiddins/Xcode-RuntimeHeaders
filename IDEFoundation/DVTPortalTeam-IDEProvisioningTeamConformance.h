//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTPortal/DVTPortalTeam.h>

#import <IDEFoundation/IDEProvisioningTeam-Protocol.h>

@class NSString;

@interface DVTPortalTeam (IDEProvisioningTeamConformance) <IDEProvisioningTeam>
- (BOOL)canCreateCertificatesOfKind:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *teamName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFreeProvisioningTeam) BOOL freeProvisioningTeam;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *teamID;
@end

