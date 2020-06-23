//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGViewObject.h>

@class NSImage;

@interface DBGScreenObject : DBGViewObject
{
    BOOL _hasCalculatedScreenMask;
    NSImage *_screenMask;
    BOOL _shapeIsRectangular;
    BOOL _wantsSoftwareDimming;
    double _displayCornerRadius;
    long long _maximumFramesPerSecond;
    double _nativeScale;
    double _scale;
    long long _screenShape;
    long long _screenType;
    struct CGRect _bounds;
    struct CGRect _nativeBounds;
    struct CGRect _nativeDisplayBounds;
}

@property BOOL wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;
@property BOOL shapeIsRectangular; // @synthesize shapeIsRectangular=_shapeIsRectangular;
@property long long screenType; // @synthesize screenType=_screenType;
@property long long screenShape; // @synthesize screenShape=_screenShape;
@property double scale; // @synthesize scale=_scale;
@property double nativeScale; // @synthesize nativeScale=_nativeScale;
@property struct CGRect nativeDisplayBounds; // @synthesize nativeDisplayBounds=_nativeDisplayBounds;
@property struct CGRect nativeBounds; // @synthesize nativeBounds=_nativeBounds;
@property long long maximumFramesPerSecond; // @synthesize maximumFramesPerSecond=_maximumFramesPerSecond;
@property double displayCornerRadius; // @synthesize displayCornerRadius=_displayCornerRadius;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (double)_normalizedCornerRadius;
- (struct CGSize)_nativeDisplaySize;
- (id)_calculateScreenMask;
@property(readonly) NSImage *screenMask;
- (id)description;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;

@end

