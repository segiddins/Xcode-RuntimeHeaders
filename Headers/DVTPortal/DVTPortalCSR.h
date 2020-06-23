//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalCSR : NSObject
{
    NSString *_portalCertificateID;
    struct __SecKey *_privateKey;
}

+ (id)createCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 csrData:(id)arg6 error:(id *)arg7;
+ (id)createCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 csr:(id)arg6 error:(id *)arg7;
+ (id)createCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 keyName:(id)arg6 error:(id *)arg7;
- (void).cxx_destruct;
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy, nonatomic) NSString *portalCertificateID; // @synthesize portalCertificateID=_portalCertificateID;
- (id)description;

@end

