//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlRepository.h>

@class DVTSourceControlAccount, DVTSourceControlAuthenticationStrategy, DVTSourceControlPathLocation, NSString, NSURL;

@interface DVTSourceControlRemoteRepository : DVTSourceControlRepository
{
    BOOL _enforceTrustedServerFingerprint;
    DVTSourceControlAccount *_account;
    DVTSourceControlPathLocation *_defaultAuthenticationPath;
    unsigned long long _state;
    NSString *_trustedServerFingerprint;
}

+ (id)keyPathsForValuesAffectingAuthenticationStrategy;
+ (BOOL)supportsSecureCoding;
@property(retain) NSString *trustedServerFingerprint; // @synthesize trustedServerFingerprint=_trustedServerFingerprint;
@property BOOL enforceTrustedServerFingerprint; // @synthesize enforceTrustedServerFingerprint=_enforceTrustedServerFingerprint;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) DVTSourceControlAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(retain) DVTSourceControlAuthenticationStrategy *authenticationStrategy;
- (id)createWorkingCopyAtURL:(id)arg1 usingExistingWorkingCopyAtURL:(id)arg2 location:(id)arg3 branchAndTagLocations:(id)arg4 useRevision:(BOOL)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)createWorkingCopyAtURL:(id)arg1 location:(id)arg2 branchAndTagLocations:(id)arg3 useRevision:(BOOL)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)validateAuthenticationForLocation:(id)arg1 branchAndTagLocations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(copy) DVTSourceControlPathLocation *defaultAuthenticationPath; // @synthesize defaultAuthenticationPath=_defaultAuthenticationPath;
- (id)updateRepositoryURLRootWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSURL *anonymousURL;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveAccount;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 secondaryIdentifier:(id)arg3 sourceControlSystem:(id)arg4 unsavedAuthenticationStrategy:(id)arg5;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3 unsavedAuthenticationStrategy:(id)arg4;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 secondaryIdentifier:(id)arg3 sourceControlSystem:(id)arg4 authenticationStrategy:(id)arg5;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3 authenticationStrategy:(id)arg4;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2 unsavedAuthenticationStrategy:(id)arg3;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2 authenticationStrategy:(id)arg3;
- (id)_initWithURL:(id)arg1 sourceControlSystem:(id)arg2 authenticationStrategy:(id)arg3 save:(BOOL)arg4;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3 unsavedAccount:(id)arg4;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3 account:(id)arg4;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2 unsavedAccount:(id)arg3;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2 account:(id)arg3;
- (id)_initWithURL:(id)arg1 sourceControlSystem:(id)arg2 account:(id)arg3 save:(BOOL)arg4;
- (id)initUnsavedWithURL:(id)arg1 identifier:(id)arg2 secondaryIdentifier:(id)arg3 sourceControlSystem:(id)arg4;
- (id)initUnsavedWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3;
- (id)initUnsavedWithURL:(id)arg1 sourceControlSystem:(id)arg2;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2;
- (id)_initWithURL:(id)arg1 sourceControlSystem:(id)arg2 save:(BOOL)arg3;
- (id)_initWithURL:(id)arg1 sourceControlSystem:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

