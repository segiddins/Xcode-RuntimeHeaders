//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSImage, NSTimer, NSTrackingArea;

@interface GPURenderBufferButton : NSControl
{
    NSTrackingArea *_ta;
    NSImage *_currentImage;
    NSTimer *_imageUpdateTimer;
    NSImage *_image;
    NSImage *_overImage;
    struct {
        unsigned int mouseInside:1;
        unsigned int mouseDown:1;
        unsigned int sentAction:1;
        unsigned int firstResponder:1;
        unsigned int _pad:4;
    } _state;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSImage *overImage; // @synthesize overImage=_overImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateImage:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_filtersForMousePressed;
- (id)_filtersForDisabled;
- (void)_updateFilters;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end
