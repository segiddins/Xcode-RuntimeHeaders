//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class MISSING_TYPE, NSGridView, _TtC13MLComposerKit13NumberStepper;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit30ACSetupParameterViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    MISSING_TYPE *gridView;
    MISSING_TYPE *batchSizeNumberStepper;
    MISSING_TYPE *iterationsNumberStepper;
    MISSING_TYPE *predictionSizeNumberStepper;
    MISSING_TYPE *sampleRateNumberStepper;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)queueUpdated;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC13MLComposerKit13NumberStepper *sampleRateNumberStepper; // @synthesize sampleRateNumberStepper;
@property(nonatomic) __weak _TtC13MLComposerKit13NumberStepper *predictionSizeNumberStepper; // @synthesize predictionSizeNumberStepper;
@property(nonatomic) __weak _TtC13MLComposerKit13NumberStepper *iterationsNumberStepper; // @synthesize iterationsNumberStepper;
@property(nonatomic) __weak _TtC13MLComposerKit13NumberStepper *batchSizeNumberStepper; // @synthesize batchSizeNumberStepper;
@property(nonatomic) __weak NSGridView *gridView; // @synthesize gridView;

@end
