//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTResourceComboBox, IBNSResourceComboBoxCell, NSString;

@interface DVTResourceComboBoxTextFieldCell : NSTextFieldCell
{
    IBNSResourceComboBoxCell *_comboBoxCellDrawingTemplate;
    NSTextFieldCell *_namespaceTextCell;
    DVTResourceComboBox *_controlComboBox;
    unsigned long long _boxStyle;
    NSString *_namespaceLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *namespaceLabel; // @synthesize namespaceLabel=_namespaceLabel;
@property(nonatomic) unsigned long long boxStyle; // @synthesize boxStyle=_boxStyle;
@property __weak DVTResourceComboBox *controlComboBox; // @synthesize controlComboBox=_controlComboBox;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGRect)_fieldEditorTextRectForFrame:(struct CGRect)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)namespaceTextCell;
- (id)comboBoxCell;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)namespaceLabelFrameForRect:(struct CGRect)arg1;
- (struct CGRect)insetRectForAdditionalAffordances:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;

@end

