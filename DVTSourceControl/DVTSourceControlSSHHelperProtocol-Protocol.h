//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol DVTSourceControlSSHHelperProtocol <NSObject>
- (void)uploadPublicSSHKeyFromFolder:(NSURL *)arg1 toServer:(NSURL *)arg2 forUsername:(NSString *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)knownHostsWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)defaultSSHKeyAuthenticationStrategyForURL:(NSURL *)arg1 completionBlock:(void (^)(DVTSourceControlSSHKeysAuthenticationStrategy *, NSError *))arg2;
- (void)generateSSHKeysWithPassphrase:(NSString *)arg1 inFolder:(NSURL *)arg2 completionBlock:(void (^)(DVTSourceControlSSHKeysAuthenticationStrategy *, NSError *))arg3;
- (void)generateSSHKeysWithPassphrase:(NSString *)arg1 comment:(NSString *)arg2 inFolder:(NSURL *)arg3 completionBlock:(void (^)(DVTSourceControlSSHKeysAuthenticationStrategy *, NSError *))arg4;
- (void)validateSSHKeysWithPrivateKeyURL:(NSURL *)arg1 completionBlock:(void (^)(NSError *))arg2;
@end

