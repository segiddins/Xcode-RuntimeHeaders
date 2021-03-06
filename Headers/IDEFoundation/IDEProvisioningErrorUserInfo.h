//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTSigningCertificate, IDEProvisioningUserAction, NSNumber, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisioningErrorUserInfo : NSObject
{
    NSString *_provisionableName;
    IDEProvisioningUserAction *_userAction;
    NSNumber *_errorAction;
    id <IDEProvisioningBasicTeam> _team;
    NSString *_platform;
    NSString *_specifier;
    DVTDeveloperAccount *_account;
    DVTSigningCertificate *_certificate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTSigningCertificate *certificate; // @synthesize certificate=_certificate;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *specifier; // @synthesize specifier=_specifier;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) NSNumber *errorAction; // @synthesize errorAction=_errorAction;
@property(retain, nonatomic) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;
@property(retain, nonatomic) NSString *provisionableName; // @synthesize provisionableName=_provisionableName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUserInfo:(id)arg1;

@end

