//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8RCShared20CircularProgressView : NSView
{
    MISSING_TYPE *ghostRingLayer;
    MISSING_TYPE *indeterminateProgressRingLayer;
    MISSING_TYPE *determinateProgressRingLayer;
    MISSING_TYPE *observeCompletionState;
    MISSING_TYPE *observeIsIndeterminate;
    MISSING_TYPE *progress;
    MISSING_TYPE *graduallyIncreasingProgress;
    MISSING_TYPE *onStateChangeEventSource;
    MISSING_TYPE *observedProgress;
    MISSING_TYPE *activeStrokeColor;
    MISSING_TYPE *inactiveStrokeColor;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
