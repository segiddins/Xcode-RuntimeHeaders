//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBezierPath;

@interface DBG2DPolygon : NSObject
{
    BOOL _minMaxUpToDate;
    struct CGPoint _min;
    struct CGPoint _max;
    NSBezierPath *_pathRepresentation;
    NSArray *_vertices;
}

+ (id)polygonFromQuad:(struct CGPoint)arg1 cornerB:(struct CGPoint)arg2 cornerC:(struct CGPoint)arg3 cornerD:(struct CGPoint)arg4;
+ (id)polygonFromRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *vertices; // @synthesize vertices=_vertices;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)calculateMinMax;
- (struct CGPoint)max;
- (struct CGPoint)min;
- (id)pathRepresentation;
- (void)applyTransform:(union _GLKMatrix4)arg1;
- (void)applyOffset:(struct CGSize)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)polygonByIntersectingWithPolygon:(id)arg1;
- (id)init;
- (id)initWithVertices:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

