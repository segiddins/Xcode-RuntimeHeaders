//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSWindowController;

@interface IDEWelcomeWindow : NSWindow
{
    NSWindowController *_controller;
}

@property(retain) NSWindowController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)performClose:(id)arg1;
- (void)dvt_performCloseWindow:(id)arg1;
- (void)close;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;

@end

