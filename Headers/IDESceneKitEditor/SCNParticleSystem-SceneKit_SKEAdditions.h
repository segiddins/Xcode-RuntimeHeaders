//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNParticleSystem.h>

@class NSGradient, SCNParticlePropertyController;

@interface SCNParticleSystem (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingSke_orientationModeIsFree;
+ (id)keyPathsForValuesAffectingIde_hasNullStretchFactor;
+ (id)keyPathsForValuesAffectingIde_spreadingAngleHasAnEffect;
+ (id)keyPathsForValuesAffectingIde_emittingDirectionHasAnEffect;
+ (id)keyPathsForValuesAffectingide_hasParticleColorController_edit;
+ (id)keyPathsForValuesAffectingide_particleColorController_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeSphereRadius_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapePlaneHeight_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapePlaneWidth_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeCylinderRadius_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeCylinderHeight_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeBoxLength_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeBoxHeight_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeBoxWidth_edit;
+ (id)keyPathsForValuesAffectingide_emitterShapeType_edit;
+ (id)keyPathsForValuesAffectingspeedFactor_edit;
+ (id)keyPathsForValuesAffectingloops_edit;
+ (id)keyPathsForValuesAffectingidleDurationVariation_edit;
+ (id)keyPathsForValuesAffectingidleDuration_edit;
+ (id)keyPathsForValuesAffectingemissionDurationVariation_edit;
+ (id)keyPathsForValuesAffectingemissionDuration_edit;
+ (id)keyPathsForValuesAffectingimageSequenceRowCount_edit;
+ (id)keyPathsForValuesAffectingimageSequenceColumnCount_edit;
+ (id)keyPathsForValuesAffectingimageSequenceAnimationMode_edit;
+ (id)keyPathsForValuesAffectingimageSequenceFrameRateVariation_edit;
+ (id)keyPathsForValuesAffectingimageSequenceFrameRate_edit;
+ (id)keyPathsForValuesAffectingimageSequenceInitialFrameVariation_edit;
+ (id)keyPathsForValuesAffectingimageSequenceInitialFrame_edit;
+ (id)keyPathsForValuesAffectingparticleIntensityVariation_edit;
+ (id)keyPathsForValuesAffectingparticleIntensity_edit;
+ (id)keyPathsForValuesAffectingparticleSizeVariation_edit;
+ (id)keyPathsForValuesAffectingparticleSize_edit;
+ (id)keyPathsForValuesAffectingparticleColorVariation_edit;
+ (id)keyPathsForValuesAffectingparticleColor_edit;
+ (id)keyPathsForValuesAffectingide_particleImage_edit;
+ (id)keyPathsForValuesAffectingdampingFactor_edit;
+ (id)keyPathsForValuesAffectingparticleFrictionVariation_edit;
+ (id)keyPathsForValuesAffectingparticleFriction_edit;
+ (id)keyPathsForValuesAffectingparticleBounceVariation_edit;
+ (id)keyPathsForValuesAffectingparticleBounce_edit;
+ (id)keyPathsForValuesAffectingparticleMassVariation_edit;
+ (id)keyPathsForValuesAffectingparticleMass_edit;
+ (id)keyPathsForValuesAffectingparticleDiesOnCollision_edit;
+ (id)keyPathsForValuesAffectingaffectedByPhysicsFields_edit;
+ (id)keyPathsForValuesAffectingaffectedByGravity_edit;
+ (id)keyPathsForValuesAffectinglightingEnabled_edit;
+ (id)keyPathsForValuesAffectingsortingMode_edit;
+ (id)keyPathsForValuesAffectingorientationMode_edit;
+ (id)keyPathsForValuesAffectingsoftParticlesEnabled_edit;
+ (id)keyPathsForValuesAffectingblackPassEnabled_edit;
+ (id)keyPathsForValuesAffectingblendMode_edit;
+ (id)keyPathsForValuesAffectingparticleLifeSpanVariation_edit;
+ (id)keyPathsForValuesAffectingparticleLifeSpan_edit;
+ (id)keyPathsForValuesAffectingstretchFactor_edit;
+ (id)keyPathsForValuesAffectingacceleration_edit;
+ (id)keyPathsForValuesAffectingorientationDirection_edit;
+ (id)keyPathsForValuesAffectingemittingDirection_edit;
+ (id)keyPathsForValuesAffectingspreadingAngle_edit;
+ (id)keyPathsForValuesAffectingparticleAngularVelocityVariation_edit;
+ (id)keyPathsForValuesAffectingparticleAngularVelocity_edit;
+ (id)keyPathsForValuesAffectingparticleVelocityVariation_edit;
+ (id)keyPathsForValuesAffectingparticleVelocity_edit;
+ (id)keyPathsForValuesAffectingparticleAngleVariation_edit;
+ (id)keyPathsForValuesAffectingparticleAngle_edit;
+ (id)keyPathsForValuesAffectingbirthDirection_edit;
+ (id)keyPathsForValuesAffectinglocal_edit;
+ (id)keyPathsForValuesAffectingbirthLocation_edit;
+ (id)keyPathsForValuesAffectingwarmupDuration_edit;
+ (id)keyPathsForValuesAffectingbirthRateVariation_edit;
+ (id)keyPathsForValuesAffectingbirthRate_edit;
@property(readonly) BOOL ske_orientationModeIsFree;
@property(retain) SCNParticlePropertyController *ide_particleSizeController;
@property(retain) NSGradient *ide_particleColorController;
@property(retain) SCNParticlePropertyController *ide_latestNonNilParticleColorController;
@property BOOL ide_hasParticleColorController;
@property(readonly) BOOL ide_doesNotHaveParticleColorController;
@property(retain) id ide_particleImage;
@property(readonly) BOOL ide_hasNullStretchFactor;
@property float ide_emitterShapeSphereRadius;
@property float ide_emitterShapePlaneHeight;
@property float ide_emitterShapePlaneWidth;
@property float ide_emitterShapeCylinderRadius;
@property float ide_emitterShapeCylinderHeight;
@property float ide_emitterShapeBoxLength;
@property float ide_emitterShapeBoxHeight;
@property float ide_emitterShapeBoxWidth;
@property(readonly) BOOL ide_emitterShapeTypeIsSphere;
@property(readonly) BOOL ide_emitterShapeTypeIsPlane;
@property(readonly) BOOL ide_emitterShapeTypeIsCylinder;
@property(readonly) BOOL ide_hasCustomEmitter;
@property(readonly) BOOL ide_emitterShapeTypeIsBox;
@property unsigned long long ide_emitterShapeType;
@property(readonly) BOOL ide_spreadingAngleHasAnEffect;
@property(readonly) BOOL ide_emittingDirectionHasAnEffect;
- (void)setide_hasParticleColorController_edit:(BOOL)arg1;
- (BOOL)ide_hasParticleColorController_edit;
- (void)setide_particleColorController_edit:(id)arg1;
- (id)ide_particleColorController_edit;
- (void)setide_emitterShapeSphereRadius_edit:(float)arg1;
- (float)ide_emitterShapeSphereRadius_edit;
- (void)setide_emitterShapePlaneHeight_edit:(float)arg1;
- (float)ide_emitterShapePlaneHeight_edit;
- (void)setide_emitterShapePlaneWidth_edit:(float)arg1;
- (float)ide_emitterShapePlaneWidth_edit;
- (void)setide_emitterShapeCylinderRadius_edit:(float)arg1;
- (float)ide_emitterShapeCylinderRadius_edit;
- (void)setide_emitterShapeCylinderHeight_edit:(float)arg1;
- (float)ide_emitterShapeCylinderHeight_edit;
- (void)setide_emitterShapeBoxLength_edit:(float)arg1;
- (float)ide_emitterShapeBoxLength_edit;
- (void)setide_emitterShapeBoxHeight_edit:(float)arg1;
- (float)ide_emitterShapeBoxHeight_edit;
- (void)setide_emitterShapeBoxWidth_edit:(float)arg1;
- (float)ide_emitterShapeBoxWidth_edit;
- (void)setide_emitterShapeType_edit:(unsigned long long)arg1;
- (unsigned long long)ide_emitterShapeType_edit;
- (void)setspeedFactor_edit:(double)arg1;
- (double)speedFactor_edit;
- (void)setloops_edit:(BOOL)arg1;
- (BOOL)loops_edit;
- (void)setidleDurationVariation_edit:(double)arg1;
- (double)idleDurationVariation_edit;
- (void)setidleDuration_edit:(double)arg1;
- (double)idleDuration_edit;
- (void)setemissionDurationVariation_edit:(double)arg1;
- (double)emissionDurationVariation_edit;
- (void)setemissionDuration_edit:(double)arg1;
- (double)emissionDuration_edit;
- (void)setimageSequenceRowCount_edit:(unsigned long long)arg1;
- (unsigned long long)imageSequenceRowCount_edit;
- (void)setimageSequenceColumnCount_edit:(unsigned long long)arg1;
- (unsigned long long)imageSequenceColumnCount_edit;
- (void)setimageSequenceAnimationMode_edit:(long long)arg1;
- (long long)imageSequenceAnimationMode_edit;
- (void)setimageSequenceFrameRateVariation_edit:(double)arg1;
- (double)imageSequenceFrameRateVariation_edit;
- (void)setimageSequenceFrameRate_edit:(double)arg1;
- (double)imageSequenceFrameRate_edit;
- (void)setimageSequenceInitialFrameVariation_edit:(double)arg1;
- (double)imageSequenceInitialFrameVariation_edit;
- (void)setimageSequenceInitialFrame_edit:(double)arg1;
- (double)imageSequenceInitialFrame_edit;
- (void)setparticleIntensityVariation_edit:(double)arg1;
- (double)particleIntensityVariation_edit;
- (void)setparticleIntensity_edit:(double)arg1;
- (double)particleIntensity_edit;
- (void)setparticleSizeVariation_edit:(double)arg1;
- (double)particleSizeVariation_edit;
- (void)setparticleSize_edit:(double)arg1;
- (double)particleSize_edit;
- (void)setparticleColorVariation_edit:(struct SCNVector4)arg1;
- (struct SCNVector4)particleColorVariation_edit;
- (void)setparticleColor_edit:(id)arg1;
- (id)particleColor_edit;
- (void)setide_particleImage_edit:(id)arg1;
- (id)ide_particleImage_edit;
- (void)setdampingFactor_edit:(double)arg1;
- (double)dampingFactor_edit;
- (void)setparticleFrictionVariation_edit:(double)arg1;
- (double)particleFrictionVariation_edit;
- (void)setparticleFriction_edit:(double)arg1;
- (double)particleFriction_edit;
- (void)setparticleBounceVariation_edit:(double)arg1;
- (double)particleBounceVariation_edit;
- (void)setparticleBounce_edit:(double)arg1;
- (double)particleBounce_edit;
- (void)setparticleMassVariation_edit:(double)arg1;
- (double)particleMassVariation_edit;
- (void)setparticleMass_edit:(double)arg1;
- (double)particleMass_edit;
- (void)setparticleDiesOnCollision_edit:(BOOL)arg1;
- (BOOL)particleDiesOnCollision_edit;
- (void)setaffectedByPhysicsFields_edit:(BOOL)arg1;
- (BOOL)affectedByPhysicsFields_edit;
- (void)setaffectedByGravity_edit:(BOOL)arg1;
- (BOOL)affectedByGravity_edit;
- (void)setlightingEnabled_edit:(BOOL)arg1;
- (BOOL)lightingEnabled_edit;
- (void)setsortingMode_edit:(long long)arg1;
- (long long)sortingMode_edit;
- (void)setorientationMode_edit:(long long)arg1;
- (long long)orientationMode_edit;
- (void)setsoftParticlesEnabled_edit:(BOOL)arg1;
- (BOOL)softParticlesEnabled_edit;
- (void)setblackPassEnabled_edit:(BOOL)arg1;
- (BOOL)blackPassEnabled_edit;
- (void)setblendMode_edit:(long long)arg1;
- (long long)blendMode_edit;
- (void)setparticleLifeSpanVariation_edit:(double)arg1;
- (double)particleLifeSpanVariation_edit;
- (void)setparticleLifeSpan_edit:(double)arg1;
- (double)particleLifeSpan_edit;
- (void)setstretchFactor_edit:(double)arg1;
- (double)stretchFactor_edit;
- (void)setacceleration_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)acceleration_edit;
- (void)setorientationDirection_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)orientationDirection_edit;
- (void)setemittingDirection_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)emittingDirection_edit;
- (void)setspreadingAngle_edit:(double)arg1;
- (double)spreadingAngle_edit;
- (void)setparticleAngularVelocityVariation_edit:(double)arg1;
- (double)particleAngularVelocityVariation_edit;
- (void)setparticleAngularVelocity_edit:(double)arg1;
- (double)particleAngularVelocity_edit;
- (void)setparticleVelocityVariation_edit:(double)arg1;
- (double)particleVelocityVariation_edit;
- (void)setparticleVelocity_edit:(double)arg1;
- (double)particleVelocity_edit;
- (void)setparticleAngleVariation_edit:(double)arg1;
- (double)particleAngleVariation_edit;
- (void)setparticleAngle_edit:(double)arg1;
- (double)particleAngle_edit;
- (void)setbirthDirection_edit:(long long)arg1;
- (long long)birthDirection_edit;
- (void)setlocal_edit:(BOOL)arg1;
- (BOOL)local_edit;
- (void)setbirthLocation_edit:(long long)arg1;
- (long long)birthLocation_edit;
- (void)setwarmupDuration_edit:(double)arg1;
- (double)warmupDuration_edit;
- (void)setbirthRateVariation_edit:(double)arg1;
- (double)birthRateVariation_edit;
- (void)setbirthRate_edit:(double)arg1;
- (double)birthRate_edit;
@end

