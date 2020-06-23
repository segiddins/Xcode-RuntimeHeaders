//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalProfilePurpose : NSObject
{
    BOOL _distribution;
    BOOL _mustContainDevices;
    BOOL _isUniversal;
    BOOL _allowsUnregisteredDevices;
    NSString *_name;
    NSString *_identifier;
    NSString *_portalDistributionType;
}

+ (id)profilePurposeWithName:(id)arg1;
+ (id)profilePurposeWithIdentifier:(id)arg1;
+ (id)allProfilePurposes;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allowsUnregisteredDevices; // @synthesize allowsUnregisteredDevices=_allowsUnregisteredDevices;
@property(readonly, nonatomic) BOOL isUniversal; // @synthesize isUniversal=_isUniversal;
@property(readonly, nonatomic) BOOL mustContainDevices; // @synthesize mustContainDevices=_mustContainDevices;
@property(readonly, nonatomic, getter=isDistribution) BOOL distribution; // @synthesize distribution=_distribution;
@property(readonly) NSString *portalDistributionType; // @synthesize portalDistributionType=_portalDistributionType;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

