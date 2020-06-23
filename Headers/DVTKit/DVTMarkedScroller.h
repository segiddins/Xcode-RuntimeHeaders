//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScroller.h>

#import <DVTKit/CALayerDelegate-Protocol.h>

@class CALayer, DVTNotificationToken, DVTObservingToken, NSMutableArray, NSString, NSTrackingArea, _DVTMark;
@protocol DVTMarkedScrollerDelegate;

@interface DVTMarkedScroller : NSScroller <CALayerDelegate>
{
    NSMutableArray *_marksSortedByLocationThenType;
    CALayer *_marksLayer;
    NSTrackingArea *_trackingArea;
    _DVTMark *_mousedOverMark;
    CALayer *_mouseOverLayer;
    DVTNotificationToken *_themeObservingToken;
    DVTObservingToken *_expansionTransitionProgressObservingToken;
    DVTObservingToken *_knobAlphaObservingToken;
    id <DVTMarkedScrollerDelegate> _delegate;
}

+ (BOOL)isCompatibleWithOverlayScrollers;
- (void).cxx_destruct;
@property __weak id <DVTMarkedScrollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateMouseOverLayer:(id)arg1 widthDelta:(double)arg2 heightDelta:(double)arg3;
- (void)_animateAlphaOfAllMarkLayers:(double)arg1;
- (void)_animateInAndAddMouseOverLayer:(id)arg1;
- (void)_animateOutAndRemoveMouseOverLayer:(id)arg1;
- (id)_createMouseOverLayerForMark:(id)arg1;
- (void)_updateMouseOverMarkVisuals:(id)arg1;
- (void)_drawMarks;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)drawKnob;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)displayLayer:(id)arg1;
- (id)_closestMarkTo:(double)arg1;
- (id)_closestMarkToEventsLocationInWindow:(id)arg1;
- (void)_insertMarksLayerIfNecessary;
- (void)setScrollerStyle:(long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setLayer:(id)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)resetCursorRects;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)_colorForType:(unsigned long long)arg1;
- (void)_addLayerForMark:(id)arg1;
- (void)addMark:(double)arg1 onLine:(long long)arg2 ofType:(unsigned long long)arg3;
- (void)addMark:(double)arg1 ofType:(unsigned long long)arg2;
- (struct CGRect)_outsetRectForMark:(id)arg1 inBoundingRect:(struct CGRect)arg2;
- (struct CGRect)_rectForMark:(id)arg1 inBoundingRect:(struct CGRect)arg2;
- (void)_updateMarksLayerFrame;
- (struct CGRect)_marksContainerRect;
- (void)clearDiffMarks;
- (void)clearNormalMarks;
- (void)_setNeedsDisplayIfNotLayerBacked;
- (void)_themeChanged;
- (void)dealloc;
- (void)_dvtMarkedScrollerCommintInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

