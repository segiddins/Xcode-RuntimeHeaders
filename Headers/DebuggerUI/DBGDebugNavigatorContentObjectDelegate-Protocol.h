//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class DBGDebugNavigatorContentDelegate;

@protocol DBGDebugNavigatorContentObjectDelegate <NSObject>
- (void)openSelectedObjectWithEventType:(unsigned long long)arg1 contentDelegate:(DBGDebugNavigatorContentDelegate *)arg2;

@optional
- (BOOL)supportsUserInterfaceCopyActionWithContentDelegate:(DBGDebugNavigatorContentDelegate *)arg1;
- (BOOL)supportsUserInterfaceDeleteActionWithContentDelegate:(DBGDebugNavigatorContentDelegate *)arg1;
- (void)handleUserDirectDeleteWithContentDelegate:(DBGDebugNavigatorContentDelegate *)arg1;
@end
