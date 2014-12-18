//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNPlane : SCNGeometry
{
    id _reserved;
    double _width;
    double _height;
    double _cornerRadius;
    long long _widthSegmentCount;
    long long _heightSegmentCount;
    long long _cornerSegmentCount;
    long long _primitiveType;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)planeWithWidth:(double)arg1 height:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double width;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
@property(nonatomic) long long cornerSegmentCount;
@property(nonatomic) double cornerRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (id)presentationGeometry;
- (id)presentationPlane;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (void)dealloc;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end

