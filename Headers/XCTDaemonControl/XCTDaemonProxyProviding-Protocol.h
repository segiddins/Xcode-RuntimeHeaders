//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTDaemonControl/NSObject-Protocol.h>

@class Protocol;
@protocol XCTDaemonProxy;

@protocol XCTDaemonProxyProviding <NSObject>
- (void)invalidate;
- (void)registerDisconnectHandler:(void (^)(void))arg1;
- (id <XCTDaemonProxy>)makeDaemonProxyWithRemoteInterface:(Protocol *)arg1 exportedInterface:(Protocol *)arg2;
@end
