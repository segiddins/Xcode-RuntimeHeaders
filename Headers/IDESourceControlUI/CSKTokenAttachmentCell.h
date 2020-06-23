//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTokenAttachmentCell.h>

@class NSFont, NSString;

@interface CSKTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _showsExclusionStyle;
    NSString *_keyString;
    NSString *_valueString;
    NSFont *_keyFont;
    NSFont *_valueFont;
}

@property(nonatomic) BOOL showsExclusionStyle; // @synthesize showsExclusionStyle=_showsExclusionStyle;
@property(retain, nonatomic) NSFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) NSFont *keyFont; // @synthesize keyFont=_keyFont;
@property(copy, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(copy, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
- (void).cxx_destruct;
- (struct CGRect)_valueLabelRectFromContainerRect:(struct CGRect)arg1 labelSize:(struct CGSize)arg2;
- (struct CGRect)_valueContainerRectFromKeyContainerRect:(struct CGRect)arg1 parentRect:(struct CGRect)arg2 labelSize:(struct CGSize)arg3;
- (struct CGRect)_pullDownImageRectFromKeyLabelRect:(struct CGRect)arg1 containerRect:(struct CGRect)arg2;
- (struct CGRect)_keyLabelRectFromContainerRect:(struct CGRect)arg1 labelSize:(struct CGSize)arg2;
- (struct CGRect)_keyContainerRectFromParentRect:(struct CGRect)arg1 labelSize:(struct CGSize)arg2;
- (struct CGSize)_valueLabelSizeFromValueString;
- (struct CGSize)_keyLabelSizeFromKeyString;
- (struct CGRect)_titleRectForTitleSize:(struct CGSize)arg1 labelType:(unsigned long long)arg2 containerRect:(struct CGRect)arg3;
- (unsigned long long)_currentDrawingModeWithTargetedContainerView:(id)arg1;
- (id)_fontForLabelType:(unsigned long long)arg1;
- (void)_popUpMenuInControlView:(id)arg1 fromKeyContainerRect:(struct CGRect)arg2;
- (void)_drawPullDownImageInFrame:(struct CGRect)arg1 drawingMode:(unsigned long long)arg2;
- (void)drawTitleWithFrame:(struct CGRect)arg1 labelType:(unsigned long long)arg2 drawingMode:(unsigned long long)arg3 inView:(id)arg4;
- (void)drawTokenWithFrame:(struct CGRect)arg1 drawingMode:(unsigned long long)arg2 inView:(id)arg3;
- (id)tokenPathForLabelType:(unsigned long long)arg1 containerBounds:(struct CGRect)arg2;
- (id)tokenFillColorForLabelType:(unsigned long long)arg1 drawingMode:(unsigned long long)arg2;
- (id)tokenTextColorForLabelType:(unsigned long long)arg1 drawingMode:(unsigned long long)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)_hasMenu;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGPoint)cellBaselineOffset;

@end

