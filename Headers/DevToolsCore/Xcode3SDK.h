//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, XCMacroExpansionScope, XCSDKPackage, Xcode3Platform;

@interface Xcode3SDK : NSObject
{
    XCMacroExpansionScope *_coreMacroExpansionScope;
    NSArray *_libraries;
    NSArray *_companionLibraries;
    Xcode3Platform *_platform;
    XCSDKPackage *_sdkPackage;
    NSDictionary *_infoDictionary;
}

+ (id)sdkForUnsetSDKROOT;
+ (id)sdkForDisplayName:(id)arg1;
+ (id)sdkForCanonicalName:(id)arg1;
+ (id)sdkForAbsolutePath:(id)arg1;
+ (id)sdkForNameOrPath:(id)arg1;
+ (id)sdkForSDKPackage:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) XCSDKPackage *sdkPackage; // @synthesize sdkPackage=_sdkPackage;
@property(retain) Xcode3Platform *platform; // @synthesize platform=_platform;
- (id)description;
- (long long)compare:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)absolutePathToBinaryNamed:(id)arg1 error:(id *)arg2;
- (id)_absolutePathToBinaryNamed:(id)arg1 inPlatformDomain:(id)arg2 error:(id *)arg3;
- (id)_absolutePathToBinaryNamed:(id)arg1 bySearchingInStandardLocationsAtRootPath:(id)arg2;
@property(readonly) NSArray *companionLibraries;
@property(readonly) NSArray *libraries;
- (BOOL)shouldExposeLibraryFromSDK:(id)arg1;
@property(readonly) NSDictionary *versionInfo;
@property(readonly) NSDictionary *infoDictionary;
@property(readonly) BOOL exists;
@property(readonly) NSString *canonicalName;
@property(readonly) NSString *displayName;
@property(readonly) NSString *version;
@property(readonly) NSString *path;
@property(readonly) XCMacroExpansionScope *coreMacroExpansionScope;
- (id)initWithSDKPackage:(id)arg1;

@end

