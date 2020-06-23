//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsRenderer/MTLRenderCommandEncoder-Protocol.h>

@protocol MTLSamplerState, MTLTexture;

@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
- (void)addSplitHandler:(void (^)(id <MTLRenderCommandEncoderSPI>, unsigned long long))arg1;
- (void)setLineWidth:(float)arg1;
- (void)setDepthClipModeSPI:(unsigned long long)arg1;

@optional
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4 yInvert:(BOOL)arg5;
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4 yInvert:(BOOL)arg5;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4 yInvert:(BOOL)arg5 atIndex:(long long)arg6;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(long long)arg2 depthPlane:(long long)arg3 level:(long long)arg4 atIndex:(long long)arg5;
- (void)setStencilCleared;
- (void)setDepthCleared;
- (void)setTransformFeedbackState:(unsigned long long)arg1;
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;
- (void)setPrimitiveRestartEnabled:(BOOL)arg1 index:(long long)arg2;
- (void)setPrimitiveRestartEnabled:(BOOL)arg1;
- (void)setProvokingVertexMode:(unsigned long long)arg1;
- (void)setViewportTransformEnabled:(BOOL)arg1;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(long long)arg5;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(long long)arg5;
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(long long)arg5;
- (void)setPointSize:(float)arg1;
- (void)setAlphaTestReferenceValue:(float)arg1;
@end

