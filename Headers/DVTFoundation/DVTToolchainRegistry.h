//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, DVTDispatchLock, DVTSearchPath, DVTToolchain, NSDictionary, NSMutableDictionary, NSSet;
@protocol DVTUserDefaults;

@interface DVTToolchainRegistry : NSObject
{
    DVTSearchPath *_searchPath;
    NSSet *_appleApprovedPaths;
    id <DVTUserDefaults> _userDefaults;
    DVTDispatchLock *_lock;
    NSSet *_toolchains;
    NSDictionary *_invalidToolchains;
    NSMutableDictionary *_identsToToolchains;
    NSMutableDictionary *_aliasesToToolchains;
    DVTDelayedInvocation *_scanSearchPathsInvocation;
}

+ (BOOL)verifySignatureRevocationStatusForPath:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingAvailableSwiftVersionToolchains;
+ (id)keyPathsForValuesAffectingAvailableOverrideToolchains;
+ (id)keyPathsForValuesAffectingAvailableBuildSystemToolchains;
+ (id)keyPathsForValuesAffectingActiveDefaultToolchain;
+ (id)keyPathsForValuesAffectingDefaultToolchainOverride;
+ (id)keyPathsForValuesAffectingDefaultToolchain;
+ (id)defaultRegistry;
- (void).cxx_destruct;
- (BOOL)isBuiltInToolchain:(id)arg1;
- (BOOL)verifyToolchain:(id)arg1 error:(id *)arg2;
@property(readonly) NSSet *availableSwiftVersionToolchains;
@property(readonly) NSSet *availableOverrideToolchains;
@property(readonly) NSSet *availableBuildSystemToolchains;
- (id)toolchainsForToolchainsBuildSettingValue:(id)arg1;
@property(readonly) DVTToolchain *activeDefaultToolchain;
@property(retain) DVTToolchain *defaultToolchainOverride;
- (void)scanSearchPaths;
- (BOOL)scanSearchPathAndRegisterToolchains:(id *)arg1;
@property(readonly) DVTToolchain *defaultToolchain;
- (id)_toolchainForIdentifier:(id)arg1;
- (id)toolchainForIdentifier:(id)arg1;
- (id)toolchainForIdentifier:(id)arg1 includingOverrides:(BOOL)arg2;
- (id)allRegisteredToolchains;
- (BOOL)registerToolchain:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *invalidToolchains;
@property(readonly) NSSet *toolchains;
- (void)dealloc;
- (id)init;
- (id)initWithSearchPath:(id)arg1 appleApprovedPaths:(id)arg2 userDefaults:(id)arg3;

@end
