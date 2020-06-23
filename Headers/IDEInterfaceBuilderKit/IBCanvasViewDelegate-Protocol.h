//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class DVTDraggedImageState, IBCanvasFrame, IBCanvasOverlay, IBCanvasView, NSArray, NSEvent, NSSet, NSValue;
@protocol DVTDraggingInfo, NSDraggingInfo;

@protocol IBCanvasViewDelegate <NSObject>
- (NSArray *)draggedTypesForCanvasView:(IBCanvasView *)arg1;
- (void)canvasView:(IBCanvasView *)arg1 transferFirstResponderAfterDragConclusion:(id <DVTDraggingInfo>)arg2;
- (void)canvasView:(IBCanvasView *)arg1 draggingEnded:(id <NSDraggingInfo>)arg2;
- (void)canvasView:(IBCanvasView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (void)canvasView:(IBCanvasView *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (BOOL)canvasView:(IBCanvasView *)arg1 prepareForDragOperation:(id <NSDraggingInfo>)arg2;
- (void)canvasView:(IBCanvasView *)arg1 dragWillForceRedrawOfDestinationWindowPriorToDragEnd:(id <DVTDraggingInfo>)arg2;
- (BOOL)canvasView:(IBCanvasView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)canvasView:(IBCanvasView *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
- (unsigned long long)canvasView:(IBCanvasView *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
- (DVTDraggedImageState *)canvasView:(IBCanvasView *)arg1 draggedImageState:(id <DVTDraggingInfo>)arg2;
- (void)canvasViewDidStopSuppressingTrackingAreaUpdates:(IBCanvasView *)arg1;
- (void)canvasViewWillInvalidateCursorRects:(IBCanvasView *)arg1;
- (void)canvasViewDidUpdateTrackingAreas:(IBCanvasView *)arg1;
- (void)canvasViewResetCursorRects:(IBCanvasView *)arg1;
- (void)canvasViewWillUpdateTrackingAreas:(IBCanvasView *)arg1;
- (void)canvasViewWindowResizeTest:(IBCanvasView *)arg1;
- (void)canvasViewRunResizeTest:(IBCanvasView *)arg1;
- (void)canvasViewRunScrollTest:(IBCanvasView *)arg1;
- (void)canvasViewRunZoomTest:(IBCanvasView *)arg1;
- (void)canvasViewDidCompleteLayout:(IBCanvasView *)arg1;
- (void)canvasView:(IBCanvasView *)arg1 willRemoveCanvasFrame:(IBCanvasFrame *)arg2;
- (NSValue *)canvasView:(IBCanvasView *)arg1 lastKnownAnchorForCanvasFrame:(IBCanvasFrame *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 selectionDidChange:(NSSet *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 userDidDoubleClickInEmptyArea:(NSEvent *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 userDidClickInEmptyArea:(NSEvent *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 userDidBandSelectCanvasFrames:(NSSet *)arg2 bandSelectionRect:(struct CGRect)arg3;
- (void)canvasView:(IBCanvasView *)arg1 userDidSelectCanvasFrames:(NSSet *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 canvasFrameDidChangeAnchor:(IBCanvasFrame *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 canvasFrameDidChangeLayout:(IBCanvasFrame *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 canvasFrameDidBecomeKey:(IBCanvasFrame *)arg2;
- (void)canvasView:(IBCanvasView *)arg1 canvasFrameDidResignKey:(IBCanvasFrame *)arg2;
- (double)canvasView:(IBCanvasView *)arg1 validateMagnification:(double)arg2;
- (double)canvasView:(IBCanvasView *)arg1 canvasFrameChromeScaleForContentScale:(double)arg2;
- (struct CGRect)canvasView:(IBCanvasView *)arg1 frameForOverlayView:(IBCanvasOverlay *)arg2 ofCanvasFrame:(IBCanvasFrame *)arg3 scale:(double)arg4;
- (double)canvasView:(IBCanvasView *)arg1 scaleForOverlayView:(IBCanvasOverlay *)arg2 ofCanvasFrame:(IBCanvasFrame *)arg3 canvasMagnification:(double)arg4;
- (NSValue *)canvasView:(IBCanvasView *)arg1 decoratorRectForCanvasFrame:(IBCanvasFrame *)arg2;
@end

