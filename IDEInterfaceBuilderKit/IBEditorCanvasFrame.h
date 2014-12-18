//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasFrame.h>

#import "IBDocumentArbitrationResponder.h"
#import "IBImageButtonDelegate.h"

@class IBEditorCanvasFrameContentView, IBEditorCanvasFrameController, IBImageButton, NSEvent, NSNumber, NSSet, NSString, NSTrackingArea, NSView;

@interface IBEditorCanvasFrame : IBCanvasFrame <IBImageButtonDelegate, IBDocumentArbitrationResponder>
{
    IBEditorCanvasFrameContentView *contentView;
    NSTrackingArea *mouseMovedArea;
    long long dragAndDropFrameCount;
    IBImageButton *resizingGrips[8];
    NSSet *resizingKnobSet;
    long long disableDrawingCachingCount;
    BOOL growKnobsFullLength;
    BOOL horizontallyResizable;
    BOOL verticallyResizable;
    NSString *title;
    IBImageButton *closeButton;
    NSEvent *_lastMouseDown;
    IBEditorCanvasFrameController *_controller;
    NSView *_wrapperView;
    NSNumber *_pinnedKnob;
    NSView *_pinnedDescendantView;
    struct CGPoint _pinningPoint;
}

@property(nonatomic) struct CGPoint pinningPoint; // @synthesize pinningPoint=_pinningPoint;
@property(retain, nonatomic) NSView *pinnedDescendantView; // @synthesize pinnedDescendantView=_pinnedDescendantView;
@property(retain, nonatomic) NSNumber *pinnedKnob; // @synthesize pinnedKnob=_pinnedKnob;
@property(retain, nonatomic) NSView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain) IBEditorCanvasFrameController *controller; // @synthesize controller=_controller;
@property(copy) NSEvent *lastMouseDown; // @synthesize lastMouseDown=_lastMouseDown;
@property(retain, nonatomic) IBImageButton *closeButton; // @synthesize closeButton;
@property(nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable; // @synthesize verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable; // @synthesize horizontallyResizable;
@property(readonly) NSView *contentView; // @synthesize contentView;
@property(copy) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)knobButtonImageForState:(unsigned long long)arg1 knob:(long long)arg2;
- (BOOL)imageButton:(id)arg1 interceptMouseDown:(id)arg2;
- (void)dragKnob:(long long)arg1 withMouseDown:(id)arg2;
- (BOOL)isDrawingCachingEnabled;
- (void)enableDrawingCaching;
- (void)disableDrawingCaching;
- (void)updateGrowKnobsVisibility;
- (BOOL)isGrowKnobsFullLength;
- (void)setGrowKnobsFullLength:(BOOL)arg1;
- (void)layoutGrowKnobs;
- (void)setAllGrowKnobsVisible:(BOOL)arg1;
- (void)setGrowKnob:(long long)arg1 isVisible:(BOOL)arg2;
- (void)setAllGrowKnobsAreEnabled:(BOOL)arg1;
- (void)setGrowKnob:(long long)arg1 isEnabled:(BOOL)arg2;
- (BOOL)isGrowKnobEnabled:(long long)arg1;
- (BOOL)isAxisForKnobResizable:(long long)arg1;
- (id)resizingGripViewForKnob:(long long)arg1;
- (void)hasKeyLookDidChange;
- (BOOL)isSubviewHittable:(id)arg1;
- (void)canvasFrameResizingTest:(id)arg1;
- (struct CGSize)sizeForKnob:(long long)arg1;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (void)didCompleteLayout;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (struct CGSize)draggingStickiness:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)defaultDragImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 withException:(id)arg4 shouldSlideBack:(char *)arg5;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 shouldSlideBack:(char *)arg4;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2 operation:(unsigned long long)arg3 previousOperation:(unsigned long long)arg4;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (BOOL)isVerticallyResizableForCanvasAlignment;
- (BOOL)isHorizontallyResizableForCanvasAlignment;
- (CDStruct_c519178c)canvasAlignmentInset;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)boundsForHitTesting;
- (void)positionChildFrames;
- (void)layoutBottomUp;
- (struct CGRect)knobPerimeter;
- (void)layoutTopDown;
- (struct CGRect)closeButtonRect;
- (struct CGRect)contentRect;
- (CDStruct_f6143a38)spanForAttachingSeguesToEdge:(unsigned long long)arg1;
- (double)canvasFrameTitleCapsuleHeight;
- (BOOL)isFlipped;
- (struct CGRect)frameToFitDocumentViewPinningKnob:(long long)arg1;
- (struct CGSize)sizeForDocumentSize:(struct CGSize)arg1;
- (CDStruct_c519178c)dockingInset;
- (CDStruct_c519178c)contentInset;
- (void)flagsChanged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)close;
- (void)willRemoveFromCanvas;
- (void)didAddToCanvas;
- (BOOL)shouldDragFrameWithMouseDown:(id)arg1;
- (void)closeFrameButtonClicked:(id)arg1;
@property(retain, nonatomic) NSView *documentView;
- (void)invokeWithPinnedKnob:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)setAnchor:(struct CGPoint)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)editorCanvasFrameCommonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

