//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAuthenticationStrategy.h>

@class NSString, NSURL;

@interface DVTSourceControlSSHKeysAuthenticationStrategy : DVTSourceControlAuthenticationStrategy
{
    BOOL _usernameDefinedFromURL;
    NSString *_username;
    NSURL *_privateKeyFile;
    NSString *_privateKeyPassword;
}

+ (BOOL)supportsSecureCoding;
+ (id)sshAuthenticationAgentFingerprintKey;
+ (id)sshAuthenticationAgentEnforceFingerprintKey;
+ (id)sshAuthenticationAgentPassphraseKey;
+ (id)sshAuthenticationAgentPasswordKey;
+ (id)sshAuthenticationAgentUsernameKey;
+ (id)sshAuthenticationAgentExecutableURL;
+ (id)defaultSSHKeyAuthenticationStrategy;
+ (id)defaultSSHKeyAuthenticationStrategyWithUsername:(id)arg1;
+ (id)defaultSSHKeyAuthenticationStrategyWithUsername:(id)arg1 password:(id)arg2;
+ (id)defaultSSHKeyName;
+ (id)defaultSSHKeyFolder;
+ (BOOL)strategyIsValidForURL:(id)arg1;
+ (id)name;
+ (id)validateSSHKeysWithPrivateKeyURL:(id)arg1 passphrase:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)defaultSSHKeyAuthenticationStrategyForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)generateSSHKeysWithName:(id)arg1 comment:(id)arg2 passphrase:(id)arg3 inFolder:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (id)listSSHKeys:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy) NSString *privateKeyPassword; // @synthesize privateKeyPassword=_privateKeyPassword;
@property(retain) NSURL *privateKeyFile; // @synthesize privateKeyFile=_privateKeyFile;
@property(copy) NSString *username; // @synthesize username=_username;
@property BOOL usernameDefinedFromURL; // @synthesize usernameDefinedFromURL=_usernameDefinedFromURL;
@property(readonly) NSURL *keyDirectory;
@property(readonly) NSURL *publicKeyFile;
- (unsigned long long)type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringPassphrase:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLDefinedUsername:(id)arg1 privateKey:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 publicKeyData:(id)arg2 privateKeyData:(id)arg3 password:(id)arg4 sshKeyDirectory:(id)arg5;
- (id)initWithUsername:(id)arg1 privateKey:(id)arg2 password:(id)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)existsInStandardLocation;
@property(readonly) NSString *displayName;
- (id)privateKeyContents;
- (id)publicKeyContents;
- (id)_keyContents:(id)arg1;

@end

