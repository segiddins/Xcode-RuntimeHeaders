//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SourceEditor/_TtC12SourceEditor28SourceEditorGutterMarginView.h>

@class MISSING_TYPE, NSString;

@interface _TtC12SourceEditor11MinimapView : _TtC12SourceEditor28SourceEditorGutterMarginView
{
    MISSING_TYPE *minimap;
    MISSING_TYPE *showLandmarks;
    MISSING_TYPE *needsAccessibilityUpdate;
    MISSING_TYPE *layoutPass;
    MISSING_TYPE *iconProvider;
    MISSING_TYPE *attributes;
    MISSING_TYPE *backgroundLayer;
    MISSING_TYPE *dividerLayer;
    MISSING_TYPE *contentLayer;
    MISSING_TYPE *viewportHighlightLayer;
    MISSING_TYPE *contentInsets;
    MISSING_TYPE *expandedLandmarkLayers;
    MISSING_TYPE *expandedLandmarkLayersReusePool;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *debugDescription;
- (void)layout;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

