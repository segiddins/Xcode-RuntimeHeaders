//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsBody.h>

@class SCNNode;

@interface SCNPhysicsBody (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingcenterOfMassOffset_edit;
+ (id)keyPathsForValuesAffectingcontinuousCollisionDetectionThreshold_edit;
+ (id)keyPathsForValuesAffectingske_physicsShapeCollisionMargin_edit;
+ (id)keyPathsForValuesAffectingske_physicsShapeScale_edit;
+ (id)keyPathsForValuesAffectingske_physicsShapeCompound_edit;
+ (id)keyPathsForValuesAffectingske_physicsShapeGeometryType_edit;
+ (id)keyPathsForValuesAffectingske_physicsShapeType_edit;
+ (id)keyPathsForValuesAffectingcontactTestBitMask_edit;
+ (id)keyPathsForValuesAffectingcollisionBitMask_edit;
+ (id)keyPathsForValuesAffectingcategoryBitMask_edit;
+ (id)keyPathsForValuesAffectingangularVelocityFactor_edit;
+ (id)keyPathsForValuesAffectingvelocityFactor_edit;
+ (id)keyPathsForValuesAffectingangularVelocity_edit;
+ (id)keyPathsForValuesAffectingvelocity_edit;
+ (id)keyPathsForValuesAffectingallowsResting_edit;
+ (id)keyPathsForValuesAffectingaffectedByGravity_edit;
+ (id)keyPathsForValuesAffectingcharge_edit;
+ (id)keyPathsForValuesAffectingangularDamping_edit;
+ (id)keyPathsForValuesAffectingdamping_edit;
+ (id)keyPathsForValuesAffectingrollingFriction_edit;
+ (id)keyPathsForValuesAffectingrestitution_edit;
+ (id)keyPathsForValuesAffectingfriction_edit;
+ (id)keyPathsForValuesAffectingmass_edit;
@property double ske_physicsShapeCollisionMargin;
@property(readonly) BOOL ske_physicsShapeCollisionMarginAvailable;
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
- (void)setcenterOfMassOffset_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)centerOfMassOffset_edit;
- (void)setcontinuousCollisionDetectionThreshold_edit:(double)arg1;
- (double)continuousCollisionDetectionThreshold_edit;
- (void)setske_physicsShapeCollisionMargin_edit:(double)arg1;
- (double)ske_physicsShapeCollisionMargin_edit;
- (void)setske_physicsShapeScale_edit:(double)arg1;
- (double)ske_physicsShapeScale_edit;
- (void)setske_physicsShapeCompound_edit:(BOOL)arg1;
- (BOOL)ske_physicsShapeCompound_edit;
- (void)setske_physicsShapeGeometryType_edit:(long long)arg1;
- (long long)ske_physicsShapeGeometryType_edit;
- (void)setske_physicsShapeType_edit:(long long)arg1;
- (long long)ske_physicsShapeType_edit;
- (void)setcontactTestBitMask_edit:(unsigned long long)arg1;
- (unsigned long long)contactTestBitMask_edit;
- (void)setcollisionBitMask_edit:(unsigned long long)arg1;
- (unsigned long long)collisionBitMask_edit;
- (void)setcategoryBitMask_edit:(unsigned long long)arg1;
- (unsigned long long)categoryBitMask_edit;
- (void)setangularVelocityFactor_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)angularVelocityFactor_edit;
- (void)setvelocityFactor_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)velocityFactor_edit;
- (void)setangularVelocity_edit:(struct SCNVector4)arg1;
- (struct SCNVector4)angularVelocity_edit;
- (void)setvelocity_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)velocity_edit;
- (void)setallowsResting_edit:(BOOL)arg1;
- (BOOL)allowsResting_edit;
- (void)setaffectedByGravity_edit:(BOOL)arg1;
- (BOOL)affectedByGravity_edit;
- (void)setcharge_edit:(double)arg1;
- (double)charge_edit;
- (void)setangularDamping_edit:(double)arg1;
- (double)angularDamping_edit;
- (void)setdamping_edit:(double)arg1;
- (double)damping_edit;
- (void)setrollingFriction_edit:(double)arg1;
- (double)rollingFriction_edit;
- (void)setrestitution_edit:(double)arg1;
- (double)restitution_edit;
- (void)setfriction_edit:(double)arg1;
- (double)friction_edit;
- (void)setmass_edit:(double)arg1;
- (double)mass_edit;
@end

