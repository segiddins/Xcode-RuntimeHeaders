//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIODebugGaugesUI/DVTInvalidation-Protocol.h>
#import <IDEIODebugGaugesUI/NSObject-Protocol.h>

@class DVTExtension, IDEWorkspaceTabController, NSCell, NSMenu;
@protocol DBGDebugNavigatorContentDataSource, IDEDebugGaugeDataSource, IDEDebuggingAddition;

@protocol IDEDebuggingAdditionUIController <NSObject, DVTInvalidation>
- (DVTExtension *)extension;
- (id)initWithWorkspaceTabController:(IDEWorkspaceTabController *)arg1 withDebuggingAddition:(id <IDEDebuggingAddition>)arg2 forExtension:(DVTExtension *)arg3;

@optional
- (id <DBGDebugNavigatorContentDataSource>)debugNavigatorContentDataSource;
- (id <IDEDebugGaugeDataSource>)dataSourceForNavigationProcessHeader;
- (NSCell *)trayCellForNavigationProcessHeader;
- (NSMenu *)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
@end

