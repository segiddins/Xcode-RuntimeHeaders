//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTSigningCertificate, DVTSigningCertificateSource;

@protocol DVTSigningCertificateSourceDelegate <NSObject>
- (void)signingCertificateSource:(DVTSigningCertificateSource *)arg1 certificateTrustChanged:(DVTSigningCertificate *)arg2;
- (void)signingCertificateSourceShouldDoFullResetFromSigningCertificates:(DVTSigningCertificateSource *)arg1;
- (void)signingCertificateSourcePrivateKeyStatusForCertificatesMayHaveChanged:(DVTSigningCertificateSource *)arg1;
- (void)signingCertificateSource:(DVTSigningCertificateSource *)arg1 didRemoveCertificate:(DVTSigningCertificate *)arg2;
- (void)signingCertificateSource:(DVTSigningCertificateSource *)arg1 didAddCertificate:(DVTSigningCertificate *)arg2;
@end

