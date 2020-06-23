//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/DVTPortalIdentityProtocol-Protocol.h>

@class DVTSigningCertificate, NSString;
@protocol DVTPortalCertificateProtocol;

@interface DVTPortalIdentity : NSObject <DVTPortalIdentityProtocol>
{
    id <DVTPortalCertificateProtocol> _portalCertificate;
    NSString *_keyName;
    id _underlyingPrivateKey;
}

+ (id)createIdentityWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 error:(id *)arg6;
+ (id)identityWithCertificate:(id)arg1 privateKey:(struct __SecKey *)arg2 keyName:(id)arg3;
- (void).cxx_destruct;
@property(retain) id underlyingPrivateKey; // @synthesize underlyingPrivateKey=_underlyingPrivateKey;
@property(readonly) NSString *keyName; // @synthesize keyName=_keyName;
@property(readonly) id <DVTPortalCertificateProtocol> portalCertificate; // @synthesize portalCertificate=_portalCertificate;
@property(readonly) DVTSigningCertificate *signingCertificate;
@property(readonly) struct __SecKey *privateKey;
- (id)_initWithCertificate:(id)arg1 privateKey:(struct __SecKey *)arg2 keyName:(id)arg3;

@end

