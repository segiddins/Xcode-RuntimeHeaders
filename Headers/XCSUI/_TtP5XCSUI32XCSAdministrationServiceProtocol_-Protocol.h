//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, XCSUIXPCRequest, XCSXPCACLPayload, XCSXPCSettingsPayload;

@protocol _TtP5XCSUI32XCSAdministrationServiceProtocol_
- (void)setServiceEnabledWith:(XCSUIXPCRequest *)arg1 enabled:(BOOL)arg2 response:(void (^)(BOOL, NSError *))arg3;
- (void)updatePermissionsWith:(XCSUIXPCRequest *)arg1 payload:(XCSXPCACLPayload *)arg2 response:(void (^)(BOOL, NSError *))arg3;
- (void)fetchPermissionsWith:(XCSUIXPCRequest *)arg1 response:(void (^)(XCSXPCACLPayload *, NSError *))arg2;
- (void)updateSettingsWith:(XCSUIXPCRequest *)arg1 payload:(XCSXPCSettingsPayload *)arg2 response:(void (^)(BOOL, NSError *))arg3;
- (void)fetchSettingsWith:(XCSUIXPCRequest *)arg1 response:(void (^)(XCSXPCSettingsPayload *, NSError *))arg2;
- (void)createNewSystemUserWith:(XCSUIXPCRequest *)arg1 fullName:(NSString *)arg2 shortName:(NSString *)arg3 password:(NSString *)arg4 isAdministrator:(BOOL)arg5 response:(void (^)(BOOL, NSError *))arg6;
- (void)reinitializeServiceWith:(XCSUIXPCRequest *)arg1 response:(void (^)(BOOL, NSError *))arg2;
- (void)initializeServiceWith:(NSString *)arg1 request:(XCSUIXPCRequest *)arg2 response:(void (^)(BOOL, NSError *))arg3;
- (void)pingServiceWith:(XCSUIXPCRequest *)arg1 response:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)shutdownServiceWith:(XCSUIXPCRequest *)arg1 response:(void (^)(BOOL, NSError *))arg2;
- (void)getServiceVersionWithResponse:(void (^)(NSString *, NSString *, NSString *, NSString *))arg1;
- (void)relocateServiceDataWith:(XCSUIXPCRequest *)arg1 to:(NSString *)arg2 response:(void (^)(BOOL, NSError *))arg3;
- (void)buildServiceStatusWith:(XCSUIXPCRequest *)arg1 response:(void (^)(BOOL, NSError *))arg2;
@end

