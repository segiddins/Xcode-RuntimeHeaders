//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTResourceComboBox, IBNSResourceComboBoxCell;

@interface DVTResourceComboBoxTextFieldCell : NSTextFieldCell
{
    IBNSResourceComboBoxCell *_comboBoxCellDrawingTemplate;
    DVTResourceComboBox *_controlComboBox;
}

@property __weak DVTResourceComboBox *controlComboBox; // @synthesize controlComboBox=_controlComboBox;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)doLegacyComboBoxDrawingWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)legacyInternalUIDrawingOptionsWithFrame:(struct CGRect)arg1;
- (id)cellDrawingTemplate;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)textFieldCellFrameForRect:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;

@end

