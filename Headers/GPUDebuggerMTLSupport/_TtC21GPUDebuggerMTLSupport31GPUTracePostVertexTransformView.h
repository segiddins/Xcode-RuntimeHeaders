//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalKit/MTKView.h>

@class DYRenderingAttributes, MISSING_TYPE;
@protocol DYPPostVertexTransformAttribute;

__attribute__((visibility("hidden")))
@interface _TtC21GPUDebuggerMTLSupport31GPUTracePostVertexTransformView : MTKView
{
    MISSING_TYPE *projectionType;
    MISSING_TYPE *zNearValue;
    MISSING_TYPE *zFarValue;
    MISSING_TYPE *fovValue;
    MISSING_TYPE *projectionZMinValue;
    MISSING_TYPE *showWireframe;
    MISSING_TYPE *showModelVertices;
    MISSING_TYPE *showAttachment;
    MISSING_TYPE *selectedModelPrimitiveIndex;
    MISSING_TYPE *selectedModelPrimitiveVertexIndex;
    MISSING_TYPE *secondarySelectedModelPrimitiveIndex;
    MISSING_TYPE *allowVertexSelection;
    MISSING_TYPE *currentVertexAttribute;
    MISSING_TYPE *cullMode;
    MISSING_TYPE *renderTargetArrayIndex;
    MISSING_TYPE *viewportArrayIndex;
    MISSING_TYPE *camera;
    MISSING_TYPE *commandQueue;
    MISSING_TYPE *defaultLibrary;
    MISSING_TYPE *defaultPipelineState;
    MISSING_TYPE *texturePipelineState;
    MISSING_TYPE *defaultModelPipelineState;
    MISSING_TYPE *userAttributeModelPipelineState;
    MISSING_TYPE *greaterEqualDepthState;
    MISSING_TYPE *greaterEqualNoDepthWriteDepthState;
    MISSING_TYPE *noDepthState;
    MISSING_TYPE *modelVertices;
    MISSING_TYPE *modelViewportArrayIndices;
    MISSING_TYPE *modelRenderTargetArrayIndices;
    MISSING_TYPE *modelAmplificationIdIndices;
    MISSING_TYPE *modelVertexBuffer;
    MISSING_TYPE *modelIndexBuffer;
    MISSING_TYPE *modelBoundingBox;
    MISSING_TYPE *bufferAllocator;
    MISSING_TYPE *cubeMesh;
    MISSING_TYPE *texturedQuadMesh;
    MISSING_TYPE *axesMesh;
    MISSING_TYPE *attachmentTextures;
    MISSING_TYPE *framebufferWidth;
    MISSING_TYPE *framebufferHeight;
    MISSING_TYPE *model;
    MISSING_TYPE *geometryInput;
    MISSING_TYPE *positionAttrib;
    MISSING_TYPE *builtinAttribs;
    MISSING_TYPE *userVertexAttributesRenderingAttributes;
    MISSING_TYPE *renderingAttributesObservers;
    MISSING_TYPE *framebufferImages;
    MISSING_TYPE *storage;
    MISSING_TYPE *postVertexTransformItem;
    MISSING_TYPE *viewports;
    MISSING_TYPE *vertexAmplificationViewportOffsets;
    MISSING_TYPE *readyForDisplay;
    MISSING_TYPE *updateModelInverseProjection;
    MISSING_TYPE *updateInitialCameraTarget;
    MISSING_TYPE *invProjMatrices;
    MISSING_TYPE *showViewFrustum;
    MISSING_TYPE *showAxes;
    MISSING_TYPE *showModelBoundingBox;
    MISSING_TYPE *toneMappingDisabled;
}

+ (unsigned long long)InvalidModelIndex;
+ (id)SelectedPrimitiveNotificationName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleMouseClick:(id)arg1;
- (void)saveState;
- (void)makeDefaultSelection;
- (void)focusCameraOnSelectedPrimitive;
- (void)resetView;
- (void)loadViewWithModel:(id)arg1 geometryInput:(id)arg2 builtinAttributes:(id)arg3 userDefinedAttributes:(id)arg4 viewports:(id)arg5 vertexAmplificationViewMappings:(id)arg6 framebufferImages:(id)arg7 storage:(id)arg8 postVertexTransformItem:(id)arg9;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
@property(nonatomic) unsigned int viewportArrayIndex; // @synthesize viewportArrayIndex;
@property(nonatomic) unsigned int renderTargetArrayIndex; // @synthesize renderTargetArrayIndex;
@property(nonatomic) unsigned long long cullMode; // @synthesize cullMode;
@property(nonatomic, readonly) DYRenderingAttributes *currentRenderingAttributes;
@property(nonatomic, retain) id <DYPPostVertexTransformAttribute> currentVertexAttribute; // @synthesize currentVertexAttribute;
@property(nonatomic, readonly) BOOL hasAttachment;
@property(nonatomic) BOOL allowVertexSelection; // @synthesize allowVertexSelection;
@property(nonatomic) unsigned long long secondarySelectedModelPrimitiveIndex; // @synthesize secondarySelectedModelPrimitiveIndex;
@property(nonatomic) unsigned long long selectedModelPrimitiveVertexIndex; // @synthesize selectedModelPrimitiveVertexIndex;
@property(nonatomic) unsigned long long selectedModelPrimitiveIndex; // @synthesize selectedModelPrimitiveIndex;
@property(nonatomic) BOOL showAttachment; // @synthesize showAttachment;
@property(nonatomic) BOOL showModelVertices; // @synthesize showModelVertices;
@property(nonatomic) BOOL showWireframe; // @synthesize showWireframe;
@property(nonatomic) double projectionZMinValue; // @synthesize projectionZMinValue;
@property(nonatomic) float fovValue; // @synthesize fovValue;
@property(nonatomic) float zFarValue; // @synthesize zFarValue;
@property(nonatomic) float zNearValue; // @synthesize zNearValue;
@property(nonatomic) unsigned long long projectionType; // @synthesize projectionType;

@end

