//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDInterface/NSCoding-Protocol.h>
#import <XDInterface/NSCopying-Protocol.h>

@class NSAffineTransform, NSBezierPath, NSString, XDGraphic;

@interface XDLineEnd : NSObject <NSCoding, NSCopying>
{
    XDGraphic *_graphic;
    NSString *_identifier;
    NSString *_name;
    struct CGPoint _origin;
    struct CGPoint _slope;
    double _gap;
    double _width;
    double _lineGap;
    NSBezierPath *_bezierPath;
    NSAffineTransform *_cachedTransform;
    NSBezierPath *_cachedBezierPath;
    struct _XDLineEndFlags _leFlags;
}

+ (id)lineEndWithIdentifier:(id)arg1;
+ (void)unregisterLineEnd:(id)arg1;
+ (void)registerLineEnd:(id)arg1;
+ (id)registeredLineEnds;
+ (void)initialize;
- (struct CGRect)drawingBounds;
- (struct CGRect)bounds;
- (id)bezierPath;
- (void)setBezierPath:(id)arg1;
- (id)transform;
- (struct CGPoint)lineOrigin;
- (double)lineGap;
- (void)setLineGap:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)gap;
- (void)setGap:(double)arg1;
- (BOOL)isFilled;
- (void)setFilled:(BOOL)arg1;
- (struct CGPoint)slope;
- (void)setSlope:(struct CGPoint)arg1;
- (struct CGPoint)origin;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)_invalidateCache;
- (id)displayName;
- (id)name;
- (void)setName:(id)arg1;
- (id)identifier;
- (void)_setIdentifier:(id)arg1;
- (id)graphic;
- (void)setGraphic:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

