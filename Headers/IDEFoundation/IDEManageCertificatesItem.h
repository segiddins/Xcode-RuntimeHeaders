//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalCertificateType, DVTSigningCertificate, NSDate, NSString;
@protocol DVTPortalCertificateProtocol;

@interface IDEManageCertificatesItem : NSObject
{
    BOOL _isValid;
    NSString *_serialNumber;
    NSString *_creatorEmail;
    DVTPortalCertificateType *_type;
    id <DVTPortalCertificateProtocol> _portalCertificate;
    DVTSigningCertificate *_localCertificate;
    NSString *_name;
    unsigned long long _state;
    NSString *_creator;
    NSDate *_dateCreated;
}

@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) DVTSigningCertificate *localCertificate; // @synthesize localCertificate=_localCertificate;
@property(retain, nonatomic) id <DVTPortalCertificateProtocol> portalCertificate; // @synthesize portalCertificate=_portalCertificate;
@property(retain, nonatomic) DVTPortalCertificateType *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *creatorEmail; // @synthesize creatorEmail=_creatorEmail;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (unsigned long long)_stateForPortalCertificate:(id)arg1 localCertificate:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithPortalCertificate:(id)arg1 localCertificate:(id)arg2;
- (id)initWithSerialNumber:(id)arg1 certificateType:(id)arg2;

@end

