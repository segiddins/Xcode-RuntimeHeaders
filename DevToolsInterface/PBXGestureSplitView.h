//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

#import <DevToolsInterface/PBXImageGestureObserver-Protocol.h>

@class NSView;

@interface PBXGestureSplitView : NSSplitView <PBXImageGestureObserver>
{
    NSView *_collapsableView;
    BOOL _controlWindowWhenCollapsed;
    BOOL _controlWindowModeActive;
    BOOL _toggleModifiesWindowSize;
    BOOL _drawsGrabber;
    double _dividerThickness;
    double _percentageOfCollapsedView;
    long long _indexOfCollapsedView;
    double _collapsingFrameDimension;
    double _dragOrigin;
    double _minimumDimensionGestureViewRelative;
    long long _indexOfGestureParentInSplitView;
    NSView *_collapsedView;
    BOOL _isDragging;
}

- (void)_setRelevantDimension:(long long)arg1 on:(struct CGRect *)arg2;
- (double)_fetchMinimumRelevantDimension:(id)arg1 fromView:(id)arg2;
- (double)_fetchRelevantDimensionFromRect:(struct CGRect)arg1;
- (double)_fetchRelevantDimensionFromPoint:(struct CGPoint)arg1;
- (void)setDelegate:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2 layout:(BOOL)arg3;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (BOOL)isSubviewCollapsedView:(id)arg1;
- (void)toggleCollapse:(id)arg1 resizeWindow:(BOOL)arg2;
- (void)toggleCollapse;
- (BOOL)isCollapsed:(id)arg1;
- (BOOL)isCollapsed;
- (void)observeGestureView:(id)arg1 setCollapsableView:(id)arg2 resizeWindow:(BOOL)arg3 withMinimumGestureRelativeDimension:(double)arg4;
- (void)observeGestureView:(id)arg1 setCollapsableView:(id)arg2 resizeWindow:(BOOL)arg3;
- (void)setCollapsableView:(id)arg1 controlWindow:(BOOL)arg2 resizeWindow:(BOOL)arg3;
- (void)forceResizeWindowOnEvent:(id)arg1 fromView:(id)arg2;
- (void)resizeWindowOnEvent:(id)arg1 fromView:(id)arg2;
- (void)moveSplitter:(id)arg1 fromView:(id)arg2;
- (void)setDragOrigin:(id)arg1 fromView:(id)arg2;
- (void)eventSent:(id)arg1 toView:(id)arg2;
- (void)resetCursorRects;
- (void)addSubview:(id)arg1;
- (void)_configureWithSlideControl:(id)arg1;
- (void)_removeSlideControl:(id)arg1;
- (id)_findHomeForSlideControl:(id)arg1;
- (void)_checkAndSetSlideControls;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (BOOL)drawsGrabber;
- (void)setDrawsGrabber:(BOOL)arg1;
- (void)setDividerThickness:(double)arg1;
- (double)dividerThickness;
- (void)observeGestureView:(id)arg1 withMinimumGestureRelativeDimension:(double)arg2;
- (void)_setupPBXGestureSplitView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithGestureView:(id)arg1 withMinimumGestureRelativeDimension:(double)arg2;

@end

