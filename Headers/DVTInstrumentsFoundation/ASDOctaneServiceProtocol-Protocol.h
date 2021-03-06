//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol ASDOctaneServiceProtocol
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(NSString *)arg3 completion:(void (^)(NSError *, BOOL))arg4;
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 completion:(void (^)(NSError *, long long))arg3;
- (void)setStorefront:(NSString *)arg1 forBundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)saveConfigurationData:(NSData *)arg1 forBundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeConfigurationForBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)performAction:(long long)arg1 transactionID:(unsigned long long)arg2 bundleID:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)getTransactionDataForBundleID:(NSString *)arg1 completion:(void (^)(NSError *, NSData *))arg2;
- (void)getStorefrontForBundleID:(NSString *)arg1 completion:(void (^)(NSError *, NSString *))arg2;
- (void)getActivePortWithCompletion:(void (^)(long long))arg1;
- (void)forceRenewalOfSubscriptionWithProductID:(NSString *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)expireSubscriptionWithProductID:(NSString *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteAllTransactionsForBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)completeAskToBuyRequestWithResponse:(BOOL)arg1 transactionID:(unsigned long long)arg2 bundleID:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)clearOverridesForBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)changeAutoRenewStatus:(BOOL)arg1 transactionID:(unsigned long long)arg2 bundleID:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)buyProductWithID:(NSString *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

