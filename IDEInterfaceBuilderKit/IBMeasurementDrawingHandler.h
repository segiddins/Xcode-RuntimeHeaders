//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBCancellationToken, IBTrackingIndicatorLayoutInfo, IBViewEditorCanvasFrameController, NSSet, NSString;
@protocol DVTInvalidation;

@interface IBMeasurementDrawingHandler : NSObject <DVTInvalidation>
{
    IBViewEditorCanvasFrameController *frameController;
    struct CGRect _trackingLayoutRectangle;
    struct CGRect trackedKnobRect;
    IBTrackingIndicatorLayoutInfo *trackingIndicatorLayoutInfo;
    id <DVTInvalidation> canvasOverlayToken;
    IBCancellationToken *documentStatusToken;
    BOOL _showingLayoutRectangles;
    BOOL _showingBoundsRectangles;
    NSSet *_viewsUnconditionallyDrawingLayoutRectangles;
}

+ (void)initialize;
@property(copy, nonatomic) NSSet *viewsUnconditionallyDrawingLayoutRectangles; // @synthesize viewsUnconditionallyDrawingLayoutRectangles=_viewsUnconditionallyDrawingLayoutRectangles;
@property(nonatomic, getter=isShowingBoundsRectangles) BOOL showingBoundsRectangles; // @synthesize showingBoundsRectangles=_showingBoundsRectangles;
@property(nonatomic, getter=isShowingLayoutRectangles) BOOL showingLayoutRectangles; // @synthesize showingLayoutRectangles=_showingLayoutRectangles;
@property(readonly, nonatomic) IBViewEditorCanvasFrameController *frameController; // @synthesize frameController;
- (void).cxx_destruct;
- (void)drawTrackingLayoutRectangle;
- (void)drawTrackingSizeText;
- (void)drawTrackingKnob;
- (void)drawBorderRectangles;
- (void)drawFrameMarkersForView:(id)arg1;
- (void)drawAdditionalLinesForView:(id)arg1;
- (void)drawContainerContentInsetsForView:(id)arg1;
- (void)drawBoundsRectForView:(id)arg1;
- (void)drawLayoutMarginsForView:(id)arg1;
- (void)drawBaselinesForView:(id)arg1;
- (void)drawLayoutRectForView:(id)arg1;
- (struct CGRect)layoutRectForView:(id)arg1;
- (struct CGRect)clippingRectForClippingToView:(id)arg1;
- (void)setNeedsDisplayOnRectEdges:(struct CGRect)arg1;
- (void)clearTrackingIndicators;
- (void)setTrackedSize:(struct CGSize)arg1 forViewRectangle:(struct CGRect)arg2 fromKnob:(CDUnion_31865a80)arg3 showingBoundsIndicator:(BOOL)arg4 showsTrackingKnob:(BOOL)arg5;
- (void)setTrackedKnobRect:(struct CGRect)arg1;
- (void)setTrackingIndicatorLayoutInfo:(id)arg1;
- (void)setTrackingLayoutRectangle:(struct CGRect)arg1;
- (BOOL)isShowingContentViewInsets;
- (id)document;
- (id)documentEditor;
- (id)canvasOverlay;
- (void)primitiveInvalidate;
- (id)initWithFrameController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

