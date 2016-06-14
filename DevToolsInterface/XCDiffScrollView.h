//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSView, XCDiffComparatorView;

@interface XCDiffScrollView : NSScrollView
{
    XCDiffComparatorView *_comparatorView;
    NSView *_cachedLeftView;
    NSView *_cachedRightView;
    NSView *_cachedMergeView;
    struct CGRect _cachedLeftClipViewBounds;
    struct CGRect _cachedRightClipViewBounds;
    struct CGRect _cachedMergeClipViewBounds;
    struct _XCDiffScrollViewFlags _dsvFlags;
}

+ (Class)_splitViewClass;
+ (Class)_verticalScrollerClass;
+ (void)initialize;
- (void)_viewFrameDidChange:(id)arg1;
- (void)_clipViewBoundsDidChange:(id)arg1;
- (void)handleScroller:(id)arg1 hitPart:(unsigned long long)arg2 multiplier:(double)arg3;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (double)_destinationFloatValueForScroller:(id)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (double)_centrePositionForRightPosition:(double)arg1;
- (double)_centrePositionForLeftPosition:(double)arg1;
- (void)_synchronizePositionWithHorizontalDelta:(double)arg1 verticalPosition:(double)arg2;
- (void)_diffContextDidChangeDiffDescriptors:(id)arg1;
- (void)updateDiffHunkMarks;
- (void)_updateDiffHunkMarksForScroller:(id)arg1 hunkMarkers:(id)arg2;
- (struct CGSize)_maxVisibleSize;
- (struct CGSize)maxViewSize;
- (struct CGSize)maxRightViewSize;
- (struct CGSize)maxLeftViewSize;
- (BOOL)showsDiffHunkMarkers;
- (void)setShowsDiffHunkMarkers:(BOOL)arg1;
- (id)diffComparatorView;
- (void)setDiffComparatorView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

