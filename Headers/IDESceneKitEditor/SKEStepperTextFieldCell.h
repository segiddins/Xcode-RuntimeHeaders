//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSString, SKEStepperTextFieldFormatter;

@interface SKEStepperTextFieldCell : NSTextFieldCell
{
    SKEStepperTextFieldFormatter *_stepperFieldFormatter;
    BOOL _drawStepperBackground;
}

+ (id)_textFieldPathForFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (struct CGRect)_accessibilityTextFieldCellBounds;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBackgroundForFlatStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
@property(copy) NSString *suffix;
@property(copy) NSString *prefix;
- (void)setFormatter:(id)arg1;
@property(readonly) SKEStepperTextFieldFormatter *stepperFieldFormatter;
- (id)_createButtonCell;
@property BOOL drawStepperBackground;
- (void)_skeStepperFieldCell_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

