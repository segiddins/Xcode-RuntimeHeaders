//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, XCSUIService, XCSUIServicesManager;

@protocol XCSUIServicesManagerDelegate
- (void)servicesManager:(XCSUIServicesManager *)arg1 serviceWasAdded:(XCSUIService *)arg2;
- (void)servicesManager:(XCSUIServicesManager *)arg1 serviceWasRemoved:(XCSUIService *)arg2;
- (void)servicesManager:(XCSUIServicesManager *)arg1 didReloadService:(XCSUIService *)arg2 error:(NSError *)arg3;
@end

