//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s11MLSharedKit24ObservableViewControllerCN.h"

@class MISSING_TYPE, NSScrollView, NSTextField, NSView;

@interface _TtC10MLModelKit27TCPreviewDataViewController : _$s11MLSharedKit24ObservableViewControllerCN
{
    MISSING_TYPE *scrollView;
    MISSING_TYPE *contentTextField;
    MISSING_TYPE *predictionContainerView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *startTimer;
    MISSING_TYPE *tempURL;
    MISSING_TYPE *isLiveText;
    MISSING_TYPE *previewView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)analyzeLiveText;
- (void)controlTextDidChange:(id)arg1;
- (void)inferenceFinishedWithNotification:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic) __weak NSView *predictionContainerView; // @synthesize predictionContainerView;
@property(nonatomic) __weak NSTextField *contentTextField; // @synthesize contentTextField;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView;

@end

