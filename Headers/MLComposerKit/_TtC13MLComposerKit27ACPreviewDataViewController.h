//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, NSScrollView, NSStackView, NSTextField, _TtC13MLComposerKit10ScrollView, _TtC13MLComposerKit16TimelineAxisView, _TtC13MLComposerKit20ActivityWaveformView, _TtC13MLComposerKit20TimelinePlayheadView, _TtC13MLComposerKit24TimelineRangedLabelsView, _TtC13MLComposerKit9ColorView;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit27ACPreviewDataViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    MISSING_TYPE *timestampLabel;
    MISSING_TYPE *waveformView;
    MISSING_TYPE *rangesView;
    MISSING_TYPE *axisView;
    MISSING_TYPE *playheadView;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *waveformBackgroundColorView;
    MISSING_TYPE *scrollContentLeadingConstraint;
    MISSING_TYPE *scrollContentTrailingConstraint;
    MISSING_TYPE *classificationsContainer;
    MISSING_TYPE *classificationsScrollView;
    MISSING_TYPE *classificationsEmptyLabel;
    MISSING_TYPE *state;
    MISSING_TYPE *previewData;
    MISSING_TYPE *classificationResult;
    MISSING_TYPE *currentRange;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inferenceFinishedWithNotification:(id)arg1;
- (void)scrollViewBoundsChanged;
- (void)viewDidLayout;
- (void)viewWillLayout;
- (void)viewDidLoad;
@property(nonatomic, retain) NSTextField *classificationsEmptyLabel; // @synthesize classificationsEmptyLabel;
@property(nonatomic, retain) NSScrollView *classificationsScrollView; // @synthesize classificationsScrollView;
@property(nonatomic, retain) NSStackView *classificationsContainer; // @synthesize classificationsContainer;
@property(nonatomic, retain) NSLayoutConstraint *scrollContentTrailingConstraint; // @synthesize scrollContentTrailingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *scrollContentLeadingConstraint; // @synthesize scrollContentLeadingConstraint;
@property(nonatomic, retain) _TtC13MLComposerKit9ColorView *waveformBackgroundColorView; // @synthesize waveformBackgroundColorView;
@property(nonatomic, retain) _TtC13MLComposerKit10ScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic, retain) _TtC13MLComposerKit20TimelinePlayheadView *playheadView; // @synthesize playheadView;
@property(nonatomic, retain) _TtC13MLComposerKit16TimelineAxisView *axisView; // @synthesize axisView;
@property(nonatomic, retain) _TtC13MLComposerKit24TimelineRangedLabelsView *rangesView; // @synthesize rangesView;
@property(nonatomic, retain) _TtC13MLComposerKit20ActivityWaveformView *waveformView; // @synthesize waveformView;
@property(nonatomic, retain) NSTextField *timestampLabel; // @synthesize timestampLabel;

@end

