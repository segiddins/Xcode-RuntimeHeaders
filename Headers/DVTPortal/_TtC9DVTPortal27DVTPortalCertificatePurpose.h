//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC9DVTPortal27DVTPortalCertificatePurpose : NSObject <NSCopying>
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *name;
    MISSING_TYPE *userVisibleName;
    MISSING_TYPE *automaticSelector;
    MISSING_TYPE *requiresSecureTimestamps;
}

+ (id)certificatePurposeWithName:(id)arg1;
+ (id)certificatePurposeWithIdentifier:(id)arg1;
+ (void)setAllCertificatePurposes:(id)arg1;
+ (id)allCertificatePurposes;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) BOOL requiresSecureTimestamps; // @synthesize requiresSecureTimestamps;
@property(nonatomic, readonly) NSString *automaticSelector;
@property(nonatomic, readonly) NSString *userVisibleName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *identifier;

@end

