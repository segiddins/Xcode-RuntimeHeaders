//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class MISSING_TYPE, NSButton;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit31SetupAugmentationViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    MISSING_TYPE *addNoiseButton;
    MISSING_TYPE *blurButton;
    MISSING_TYPE *cropButton;
    MISSING_TYPE *exposeButton;
    MISSING_TYPE *flipButton;
    MISSING_TYPE *rotateButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)trainingCanceled;
- (void)trainingFinished;
- (void)trainingStarted;
- (void)rotateCheckboxTapped:(id)arg1;
- (void)flipCheckboxTapped:(id)arg1;
- (void)exposeCheckboxTapped:(id)arg1;
- (void)cropCheckboxTapped:(id)arg1;
- (void)blurCheckboxTapped:(id)arg1;
- (void)noiseCheckboxTapped:(id)arg1;
@property(nonatomic) __weak NSButton *rotateButton; // @synthesize rotateButton;
@property(nonatomic) __weak NSButton *flipButton; // @synthesize flipButton;
@property(nonatomic) __weak NSButton *exposeButton; // @synthesize exposeButton;
@property(nonatomic) __weak NSButton *cropButton; // @synthesize cropButton;
@property(nonatomic) __weak NSButton *blurButton; // @synthesize blurButton;
@property(nonatomic) __weak NSButton *addNoiseButton; // @synthesize addNoiseButton;

@end

