//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNView.h>

@class DBGRenderingDestinationHelper, DBGSceneViewController, DBGViewDebuggerTheme, SCNMaterialProperty, SCNNode;
@protocol DBGInteractiveSceneViewDelegate, MTLBuffer;

@interface DBGInteractiveSceneView : SCNView
{
    SCNNode *lastNodeMousedOver;
    BOOL _mouseDownIsClick;
    struct SCNVector3 _mousePosition3D;
    SCNNode *_activeRangeSliderNode;
    BOOL _mouseIsResting;
    BOOL _mouseIsDragging;
    BOOL _isDragModifierKeyPressed;
    int _draggingDirection;
    struct CGPoint _mouseDragDistance;
    BOOL _constraintsEnabled;
    int _nodeContentMode;
    DBGViewDebuggerTheme *_viewDebuggerTheme;
    DBGSceneViewController *_sceneViewController;
    id <DBGInteractiveSceneViewDelegate> _eventDelegate;
    double _backingScaleThreadSafe;
    SCNMaterialProperty *_screenMaskMaterialProperty;
    DBGRenderingDestinationHelper *_renderingDestinationHelper;
    struct CGRect _boundsThreadSafe;
}

@property __weak DBGRenderingDestinationHelper *renderingDestinationHelper; // @synthesize renderingDestinationHelper=_renderingDestinationHelper;
@property(retain) SCNMaterialProperty *screenMaskMaterialProperty; // @synthesize screenMaskMaterialProperty=_screenMaskMaterialProperty;
@property(nonatomic) double backingScaleThreadSafe; // @synthesize backingScaleThreadSafe=_backingScaleThreadSafe;
@property struct CGRect boundsThreadSafe; // @synthesize boundsThreadSafe=_boundsThreadSafe;
@property(nonatomic) BOOL constraintsEnabled; // @synthesize constraintsEnabled=_constraintsEnabled;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property __weak id <DBGInteractiveSceneViewDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property __weak DBGSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)keyDown:(id)arg1;
- (float)projectedAreaOfNode:(id)arg1;
- (id)resultingNodeFromFollowingHitTestForwardsOfNode:(id)arg1;
- (id)appropriateResultFromHitTestResults:(id)arg1 forEvent:(id)arg2;
- (id)resultingNodeFromHitTestResults:(id)arg1 forEvent:(id)arg2;
- (id)menuForEvent:(id)arg1;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)resetMouseResting;
- (void)scrollWheel:(id)arg1;
- (void)_resetMouseDragging;
- (void)mouseDragged:(id)arg1;
- (BOOL)_mouseMovementToInitiateDragThresholdReachedWithEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)substantialMouseMovementWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)simpleNodeRespondsToHitTests:(id)arg1;
- (id)filterHitTestResults:(id)arg1 hitLocation:(struct CGPoint)arg2;
- (id)filteredHitTestResultsFromGestureRecognizer:(id)arg1;
- (id)filteredHitTestResultsFromEvent:(id)arg1;
- (id)_filteredHitTestResultFromLocation:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_isRangeSliderActive;
- (BOOL)nodeIsPartOfRangeSlider:(id)arg1;
- (id)rangeSliderNodeInHitTestResults:(id)arg1;
- (void)mouseRestingTimerFired;
- (void)removeMouseRestingTimer;
- (void)resetMouseRestingTimer;
- (void)dealloc;
- (void)windowBackingPropertiesChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)isUsingMetalRenderer;
- (void)disableScreenMasking;
@property(readonly) id <MTLBuffer> worldPositionToScreenUVsMatrixBufferRead;
- (void)enableScreenMaskingWithImage:(id)arg1 screenPointSize:(struct CGSize)arg2;
- (void)effectiveAppearanceDidChange;
@property(readonly) DBGViewDebuggerTheme *viewDebuggerTheme; // @synthesize viewDebuggerTheme=_viewDebuggerTheme;
- (void)_initialSetup;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)init;

@end

