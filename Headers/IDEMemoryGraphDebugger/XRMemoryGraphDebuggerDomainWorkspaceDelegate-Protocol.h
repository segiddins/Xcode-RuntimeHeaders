//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEMemoryGraphDebugger/NSObject-Protocol.h>

@class XRMemoryGraphDebugger;

@protocol XRMemoryGraphDebuggerDomainWorkspaceDelegate <NSObject>
- (void)domainWorkspaceDidStopObserving:(id)arg1;
- (void)domainWorkspaceDidRemoveMemoryGraphDebugger:(XRMemoryGraphDebugger *)arg1;
- (void)domainWorkspaceDidAddMemoryGraphDebugger:(XRMemoryGraphDebugger *)arg1;
@end
