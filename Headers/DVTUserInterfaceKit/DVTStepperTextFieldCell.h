//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTStepperTextFieldFormatter, NSAccessibilityElement, NSButtonCell, NSCell, NSString;

@interface DVTStepperTextFieldCell : NSTextFieldCell
{
    DVTStepperTextFieldFormatter *_stepperFieldFormatter;
    NSButtonCell *_minusButtonCell;
    NSButtonCell *_plusButtonCell;
    BOOL _hasButtons;
    BOOL _drawStepperBackground;
    NSAccessibilityElement *_accessibilityStepperElement;
}

+ (id)_textFieldPathForFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAccessibilityElement *accessibilityStepperElement; // @synthesize accessibilityStepperElement=_accessibilityStepperElement;
@property(readonly) NSCell *plusButtonCell; // @synthesize plusButtonCell=_plusButtonCell;
@property(readonly) NSCell *minusButtonCell; // @synthesize minusButtonCell=_minusButtonCell;
- (id)_stepperImageIsSelected:(BOOL)arg1 isIncrement:(BOOL)arg2;
@property BOOL hasButtons;
- (void)setBackgroundStyle:(long long)arg1;
- (struct CGRect)_accessibilityTextFieldCellBounds;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (id)_accessibilityStepper;
- (void)_trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBackgroundForFlatStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)plusButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minusButtonRectForBounds:(struct CGRect)arg1;
@property(copy) NSString *suffix;
@property(copy) NSString *prefix;
- (void)setFormatter:(id)arg1;
@property(readonly) DVTStepperTextFieldFormatter *stepperFieldFormatter;
- (void)setEnabled:(BOOL)arg1;
- (id)_createButtonCell;
@property BOOL drawStepperBackground;
- (void)_dvtStepperFieldCell_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

