//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTDeviceKit/NSObject-Protocol.h>

@class NSArray, NSCoder, NSEvent, NSMenu, NSNotification, NSPasteboard, NSScreen, NSUndoManager, NSWindow;

@protocol NSWindowDelegate <NSObject>

@optional
- (void)windowDidChangeOcclusionState:(NSNotification *)arg1;
- (void)windowDidExitVersionBrowser:(NSNotification *)arg1;
- (void)windowWillExitVersionBrowser:(NSNotification *)arg1;
- (void)windowDidEnterVersionBrowser:(NSNotification *)arg1;
- (void)windowWillEnterVersionBrowser:(NSNotification *)arg1;
- (void)windowDidExitFullScreen:(NSNotification *)arg1;
- (void)windowWillExitFullScreen:(NSNotification *)arg1;
- (void)windowDidEnterFullScreen:(NSNotification *)arg1;
- (void)windowWillEnterFullScreen:(NSNotification *)arg1;
- (void)windowDidEndLiveResize:(NSNotification *)arg1;
- (void)windowWillStartLiveResize:(NSNotification *)arg1;
- (void)windowDidEndSheet:(NSNotification *)arg1;
- (void)windowWillBeginSheet:(NSNotification *)arg1;
- (void)windowDidChangeBackingProperties:(NSNotification *)arg1;
- (void)windowDidChangeScreenProfile:(NSNotification *)arg1;
- (void)windowDidChangeScreen:(NSNotification *)arg1;
- (void)windowDidUpdate:(NSNotification *)arg1;
- (void)windowDidDeminiaturize:(NSNotification *)arg1;
- (void)windowDidMiniaturize:(NSNotification *)arg1;
- (void)windowWillMiniaturize:(NSNotification *)arg1;
- (void)windowWillClose:(NSNotification *)arg1;
- (void)windowDidResignMain:(NSNotification *)arg1;
- (void)windowDidBecomeMain:(NSNotification *)arg1;
- (void)windowDidResignKey:(NSNotification *)arg1;
- (void)windowDidBecomeKey:(NSNotification *)arg1;
- (void)windowDidMove:(NSNotification *)arg1;
- (void)windowWillMove:(NSNotification *)arg1;
- (void)windowDidExpose:(NSNotification *)arg1;
- (void)windowDidResize:(NSNotification *)arg1;
- (void)window:(NSWindow *)arg1 didDecodeRestorableState:(NSCoder *)arg2;
- (void)window:(NSWindow *)arg1 willEncodeRestorableState:(NSCoder *)arg2;
- (struct CGSize)window:(NSWindow *)arg1 willResizeForVersionBrowserWithMaxPreferredSize:(struct CGSize)arg2 maxAllowedSize:(struct CGSize)arg3;
- (void)windowDidFailToExitFullScreen:(NSWindow *)arg1;
- (void)window:(NSWindow *)arg1 startCustomAnimationToEnterFullScreenOnScreen:(NSScreen *)arg2 withDuration:(double)arg3;
- (NSArray *)customWindowsToEnterFullScreenForWindow:(NSWindow *)arg1 onScreen:(NSScreen *)arg2;
- (void)window:(NSWindow *)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (NSArray *)customWindowsToExitFullScreenForWindow:(NSWindow *)arg1;
- (void)windowDidFailToEnterFullScreen:(NSWindow *)arg1;
- (void)window:(NSWindow *)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
- (NSArray *)customWindowsToEnterFullScreenForWindow:(NSWindow *)arg1;
- (unsigned long long)window:(NSWindow *)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (struct CGSize)window:(NSWindow *)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (BOOL)window:(NSWindow *)arg1 shouldDragDocumentWithEvent:(NSEvent *)arg2 from:(struct CGPoint)arg3 withPasteboard:(NSPasteboard *)arg4;
- (BOOL)window:(NSWindow *)arg1 shouldPopUpDocumentPathMenu:(NSMenu *)arg2;
- (struct CGRect)window:(NSWindow *)arg1 willPositionSheet:(NSWindow *)arg2 usingRect:(struct CGRect)arg3;
- (NSUndoManager *)windowWillReturnUndoManager:(NSWindow *)arg1;
- (BOOL)windowShouldZoom:(NSWindow *)arg1 toFrame:(struct CGRect)arg2;
- (struct CGRect)windowWillUseStandardFrame:(NSWindow *)arg1 defaultFrame:(struct CGRect)arg2;
- (struct CGSize)windowWillResize:(NSWindow *)arg1 toSize:(struct CGSize)arg2;
- (id)windowWillReturnFieldEditor:(NSWindow *)arg1 toObject:(id)arg2;
- (BOOL)windowShouldClose:(NSWindow *)arg1;
@end

