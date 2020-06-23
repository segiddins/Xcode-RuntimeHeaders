//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTDeviceKitBase/NSObject-Protocol.h>

@class DVTKeychain, NSDictionary, NSString;

@protocol DVTDeveloperProfileAccountProvider <NSObject>
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(DVTKeychain *)arg1 propertyList:(NSDictionary *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(DVTKeychain *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
@end

