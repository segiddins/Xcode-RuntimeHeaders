//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTColoredSpinner, IBCocoaBindingsAutocompletingTextFieldEditor, NSString;

@interface IBCocoaBindingsAutocompletingTextFieldCell : NSTextFieldCell
{
    IBCocoaBindingsAutocompletingTextFieldEditor *_bindingFieldEditor;
    long long _validationStatus;
    DVTColoredSpinner *_progressIndicator;
    NSString *_validationStatusToolTip;
    BOOL _showingProgressIndicator;
}

- (void).cxx_destruct;
- (void)setShowingProgressIndicator:(BOOL)arg1;
- (void)setValidationStatusToolTip:(id)arg1;
- (void)resetToolTip;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)removeProgressIndicator;
- (void)drawProgressIndicatorInBounds:(struct CGRect)arg1;
- (void)drawImage:(id)arg1 adjustedInRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (struct CGRect)validImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)interiorRectForBounds:(struct CGRect)arg1;
- (id)validIndicatorImage;
- (void)setValidationStatus:(long long)arg1;
- (void)endEditing:(id)arg1;
- (id)controlView;
- (id)fieldEditorForView:(id)arg1;

@end

