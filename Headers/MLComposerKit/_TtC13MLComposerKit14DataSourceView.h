//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit23DraggableDataSourceView.h>

@class MISSING_TYPE, NSButton, NSProgressIndicator, NSStepper, NSTextField, NSView, _TtC13MLComposerKit16DataSourcePicker, _TtC13MLComposerKit9ColorView;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit14DataSourceView : _TtC13MLComposerKit23DraggableDataSourceView
{
    MISSING_TYPE *title;
    MISSING_TYPE *valueTitle;
    MISSING_TYPE *valueSubtitle;
    MISSING_TYPE *dataExploreButton;
    MISSING_TYPE *dataPickerPopUp;
    MISSING_TYPE *partitionView;
    MISSING_TYPE *partitionTitleLabel;
    MISSING_TYPE *partitionAmountTextField;
    MISSING_TYPE *stepperButton;
    MISSING_TYPE *bottomContainer;
    MISSING_TYPE *progressIndicator;
    MISSING_TYPE *dataPickerController;
    MISSING_TYPE *supportedFileTypes;
    MISSING_TYPE *dataSourceValueType;
    MISSING_TYPE *isDataSourceActive;
    MISSING_TYPE *dataURL;
    MISSING_TYPE *taskType;
    MISSING_TYPE *backgroundView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)stepperTapped:(id)arg1;
- (void)dataExploreButtonTapped:(id)arg1;
- (void)viewWillDraw;
- (void)awakeFromNib;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) _TtC13MLComposerKit9ColorView *bottomContainer; // @synthesize bottomContainer;
@property(nonatomic) __weak NSStepper *stepperButton; // @synthesize stepperButton;
@property(nonatomic, retain) NSTextField *partitionAmountTextField; // @synthesize partitionAmountTextField;
@property(nonatomic, retain) NSTextField *partitionTitleLabel; // @synthesize partitionTitleLabel;
@property(nonatomic, retain) NSView *partitionView; // @synthesize partitionView;
@property(nonatomic, retain) _TtC13MLComposerKit16DataSourcePicker *dataPickerPopUp; // @synthesize dataPickerPopUp;
@property(nonatomic, retain) NSButton *dataExploreButton; // @synthesize dataExploreButton;
@property(nonatomic, retain) NSTextField *valueSubtitle; // @synthesize valueSubtitle;
@property(nonatomic, retain) NSTextField *valueTitle; // @synthesize valueTitle;
@property(nonatomic, retain) NSTextField *title; // @synthesize title;

@end

