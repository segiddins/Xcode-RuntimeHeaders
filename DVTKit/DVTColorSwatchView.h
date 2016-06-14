//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DVTColorSwatchView : NSView
{
    BOOL _useProportionalBorderWidth;
    BOOL _circularStyle;
    BOOL _drawsBackground;
    BOOL _drawsBorder;
    BOOL _selected;
    NSColor *_color;
    double _proportionalInset;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) BOOL circularStyle; // @synthesize circularStyle=_circularStyle;
@property(nonatomic) double proportionalInset; // @synthesize proportionalInset=_proportionalInset;
@property(nonatomic) BOOL useProportionalBorderWidth; // @synthesize useProportionalBorderWidth=_useProportionalBorderWidth;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)_drawRectangleStyle;
- (void)_drawCircularStyle;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly) NSColor *colorForDrawing;
- (void)dvt_colorSwatchView_common_init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

