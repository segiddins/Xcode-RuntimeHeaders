//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSView;

@interface XCWindow : NSWindow
{
    NSView *_mainView;
    NSView *_statusView;
    NSView *_shelfView;
    BOOL _isProcessModeSwitch;
    BOOL _firstReponderLocked;
    BOOL _statusViewOnBottom;
    BOOL _isMainApplicationWindow;
    BOOL _delegateInterceptsKeyEquivalents;
    BOOL _xcDisplayEvenIfNotVisible;
    BOOL _xcWasDisplayedWhileHidden;
}

- (void)activateFromDockMenu:(id)arg1;
- (void)activateFromWindowMenu:(id)arg1;
- (void)orderFrontRegardless;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)_xcUpdateDisplayStateAfterHiding;
- (void)display;
- (void)displayIfNeeded;
- (BOOL)displayEvenIfNotVisible;
- (void)setDisplayEvenIfNotVisible:(BOOL)arg1;
- (void)_moduleDeallocNotification:(id)arg1;
- (unsigned long long)_autoPositionMask;
- (BOOL)isMainApplicationWindow;
- (void)setIsMainApplicationWindow:(BOOL)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (BOOL)isFirstResponderLocked;
- (void)setFirstResponderLocked:(BOOL)arg1;
- (BOOL)isProcessModeSwitch;
- (void)setIsProcessModeSwitch:(BOOL)arg1;
- (void)selectPreviousKeyView:(id)arg1;
- (void)selectNextKeyView:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)_positionViews;
- (id)_tempHide:(BOOL)arg1 relWin:(long long)arg2;
- (void)_displayChanged;
- (void)zoom:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)isShelfViewVisible;
- (void)setShelfViewVisible:(BOOL)arg1;
- (id)shelfView;
- (void)setShelfView:(id)arg1;
- (BOOL)isStatusViewVisible;
- (void)setStatusViewVisible:(BOOL)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (BOOL)mainViewIsVisible;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_setupXCWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)init;

@end

