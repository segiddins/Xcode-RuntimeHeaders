//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DBGCanvasRenderable-Protocol.h>
#import <DebuggerUI/DBGViewSurfaceUpdateDelegate-Protocol.h>

@class DBG2DPolygon, DBGSceneNode, DBGViewControllerInstance, DBGViewDebuggerAdditionUIController, DBGViewSurface, NSArray, NSMutableArray, NSString;

@interface DBGViewInstance : NSObject <DBGViewSurfaceUpdateDelegate, DBGCanvasRenderable>
{
    DBG2DPolygon *_boundsPolygon;
    BOOL _transformIs3D;
    BOOL _selected;
    BOOL _showFlattened;
    BOOL _isCurrentMasterView;
    BOOL _highlighted;
    BOOL _isIOS;
    NSMutableArray *_layoutGuideInstances;
    NSString *_identifier;
    DBGViewInstance *_layoutReference;
    DBG2DPolygon *_resultingClippingPolygon;
    DBG2DPolygon *_clippedShape;
    DBG2DPolygon *_borderPolygon;
    unsigned long long _viewRenderingOrder;
    id _snapshot;
    id _flattenedSnapshot;
    NSArray *_subviews;
    DBGViewInstance *_superview;
    DBGSceneNode *_node;
    DBGViewSurface *_modelObject;
    DBGViewDebuggerAdditionUIController *_debuggerUIController;
    DBGViewControllerInstance *_owningController;
    struct SCNVector3 _position;
    struct SCNVector3 _anchorPoint;
    struct CGRect _frame;
    struct CGRect _bounds;
    struct CGRect _alignmentRect;
    struct CATransform3D _transform;
    struct CATransform3D _sublayerTransform;
    struct CATransform3D _composedLocalTransform;
}

- (void).cxx_destruct;
@property(retain) DBGViewControllerInstance *owningController; // @synthesize owningController=_owningController;
@property BOOL isIOS; // @synthesize isIOS=_isIOS;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak DBGViewDebuggerAdditionUIController *debuggerUIController; // @synthesize debuggerUIController=_debuggerUIController;
@property(nonatomic) __weak DBGViewSurface *modelObject; // @synthesize modelObject=_modelObject;
@property(nonatomic) __weak DBGSceneNode *node; // @synthesize node=_node;
@property(nonatomic) __weak DBGViewInstance *superview; // @synthesize superview=_superview;
@property(retain, nonatomic) NSArray *subviews; // @synthesize subviews=_subviews;
@property(retain, nonatomic) id flattenedSnapshot; // @synthesize flattenedSnapshot=_flattenedSnapshot;
@property(retain, nonatomic) id snapshot; // @synthesize snapshot=_snapshot;
@property BOOL isCurrentMasterView; // @synthesize isCurrentMasterView=_isCurrentMasterView;
@property unsigned long long viewRenderingOrder; // @synthesize viewRenderingOrder=_viewRenderingOrder;
@property(retain, nonatomic) DBG2DPolygon *borderPolygon; // @synthesize borderPolygon=_borderPolygon;
@property(retain, nonatomic) DBG2DPolygon *clippedShape; // @synthesize clippedShape=_clippedShape;
@property(retain, nonatomic) DBG2DPolygon *resultingClippingPolygon; // @synthesize resultingClippingPolygon=_resultingClippingPolygon;
@property(nonatomic) BOOL showFlattened; // @synthesize showFlattened=_showFlattened;
@property(nonatomic) __weak DBGViewInstance *layoutReference; // @synthesize layoutReference=_layoutReference;
@property struct CATransform3D composedLocalTransform; // @synthesize composedLocalTransform=_composedLocalTransform;
@property struct CATransform3D sublayerTransform; // @synthesize sublayerTransform=_sublayerTransform;
@property struct CATransform3D transform; // @synthesize transform=_transform;
@property struct SCNVector3 anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property struct SCNVector3 position; // @synthesize position=_position;
@property struct CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSMutableArray *layoutGuideInstances; // @synthesize layoutGuideInstances=_layoutGuideInstances;
@property(readonly, nonatomic) DBG2DPolygon *boundsPolygon;
@property(readonly, nonatomic) BOOL clipsToBounds;
@property(readonly, nonatomic) BOOL isDoubleSided;
@property(readonly, nonatomic) BOOL isFlipped;
- (BOOL)needsCoordinateSpaceNormalization;
- (double)normalizeVerticalUnitCoordinateIfNecessary:(double)arg1 ofView:(id)arg2;
- (struct CATransform3D)normalizeTransform:(struct CATransform3D)arg1 ofView:(id)arg2;
- (struct CGPoint)normalizedPoint:(struct CGPoint)arg1;
- (struct CGRect)normalizedRect:(struct CGRect)arg1;
- (void)viewSurfaceDidUpdateVisualRepresentation:(id)arg1;
- (BOOL)transformIs3D;
- (BOOL)shouldSkipSnapshotUpdates;
- (void)updateSnapshot;
- (void)_recursivelyDestroyLayerTreeConnectionsWithViewInstance:(id)arg1;
- (void)_recursivelyBuildLayerTreeConnectionsWithViewInstance:(id)arg1;
- (id)_snapshotWithChildrenUsingSublayerTree;
- (void)_updateSnapshotIfNecessary;
- (id)snapshotRenderingWorkQueue;
- (id)_viewDebugger;
- (void)_setupLayoutGuideInstances;
- (void)updateChildren;
- (void)_sortSubviewsOfSurface:(id)arg1 outSubviewsToAdd:(id)arg2 outSubviewsToRemove:(id)arg3;
- (id)subviewInstanceForSurface:(id)arg1;
- (void)_calculateComposedLocalTransformForSKNode;
- (void)_calculateComposedLocalTransformForSKScene;
- (void)_calculateComposedLocalTransformForSubhierarchyView;
- (void)_calculateComposedLocalTransformForView;
- (void)calculateComposedLocalTransform;
- (BOOL)_representsSubhierarchyNode;
- (BOOL)_representsSKNode;
- (BOOL)_representsSKScene;
- (void)calculateResultingClippingPolygon;
- (void)_updateOwningController:(id)arg1;
- (id)initWithViewSurface:(id)arg1 superview:(id)arg2 debuggerUIController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

