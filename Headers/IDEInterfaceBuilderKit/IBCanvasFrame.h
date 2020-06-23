//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class IBCanvasView, NSMutableSet, NSSet;

@interface IBCanvasFrame : DVTLayoutView_ML
{
    NSMutableSet *_childFrames;
    BOOL _autopositionOnNextLayout;
    BOOL _frameIsSelected;
    IBCanvasView *_canvasView;
    IBCanvasFrame *_parentFrame;
    double _chromeScaleFactor;
    struct CGPoint _anchor;
}

@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) double chromeScaleFactor; // @synthesize chromeScaleFactor=_chromeScaleFactor;
@property BOOL frameIsSelected; // @synthesize frameIsSelected=_frameIsSelected;
@property(readonly) IBCanvasFrame *parentFrame; // @synthesize parentFrame=_parentFrame;
@property(readonly) NSSet *childFrames; // @synthesize childFrames=_childFrames;
@property BOOL autopositionOnNextLayout; // @synthesize autopositionOnNextLayout=_autopositionOnNextLayout;
@property(retain) IBCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (void).cxx_destruct;
- (BOOL)isVerticallyResizableForCanvasAlignment;
- (BOOL)isHorizontallyResizableForCanvasAlignment;
- (CDStruct_c519178c)canvasAlignmentInset;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (struct CGPoint)integralizedFrameOriginForAnchor:(struct CGPoint)arg1;
- (struct CGPoint)integralizedFrameOriginForAnchor:(struct CGPoint)arg1 andSize:(struct CGSize)arg2;
- (struct CGPoint)anchorForFrameOrigin:(struct CGPoint)arg1;
- (struct CGPoint)anchorForFrame:(struct CGRect)arg1;
- (struct CGRect)integralizedFrameForAnchor:(struct CGPoint)arg1;
- (struct CGRect)integralizedFrameForAnchor:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)convertFrameSpacePointToAnchorSpacePoint:(struct CGPoint)arg1;
- (struct CGPoint)convertAnchorSpacePointToFrameSpacePoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isEligibleForBandSelection;
- (BOOL)shouldIncludeParentWhenScrollingToVisible;
- (id)boundingRectsForBandSelectionHitTesting;
- (struct CGRect)boundsForHitTesting;
- (struct CGRect)frameForCenteringInRect:(struct CGRect)arg1;
- (void)positionChildFrames;
- (void)makeKeyAndOrderFrontTakingFocus:(BOOL)arg1;
- (void)makeKeyTakingFocus:(BOOL)arg1;
- (void)orderFront;
- (void)descendantFrameDidResignKey:(id)arg1;
- (void)descendantFrameDidBecomeKey:(id)arg1;
- (void)resignKeyCanvasFrame;
- (void)becomeKeyCanvasFrame;
- (void)hasKeyLookDidChange;
- (BOOL)hasKeyLook;
- (BOOL)isAncestorOfKeyCanvasFrame;
- (BOOL)isKeyCanvasFrame;
- (void)removeFromParentFrame;
- (void)addChildFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

