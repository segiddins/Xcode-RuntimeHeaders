//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class MISSING_TYPE, NSView, _TtC13MLComposerKit27PrerequisiteDescriptionView;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit33ValidationContainerViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    MISSING_TYPE *containerView;
    MISSING_TYPE *prerequisiteDescriptionView;
    MISSING_TYPE *validationViewController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)trainingFinished;
- (void)trainingStarted;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC13MLComposerKit27PrerequisiteDescriptionView *prerequisiteDescriptionView; // @synthesize prerequisiteDescriptionView;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView;

@end
