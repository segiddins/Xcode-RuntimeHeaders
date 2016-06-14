//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/DBGInteractiveSceneViewDelegate-Protocol.h>
#import <DebuggerUI/DBGRangeSliderDelegate-Protocol.h>
#import <DebuggerUI/DBGSceneCameraDelegate-Protocol.h>
#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/DVTStatefulObject-Protocol.h>
#import <DebuggerUI/SCNSceneRendererDelegate-Protocol.h>

@class DBGHostNode, DBGLayoutConstraintOverlayImageProvider, DBGLayoutConstraintSet, DBGNode, DBGRangeSliderNode, DBGSceneCamera, DBGViewDebuggerAdditionUIController, DVTObservingToken, DVTStackBacktrace, DVTStateToken, NSMutableSet, NSSet, NSString;
@protocol DBGSceneViewControllerDataSourceProtocol, DBGSceneViewControllerDelegate;

@interface DBGSceneViewController : NSViewController <SCNSceneRendererDelegate, DBGInteractiveSceneViewDelegate, DBGRangeSliderDelegate, DBGSceneCameraDelegate, DVTStatefulObject, DVTInvalidation>
{
    DBGSceneCamera *_camera;
    DBGNode *_rotationNode;
    DBGHostNode *_rootHostNode;
    DBGRangeSliderNode *_rangeSliderNode;
    unsigned long long _rangeSliderLeft;
    unsigned long long _rangeSliderRight;
    NSSet *_highlightedNodes;
    DBGHostNode *_currentMasterView;
    BOOL _mouseOverRangeSlider;
    struct CGPoint _panLeftover;
    BOOL _explicitZoom;
    NSSet *_selectedViewInstances;
    DBGLayoutConstraintSet *_allConstraints;
    DBGLayoutConstraintOverlayImageProvider *_constraintOverlaySource;
    DVTObservingToken *_highlightedConstraintObserver;
    NSMutableSet *_cameraFacingNodes;
    BOOL _explicitlyHideTrueSpacingBoxes;
    id <DBGSceneViewControllerDataSourceProtocol> _dataSource;
    BOOL _hierarchyContainsTrueSpacingBoxes;
    BOOL _showTrueSpacingBoxes;
    BOOL _clippingEnabled;
    BOOL _isIn3D;
    BOOL _showOnCanvasRangeSlider;
    BOOL _constraintsEnabled;
    BOOL _shouldHaveLineWidth;
    int _nodeContentMode;
    unsigned long long _numberOfZPlanes;
    id <DBGSceneViewControllerDelegate> _delegate;
    double _nodeSpacing;
    DVTStateToken *_stateToken;
    CDUnknownBlockType _mouseUpAfterDragBlock;
    DBGViewDebuggerAdditionUIController *_debuggerUIController;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
@property __weak DBGViewDebuggerAdditionUIController *debuggerUIController; // @synthesize debuggerUIController=_debuggerUIController;
@property(copy) CDUnknownBlockType mouseUpAfterDragBlock; // @synthesize mouseUpAfterDragBlock=_mouseUpAfterDragBlock;
@property(nonatomic) BOOL shouldHaveLineWidth; // @synthesize shouldHaveLineWidth=_shouldHaveLineWidth;
@property(nonatomic) __weak DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(nonatomic) double nodeSpacing; // @synthesize nodeSpacing=_nodeSpacing;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property __weak id <DBGSceneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <DBGSceneViewControllerDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) BOOL constraintsEnabled; // @synthesize constraintsEnabled=_constraintsEnabled;
@property(readonly) BOOL showOnCanvasRangeSlider; // @synthesize showOnCanvasRangeSlider=_showOnCanvasRangeSlider;
@property unsigned long long numberOfZPlanes; // @synthesize numberOfZPlanes=_numberOfZPlanes;
@property(nonatomic) BOOL isIn3D; // @synthesize isIn3D=_isIn3D;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)cameraDidZoomTo100Percent;
- (void)cameraIsUpdatingZoomFactor;
- (void)moveTo2D:(BOOL)arg1;
- (void)toggle2D3D;
- (void)zoom100Percent;
- (void)zoomOut;
- (void)zoomIn;
- (struct SCNVector3)adjustedPivotPoint;
- (struct SCNVector3)visibleCenter;
- (void)resetPivotNode;
- (void)updatePivotNodeWithNode:(id)arg1 withHitLocation:(struct SCNVector3)arg2;
- (void)setConstraintsEnabled:(BOOL)arg1;
- (void)toggleClipping;
@property(getter=isClippingEnabled) BOOL clippingEnabled; // @synthesize clippingEnabled=_clippingEnabled;
- (void)updateVisibilityStateOfTrueSpacingBoxes;
@property BOOL hierarchyContainsTrueSpacingBoxes; // @synthesize hierarchyContainsTrueSpacingBoxes=_hierarchyContainsTrueSpacingBoxes;
- (void)setShowTrueSpacingBoxesUserInitiated:(BOOL)arg1;
@property BOOL showTrueSpacingBoxes; // @synthesize showTrueSpacingBoxes=_showTrueSpacingBoxes;
- (void)updateRenderingOrderWithRootNode:(id)arg1;
- (void)toggleShowConstraints;
- (void)focusOnParent;
- (void)focusOnSelectionOrChild;
- (void)_navigateForUpArrowKey;
- (void)_navigateForDownArrowKey;
- (void)navigateSceneWithKeyboardEvent:(id)arg1;
- (void)sceneViewDidChangeFrameSize;
- (void)transitionFrom3DTo2D;
- (void)transitionFrom2DTo3D;
- (struct CGSize)modelSpacePixelSize;
- (void)_adjustCameraPanWithXValue:(double)arg1 yValue:(double)arg2;
- (void)animatedAdjustCameraPanWithXValue:(double)arg1 yValue:(double)arg2;
- (void)adjustCameraPanWithXValue:(double)arg1 yValue:(double)arg2;
- (void)panFromCenteredObject:(id)arg1 makingNewCenteredObject:(id)arg2 window:(id)arg3 zoom:(double)arg4;
- (void)_animateToTransformOnMouseUp:(struct CATransform3D)arg1;
- (struct CATransform3D)_applyRotationRails:(struct CATransform3D)arg1;
- (struct CATransform3D)rotationTransformForDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)rotate3DViewsWithXValue:(double)arg1 yValue:(double)arg2;
- (void)updateNodesWithUpdatedCameraZoomFactorBelowRootNode:(id)arg1;
@property(readonly) double zoomFactor;
- (void)adjustCameraZoomLevelWithValue:(double)arg1 towardsCursorLocation:(struct SCNVector3)arg2;
- (void)autoHideSlider;
- (void)mouseMovedAfterRest;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)toggleConstraintsAndSelect:(id)arg1;
- (id)_modelViewForClickedNode:(id)arg1;
- (void)hideViewsBelow:(id)arg1;
- (void)hideViewsAbove:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)hideViewsForNode:(id)arg1 withEvent:(id)arg2;
- (id)menuForNode:(id)arg1 withEvent:(id)arg2;
- (void)mouseRests;
- (void)mouseUpAfterDrag;
- (void)removeCurrentHighlight;
- (void)mousedOverNode:(id)arg1;
- (void)mouseClickedAndHitRangeSliderNode:(id)arg1 withEvent:(id)arg2;
- (void)mouseClickedAndHitNode:(id)arg1 withEvent:(id)arg2;
- (double)screenSpaceBetweenTicks;
- (struct SCNVector3)_positionOnPlaneForZVectorStartingAtPoint:(struct SCNVector3)arg1 relativeToNode:(id)arg2;
- (void)calculateVisiblePlanesAndUpdateRangeSlider;
- (void)_adjustCameraFacingNodesForPixelPerfectRendering;
- (BOOL)_adjustPixelPerfectAdjustingSubnode:(id)arg1;
- (void)manageCameraFacingNode:(id)arg1;
- (void)mouseUpAfterDraggingRangeSliderNode:(id)arg1;
- (void)highlight3DPlaneWithIndex:(long long)arg1;
- (void)rangeSliderDidUpdateSpacing:(id)arg1 from3DPlaneIndex:(long long)arg2;
- (void)rangeSliderDidChange:(id)arg1;
- (void)draggedRangeSliderNode:(id)arg1 withEvent:(id)arg2 locationInSceneView:(struct CGPoint)arg3;
@property unsigned long long rangeSliderRight;
@property unsigned long long rangeSliderLeft;
- (void)distanceSliderChanged:(id)arg1;
- (void)updateSpacingWithDistance:(double)arg1 aroundZPlaneIndex:(long long)arg2;
- (struct CGPoint)_offsetForFocusedHierarchy;
- (void)updatePresentedConstraintsForViewInstances:(id)arg1;
- (void)updateWithSelectedViewObjects:(id)arg1;
- (unsigned long long)zIndexForNode:(id)arg1;
- (void)updateViewWithIdentifier:(id)arg1 withSnapshot:(id)arg2;
- (void)_finishInitializationByUpdatingUIWithRootView:(id)arg1;
- (void)_setupOrientationForModelObject:(id)arg1;
- (void)initializeSceneWithRootView:(id)arg1;
- (void)loadDataWithRootObject:(id)arg1 constraintSet:(id)arg2 debuggerUIController:(id)arg3 dataSourceManager:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

