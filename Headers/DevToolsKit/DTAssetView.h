//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSString;

@interface DTAssetView : NSView
{
    NSImage *image;
    NSString *label;
    NSString *shortDescription;
    long long style;
    BOOL drawsWithSelectionHighlight;
    BOOL showsFirstResponder;
    BOOL drawsGrid;
    BOOL showingGridLines;
    id delegate;
    BOOL drawsWithClickFrame;
}

+ (struct CGSize)maximumSizeForStyle:(long long)arg1;
+ (struct CGSize)minimumSizeForStyle:(long long)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (BOOL)isOpaque;
- (id)effectiveBackgroundColor;
- (id)effectiveLightBorderColor;
- (id)effectiveBorderColor;
- (id)clickedBorderColor;
- (id)normalBorderColor;
- (id)selectedLightBorderColor;
- (id)normalLightBorderColor;
- (id)normalBackgroundColor;
- (id)primarySelectedBackgroundColor;
- (id)secondarySelectedBackgroundColor;
- (id)text;
- (id)effectiveShortDescriptionFont;
- (id)effectiveLabelFont;
- (BOOL)shouldBandSelectWithMouseDownEvent:(id)arg1;
- (struct CGRect)textAreaBounds;
- (struct CGRect)imageRect;
- (struct CGRect)imageAreaBounds;
- (BOOL)isFlipped;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)setShortDescription:(id)arg1;
- (id)shortDescription;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setShowingGridLines:(BOOL)arg1;
- (BOOL)isShowingGridLines;
- (BOOL)shouldDrawWithClickFrame;
- (void)setDrawsWithClickFrame:(BOOL)arg1;
- (BOOL)drawsWithClickFrame;
- (void)setDrawsWithSelectionHighlight:(BOOL)arg1;
- (BOOL)drawsWithSelectionHighlight;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (BOOL)showsFirstResponder;
- (void)setNilValueForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

