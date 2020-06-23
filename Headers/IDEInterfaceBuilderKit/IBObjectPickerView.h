//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/IBObjectPickerElementViewDelegate-Protocol.h>

@class DVTStackView_ML, IBImageButton, IBObjectPickerElementView, NSArray, NSString, NSTextFieldCell;
@protocol IBObjectPickerViewDelegate;

@interface IBObjectPickerView : DVTLayoutView_ML <IBObjectPickerElementViewDelegate>
{
    NSTextFieldCell *_backgroundCell;
    IBImageButton *_dragWellButton;
    DVTStackView_ML *_pickedObjectsStackView;
    IBObjectPickerElementView *_lastRolledOverView;
    BOOL _viewsAreInvalid;
    BOOL _allowsEmptyRelation;
    id <IBObjectPickerViewDelegate> _delegate;
    NSArray *_pickedObjects;
    NSString *_placeholderString;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL allowsEmptyRelation; // @synthesize allowsEmptyRelation=_allowsEmptyRelation;
@property(copy, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(copy, nonatomic) NSArray *pickedObjects; // @synthesize pickedObjects=_pickedObjects;
@property __weak id <IBObjectPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundCell;
- (void)objectPickerElementViewUserDidDelete:(id)arg1;
- (void)objectPickerElementView:(id)arg1 rolloverStateChanged:(BOOL)arg2;
- (void)dragWellButtonDragged:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (double)minimumHeight;
- (CDStruct_c519178c)textInset;
- (CDStruct_c519178c)stackInset;
- (BOOL)isFlipped;
- (id)effectivePlaceholderString;
@property(getter=isEnabled) BOOL enabled;
- (void)updateDragWellButtonImages;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

