//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSFont, NSImage, NSString;

@interface PBXTitleBannerView : NSView
{
    NSString *_title;
    NSFont *_font;
    NSImage *_image;
    unsigned int _borderStyle:16;
    unsigned int _drawsBackground:1;
    unsigned int _areRectangesValid:1;
    struct CGRect _titleRect;
    struct CGRect _imageRect;
}

- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)_calculateRectangles;
- (id)_titleAttributes;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setBorderStyle:(int)arg1;
- (int)borderStyle;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

