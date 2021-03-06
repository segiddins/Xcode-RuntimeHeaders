//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

#import <GPUDebugger/GPURenderBufferViewStateCoordinationProtocol-Protocol.h>
#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DYRenderingAttributes, GPURenderBufferView, GPUTraceResourceItem, NSButton, NSLayoutConstraint, NSMenu, NSObject, NSPopUpButton, NSPopover, NSSegmentedControl, NSString, NSTextField;
@protocol DYResource, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUImageEditor : GPUTraceSubEditor <NSMenuDelegate, GPURenderBufferViewStateCoordinationProtocol>
{
    GPURenderBufferView *_imageView;
    DVTBorderedView *_bottomToolBar;
    NSSegmentedControl *_viewSegmentedControl;
    NSSegmentedControl *_loupeSegmentedControl;
    NSTextField *_loupeXPositionView;
    NSTextField *_loupeYPositionView;
    NSButton *_infoButton;
    NSButton *_settingsButton;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSObject<OS_dispatch_queue> *_queue;
    DYRenderingAttributes *_renderingAttributes;
    id <NSObject> _renderingAttributesDidChangeObserver;
    NSPopover *_infoPopover;
    NSPopover *_settingsPopover;
    NSTextField *_nameView;
    DVTObservingToken *_choosenLayerObservingToken;
    NSPopUpButton *_index0View;
    NSPopUpButton *_index1View;
    NSPopUpButton *_index2View;
    NSPopUpButton *_layerView;
    NSPopUpButton *_faceView;
    NSPopUpButton *_levelView;
    BOOL _loupeVisible;
    struct CGPoint _loupePosition;
    unsigned long long _slice;
    unsigned long long _level;
    unsigned long long _depthPlane;
    unsigned long long _attachmentIndex;
    int _prevMipmapLevel;
    int _prevLayer;
    NSMenu *_zoomScaleMenu;
    id <DYResource> _resource;
    NSTextField *_imageLabel;
}

+ (id)assetBundle;
+ (BOOL)asyncLoadingSupported;
- (void).cxx_destruct;
@property __weak NSTextField *imageLabel; // @synthesize imageLabel=_imageLabel;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (void)showSettings:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)_updateLoupePositionViewsPosition;
- (struct CGPoint)_getLoupePositionViewsPosition;
- (void)renderBufferViewDidChangeState:(id)arg1;
- (void)GPUDebugger_exportTexture:(id)arg1;
- (void)GPUDebugger_flipVertical:(id)arg1;
- (void)GPUDebugger_changeLoupePosition:(id)arg1;
- (void)GPUDebugger_hideLoupe:(id)arg1;
- (void)GPUDebugger_showLoupe:(id)arg1;
- (void)GPUDebugger_toggleLoupe:(id)arg1;
- (void)changeZoom:(id)arg1;
- (void)GPUDebugger_zoomToScale:(id)arg1;
- (void)GPUDebugger_zoomToFit:(id)arg1;
- (void)GPUDebugger_zoomToActual:(id)arg1;
- (void)GPUDebugger_zoomOut:(id)arg1;
- (void)GPUDebugger_zoomIn:(id)arg1;
- (BOOL)_zoomOutEnabled;
- (BOOL)_zoomInEnabled;
- (void)changeOrientation:(id)arg1;
- (void)_updateToolbarState;
- (void)_updateImageViewWithItem:(id)arg1 resourceObject:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateResource;
- (BOOL)validateSelectNextLevel:(id)arg1;
- (BOOL)validateSelectPreviousLevel:(id)arg1;
- (void)GPUDebugger_selectNextLevel:(id)arg1;
- (void)GPUDebugger_selectPreviousLevel:(id)arg1;
- (void)selectLevel:(id)arg1;
- (BOOL)validateSelectNextFace:(id)arg1;
- (BOOL)validateSelectPreviousFace:(id)arg1;
- (void)GPUDebugger_selectNextFace:(id)arg1;
- (void)GPUDebugger_selectPreviousFace:(id)arg1;
- (void)selectFace:(id)arg1;
- (BOOL)validateSelectNextLayer:(id)arg1;
- (BOOL)validateSelectPreviousLayer:(id)arg1;
- (void)GPUDebugger_selectNextLayer:(id)arg1;
- (void)GPUDebugger_selectPreviousLayer:(id)arg1;
- (void)selectLayer:(id)arg1;
- (void)_updateLevelViewWithTexture:(id)arg1;
- (void)_updateFaceViewWithTexture:(id)arg1;
- (void)_updateLayerViewWithTexture:(id)arg1;
- (void)_beginEditor;
- (void)handleNotification:(id)arg1;
- (void)setRepresentedObject:(id)arg1 userInfo:(id)arg2;
@property(retain) GPUTraceResourceItem *representedObject; // @dynamic representedObject;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

