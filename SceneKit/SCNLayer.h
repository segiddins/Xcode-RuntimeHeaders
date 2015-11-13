//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CAOpenGLLayer.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSString, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNTechnique, SKScene;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNSceneRendererDelegate;

@interface SCNLayer : CAOpenGLLayer <SCNSceneRenderer, SCNTechniqueSupport>
{
    SCNJitterer *_jitterer;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    struct _CGLContextObject *_mainContext;
    BOOL _drawForJittering;
    BOOL _rendersIntoMaterial;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
@property(nonatomic) unsigned long long debugOptions;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)pause;
- (void)stop;
- (void)play;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
- (BOOL)_supportsJitteringSyncRedraw;
- (BOOL)_canJitter;
- (void)_cancelJitterRedisplay;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject *)arg1;
- (BOOL)inLiveResize;
- (id)contentLayer;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
@property(readonly, nonatomic) void *context;
- (struct _CGLContextObject *)CGLContext;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) BOOL loops;
@property(getter=isPlaying) BOOL playing;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(nonatomic) double sceneTime;
@property(nonatomic) double currentTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_glContextDidChange;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (void)projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (void)setRendersIntoMaterial:(BOOL)arg1;
- (BOOL)rendersIntoMaterial;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)_resumeDisplayLinkForDelayedFrame;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_resumeDisplayLinkIfNeeded;
- (void)_pauseDisplayLinkIfPossible;
- (void)_resumeDisplayLink;
- (void)_pauseDisplayLink;
@property(nonatomic) BOOL showsStatistics;
- (id)rendererOptions;
- (BOOL)canDrawConcurrently;
- (void)finalize;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 sharedContext:(struct _CGLContextObject *)arg2;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

