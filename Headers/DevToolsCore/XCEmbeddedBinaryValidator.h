//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCEmbeddedBinaryValidationContext;

@interface XCEmbeddedBinaryValidator : NSObject
{
    XCEmbeddedBinaryValidationContext *_context;
}

+ (id)validatorWithContext:(id)arg1;
+ (BOOL)wantsToValidateWithContext:(id)arg1;
+ (id)prefixedError:(id)arg1 isWarning:(BOOL)arg2;
@property(readonly) XCEmbeddedBinaryValidationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)validateExtensionActivationRuleFromInfoDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validateBundleIdentifierPrefixWithError:(id *)arg1;
- (BOOL)bundleIdentifierFromInfoDictionary:(id)arg1 hasPrefix:(id)arg2 error:(id *)arg3;
- (id)signingCertWithSHA1Hash:(id)arg1;
- (id)signatureSnapshotForEmbeddedBinaryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)signingCertForEmbeddedBinaryAtPath:(id)arg1 matchesSHA1Hash:(id)arg2 error:(id *)arg3;
- (BOOL)signatureSnapshot:(id)arg1 matchesParentAppSHA1Hash:(id)arg2 error:(id *)arg3;
- (BOOL)isValidWithError:(id *)arg1;
- (BOOL)canPlatform:(id)arg1 containContentForPlatform:(id)arg2;
- (BOOL)shouldCheckBundleIdentifierPrefixWithInfoDictionary:(id)arg1;

@end

