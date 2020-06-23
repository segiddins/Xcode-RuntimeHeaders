//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTPortal/_TtC9DVTPortal20DeveloperAPIResource.h>

@class DVTPortalCertificateType, DVTSigningCertificate, MISSING_TYPE, NSDate, NSString;

@interface _TtC9DVTPortal23DeveloperAPICertificate : _TtC9DVTPortal20DeveloperAPIResource
{
    MISSING_TYPE *rawCertificateAttributes;
    MISSING_TYPE *portalCertificateType;
    MISSING_TYPE *signingCertificate;
}

+ (id)createWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineID:(id)arg4 machineName:(id)arg5 keyName:(id)arg6 error:(id *)arg7;
+ (id)certificatesWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
+ (id)certificatesWithSession:(id)arg1 team:(id)arg2 types:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (BOOL)revokeWithSession:(id)arg1 bypassPermissionsCheck:(BOOL)arg2 error:(id *)arg3;
- (BOOL)revokeWithSession:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSString *creatorEmail;
@property(nonatomic, readonly) NSString *creatorName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *machineName;
@property(nonatomic, readonly) NSString *machineID;
@property(nonatomic, readonly) NSString *serialNumber;
- (BOOL)isExpired;
@property(nonatomic, readonly) NSDate *expirationDate;
@property(nonatomic, readonly) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate;
@property(nonatomic, readonly) DVTPortalCertificateType *portalCertificateType; // @synthesize portalCertificateType;

// Remaining properties
@property(nonatomic, readonly) BOOL expired;

@end

