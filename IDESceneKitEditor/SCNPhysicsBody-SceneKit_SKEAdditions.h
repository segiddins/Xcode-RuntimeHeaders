//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBody.h>

@class SCNNode;

@interface SCNPhysicsBody (SceneKit_SKEAdditions)
@property double ske_physicsShapeScale;
@property BOOL ske_physicsShapeCompound;
@property long long ske_physicsShapeGeometryType;
@property long long ske_physicsShapeType;
@property(retain) SCNNode *ske_physicsShapeSourceNode;
- (id)ske_physicsShapeOptions;
@property(readonly) BOOL ske_hasNodeBasedShapeAndStaticBody;
@property(readonly) BOOL ske_hasNodeBasedShapeAndDynamicBody;
@property(readonly) BOOL ske_hasCustomNodeBasedShape;
- (id)ske_physicsShapeMutableOptions;
- (void)updateShapeWithShape:(id)arg1 options:(id)arg2;
@property(readonly) BOOL ske_isDynamic;
@end
