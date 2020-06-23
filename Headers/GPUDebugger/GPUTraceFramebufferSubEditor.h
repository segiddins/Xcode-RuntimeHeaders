//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceShaderDebuggerSessionSubEditor.h>

#import <GPUDebugger/GPURenderBufferViewStateCoordinationProtocol-Protocol.h>
#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class DVTBorderedView, GPURenderBuffer, GPURenderBufferCanvasGrid, GPUShaderDebuggerFragmentRegion, GPUTraceFramebufferItem, GPUTraceFramebufferSubEditorCancelToken, NSArray, NSButton, NSLayoutConstraint, NSMenu, NSMenuItem, NSMutableIndexSet, NSObject, NSPopUpButton, NSProgressIndicator, NSSegmentedControl, NSString, NSTextField;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUTraceFramebufferSubEditor : GPUTraceShaderDebuggerSessionSubEditor <GPURenderBufferViewStateCoordinationProtocol, NSMenuDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    GPUTraceFramebufferSubEditorCancelToken *_queueCancelToken;
    NSArray *_allRenderBuffers;
    NSArray *_colorRenderBuffers;
    GPURenderBuffer *_depthRenderBuffer;
    GPURenderBuffer *_stencilRenderBuffer;
    unsigned long long _renderTargetArrayLength;
    unsigned long long _renderTargetArrayIndex;
    NSMutableIndexSet *_shownColorBufferIndices;
    BOOL _showDepthBuffer;
    BOOL _showStencilBuffer;
    BOOL _hasExplicitColorBufferIndices;
    BOOL _implicitShowDepthBuffer;
    BOOL _implicitShowStencilBuffer;
    NSMutableIndexSet *_implicitShownColorBufferIndices;
    BOOL _loupeVisible;
    struct CGPoint _loupePosition;
    BOOL _showWireframe;
    BOOL _showOutline;
    BOOL _showOverlaysOnDevice;
    NSMenu *_zoomScaleMenu;
    BOOL forceSelection;
    DVTBorderedView *_bottomToolBar;
    NSSegmentedControl *_buffersSegmentedControl;
    NSSegmentedControl *_viewSegmentedControl;
    NSSegmentedControl *_loupeSegmentedControl;
    GPURenderBufferCanvasGrid *_renderBufferCanvas;
    NSMenuItem *_revealInDebugNavigatorMenuItem;
    NSMenuItem *_toggleWireframeMenuItem;
    NSMenuItem *_toggleDeviceWireframeMenuItem;
    NSTextField *_loupeXPositionView;
    NSTextField *_loupeYPositionView;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSMenu *_visibleAttachmentsMenu;
    NSMenu *_renderTargetArrayIndexMenu;
    NSButton *_debugButton;
    NSProgressIndicator *_debugProgress;
    NSPopUpButton *_renderTargetArrayIndexButton;
}

+ (BOOL)asyncLoadingSupported;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
- (void).cxx_destruct;
@property __weak NSPopUpButton *renderTargetArrayIndexButton; // @synthesize renderTargetArrayIndexButton=_renderTargetArrayIndexButton;
@property __weak NSProgressIndicator *debugProgress; // @synthesize debugProgress=_debugProgress;
@property __weak NSButton *debugButton; // @synthesize debugButton=_debugButton;
@property __weak NSMenu *renderTargetArrayIndexMenu; // @synthesize renderTargetArrayIndexMenu=_renderTargetArrayIndexMenu;
@property __weak NSMenu *visibleAttachmentsMenu; // @synthesize visibleAttachmentsMenu=_visibleAttachmentsMenu;
@property __weak NSLayoutConstraint *toolbarHeightConstraint; // @synthesize toolbarHeightConstraint=_toolbarHeightConstraint;
@property __weak NSTextField *loupeYPositionView; // @synthesize loupeYPositionView=_loupeYPositionView;
@property __weak NSTextField *loupeXPositionView; // @synthesize loupeXPositionView=_loupeXPositionView;
@property __weak NSMenuItem *toggleDeviceWireframeMenuItem; // @synthesize toggleDeviceWireframeMenuItem=_toggleDeviceWireframeMenuItem;
@property __weak NSMenuItem *toggleWireframeMenuItem; // @synthesize toggleWireframeMenuItem=_toggleWireframeMenuItem;
@property __weak NSMenuItem *revealInDebugNavigatorMenuItem; // @synthesize revealInDebugNavigatorMenuItem=_revealInDebugNavigatorMenuItem;
@property __weak GPURenderBufferCanvasGrid *renderBufferCanvas; // @synthesize renderBufferCanvas=_renderBufferCanvas;
@property __weak NSSegmentedControl *loupeSegmentedControl; // @synthesize loupeSegmentedControl=_loupeSegmentedControl;
@property __weak NSSegmentedControl *viewSegmentedControl; // @synthesize viewSegmentedControl=_viewSegmentedControl;
@property __weak NSSegmentedControl *buffersSegmentedControl; // @synthesize buffersSegmentedControl=_buffersSegmentedControl;
@property __weak DVTBorderedView *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
- (void)setForceSelection:(BOOL)arg1;
- (BOOL)forceSelection;
- (void)GPUDebugger_exportRenderBuffer:(id)arg1;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (struct CGPoint)_getLoupePositionViewsPosition:(id)arg1;
- (void)_setLoupePositionViewsPosition:(struct CGPoint)arg1 view:(id)arg2;
- (void)renderBufferViewDidChangeState:(id)arg1;
- (void)_updateShaderDebuggerRegion;
- (void)_debugFragment;
- (void)_refreshROI;
- (struct CGRect)_ROIRectFromShaderDebuggerFragmentRegion;
- (void)GPUDebugger_debugPixel:(id)arg1;
- (unsigned int)supportedShaderType;
- (void)GPUDebugger_flipVertical:(id)arg1;
- (void)GPUDebugger_setRenderTargetArrayIndex:(id)arg1;
- (void)changeZoom:(id)arg1;
- (void)GPUDebugger_zoomToScale:(id)arg1;
- (void)GPUDebugger_zoomToFit:(id)arg1;
- (void)GPUDebugger_zoomToActual:(id)arg1;
- (void)GPUDebugger_zoomOut:(id)arg1;
- (void)GPUDebugger_zoomIn:(id)arg1;
- (void)_setScaleToFitForAllRenderBuffers;
- (void)_setScaleForAllRenderBuffers:(double)arg1;
- (BOOL)_zoomToFitEnabled;
- (BOOL)_zoomActualEnabled;
- (BOOL)_zoomOutEnabled;
- (BOOL)_zoomInEnabled;
- (double)zoomScale;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
- (void)GPUDebugger_changeLoupePosition:(id)arg1;
- (void)_updateStateForDebugButton:(id)arg1 menuItem:(id)arg2;
- (void)GPUDebugger_hideLoupe:(id)arg1;
- (void)GPUDebugger_showLoupe:(id)arg1;
- (void)GPUDebugger_toggleLoupe:(id)arg1;
- (void)GPUDebugger_showOrHideRenderBuffer:(id)arg1;
- (void)GPUDebugger_showOnlyRenderBuffer:(id)arg1;
- (void)GPUDebugger_hideRenderBuffer:(id)arg1;
- (void)GPUDebugger_showRenderBuffer:(id)arg1;
- (void)GPUDebugger_showStencil:(id)arg1;
- (void)GPUDebugger_showDepth:(id)arg1;
- (void)GPUDebugger_showColor:(id)arg1;
- (void)_changeVisibleBufferViews:(int)arg1;
- (void)changeVisibleBufferViews:(id)arg1;
- (void)_updateToolbarState;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_zoomToFocusRegion;
- (void)_updateRenderBuffersVisibilityWithCallback:(CDUnknownBlockType)arg1;
- (void)_updateRenderBuffersViewContent:(id)arg1;
- (void)GPUDebugger_toggleOverlaysOnDevice:(id)arg1;
- (void)GPUDebugger_toggleOutlineInDebugger:(id)arg1;
- (void)GPUDebugger_toggleWireframeInDebugger:(id)arg1;
- (void)_refreshRenderBuffers;
- (void)handleNotification:(id)arg1;
- (void)_findDebugPixel;
- (void)_findDebugCenterPixelCPU:(id)arg1 minX:(unsigned int)arg2 maxX:(unsigned int)arg3 minY:(unsigned int)arg4 maxY:(unsigned int)arg5 resultX:(unsigned int *)arg6 resultY:(unsigned int *)arg7;
- (BOOL)_findDebugBoundingBoxInViewCPU:(id)arg1 minX:(unsigned int *)arg2 maxX:(unsigned int *)arg3 minY:(unsigned int *)arg4 maxY:(unsigned int *)arg5;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)_saveState;
- (void)_restoreStateAfterRefresh;
- (void)_restoreStateBeforeRefresh;
- (id)_storageItem;
@property(retain) GPUTraceFramebufferItem *representedObject; // @dynamic representedObject;
- (void)_endEditor;
- (void)_beginEditor;
- (void)_setupRenderTargetArrayUI;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) GPUShaderDebuggerFragmentRegion *shaderDebuggerRegion; // @dynamic shaderDebuggerRegion;
@property(readonly) Class superclass;

@end
