//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAccount.h>

@class DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, MISSING_TYPE, NSString;

@interface DVTSourceControlHostedAccount : DVTSourceControlAccount
{
    MISSING_TYPE *username;
    MISSING_TYPE *sshKeysAuthenticationStrategy;
    MISSING_TYPE *basicAuthenticationStrategy;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)authenticationStrategyForURL:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) DVTSourceControlBasicAuthenticationStrategy *basicAuthenticationStrategy; // @synthesize basicAuthenticationStrategy;
@property(nonatomic, retain) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthenticationStrategy; // @synthesize sshKeysAuthenticationStrategy;
@property(nonatomic, readonly) NSString *sshUsername;
@property(nonatomic, copy) NSString *username;

@end

