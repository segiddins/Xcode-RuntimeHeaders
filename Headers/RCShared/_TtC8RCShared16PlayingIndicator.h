//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE, NSLayoutYAxisAnchor;

__attribute__((visibility("hidden")))
@interface _TtC8RCShared16PlayingIndicator : NSView
{
    MISSING_TYPE *rxStorage;
    MISSING_TYPE *levelWidth;
    MISSING_TYPE *maximumLevelHeight;
    MISSING_TYPE *minimumLevelHeight;
    MISSING_TYPE *numberOfLevels;
    MISSING_TYPE *$__lazy_storage_$_levelViews;
    MISSING_TYPE *color;
    MISSING_TYPE *isAnimating;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)viewDidMoveToWindow;
- (void)layout;

@end

