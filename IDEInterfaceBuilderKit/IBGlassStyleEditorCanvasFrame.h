//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditorCanvasFrame.h>

#import <IDEInterfaceBuilderKit/IBGlassCanvasFrameBackgroundDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBImageButtonDelegate-Protocol.h>

@class IBGlassCanvasFrameBackground, NSString;

@interface IBGlassStyleEditorCanvasFrame : IBEditorCanvasFrame <IBGlassCanvasFrameBackgroundDelegate, IBImageButtonDelegate>
{
    IBGlassCanvasFrameBackground *background;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)closeButtonImageForState:(unsigned long long)arg1;
- (id)closeButtonShadow:(BOOL)arg1;
- (id)closeButtonGradientKey:(BOOL)arg1 pressed:(BOOL)arg2;
- (id)closeButtonOuterColor:(BOOL)arg1 pressed:(BOOL)arg2;
- (id)closeButtonBorderColor:(BOOL)arg1 pressed:(BOOL)arg2;
- (id)knobButtonImageForState:(unsigned long long)arg1 knob:(CDUnion_31865a80)arg2;
- (BOOL)shouldDragFrameWithMouseDown:(id)arg1;
- (void)hasKeyLookDidChange;
- (struct CGSize)sizeForKnob:(CDUnion_31865a80)arg1;
- (id)boundingRectsForBandSelectionHitTesting;
- (struct CGRect)boundsForHitTesting;
- (struct CGRect)glassRectPlusSelectionRing;
- (CDStruct_c519178c)contentInset;
- (struct CGRect)closeButtonRect;
- (struct CGRect)glassRect;
- (CDStruct_c519178c)insetToGlass;
- (id)accessibilityChildren;
- (void)setFrameIsSelected:(BOOL)arg1;
@property(nonatomic) double glassCornerRadius;
@property(nonatomic) CDStruct_c519178c glassToContentInset;
@property unsigned long long contentBorderStyle;
- (void)glassCanvasFrameBackgroundDidChangeAppearance:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

