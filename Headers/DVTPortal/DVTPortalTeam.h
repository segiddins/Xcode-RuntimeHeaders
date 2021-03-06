//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalMember, NSArray, NSSet, NSString;

@interface DVTPortalTeam : NSObject
{
    NSArray *_memberships;
    NSString *_name;
    NSString *_teamID;
    NSString *_type;
    DVTPortalMember *_memberInformation;
    NSArray *_membershipsNonUnique;
}

+ (id)_listService;
+ (id)teamsForSession:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *membershipsNonUnique; // @synthesize membershipsNonUnique=_membershipsNonUnique;
@property(retain, nonatomic) DVTPortalMember *memberInformation; // @synthesize memberInformation=_memberInformation;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)plaStatusWithSession:(id)arg1 error:(id *)arg2;
- (id)membershipForPlatform:(id)arg1;
- (BOOL)supportsOneCertPerMac;
@property(readonly, nonatomic) BOOL isFreeProvisioningTeam;
@property(readonly, nonatomic) BOOL isEnterpriseTeam;
@property(readonly, nonatomic) BOOL isUniversityTeam;
- (BOOL)dvt_servicesTypeInstanceDidFinishLoadingWithContext:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSSet *portalPrograms;
@property(readonly, copy, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

