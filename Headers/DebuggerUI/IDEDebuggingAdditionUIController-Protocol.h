//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/NSObject-Protocol.h>

@class DVTExtension, IDEWorkspaceTabController, NSCell, NSMenu;
@protocol IDEDebugGaugeDataSource, IDEDebuggingAddition;

@protocol IDEDebuggingAdditionUIController <NSObject, DVTInvalidation>
- (DVTExtension *)extension;
- (id)initWithWorkspaceTabController:(IDEWorkspaceTabController *)arg1 withDebuggingAddition:(id <IDEDebuggingAddition>)arg2 forExtension:(DVTExtension *)arg3;

@optional
- (id <IDEDebugGaugeDataSource>)dataSourceForNavigationProcessHeader;
- (NSCell *)trayCellForNavigationProcessHeader;
- (NSMenu *)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
@end

