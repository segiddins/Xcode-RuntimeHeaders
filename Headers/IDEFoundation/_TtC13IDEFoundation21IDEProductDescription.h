//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC13IDEFoundation21IDEProductDescription : NSObject
{
    MISSING_TYPE *displayName;
    MISSING_TYPE *productName;
    MISSING_TYPE *identifier;
    MISSING_TYPE *dependencies;
    MISSING_TYPE *bundleIdentifier;
    MISSING_TYPE *deploymentTarget;
    MISSING_TYPE *marketingVersion;
    MISSING_TYPE *buildVersion;
    MISSING_TYPE *enableBitcode;
    MISSING_TYPE *team;
    MISSING_TYPE *infoPlistPath;
    MISSING_TYPE *iconPath;
    MISSING_TYPE *rawCodesign;
    MISSING_TYPE *rawProductType;
    MISSING_TYPE *rawTargetedDeviceFamilies;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *rawTargetedDeviceFamilies;
@property(nonatomic, readonly) NSString *rawProductType;
@property(nonatomic, readonly) NSString *rawCodesign;
@property(nonatomic, readonly) NSString *iconPath;
@property(nonatomic, readonly) NSString *infoPlistPath;
@property(nonatomic, readonly) NSString *team;
@property(nonatomic, readonly) BOOL enableBitcode; // @synthesize enableBitcode;
@property(nonatomic, readonly) NSString *buildVersion;
@property(nonatomic, readonly) NSString *marketingVersion;
@property(nonatomic, readonly) NSString *deploymentTarget;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSArray *dependencies;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *productName;
@property(nonatomic, readonly) NSString *displayName;

@end

