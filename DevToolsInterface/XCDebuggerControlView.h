//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCScopeBarBackgroundView.h>

@class NSMutableArray, NSPopUpButton, PBXDebugSessionModule, XCDebuggerControlViewButton;

@interface XCDebuggerControlView : XCScopeBarBackgroundView
{
    NSPopUpButton *_threadPopUp;
    NSPopUpButton *_stackPopUp;
    struct CGRect _originalStackPopUpBounds;
    XCDebuggerControlViewButton *_stepOutButton;
    XCDebuggerControlViewButton *_stepIntoButton;
    XCDebuggerControlViewButton *_stepOverButton;
    XCDebuggerControlViewButton *_stepBackBitton;
    XCDebuggerControlViewButton *_pauseButton;
    XCDebuggerControlViewButton *_continueButton;
    NSMutableArray *_debugControlButtons;
    XCDebuggerControlViewButton *breakpointsOnOffButton;
    BOOL configured;
    BOOL _debuggerBarUnbound;
    BOOL _fileNavigatorIsVisible;
    PBXDebugSessionModule *_sessionModule;
}

- (void)setFileNavigatorIsVisisble:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;
- (id)initWithFrame:(struct CGRect)arg1 projectDocument:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (void)unbindDebuggerBar;
- (void)debugSessionEnded:(id)arg1;
- (void)setupWithProjectDocument:(id)arg1;
- (void)setupWithDebugSessionModule:(id)arg1;
- (void)_changeStackFrame:(id)arg1;
- (void)_stackFrameChanged:(id)arg1;
- (void)_updateStackPopUpButtonSize;
- (BOOL)configured;

@end

