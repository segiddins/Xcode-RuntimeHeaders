//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTDaemonControl/NSObject-Protocol.h>

@class Protocol;
@protocol XCTDaemonProxy;

@protocol XCTDaemonProxyProviding <NSObject>
- (void)invalidate;
- (void)registerDisconnectHandler:(void (^)(void))arg1;
- (id <XCTDaemonProxy>)makeDaemonProxyWithRemoteInterface:(Protocol *)arg1 exportedInterface:(Protocol *)arg2;
@end

