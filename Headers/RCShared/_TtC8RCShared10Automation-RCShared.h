//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RCShared/_TtC8RCShared10Automation.h>

#import <RCShared/NSXPCListenerDelegate-Protocol.h>
#import <RCShared/_TtP8RCShared17AutomationService_-Protocol.h>

@interface _TtC8RCShared10Automation (RCShared) <NSXPCListenerDelegate, _TtP8RCShared17AutomationService_>
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performWithAction:(id)arg1 parameters:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)pingWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
@end

