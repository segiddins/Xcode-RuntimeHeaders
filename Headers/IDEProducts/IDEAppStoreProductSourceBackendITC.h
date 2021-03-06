//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEProducts/IDEAppStoreProductSourceBackend-Protocol.h>
#import <IDEProducts/IDEAppStoreProductSourceBackend_Private-Protocol.h>

@class NSString;

@interface IDEAppStoreProductSourceBackendITC : NSObject <IDEAppStoreProductSourceBackend, IDEAppStoreProductSourceBackend_Private>
{
}

+ (BOOL)isAdamIdBlacklisted:(id)arg1;
+ (BOOL)isAdamIdWhitelisted:(id)arg1;
+ (id)blackListedAdamIDs;
+ (id)whiteListedAdamIDs;
- (id)binaryInfosForVersion:(id)arg1;
- (id)productsFromAppDescription:(id)arg1 versionDescriptions:(id)arg2 coordinator:(id)arg3;
- (id)appStoreProductsResultForAccount:(id)arg1 iTunesConnect:(id)arg2 coordinator:(id)arg3 performanceMetric:(id)arg4 productLocationResultNotification:(CDUnknownBlockType)arg5;
- (id)supportedDeviceTypesForAppVersion:(id)arg1 productCategory:(id)arg2;
- (id)productsForAppDescription:(id)arg1 session:(id)arg2 iTunesConnect:(id)arg3 performanceMetric:(id)arg4 coordinator:(id)arg5;
- (id)versionDescriptionsForAppDescription:(id)arg1 session:(id)arg2 iTunesConnect:(id)arg3 performanceMetric:(id)arg4 error:(id *)arg5;
- (id)appDescriptionsForAccountSession:(id)arg1 iTunesConnect:(id)arg2 performanceMetric:(id)arg3 error:(id *)arg4;
- (void)appStoreProductsForAccounts:(id)arg1 coordinator:(id)arg2 failedSessionAccountNames:(id)arg3 errors:(id)arg4 performanceMetric:(id)arg5 productLocationResultNotification:(CDUnknownBlockType)arg6;
- (id)createOptedIntoMacAppStoreProductWithOriginalProduct:(id)arg1 originalVersionDescriptions:(id)arg2 coordinator:(id)arg3 log:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

