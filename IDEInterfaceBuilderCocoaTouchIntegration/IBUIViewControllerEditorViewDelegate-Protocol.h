//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBUISimulatedBarMetrics, IBUITabBar, IBUITabBarItem, IBUIViewControllerEditorPlaceholderView, IBUIViewControllerEditorView, NSString, NSView;

@protocol IBUIViewControllerEditorViewDelegate <NSObject>
- (NSView *)bottomBarViewForEditorView:(IBUIViewControllerEditorView *)arg1 withSimulatedBarMetrics:(IBUISimulatedBarMetrics *)arg2;
- (NSView *)topBarViewForEditorView:(IBUIViewControllerEditorView *)arg1 withSimulatedBarMetrics:(IBUISimulatedBarMetrics *)arg2;
- (IBUITabBarItem *)editorView:(IBUIViewControllerEditorView *)arg1 selectedItemForSimulatedTabBar:(IBUITabBar *)arg2;
- (NSString *)editorView:(IBUIViewControllerEditorView *)arg1 explanitoryTextForPlaceholderView:(IBUIViewControllerEditorPlaceholderView *)arg2;
- (NSString *)editorView:(IBUIViewControllerEditorView *)arg1 subtitleForPlaceholderView:(IBUIViewControllerEditorPlaceholderView *)arg2;
- (NSString *)editorView:(IBUIViewControllerEditorView *)arg1 titleForPlaceholderView:(IBUIViewControllerEditorPlaceholderView *)arg2;
@end

