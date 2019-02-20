//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditorCanvasFrameController.h>

@class DVTDelayedInvocation, DVTNotificationToken, IBCanvasOverlay, IBEditorFrameLayoutGuideGeneratorDelegate, IBLayoutGuideCanvasOverlay, IBLayoutManager, IBMeasurementDrawingHandler, IBRelativeMeasurementDrawingHandler, IBViewTracker, NSArray, NSMutableArray;
@protocol DVTInvalidation;

@interface IBViewEditorCanvasFrameController : IBEditorCanvasFrameController
{
    IBMeasurementDrawingHandler *measurementDrawingHandler;
    IBRelativeMeasurementDrawingHandler *_relativeMeasurementDrawingHandler;
    IBLayoutGuideCanvasOverlay *_layoutGuideCanvasOverlay;
    IBLayoutManager *layoutManager;
    IBEditorFrameLayoutGuideGeneratorDelegate *layoutGuideGeneratorDelegate;
    NSMutableArray *cachedUserGuides;
    NSMutableArray *cachedSystemGuides;
    DVTDelayedInvocation *_validateUserGuidesInvocation;
    IBViewTracker *activeViewTracker;
    id <DVTInvalidation> hiddenViewDrawingToken;
    BOOL observingHiddenState;
    DVTNotificationToken *showingLayoutRectsNotification;
    DVTNotificationToken *showingBoundsRectsNotification;
    DVTNotificationToken *showingPlaceholderBackgroundsNotification;
    BOOL hasHiddenViewsInViewSubgraph;
    IBCanvasOverlay *_constraintPositioningOverlayView;
}

@property(readonly, nonatomic) IBCanvasOverlay *constraintPositioningOverlayView; // @synthesize constraintPositioningOverlayView=_constraintPositioningOverlayView;
@property(nonatomic) BOOL hasHiddenViewsInViewSubgraph; // @synthesize hasHiddenViewsInViewSubgraph;
@property(retain) IBViewTracker *activeViewTracker; // @synthesize activeViewTracker;
- (void).cxx_destruct;
- (void)resetCursorRects;
@property(readonly, nonatomic) IBLayoutManager *layoutManager;
@property(readonly) IBEditorFrameLayoutGuideGeneratorDelegate *layoutGuideGeneratorDelegate;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 editor:(id)arg7 draggingSourceContext:(id)arg8;
- (void)sendEvent:(id)arg1;
- (void)trackMeasurementsWithEvent:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)trackMeasurementLinesFromObjects:(id)arg1 toObject:(id)arg2 withEvent:(id)arg3;
- (void)editorDidChangeSelection:(id)arg1;
- (id)relativeMeasurementViewForObject:(id)arg1;
- (void)takeShowingPlaceholderBackgroundsFromDocumentEditor:(id)arg1;
- (void)takeShowingBoundsRectanglesFromDocumentEditor:(id)arg1;
- (void)takeShowingLayoutRectanglesFromDocumentEditor:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)drawHiddenViews;
- (struct CGRect)frameForOverlay:(id)arg1 inCanvasView:(id)arg2 scale:(double)arg3;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
@property(readonly) NSArray *systemLayoutGuides;
@property(readonly) NSArray *userLayoutGuides;
- (void)validateUserGuidesIfNeeded;
- (void)validateUserGuides:(id)arg1;
- (void)invalidateCachedUserLayoutGuides;
- (BOOL)guidesStoleEvent:(id)arg1;
- (id)userLayoutGuideAtPoint:(struct CGPoint)arg1;
- (id)editorCanvasFrame;
@property(readonly) IBMeasurementDrawingHandler *measurementDrawingHandler;
- (void)setBaseEditor:(id)arg1;
- (void)primitiveInvalidate;
- (void)willRemoveFrameFromCanvas;
- (void)didAddFrameToCanvas;
- (id)init;

@end
