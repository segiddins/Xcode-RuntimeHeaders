//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, NSURL;

@protocol XCSUIServiceKeychainDelegate
- (NSError *)deleteServiceCredentialsFromKeychain:(NSURL *)arg1 username:(NSString *)arg2;
- (NSError *)setPasswordInKeychainForService:(NSURL *)arg1 username:(NSString *)arg2 password:(NSString *)arg3;
- (NSString *)readPasswordFromKeychainForService:(NSURL *)arg1 username:(NSString *)arg2;
@end

