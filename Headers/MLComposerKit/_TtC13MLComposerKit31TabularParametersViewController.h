//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class MISSING_TYPE, NSGridView, NSPopUpButtonCell;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit31TabularParametersViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    MISSING_TYPE *gridView;
    MISSING_TYPE *algorithmTypePopUp;
    MISSING_TYPE *generalParameterRows;
    MISSING_TYPE *paramDict;
    MISSING_TYPE *paramDictLabels;
    MISSING_TYPE *paramDictButton;
    MISSING_TYPE *algorithmType;
    MISSING_TYPE *algorithmSelection;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)toggleCheckbox:(id)arg1;
- (void)queueUpdated;
- (void)popUpAlgorithmSelectionDidChange:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSPopUpButtonCell *algorithmTypePopUp; // @synthesize algorithmTypePopUp;
@property(nonatomic) __weak NSGridView *gridView; // @synthesize gridView;

@end

