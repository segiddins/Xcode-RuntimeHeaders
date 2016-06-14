//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningSigningIdentity-Protocol.h>

@class DVTCertificateRecord, NSDate, NSString;

@interface IDEDVTCertificateRecord : NSObject <IDEProvisioningSigningIdentity>
{
    DVTCertificateRecord *_certificateRecord;
    NSString *_teamMemberID;
}

@property(copy, nonatomic) NSString *teamMemberID; // @synthesize teamMemberID=_teamMemberID;
@property(readonly, nonatomic) DVTCertificateRecord *certificateRecord; // @synthesize certificateRecord=_certificateRecord;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (id)platform;
- (id)_portalPlatform;
@property(readonly, copy, nonatomic) NSString *certificateKind;
@property(readonly, copy) NSString *description;
- (id)initWithCertificateRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

