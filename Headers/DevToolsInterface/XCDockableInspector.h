//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPanel.h>

@class NSMenuItem;

@interface XCDockableInspector : PBXInspectorPanel
{
    NSMenuItem *_dockMenuItem;
}

- (id)label;
- (void)_validateDockMenu;
- (void)_lockInspector:(id)arg1;
- (id)dockMenuItems;
- (id)cloneInDock;
- (BOOL)canCloneInDock;
- (void)_viewDidLoad;
- (void)dealloc;
- (id)init;

@end
