//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSScrollView, _TtC11GPUDebugger29GPULandingPageTimelinePreview, _TtC11GPUDebugger36GPULandingPageTimelineCollectionView;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger46GPULandingPageTimelineCollectionViewController : NSViewController
{
    MISSING_TYPE *unscaledContentSize;
    MISSING_TYPE *contentScaleFactor;
    MISSING_TYPE *timelinePreview;
    MISSING_TYPE *timeline;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *debuggerController;
    MISSING_TYPE *trackingArea;
    MISSING_TYPE *timelineOrigin;
    MISSING_TYPE *dataProvider;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak _TtC11GPUDebugger36GPULandingPageTimelineCollectionView *timeline; // @synthesize timeline;
@property(nonatomic) __weak _TtC11GPUDebugger29GPULandingPageTimelinePreview *timelinePreview; // @synthesize timelinePreview;

@end

