//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@class DBGInteractiveSceneView, NSColor, SCNNode;

@interface DBGLineGeometry : SCNGeometry
{
    BOOL _useLegacyGLRenderer;
    BOOL _verticesSnapToPixelGridIn2D;
    DBGInteractiveSceneView *_view;
    SCNNode *_lineAnchorA;
    SCNNode *_lineAnchorB;
    unsigned long long _lineAlignment;
    NSColor *_lineColor;
    double _lineWidth;
    NSColor *_strokeColor;
    double _strokeWidth;
    double _opacity;
    double _dashLength;
}

+ (id)_lineMaterialForMetalRendererWithLibrary:(id)arg1;
+ (id)_lineMaterialForLegacyGLRenderer;
+ (id)_lineMaterialWithMetalLibrary:(id)arg1;
+ (id)_sharedMaterialWithMetalLibrary:(id)arg1;
+ (id)_sharedWMaterialWithMetalLibrary:(id)arg1;
+ (id)_sharedRMaterialWithMetalLibrary:(id)arg1;
+ (id)_sharedRWMaterialWithMetalLibrary:(id)arg1;
+ (id)_sharedMaterialReadingFromDepthBuffer:(BOOL)arg1 writingToDepthBuffer:(BOOL)arg2 metalLibrary:(id)arg3;
+ (id)lineGeometryWithStart:(id)arg1 end:(id)arg2 view:(id)arg3 readsFromDepthBuffer:(BOOL)arg4 writesToDepthBuffer:(BOOL)arg5;
@property double dashLength; // @synthesize dashLength=_dashLength;
@property double opacity; // @synthesize opacity=_opacity;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) unsigned long long lineAlignment; // @synthesize lineAlignment=_lineAlignment;
@property BOOL verticesSnapToPixelGridIn2D; // @synthesize verticesSnapToPixelGridIn2D=_verticesSnapToPixelGridIn2D;
@property(readonly) SCNNode *lineAnchorB; // @synthesize lineAnchorB=_lineAnchorB;
@property(readonly) SCNNode *lineAnchorA; // @synthesize lineAnchorA=_lineAnchorA;
@property(readonly) __weak DBGInteractiveSceneView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_calculateBoundingBox;

@end

