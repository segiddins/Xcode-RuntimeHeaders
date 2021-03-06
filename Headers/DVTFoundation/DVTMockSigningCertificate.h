//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTSigningCertificate.h>

@class DVTSigningCertificateSerialNumber, NSDate, NSSet, NSString;

@interface DVTMockSigningCertificate : DVTSigningCertificate
{
    struct __SecCertificate *_certificateRef;
    BOOL _isIdentityMock;
    BOOL _isTrustedMock;
    BOOL _isValidForCodesigningMock;
    BOOL _isForServerMock;
    NSSet *_certificateKindsMock;
    NSString *_commonNameMock;
    NSString *_portalTeamIDMock;
    NSString *_portalTeamNameMock;
    NSString *_portalMemberIDMock;
    NSDate *_issueDateMock;
    NSDate *_expirationDateMock;
    NSString *_sha1HashMock;
    DVTSigningCertificateSerialNumber *_serialNumberMock;
}

+ (id)underlyingObject;
- (void).cxx_destruct;
@property BOOL isForServerMock; // @synthesize isForServerMock=_isForServerMock;
@property BOOL isValidForCodesigningMock; // @synthesize isValidForCodesigningMock=_isValidForCodesigningMock;
@property(copy) DVTSigningCertificateSerialNumber *serialNumberMock; // @synthesize serialNumberMock=_serialNumberMock;
@property(copy) NSString *sha1HashMock; // @synthesize sha1HashMock=_sha1HashMock;
@property BOOL isTrustedMock; // @synthesize isTrustedMock=_isTrustedMock;
@property(copy) NSDate *expirationDateMock; // @synthesize expirationDateMock=_expirationDateMock;
@property(copy) NSDate *issueDateMock; // @synthesize issueDateMock=_issueDateMock;
@property BOOL isIdentityMock; // @synthesize isIdentityMock=_isIdentityMock;
@property(copy) NSString *portalMemberIDMock; // @synthesize portalMemberIDMock=_portalMemberIDMock;
@property(copy) NSString *portalTeamNameMock; // @synthesize portalTeamNameMock=_portalTeamNameMock;
@property(copy) NSString *portalTeamIDMock; // @synthesize portalTeamIDMock=_portalTeamIDMock;
@property(copy) NSString *commonNameMock; // @synthesize commonNameMock=_commonNameMock;
@property(copy) NSSet *certificateKindsMock; // @synthesize certificateKindsMock=_certificateKindsMock;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1;
- (struct __SecCertificate *)certificateRef;
- (BOOL)isForServer;
- (id)validity;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isExpired;
- (id)serialNumber;
- (id)sha1Hash;
- (BOOL)isTrusted;
- (id)expirationDate;
- (id)issueDate;
- (BOOL)isIdentity;
- (id)portalMemberID;
- (id)portalTeamName;
- (id)portalTeamID;
- (id)commonName;
- (id)certificateKinds;
- (void)validate;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;
- (id)initWithUnderlyingType:(id)arg1 logAspect:(id)arg2;

@end

