//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSConfigureSSLOperation : XCSInitializationOperation
{
}

- (id)updateKeychain:(id)arg1 accessForApplications:(id)arg2 error:(id *)arg3;
- (BOOL)updateXCSDKeychainAccessForApplications:(id)arg1 error:(id *)arg2;
- (BOOL)exportBuilderIdentityWithCommonName:(id)arg1 error:(id *)arg2;
- (BOOL)issueAndExportBuilderIdentityWithError:(id *)arg1;
- (BOOL)certificateCommonNameMatchesHostname:(id)arg1;
- (BOOL)exportCertificateFromKeychain:(id)arg1 certificateAuthority:(id)arg2 commonName:(id)arg3 email:(id)arg4 toPrivateKeyFile:(id)arg5 certificateFile:(id)arg6 withError:(id *)arg7 didExportCertificate:(char *)arg8;
- (BOOL)exportApacheServerCertificateWithError:(id *)arg1 didExportCertificate:(char *)arg2;
- (BOOL)exportNginxServerCertificateWithError:(id *)arg1;
- (BOOL)exportAPIServerCertificateWithError:(id *)arg1 didExportCertificate:(char *)arg2;
- (id)hostname;
- (void)run;
- (id)statusDescription;

@end

