//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class IDEWorkspaceTabController, NSWindow;
@protocol IDECIService;

@protocol IDEContinuousIntegrationCreateEditBotWindowController <NSObject>
- (void)beginSessionModalForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 redefineBot:(id)arg2 hostWindow:(NSWindow *)arg3 withCompletionBlock:(void (^)(int, id, NSError *))arg4;
- (void)beginSessionModalForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 selectedService:(id <IDECIService>)arg2 hostWindow:(NSWindow *)arg3 withCompletionBlock:(void (^)(int, id, NSError *))arg4;
@end

