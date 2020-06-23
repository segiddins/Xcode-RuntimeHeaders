//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage;

@interface DVTMainStatusAwareButton : NSButton
{
    BOOL _ignoresFirstMouse;
    BOOL _superviewIsFocusRingClipAncestor;
    NSImage *_pressedImage;
    NSImage *_pressedAlternateImage;
    NSImage *_imageForNonMainWindow;
    NSImage *_alternateImageForNonMainWindow;
    unsigned long long _lastMouseDownModifierFlags;
}

@property(nonatomic) BOOL superviewIsFocusRingClipAncestor; // @synthesize superviewIsFocusRingClipAncestor=_superviewIsFocusRingClipAncestor;
@property(nonatomic) unsigned long long lastMouseDownModifierFlags; // @synthesize lastMouseDownModifierFlags=_lastMouseDownModifierFlags;
@property(copy, nonatomic) NSImage *alternateImageForNonMainWindow; // @synthesize alternateImageForNonMainWindow=_alternateImageForNonMainWindow;
@property(copy, nonatomic) NSImage *imageForNonMainWindow; // @synthesize imageForNonMainWindow=_imageForNonMainWindow;
@property(copy, nonatomic) NSImage *pressedAlternateImage; // @synthesize pressedAlternateImage=_pressedAlternateImage;
@property(copy, nonatomic) NSImage *pressedImage; // @synthesize pressedImage=_pressedImage;
- (void).cxx_destruct;
- (id)_focusRingClipAncestor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAcceptsFirstMouse:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

