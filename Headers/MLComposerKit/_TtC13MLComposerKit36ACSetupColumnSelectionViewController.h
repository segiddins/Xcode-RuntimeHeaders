//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class NSButton, NSGridView, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit36ACSetupColumnSelectionViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    // Error parsing type: , name: maximumNumberOfFeaturesToDisplay
    // Error parsing type: , name: gridView
    // Error parsing type: , name: columnCountLabel
    // Error parsing type: , name: selectedColumnsLabel
    // Error parsing type: , name: selectButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateColumnSelectionTexts;
- (void)updateControls;
- (void)disableControls;
- (void)viewDidLoad;
- (void)selectColumnTapped:(id)arg1;
@property(nonatomic) __weak NSButton *selectButton; // @synthesize selectButton;
@property(nonatomic) __weak NSTextField *selectedColumnsLabel; // @synthesize selectedColumnsLabel;
@property(nonatomic) __weak NSTextField *columnCountLabel; // @synthesize columnCountLabel;
@property(nonatomic) __weak NSGridView *gridView; // @synthesize gridView;

@end

