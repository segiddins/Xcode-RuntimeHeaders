//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlAccount-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, NSString, NSURL;

@interface DVTSourceControlAccount : NSObject <DVTSourceControlAccount, NSSecureCoding, NSCopying>
{
    BOOL _savingDisabled;
    DVTSourceControlAuthenticationStrategy *_authenticationStrategy;
    NSString *_accountName;
    NSURL *_hostURL;
}

+ (void)registerFingerprintManager:(id)arg1;
+ (id)sharedFingerprintManager;
+ (void)registerAccountManager:(id)arg1;
+ (id)sharedAccountManager;
+ (BOOL)supportsSecureCoding;
+ (id)knownSSHHostsAndFingerprintsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
@property(copy) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain) DVTSourceControlAuthenticationStrategy *authenticationStrategy; // @synthesize authenticationStrategy=_authenticationStrategy;
@property BOOL savingDisabled; // @synthesize savingDisabled=_savingDisabled;
- (void)updatedExistingStrategy;
- (id)authenticationStrategyForURL:(id)arg1;
- (void)setAuthenticationStrategy:(id)arg1 forURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

