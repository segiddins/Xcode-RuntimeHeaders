//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class NSGridView, _TtC13MLComposerKit13NumberStepper;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit30ACSetupParameterViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    // Error parsing type: , name: gridView
    // Error parsing type: , name: batchSizeNumberStepper
    // Error parsing type: , name: iterationsNumberStepper
    // Error parsing type: , name: predictionSizeNumberStepper
    // Error parsing type: , name: sampleRateNumberStepper
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

