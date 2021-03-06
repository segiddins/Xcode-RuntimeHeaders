//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class NSArray, NSString, XCSUIDevicesContext;

@protocol XCSUIDevicesContextDelegate <NSObject>
- (BOOL)devicesContext:(XCSUIDevicesContext *)arg1 isAppThinningSupportedByRunDestination:(id)arg2;
- (NSString *)devicesContext:(XCSUIDevicesContext *)arg1 architectureForRunDestination:(id)arg2;
- (NSString *)devicesContext:(XCSUIDevicesContext *)arg1 platformIdentifierForRunDestination:(id)arg2;
- (NSArray *)devicesContext:(XCSUIDevicesContext *)arg1 runDestinationsForScheme:(id)arg2;
- (BOOL)devicesContext:(XCSUIDevicesContext *)arg1 isPairedProxyDeviceRequiredForScheme:(id)arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 didUpdateToolchains:(NSArray *)arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 didUpdateDevices:(NSArray *)arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 didUpdatePlatforms:(NSArray *)arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 toolchainsForCurrentService:(void (^)(NSArray *, NSError *))arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 devicesForCurrentService:(void (^)(NSArray *, NSError *))arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 platformsForCurrentService:(void (^)(NSArray *, NSError *))arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 didEndListeningToService:(id)arg2;
- (void)devicesContext:(XCSUIDevicesContext *)arg1 willBeginListeningToService:(id)arg2;
@end

