//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

@interface DBGRenderingDestinationHelper : NSObject
{
    BOOL _isUsingMetalRenderer;
    unsigned char _worldPositionToScreenUVsMatrixBufferWriteIndex;
    double _sceneViewBackingScale;
    id <MTLBuffer> _worldPositionToScreenUVsMatrixBufferRead;
    id <MTLBuffer> _worldPositionToScreenUVsMatrixBufferWrite;
    struct CGSize _maskedScreenPointSize;
}

@property struct CGSize maskedScreenPointSize; // @synthesize maskedScreenPointSize=_maskedScreenPointSize;
@property unsigned char worldPositionToScreenUVsMatrixBufferWriteIndex; // @synthesize worldPositionToScreenUVsMatrixBufferWriteIndex=_worldPositionToScreenUVsMatrixBufferWriteIndex;
@property(retain) id <MTLBuffer> worldPositionToScreenUVsMatrixBufferWrite; // @synthesize worldPositionToScreenUVsMatrixBufferWrite=_worldPositionToScreenUVsMatrixBufferWrite;
@property(retain) id <MTLBuffer> worldPositionToScreenUVsMatrixBufferRead; // @synthesize worldPositionToScreenUVsMatrixBufferRead=_worldPositionToScreenUVsMatrixBufferRead;
@property double sceneViewBackingScale; // @synthesize sceneViewBackingScale=_sceneViewBackingScale;
@property(readonly) BOOL isUsingMetalRenderer; // @synthesize isUsingMetalRenderer=_isUsingMetalRenderer;
- (void).cxx_destruct;
- (void)updateScreenMaskParametersForApplication:(id)arg1 rotationNode:(id)arg2 withCommandQueue:(id)arg3;
- (void)disableScreenMasking;
- (void)enableScreenMaskingWithDevice:(id)arg1 screenPointSize:(struct CGSize)arg2;
- (void)updateLineWidthForRenderer:(id)arg1;

@end

