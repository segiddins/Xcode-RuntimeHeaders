//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class DVTExtension, NSSet, NSString, _TtC9DVTPortal27DVTPortalCertificatePurpose;

@interface DVTPortalCertificateType : NSObject <NSCopying>
{
    NSString *_installerCertificateIdentifier;
    BOOL _teamMemberSpecific;
    BOOL _supportsOneCertPerMac;
    BOOL _isInstallerCertificate;
    BOOL _managed;
    BOOL _canBeUsedByMembers;
    BOOL _canBeUsedByAdmins;
    BOOL _canBeCreatedByFreeTeams;
    BOOL _canBeCreatedByEnterpriseTeams;
    BOOL _canBeCreatedByUniversityTeams;
    BOOL _canBeRevoked;
    BOOL _canBeRevokedByEnterpriseTeams;
    BOOL _isLegacyType;
    NSString *_name;
    NSSet *_portalPrograms;
    NSSet *_certificateOIDs;
    NSString *_automaticSelector;
    NSString *_automaticSelectorDescription;
    NSString *_portalIdentifier;
    _TtC9DVTPortal27DVTPortalCertificatePurpose *_purpose;
    DVTExtension *_extension;
    NSString *_distributionType;
    NSString *_distributionMethod;
    NSString *_listServiceIdentifier;
    NSString *_requestServiceIdentifier;
    NSString *_revokeServiceIdentifier;
    NSString *_listCSRServiceIdentifier;
    NSString *_keyNameFormat;
}

+ (id)certificateTypesForPurpose:(id)arg1;
+ (id)certificateTypeForAutomaticSelector:(id)arg1;
+ (id)certificateTypeWithOIDs:(id)arg1;
+ (id)certificateTypesMatchingOIDs:(id)arg1;
+ (id)certificateTypeWithIdentifier:(id)arg1;
+ (id)certificateTypeWithPortalIdentifier:(id)arg1;
+ (id)certificateTypesForPortalProgram:(id)arg1;
+ (id)allCertificateTypes;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isLegacyType; // @synthesize isLegacyType=_isLegacyType;
@property(readonly, nonatomic) BOOL canBeRevokedByEnterpriseTeams; // @synthesize canBeRevokedByEnterpriseTeams=_canBeRevokedByEnterpriseTeams;
@property(readonly, nonatomic) BOOL canBeRevoked; // @synthesize canBeRevoked=_canBeRevoked;
@property(readonly, nonatomic) BOOL canBeCreatedByUniversityTeams; // @synthesize canBeCreatedByUniversityTeams=_canBeCreatedByUniversityTeams;
@property(readonly, nonatomic) BOOL canBeCreatedByEnterpriseTeams; // @synthesize canBeCreatedByEnterpriseTeams=_canBeCreatedByEnterpriseTeams;
@property(readonly, nonatomic) BOOL canBeCreatedByFreeTeams; // @synthesize canBeCreatedByFreeTeams=_canBeCreatedByFreeTeams;
@property(readonly, nonatomic) BOOL canBeUsedByAdmins; // @synthesize canBeUsedByAdmins=_canBeUsedByAdmins;
@property(readonly, nonatomic) BOOL canBeUsedByMembers; // @synthesize canBeUsedByMembers=_canBeUsedByMembers;
@property(readonly, nonatomic) NSString *keyNameFormat; // @synthesize keyNameFormat=_keyNameFormat;
@property(readonly, nonatomic) NSString *listCSRServiceIdentifier; // @synthesize listCSRServiceIdentifier=_listCSRServiceIdentifier;
@property(readonly, nonatomic) NSString *revokeServiceIdentifier; // @synthesize revokeServiceIdentifier=_revokeServiceIdentifier;
@property(readonly, nonatomic) NSString *requestServiceIdentifier; // @synthesize requestServiceIdentifier=_requestServiceIdentifier;
@property(readonly, nonatomic) NSString *listServiceIdentifier; // @synthesize listServiceIdentifier=_listServiceIdentifier;
@property(readonly, nonatomic) NSString *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(readonly, nonatomic) NSString *distributionType; // @synthesize distributionType=_distributionType;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) _TtC9DVTPortal27DVTPortalCertificatePurpose *purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic, getter=isManaged) BOOL managed; // @synthesize managed=_managed;
@property(readonly, nonatomic) NSString *portalIdentifier; // @synthesize portalIdentifier=_portalIdentifier;
@property(readonly, nonatomic) NSString *automaticSelectorDescription; // @synthesize automaticSelectorDescription=_automaticSelectorDescription;
@property(readonly, nonatomic) NSString *automaticSelector; // @synthesize automaticSelector=_automaticSelector;
@property(readonly, nonatomic) BOOL isInstallerCertificate; // @synthesize isInstallerCertificate=_isInstallerCertificate;
@property(readonly, nonatomic) BOOL supportsOneCertPerMac; // @synthesize supportsOneCertPerMac=_supportsOneCertPerMac;
@property(readonly, nonatomic, getter=isTeamMemberSpecific) BOOL teamMemberSpecific; // @synthesize teamMemberSpecific=_teamMemberSpecific;
@property(readonly, nonatomic) NSSet *certificateOIDs; // @synthesize certificateOIDs=_certificateOIDs;
@property(readonly, nonatomic) NSSet *portalPrograms; // @synthesize portalPrograms=_portalPrograms;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)keyNameForTeam:(id)arg1;
- (id)_listCSRServiceForTeam:(id)arg1;
- (id)_revokeServiceForCertificate:(id)arg1;
- (id)_requestServiceForTeam:(id)arg1 machineName:(id)arg2 machineID:(id)arg3 csr:(id)arg4;
- (id)_listServiceForTeam:(id)arg1;
@property(readonly, nonatomic) DVTPortalCertificateType *installerCertificateType;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_assertValidity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtension:(id)arg1;
- (id)init;

@end

