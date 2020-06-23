//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTSigningCertificate, NSString;
@protocol DVTPortalCertificateProtocol;

@protocol DVTPortalIdentityProtocol
@property(nonatomic, readonly) NSString *keyName;
@property(nonatomic, readonly) struct __SecKey *privateKey;
@property(nonatomic, readonly) DVTSigningCertificate *signingCertificate;
@property(nonatomic, readonly) id <DVTPortalCertificateProtocol> portalCertificate;
@end

