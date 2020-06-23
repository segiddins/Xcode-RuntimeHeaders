//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProductVersion.h>

@class IDEProductExtensionCategory, NSString;

@interface IDEProductVersionExtension : IDEProductVersion
{
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
    IDEProductExtensionCategory *_extensionCategory;
    NSString *_extensionPointIdentifier;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)productVersionByMerging:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly) IDEProductExtensionCategory *extensionCategory; // @synthesize extensionCategory=_extensionCategory;
@property(retain) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)JSONRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)productExtensionCategory;
- (id)cachePathWithRootProductVersion:(id)arg1 productDirectory:(id)arg2;
- (id)initWithProductVersionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 name:(id)arg5 childProducts:(id)arg6 productCategory:(id)arg7 extensionPointIdentifier:(id)arg8;

@end

