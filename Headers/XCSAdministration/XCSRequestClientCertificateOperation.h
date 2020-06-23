//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

#import <XCSAdministration/XCSDataProvider-Protocol.h>

@class DVTPortalServerCertificate, DVTPortalTeam, NSData, XCSHardwareInfo, XCSKeychain;
@protocol DVTServicesSession, XCSPortalTeamProvider, XCSServicesSessionProvider;

@interface XCSRequestClientCertificateOperation : XCSInitializationOperation <XCSDataProvider>
{
    id <XCSServicesSessionProvider> _sessionProvider;
    id <XCSPortalTeamProvider> _teamProvider;
    DVTPortalServerCertificate *_certificate;
    NSData *_data;
    XCSHardwareInfo *_hardwareInfo;
    XCSKeychain *_temporaryKeychain;
}

@property(retain, nonatomic) XCSKeychain *temporaryKeychain; // @synthesize temporaryKeychain=_temporaryKeychain;
@property(retain, nonatomic) XCSHardwareInfo *hardwareInfo; // @synthesize hardwareInfo=_hardwareInfo;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) DVTPortalServerCertificate *certificate; // @synthesize certificate=_certificate;
@property(retain, nonatomic) id <XCSPortalTeamProvider> teamProvider; // @synthesize teamProvider=_teamProvider;
@property(retain, nonatomic) id <XCSServicesSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
- (void).cxx_destruct;
@property(readonly) DVTPortalTeam *team;
@property(readonly) id <DVTServicesSession> session;
- (BOOL)createTemporaryKeychainWithError:(id *)arg1;
- (BOOL)exportIdentityWithError:(id *)arg1;
- (BOOL)joinTeamWithError:(id *)arg1;
- (BOOL)revokeMembershipWithError:(id *)arg1;
- (BOOL)downloadExistingCertificateWithError:(id *)arg1;
- (BOOL)loadHardwareInfoWithError:(id *)arg1;
- (void)failWithError:(id)arg1;
- (void)run;
- (id)statusDescription;

@end

