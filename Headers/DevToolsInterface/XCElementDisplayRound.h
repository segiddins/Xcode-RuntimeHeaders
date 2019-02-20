//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementDisplay.h>

@class NSColor;

@interface XCElementDisplayRound : XCElementDisplay
{
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_shading1Color;
    NSColor *_shading2Color;
    int _corners;
    double _cornerX;
    double _cornerY;
    double _curveX;
    double _curveY;
    double _shading1Red;
    double _shading1Green;
    double _shading1Blue;
    double _shading1Alpha;
    double _shading2Red;
    double _shading2Green;
    double _shading2Blue;
    double _shading2Alpha;
    double _lineWidth;
    BOOL _useShading;
    struct CGShading *_shading;
    struct CGRect _shadingFrame;
    struct CGFunction *_shadingFunction;
}

- (void)dealloc;
- (void)displayer:(struct NSObject *)arg1 drawBackground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)shadingFunctionInData:(const double *)arg1 outData:(double *)arg2;
- (void)_addPathToCGContext:(struct CGContext *)arg1 withFrame:(struct CGRect)arg2;
- (id)shading2Color;
- (id)shading1Color;
- (void)setShading2Color:(id)arg1;
- (void)setShading1Color:(id)arg1;
- (double)curveY;
- (double)curveX;
- (double)cornerY;
- (double)cornerX;
- (void)setCornerX:(double)arg1 cornerY:(double)arg2 curveX:(double)arg3 curverY:(double)arg4;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (BOOL)useShading;
- (void)setUseShading:(BOOL)arg1;
- (int)corners;
- (void)setCorners:(int)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (id)init;

@end
