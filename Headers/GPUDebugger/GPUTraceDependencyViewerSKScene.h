//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKScene.h>

#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class DependencyGraphVisualRepresentation, DependencyViewerAnimationDriver, DependencyViewerAnimationGroup, DependencyViewerEdge, DependencyViewerSKTextureCache, DependencyViewerVertex, DependencyViewerView_SpriteKit, GPUTraceDependencyViewerQuadTreeNode, NSArray, NSMutableDictionary, NSObject, NSPopover, NSSet, NSString, SKNode;
@protocol OS_dispatch_queue, SKSelectable;

__attribute__((visibility("hidden")))
@interface GPUTraceDependencyViewerSKScene : SKScene <NSMenuDelegate>
{
    id <SKSelectable> _selected;
    DependencyViewerEdge *_emphasized;
    GPUTraceDependencyViewerQuadTreeNode *_visiblityRoot;
    DependencyViewerAnimationDriver *_visualRepTransition;
    NSSet *_visibleNodes;
    NSMutableDictionary *_idToNode;
    DependencyViewerSKTextureCache *_textureCache;
    DependencyViewerAnimationGroup *_fadeGroup;
    NSPopover *_popover;
    SKNode *_popoverAnchor;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _statsVisible;
    BOOL _animating;
    DependencyViewerView_SpriteKit *_dvView;
    DependencyGraphVisualRepresentation *_gvGraphVis;
    double _magnification;
    struct CGRect _visibilityRect;
}

- (void).cxx_destruct;
@property(nonatomic) double magnification; // @synthesize magnification=_magnification;
@property(nonatomic) struct CGRect visibilityRect; // @synthesize visibilityRect=_visibilityRect;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) BOOL statsVisible; // @synthesize statsVisible=_statsVisible;
@property(readonly, nonatomic) __weak DependencyGraphVisualRepresentation *gvGraphVis; // @synthesize gvGraphVis=_gvGraphVis;
@property(nonatomic) __weak DependencyViewerView_SpriteKit *dvView; // @synthesize dvView=_dvView;
- (void)menuDidClose:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)contextMenuForLocaction:(struct CGPoint)arg1;
- (void)expandAll:(id)arg1;
- (void)collapseAll:(id)arg1;
- (BOOL)popoverAnchorIsVisible;
- (void)clearPopover;
- (void)updatePopover;
- (void)onTap:(struct CGPoint)arg1 modified:(BOOL)arg2;
- (id)_sortedTouches:(id)arg1;
- (id)nodeForGraphObject:(id)arg1;
- (id)nodeForVertex:(id)arg1;
- (void)selectResource:(unsigned long long)arg1 atAttachmentIndex:(unsigned long long)arg2 onVertex:(id)arg3;
- (void)selectVertex:(id)arg1;
- (void)onViewAppearanceChanged;
- (void)cancelAnimations;
- (void)didEvaluateActions;
- (void)update:(double)arg1;
- (void)synchroniseScroll;
- (void)onCameraUpdated:(struct CGRect)arg1 magnification:(double)arg2;
- (void)updateTooltips;
- (void)onGraphChanged:(id)arg1 initiator:(id)arg2 onTransitionDone:(CDUnknownBlockType)arg3;
- (void)onGraphLayoutReady:(id)arg1 withVisibleRect:(struct CGRect)arg2;
- (void)preloadGraphObjects:(id)arg1;
- (void)_loadGraphVis:(id)arg1;
- (id)_nodeForGraphObject:(id)arg1;
@property(readonly, nonatomic) NSArray *allNodes;
@property(readonly, nonatomic) __weak DependencyViewerVertex *selectedVertex;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

