//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEWorkspaceDFRDebugBarItemFactory, NSControl, NSPopoverTouchBarItem;

@protocol IDEWorkspaceDFRDebugBarItemFactoryControlDelegate <NSObject>
- (BOOL)stopActionShouldPromptToChooseProcessForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
- (void)debugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1 stopPopoverFunctionBarItemWasCreated:(NSPopoverTouchBarItem *)arg2;
- (NSControl *)stopControlForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
- (NSControl *)debugSteppingSegmentedControlForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
- (NSControl *)debugPauseResumeControlForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
- (NSControl *)debugExtrasControlForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
- (NSControl *)debugBreakpointsControlForDebugBarItemFactory:(IDEWorkspaceDFRDebugBarItemFactory *)arg1;
@end

