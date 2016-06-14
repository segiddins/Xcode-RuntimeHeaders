//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDECodesignIssueResolutionAbstractGenerateProfileOption.h>

@class NSSet, NSString;

@interface IDECodesignIssueResolutionGenerateDevelopmentProfileOption : IDECodesignIssueResolutionAbstractGenerateProfileOption
{
    NSSet *_requiredCodesignableDevices;
    NSSet *_appIDRequirements;
    NSString *_portalTeamID;
}

@property(copy, nonatomic) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
@property(retain) NSSet *appIDRequirements; // @synthesize appIDRequirements=_appIDRequirements;
@property(retain) NSSet *requiredCodesignableDevices; // @synthesize requiredCodesignableDevices=_requiredCodesignableDevices;
- (void).cxx_destruct;
- (id)invokeOption;
- (id)initWithPortal:(id)arg1 account:(id)arg2 signingCertificate:(id)arg3 platformIdentifier:(id)arg4 appIDRequirements:(id)arg5 requiredCodesignableDevices:(id)arg6 portalTeamID:(id)arg7 logAspect:(id)arg8;

@end

