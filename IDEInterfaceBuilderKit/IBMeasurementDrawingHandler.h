//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBCancellationToken, IBDelegatedCanvasOverlay, IBMutableIdentityDictionary, IBRelativeMeasurement, IBRelativeMeasurementDescriptor, IBTrackingIndicatorLayoutInfo, IBViewEditorCanvasFrameController, NSSet, NSString;
@protocol DVTCancellable, DVTInvalidation;

@interface IBMeasurementDrawingHandler : NSObject <DVTInvalidation>
{
    IBRelativeMeasurementDescriptor *relativeMeasurementDescriptor;
    IBRelativeMeasurement *relativeMeasurement;
    IBViewEditorCanvasFrameController *frameController;
    BOOL relativeMeasurementIsValid;
    IBMutableIdentityDictionary *sourceObservationTokens;
    id <DVTCancellable> destinationObservationToken;
    struct CGRect hintedTrackedViewRectangle;
    struct CGRect trackedKnobRect;
    IBTrackingIndicatorLayoutInfo *trackingIndicatorLayoutInfo;
    id <DVTInvalidation> canvasOverlayToken;
    IBCancellationToken *documentStatusToken;
    BOOL _showingRelativeMeasurement;
    BOOL _showingLayoutRectangles;
    BOOL _showingBoundsRectangles;
    BOOL _showingResizeKnobs;
    NSSet *_viewsUnconditionallyDrawingLayoutRectangles;
}

+ (id)calculateMeasurementLinesWithStartRect:(struct CGRect)arg1 andEndRect:(struct CGRect)arg2;
+ (void)initialize;
@property(copy, nonatomic) NSSet *viewsUnconditionallyDrawingLayoutRectangles; // @synthesize viewsUnconditionallyDrawingLayoutRectangles=_viewsUnconditionallyDrawingLayoutRectangles;
@property(nonatomic, getter=isShowingResizeKnobs) BOOL showingResizeKnobs; // @synthesize showingResizeKnobs=_showingResizeKnobs;
@property(nonatomic, getter=isShowingBoundsRectangles) BOOL showingBoundsRectangles; // @synthesize showingBoundsRectangles=_showingBoundsRectangles;
@property(nonatomic, getter=isShowingLayoutRectangles) BOOL showingLayoutRectangles; // @synthesize showingLayoutRectangles=_showingLayoutRectangles;
@property(nonatomic, getter=isShowingRelativeMeasurement) BOOL showingRelativeMeasurement; // @synthesize showingRelativeMeasurement=_showingRelativeMeasurement;
@property(readonly, nonatomic) IBViewEditorCanvasFrameController *frameController; // @synthesize frameController;
- (void).cxx_destruct;
- (void)drawHintedTrackedViewRectangle;
- (void)drawLiveTrackingSizeInfo;
- (void)drawTrackingKnob;
- (void)drawBorderRectangles;
- (void)drawFrameMarkersForView:(id)arg1;
- (void)drawAdditionalLinesForView:(id)arg1;
- (void)drawContainerContentInsetsForView:(id)arg1;
- (void)drawBoundsRectForView:(id)arg1;
- (void)drawLayoutMarginsForView:(id)arg1;
- (void)drawBaselinesForView:(id)arg1;
- (void)drawLayoutRectForView:(id)arg1;
- (void)drawRelativeMeasurementLines;
- (void)drawRelativeMeasurementText;
- (BOOL)relativeMeasurementIsVisible:(id)arg1;
- (void)setMeasurementLinesNeedDisplay:(id)arg1;
- (void)setNeedsDisplayOnRectEdges:(struct CGRect)arg1;
- (void)invalidateRelativeMeasurement;
- (void)willDrawRelativeMeasurements;
- (void)invalidateDrawing;
- (id)calculateRelativeMeasurementFromDescriptor:(id)arg1;
- (void)trackedObjectsDidChange;
- (BOOL)isRelativeMeasurementSourceOrDestnation:(id)arg1;
- (struct CGRect)relativeMeasuringFrame;
- (struct CGRect)layoutRectForView:(id)arg1;
- (struct CGRect)clippingRectForClippingToView:(id)arg1;
- (void)clearTrackingIndicators;
- (void)setTrackedSize:(struct CGSize)arg1 forViewRectangle:(struct CGRect)arg2 fromKnob:(CDUnion_31865a80)arg3 showingBoundsIndicator:(BOOL)arg4 showsTrackingKnob:(BOOL)arg5;
- (void)setTrackedKnobRect:(struct CGRect)arg1;
- (void)setTrackingIndicatorLayoutInfo:(id)arg1;
- (void)setHintedTrackedViewRectangle:(struct CGRect)arg1;
@property(retain, nonatomic) NSObject *relativeMeasurementDestination;
@property(copy, nonatomic) NSSet *relativeMeasurementSources;
- (void)setRelativeMeasurementDescriptor:(id)arg1;
- (id)relativeMeasurementDescriptor;
- (void)setRelativeMeasurement:(id)arg1;
- (id)relativeMeasurement;
- (BOOL)isShowingContentViewInsets;
- (id)document;
- (id)documentEditor;
@property(readonly, nonatomic) IBDelegatedCanvasOverlay *canvasOverlay;
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

