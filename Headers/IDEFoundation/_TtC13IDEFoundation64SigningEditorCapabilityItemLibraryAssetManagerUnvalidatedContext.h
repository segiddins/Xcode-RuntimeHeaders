//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, IDEProductType, MISSING_TYPE, NSSet, NSString;
@protocol IDEProvisioningBasicTeam;

@interface _TtC13IDEFoundation64SigningEditorCapabilityItemLibraryAssetManagerUnvalidatedContext : NSObject
{
    MISSING_TYPE *target;
    MISSING_TYPE *configuration;
    MISSING_TYPE *platform;
    MISSING_TYPE *isMacCatalystTarget;
    MISSING_TYPE *productType;
    MISSING_TYPE *isXPCTarget;
    MISSING_TYPE *appExtensionPointIdentifier;
    MISSING_TYPE *team;
    MISSING_TYPE *supportsCapabilities;
    MISSING_TYPE *enabledCapabilityItemIdentifiers;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTarget:(id)arg1 configuration:(id)arg2 platform:(id)arg3 isMacCatalystTarget:(BOOL)arg4 productType:(id)arg5 isXPCTarget:(BOOL)arg6 appExtensionPointIdentifier:(id)arg7 team:(id)arg8 supportsCapabilities:(BOOL)arg9 enabledCapabilityItemIdentifiers:(id)arg10;
@property(nonatomic, readonly) NSSet *enabledCapabilityItemIdentifiers;
@property(nonatomic, readonly) BOOL supportsCapabilities; // @synthesize supportsCapabilities;
@property(nonatomic, readonly) id <IDEProvisioningBasicTeam> team; // @synthesize team;
@property(nonatomic, readonly) NSString *appExtensionPointIdentifier;
@property(nonatomic, readonly) BOOL isXPCTarget; // @synthesize isXPCTarget;
@property(nonatomic, readonly) IDEProductType *productType; // @synthesize productType;
@property(nonatomic, readonly) BOOL isMacCatalystTarget; // @synthesize isMacCatalystTarget;
@property(nonatomic, readonly) DVTPlatform *platform; // @synthesize platform;
@property(nonatomic, readonly) NSString *configuration;
@property(nonatomic, readonly) NSString *target;

@end

