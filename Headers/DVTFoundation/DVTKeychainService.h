//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString, NSXPCConnection;

@interface DVTKeychainService : NSObject <DVTInvalidation>
{
    NSXPCConnection *_connection;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)deleteInternetPasswordForServiceURL:(id)arg1 forUsername:(id)arg2 keychain:(id)arg3 error:(id *)arg4;
- (BOOL)saveInternetPassword:(id)arg1 forUsername:(id)arg2 serviceURL:(id)arg3 keychain:(id)arg4 error:(id *)arg5;
- (id)fetchInternetPasswordForUsername:(id)arg1 serviceURL:(id)arg2 keychain:(id)arg3 error:(id *)arg4;
- (BOOL)deletePasswordForUsername:(id)arg1 service:(id)arg2 keychain:(id)arg3 error:(id *)arg4;
- (BOOL)savePassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3 keychain:(id)arg4 error:(id *)arg5;
- (id)fetchSSHPasswordForUsername:(id)arg1 service:(id)arg2 keychain:(id)arg3 error:(id *)arg4;
- (id)fetchPasswordForUsername:(id)arg1 service:(id)arg2 keychain:(id)arg3 error:(id *)arg4;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

