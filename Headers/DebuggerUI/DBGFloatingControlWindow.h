//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface DBGFloatingControlWindow : NSWindow
{
    BOOL _canBecomeKey;
    NSWindow *_contextWindow;
    id _windowCloseToken;
}

- (void).cxx_destruct;
- (void)displayContextRect:(struct CGRect)arg1 showOutline:(BOOL)arg2;
- (id)contextWindow;
- (BOOL)wantsScrollWheelEvent:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setCanBecomeKey:(BOOL)arg1;
- (id)rootWindow;
- (void)resetChildChain;
- (void)printSubDataValues:(long long)arg1;
- (void)_cleanUpAfterClosingWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

