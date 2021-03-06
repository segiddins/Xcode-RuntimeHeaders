//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage;

@interface DVTGradientImagePopUpButtonCell : NSPopUpButtonCell
{
    int _gradientStyle;
    unsigned long long _borderSides;
    unsigned long long _highlightSides;
    NSImage *_imageBlueOnImageDerivedFrom;
    NSImage *_blueOnImage;
}

- (void).cxx_destruct;
@property unsigned long long highlightSides; // @synthesize highlightSides=_highlightSides;
@property unsigned long long borderSides; // @synthesize borderSides=_borderSides;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (BOOL)_shouldUseColorPunchOutStyleForGradientStyle;
- (void)_updateImageIfNecessary;
- (struct NSEdgeInsets)_popupBezelInsets;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

