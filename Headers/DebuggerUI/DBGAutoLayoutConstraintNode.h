//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

#import <DebuggerUI/DBGSceneViewRevealing-Protocol.h>

@class DBGInteractiveSceneView, DBGLayoutConstraint, DBGSceneCamera, DBGSceneNode, DBGSimpleNode, DBGViewInstance, IBAutolayoutConstraintDrawable, NSMutableArray;

@interface DBGAutoLayoutConstraintNode : DBGNode <DBGSceneViewRevealing>
{
    DBGInteractiveSceneView *_sceneView;
    DBGNode *_projectionLinesHostNode;
    IBAutolayoutConstraintDrawable *_drawable;
    struct SCNVector3 _startPoint;
    struct SCNVector3 _endPoint;
    DBGViewInstance *_firstItem;
    DBGViewInstance *_secondItem;
    NSMutableArray *_nodesBelongingToConstraint;
    struct CGRect _rootViewRect;
    BOOL _pointingUpOrRight;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _revealed;
    DBGSceneNode *_firstItemNode;
    DBGSceneNode *_secondItemNode;
    DBGLayoutConstraint *_modelObject;
    DBGSimpleNode *_constraintStartNode;
    DBGSimpleNode *_constraintEndNode;
    DBGSceneCamera *_sceneCamera;
    DBGSimpleNode *_revealDecoration;
}

@property(retain) DBGSimpleNode *revealDecoration; // @synthesize revealDecoration=_revealDecoration;
@property __weak DBGSceneCamera *sceneCamera; // @synthesize sceneCamera=_sceneCamera;
@property(retain, nonatomic) DBGSimpleNode *constraintEndNode; // @synthesize constraintEndNode=_constraintEndNode;
@property(retain, nonatomic) DBGSimpleNode *constraintStartNode; // @synthesize constraintStartNode=_constraintStartNode;
@property(retain) DBGLayoutConstraint *modelObject; // @synthesize modelObject=_modelObject;
@property __weak DBGSceneNode *secondItemNode; // @synthesize secondItemNode=_secondItemNode;
@property __weak DBGSceneNode *firstItemNode; // @synthesize firstItemNode=_firstItemNode;
- (void).cxx_destruct;
- (id)_finderDecorationNodeSize:(struct CGSize)arg1;
@property(getter=isRevealed) BOOL revealed; // @synthesize revealed=_revealed;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)removeFromParentNode;
- (void)addSelectableCylinderGeometryToConstraintNode:(id)arg1 startAnchorNode:(id)arg2 endAnchorNode:(id)arg3 lengthPadding:(double)arg4;
- (BOOL)constraintProjectionLineNeedsBeams;
- (BOOL)constraintNeedsProjectionLine;
- (BOOL)firstAndScecondItemInDifferentPlanes;
- (void)_addProjectionLineAtConstraintsEnd:(BOOL)arg1;
- (void)addProjectionLines;
- (id)limitedSpaceDualTBeamGeometryFromDrawable:(id)arg1;
- (void)positionStartNode:(id)arg1 endNode:(id)arg2 withLine:(CDStruct_e3b9714e)arg3;
- (id)iBeamGeometryFromDrawable:(id)arg1;
- (id)alignmentLineGeometryFromDrawable:(id)arg1;
- (id)connectionLineGeometryFromDrawable:(id)arg1;
- (id)geometryFromDrawable:(id)arg1;
- (void)addGuideLine:(CDStruct_e3b9714e)arg1 guidelineIsLeftOrBottom:(BOOL)arg2 color:(id)arg3 rootViewRect:(struct CGRect)arg4 firstItem:(id)arg5 secondItem:(id)arg6;
- (void)markBaselineViewsAsInterestingForAutoLayout;
- (id)initWithDrawable:(id)arg1 guideLineColor:(id)arg2 rootViewRect:(struct CGRect)arg3 firstItem:(id)arg4 secondItem:(id)arg5 constraintModel:(id)arg6 sceneView:(id)arg7;

@end

