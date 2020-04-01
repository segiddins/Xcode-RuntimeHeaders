//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DependencyGraphVisualRepresentation, DependencyViewerAnimationGroup, DependencyViewerGraphObject, GPUTraceDependencyViewerQuadTreeNode, GPUTraceDependencyViewerSKScene, NSMutableArray, NSMutableSet, SKSpriteNode;

__attribute__((visibility("hidden")))
@interface DependencyViewerAnimationDriver : NSObject
{
    BOOL _running;
    DependencyGraphVisualRepresentation *_nextVisualRep;
    unsigned long long _animationState;
    GPUTraceDependencyViewerQuadTreeNode *_visibilityTree;
    DependencyViewerGraphObject *_initiator;
    DependencyGraphVisualRepresentation *_previousVisualRep;
    NSMutableSet *_addedObjects;
    NSMutableSet *_removedObjects;
    NSMutableSet *_remainingObjects;
    NSMutableArray *_transitioningObjects;
    GPUTraceDependencyViewerSKScene *_scene;
    DependencyViewerAnimationGroup *_animationGroup;
    SKSpriteNode *_background;
    CDUnknownBlockType _transitionDoneCallback;
}

@property(copy, nonatomic) CDUnknownBlockType transitionDoneCallback; // @synthesize transitionDoneCallback=_transitionDoneCallback;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) SKSpriteNode *background; // @synthesize background=_background;
@property(retain, nonatomic) DependencyViewerAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(nonatomic) __weak GPUTraceDependencyViewerSKScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableArray *transitioningObjects; // @synthesize transitioningObjects=_transitioningObjects;
@property(retain, nonatomic) NSMutableSet *remainingObjects; // @synthesize remainingObjects=_remainingObjects;
@property(retain, nonatomic) NSMutableSet *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(retain, nonatomic) NSMutableSet *addedObjects; // @synthesize addedObjects=_addedObjects;
@property(retain, nonatomic) DependencyGraphVisualRepresentation *previousVisualRep; // @synthesize previousVisualRep=_previousVisualRep;
@property(nonatomic) __weak DependencyViewerGraphObject *initiator; // @synthesize initiator=_initiator;
@property(readonly, nonatomic) GPUTraceDependencyViewerQuadTreeNode *visibilityTree; // @synthesize visibilityTree=_visibilityTree;
@property(readonly, nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) DependencyGraphVisualRepresentation *nextVisualRep; // @synthesize nextVisualRep=_nextVisualRep;
- (void).cxx_destruct;
- (void)recreateVisibilityTree;
- (struct CGRect)_activeCanvasFrame;
- (id)_activeObjects;
- (void)cancel;
- (void)_finish;
- (void)_transitionOutOfFadeIn;
- (void)_transitionIntoFadeIn;
- (void)_transitionOutOfTranslate;
- (void)_transitionIntoTranslate;
- (void)_transitionObjectAction:(id)arg1 trackObject:(BOOL)arg2;
- (void)_transitionOutOfFadeOut;
- (void)_transitionIntoFadeOut;
- (void)_transitionOutOfStarting;
- (void)_transition;
- (void)run;
- (id)initWithPreviousState:(id)arg1 nextState:(id)arg2 scene:(id)arg3 initiator:(id)arg4 onTransitionDone:(CDUnknownBlockType)arg5;
- (id)initiatorCluster;
- (id)initiatorVertex;
- (struct CGRect)_CGRectLerp:(struct CGRect)arg1 dest:(struct CGRect)arg2 progress:(double)arg3;
- (void)_populateAnimationSets;
- (void)_populateAnimationSets:(id)arg1 new:(id)arg2;

@end

