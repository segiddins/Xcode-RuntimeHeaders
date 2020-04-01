//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSDKVariant, IDEBuildParameters, NSArray, NSSet, NSString, PBXTarget, XCMacroExpansionScope, XCSDKPackage, Xcode3ProductType;

@interface XCDerivedTargetAttributes : NSObject
{
    PBXTarget *_target;
    IDEBuildParameters *_buildParameters;
    XCMacroExpansionScope *_macroExpansionScope;
    NSString *_fullProductName;
    NSString *_productModuleName;
    NSString *_builtProductsDir;
    NSString *_absPathForBuildProduct;
    XCSDKPackage *_sdkPackage;
    BOOL _didResolveSdkPackage;
    DVTSDKVariant *_sdkVariant;
    NSArray *_architectures;
    NSSet *_namesOfLinkedBinaries;
    NSSet *_pathsOfFilesInLinkBinariesPhase;
    NSSet *_pathsOfFilesInCopyFilesPhases;
    NSArray *_productHeadersPaths;
    NSArray *_availableArchitectures;
    NSSet *_supportedPlatforms;
    Xcode3ProductType *_productType;
    BOOL _hasCreatedTargetPathInfo;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) Xcode3ProductType *productType;
@property(readonly, copy) NSSet *supportedPlatforms;
- (id)productHeadersPaths;
- (id)pathsOfFilesInCopyFilesPhases;
- (id)pathsOfFilesInLinkBinariesPhase;
- (id)namesOfLinkedBinaries;
- (void)_createDerivedTargetPathInfoIfNecessary;
- (id)architectures;
@property(readonly, copy) NSArray *availableArchitectures;
- (id)sdkVariant;
- (id)sdkPackage;
- (id)absolutePathForBuildProduct;
- (id)builtProductsDir;
- (id)fullProductName;
- (id)macroExpansionScope;
- (id)initWithTarget:(id)arg1 targetBuildParameters:(id)arg2;

@end

