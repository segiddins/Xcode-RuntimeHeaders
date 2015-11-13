//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEArchivePackager : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
}

+ (id)packagerForIdentifier:(id)arg1;
+ (id)packagerForPlatform:(id)arg1;
+ (id)allPackagers;
+ (id)_createPackagerFromExtension:(id)arg1;
+ (id)_identifiersToPackagersMapping;
+ (id)_platformsToPackagersMapping;
+ (id)_extensionLock;
+ (id)_extensionPoint;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)packagingOperationForArchive:(id)arg1 withCodesignIdentity:(id)arg2 installerIdentity:(id)arg3 extraEntitlements:(id)arg4 includeSymbolCache:(BOOL)arg5 error:(id *)arg6;
- (id)signingOperationForArchive:(id)arg1 withCodesignIdentity:(id)arg2 extraEntitlements:(id)arg3 andError:(id *)arg4;
- (id)identitiesForBundleIdentifier:(id)arg1 andIdentityFilter:(id)arg2;
- (id)tokenForProvisioningProfileNamed:(id)arg1;
- (id)tokenForSigningIdentityNamed:(id)arg1;
- (id)dontSignIdentity;
@property(readonly) _Bool supportsSymbolUploads;
@property(readonly) _Bool supportsInstallerSigning;
@property(readonly) _Bool supportsCodeSigning;

@end

