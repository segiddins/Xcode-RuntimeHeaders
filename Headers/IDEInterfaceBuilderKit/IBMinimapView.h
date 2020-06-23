//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, IBMinimapDraggableHeader, IBMinimapResizableView, IBMinimapViewBox, IBMinimapViewContent, NSTrackingArea, NSVisualEffectView;
@protocol IBMinimapViewDelegate;

@interface IBMinimapView : NSView
{
    NSView *_outerBorderView;
    NSView *_innerBorderView;
    NSVisualEffectView *_visualEffectView;
    NSView *_contentView;
    IBMinimapViewBox *_backgroundViewBox;
    NSTrackingArea *_trackingArea;
    BOOL _scheduledMouseStateChange;
    long long _resizeableWidth;
    BOOL _validResize;
    BOOL _acceptAllUpdates;
    BOOL _hasInvalidContentBounds;
    CALayer *_shadow1Layer;
    BOOL _currentMouseState;
    long long _preferredMinimapCorner;
    id <IBMinimapViewDelegate> _delegate;
    IBMinimapResizableView *_resizableView;
    IBMinimapDraggableHeader *_draggableHeader;
    IBMinimapViewContent *_minimapViewContent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBMinimapViewContent *minimapViewContent; // @synthesize minimapViewContent=_minimapViewContent;
@property(readonly, nonatomic) IBMinimapDraggableHeader *draggableHeader; // @synthesize draggableHeader=_draggableHeader;
@property(readonly, nonatomic) IBMinimapResizableView *resizableView; // @synthesize resizableView=_resizableView;
@property(nonatomic) __weak id <IBMinimapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL currentMouseState; // @synthesize currentMouseState=_currentMouseState;
@property(nonatomic) long long preferredMinimapCorner; // @synthesize preferredMinimapCorner=_preferredMinimapCorner;
- (void)updateDraggableHeaderStatusFromEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (struct CGRect)visibleCanvasRect;
- (void)updatePreferredCorner;
- (void)invalidateSceneContentForCanvasFrame:(id)arg1;
- (void)invalidateSceneContent;
- (BOOL)isFlipped;
- (void)updateLayer;
- (void)setHidden:(BOOL)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)updateBoundsAnimated:(BOOL)arg1;
- (struct CGSize)computedSize;
- (void)layout;
- (void)invalidateContentBounds;
- (void)updateViewBoxLayout;
- (struct CGRect)viewBoxVisibleRect;
- (id)initWithDelegate:(id)arg1 preferredCorner:(long long)arg2;

@end

