//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArbitrationResponder-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSceneUpdateContentViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIOverlayViewDelegate-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBUINavigationBar, IBUIOverlayView, IBUISimulatedMetricsContainer, IBUIStatusBar, IBUITabBar, IBUIToolbar, NSArray, NSColor, NSMutableDictionary, NSString, NSView;

@interface IBUIEditorView : DVTLayoutView_ML <IBDocumentArbitrationResponder, IBUIOverlayViewDelegate, IBSceneUpdateContentViewDelegate>
{
    IBCocoaTouchTargetRuntime *targetRuntime;
    IBUISimulatedMetricsContainer *simulatedMetricsContainer;
    NSView *editedView;
    IBUIOverlayView *decoratorOverlayView;
    NSMutableDictionary *cornerImageViews;
    NSColor *cornerColor;
    NSColor *backgroundColor;
    NSArray *_decoratorableViews;
    BOOL _needsSynchronize;
    IBUIStatusBar *_statusBarView;
    NSView *_bottomBarView;
    NSView *_topBarView;
    NSColor *_effectiveBackgroundColor;
    IBUIEditorView *_parentEditorView;
    NSView *_wrapperView;
}

@property(retain, nonatomic) NSView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) __weak IBUIEditorView *parentEditorView; // @synthesize parentEditorView=_parentEditorView;
@property(retain, nonatomic) NSView *editedView; // @synthesize editedView;
@property(readonly) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime;
- (void).cxx_destruct;
- (CDStruct_c519178c)ibEffectiveSimulatedEditorViewInset;
- (struct CGSize)ibEffectiveSimulatedCanvasFrameContentViewSize;
- (struct CGRect)sceneUpdateContentView:(id)arg1 imageContentRectForImageSize:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (id)backgroundColorForSceneUpdateContentView:(id)arg1;
- (id)targetRuntimeForSceneUpdateContentView:(id)arg1;
- (BOOL)shouldSceneUpdateContentViewRegisterForAsynchronousRendering:(id)arg1;
- (void)invalidateSceneForContentView:(id)arg1 forReason:(CDUnknownBlockType)arg2;
- (double)scaleFactorForRenderingSceneContentView:(id)arg1;
- (id)overlayView:(id)arg1 hitTest:(struct CGPoint)arg2 defaultHit:(id)arg3;
- (void)overlayView:(id)arg1 drawRect:(struct CGRect)arg2;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)extendedEdgeProvider;
- (id)editedIBUIView;
- (id)layoutPolicy;
- (BOOL)isFlipped;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (void)synchronizeBottomBar;
- (void)customizeBottomBarView:(id)arg1 forSimulatedBarMetrics:(id)arg2;
- (id)bottomBarForSimulatedBarMetrics:(id)arg1;
- (void)synchronizeTopBar;
- (void)customizeTopBarView:(id)arg1 forSimulatedBarMetrics:(id)arg2;
- (void)customizeView:(id)arg1 forSimulatedBarMetricsIfApplicable:(id)arg2;
- (id)topBarForSimulatedBarMetrics:(id)arg1;
- (void)synchronizeStatusBar;
- (void)invalidateCornerImageViews;
- (void)layoutCornerImageViewsInFrame:(struct CGRect)arg1;
- (BOOL)shouldDrawCorners;
@property(readonly) double cornerRadius;
@property(copy) NSColor *cornerColor;
@property(readonly, nonatomic) IBUITabBar *tabBar;
@property(readonly, nonatomic) IBUIToolbar *toolbar;
@property(readonly, nonatomic) IBUINavigationBar *navigationBar;
- (id)decoratorOverlayView;
- (unsigned long long)innerShadowEdgeMask;
@property(readonly, nonatomic) NSView *bottomBarView;
@property(readonly, nonatomic) NSView *topBarView;
@property(readonly, nonatomic) IBUIStatusBar *statusBarView;
- (void)synchronizeSimulatedMetricsContainer;
- (void)synchronizeEditorView;
- (void)synchronizeEditorViewIfNeeded;
- (void)invalidateEditorView;
- (void)editedViewDidChangeInvalidatingProperty;
- (id)contentView;
- (void)setSimulatedMetricsContainer:(id)arg1;
@property(readonly, copy, nonatomic) IBUISimulatedMetricsContainer *simulatedMetricsContainer; // @synthesize simulatedMetricsContainer;
- (void)setTargetRuntime:(id)arg1;
- (void)_invalidateEffectiveBackgroundColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor;
- (void)setBottomBarView:(id)arg1;
- (void)setTopBarView:(id)arg1;
- (void)setStatusBarView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

