//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSSlider, NSStackView, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC10MLModelKit30PEOptionsPopoverViewController : NSViewController
{
    MISSING_TYPE *maxPoseCountLabelsStack;
    MISSING_TYPE *maxPoseCountLabel;
    MISSING_TYPE *maxPoseCountSlider;
    MISSING_TYPE *jointConfidenceThresholdLabel;
    MISSING_TYPE *jointConfidenceThresholdSlider;
    MISSING_TYPE *poseConfidenceThresholdLabel;
    MISSING_TYPE *poseConfidenceThresholdSlider;
    MISSING_TYPE *matchingJointDistanceLabelsStack;
    MISSING_TYPE *matchingJointDistanceLabel;
    MISSING_TYPE *matchingJointDistanceSlider;
    MISSING_TYPE *delegate;
    MISSING_TYPE *datasource;
    MISSING_TYPE *delegateUpdateTimer;
    MISSING_TYPE *delegateDelay;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)matchingDistanceSliderValueChanged:(id)arg1;
- (void)poseConfidenceThresholdSliderValueChanged:(id)arg1;
- (void)jointConfidenceThresholdSliderValueChanged:(id)arg1;
- (void)maxPoseCountSliderValueChanged:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic) __weak NSSlider *matchingJointDistanceSlider; // @synthesize matchingJointDistanceSlider;
@property(nonatomic) __weak NSTextField *matchingJointDistanceLabel; // @synthesize matchingJointDistanceLabel;
@property(nonatomic) __weak NSStackView *matchingJointDistanceLabelsStack; // @synthesize matchingJointDistanceLabelsStack;
@property(nonatomic) __weak NSSlider *poseConfidenceThresholdSlider; // @synthesize poseConfidenceThresholdSlider;
@property(nonatomic) __weak NSTextField *poseConfidenceThresholdLabel; // @synthesize poseConfidenceThresholdLabel;
@property(nonatomic) __weak NSSlider *jointConfidenceThresholdSlider; // @synthesize jointConfidenceThresholdSlider;
@property(nonatomic) __weak NSTextField *jointConfidenceThresholdLabel; // @synthesize jointConfidenceThresholdLabel;
@property(nonatomic) __weak NSSlider *maxPoseCountSlider; // @synthesize maxPoseCountSlider;
@property(nonatomic) __weak NSTextField *maxPoseCountLabel; // @synthesize maxPoseCountLabel;
@property(nonatomic) __weak NSStackView *maxPoseCountLabelsStack; // @synthesize maxPoseCountLabelsStack;

@end

