//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSDictionary, NSSet, NSString;

@interface DVTPortalProgram : NSObject
{
    NSString *_identifier;
    NSString *_portalIdentifier;
    NSString *_developerAPIIdentifier;
    NSSet *_platforms;
    DVTPlatform *_primaryPlatform;
    NSString *_userDescription;
    NSDictionary *_certificatePurposes;
}

+ (id)portalProgramForCertificateOID:(id)arg1;
+ (id)portalProgramWithIdentifier:(id)arg1;
+ (id)portalProgramWithDeveloperAPIIdentifier:(id)arg1;
+ (id)portalProgramWithPortalIdentifier:(id)arg1;
+ (id)_certificateOIDToPortalProgramMap;
+ (id)_identifierToPortalProgramMap;
+ (id)_developerAPIIdentifierToPortalProgramMap;
+ (id)_portalIdentifierToPortalProgramMap;
+ (id)_platformsFromExtension:(id)arg1 primaryPlatform:(id *)arg2;
+ (id)portalPrograms;
@property(retain) NSDictionary *certificatePurposes; // @synthesize certificatePurposes=_certificatePurposes;
@property(readonly, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly, nonatomic) DVTPlatform *primaryPlatform; // @synthesize primaryPlatform=_primaryPlatform;
@property(readonly, nonatomic) NSSet *platforms; // @synthesize platforms=_platforms;
@property(readonly, nonatomic) NSString *developerAPIIdentifier; // @synthesize developerAPIIdentifier=_developerAPIIdentifier;
@property(readonly, nonatomic) NSString *portalIdentifier; // @synthesize portalIdentifier=_portalIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)certificatePurposeForOID:(id)arg1;
- (id)primaryCertificateTypeForPurpose:(id)arg1;
- (id)certificateOIDForPurpose:(id)arg1;
- (id)unsupportedFeaturesWithFeatures:(id)arg1;
- (BOOL)supportsFeature:(id)arg1;

@end

