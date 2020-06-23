//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class DVTDispatchLock, NSString;

@interface DVTKeychain : NSObject <NSSecureCoding>
{
    struct __SecKeychain *_keychain;
    DVTDispatchLock *_lock;
    BOOL _isDefaultKeychain;
    NSString *_path;
    NSString *_password;
}

+ (id)defaultKeychainWithError:(id *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *password; // @synthesize password=_password;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) BOOL isDefaultKeychain; // @synthesize isDefaultKeychain=_isDefaultKeychain;
- (struct __SecKeychain *)keychainRefWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeychainRef:(struct __SecKeychain *)arg1 password:(id)arg2 error:(id *)arg3;
- (id)initWithKeychainPath:(id)arg1 password:(id)arg2;
- (id)initWithKeychainPath:(id)arg1 password:(id)arg2 isDefaultKeychain:(BOOL)arg3;

@end

