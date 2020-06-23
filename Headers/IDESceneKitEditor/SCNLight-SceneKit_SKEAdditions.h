//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNLight.h>

@class NSString;

@interface SCNLight (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingIde_supportsGobo;
+ (id)keyPathsForValuesAffectingIde_hasGobo;
+ (id)keyPathsForValuesAffectingSke_shadowMapSize;
+ (id)keyPathsForValuesAffectingIde_limitMaximumDistance;
+ (id)keyPathsForValuesAffectingSke_isDeferred;
+ (id)keyPathsForValuesAffectingSke_canShowCascades;
+ (id)keyPathsForValuesAffectingIde_supportsAutoAdjustsShadowProjection;
+ (id)keyPathsForValuesAffectingIde_noAdjustsShadowProjection;
+ (id)keyPathsForValuesAffectingIde_adjustsShadowProjection;
+ (id)keyPathsForValuesAffectingIde_canCompute;
+ (id)keyPathsForValuesAffectingIde_isNotLive;
+ (id)keyPathsForValuesAffectingSke_isReflectionProbe;
+ (id)keyPathsForValuesAffectingide_goboContents_edit;
+ (id)keyPathsForValuesAffectingske_parallax_edit;
+ (id)keyPathsForValuesAffectingske_probeExtent_edit;
+ (id)keyPathsForValuesAffectingske_probeOffset_edit;
+ (id)keyPathsForValuesAffectingide_probeUpdateType_edit;
+ (id)keyPathsForValuesAffectingide_probeType_edit;
+ (id)keyPathsForValuesAffectingske_doubleSidedArea_edit;
+ (id)keyPathsForValuesAffectingske_drawsArea_edit;
+ (id)keyPathsForValuesAffectingske_areaExtent_edit;
+ (id)keyPathsForValuesAffectingske_areaExtent2_edit;
+ (id)keyPathsForValuesAffectingske_areaExtent1_edit;
+ (id)keyPathsForValuesAffectingske_areaType_edit;
+ (id)keyPathsForValuesAffectingide_limitMaximumDistance_edit;
+ (id)keyPathsForValuesAffectingide_shadowCascadeDebug_edit;
+ (id)keyPathsForValuesAffectingide_shadowCascadeSplittingFactor_edit;
+ (id)keyPathsForValuesAffectingide_forceBackFaceCasters_edit;
+ (id)keyPathsForValuesAffectingide_shadowCascadeCount_edit;
+ (id)keyPathsForValuesAffectingide_maximumShadowDistance_edit;
+ (id)keyPathsForValuesAffectingide_adjustsShadowProjection_edit;
+ (id)keyPathsForValuesAffectingcategoryBitMask_edit;
+ (id)keyPathsForValuesAffectingshadowMode_edit;
+ (id)keyPathsForValuesAffectingide_IESProfileURL_edit;
+ (id)keyPathsForValuesAffectingshouldBakeIndirectLighting_edit;
+ (id)keyPathsForValuesAffectingshouldBakeDirectLighting_edit;
+ (id)keyPathsForValuesAffectingide_intensity_edit;
+ (id)keyPathsForValuesAffectingide_spotOuterAngle_edit;
+ (id)keyPathsForValuesAffectingide_spotInnerAngle_edit;
+ (id)keyPathsForValuesAffectingorthographicScale_edit;
+ (id)keyPathsForValuesAffectingide_shadowFarClipping_edit;
+ (id)keyPathsForValuesAffectingide_shadowNearClipping_edit;
+ (id)keyPathsForValuesAffectingide_attenuationFalloffExponent_edit;
+ (id)keyPathsForValuesAffectingide_attenuationEnd_edit;
+ (id)keyPathsForValuesAffectingide_attenuationStart_edit;
+ (id)keyPathsForValuesAffectingske_shadowMapSize_edit;
+ (id)keyPathsForValuesAffectingshadowBias_edit;
+ (id)keyPathsForValuesAffectingshadowSampleCount_edit;
+ (id)keyPathsForValuesAffectingshadowRadius_edit;
+ (id)keyPathsForValuesAffectingshadowColor_edit;
+ (id)keyPathsForValuesAffectingske_castsShadow_edit;
+ (id)keyPathsForValuesAffectingcastsShadow_edit;
+ (id)keyPathsForValuesAffectingcolor_edit;
+ (id)keyPathsForValuesAffectingske_modeNumber_edit;
+ (id)keyPathsForValuesAffectingske_typeNumber_edit;
+ (id)keyPathsForValuesAffectingname_edit;
@property(retain) id ide_goboContents;
- (BOOL)ide_supportsGobo;
- (BOOL)ide_hasGobo;
@property float ske_shadowMapSize;
@property BOOL ide_limitMaximumDistance;
- (BOOL)ske_isDirectionalOrSpot;
@property(readonly) BOOL ske_isDirectional;
@property(readonly) BOOL ske_isDeferred;
@property BOOL ide_shadowCascadeDebug;
@property float ide_shadowCascadeSplittingFactor;
@property BOOL ide_forceBackFaceCasters;
- (BOOL)ske_canShowCascades;
@property long long ide_shadowCascadeCount;
@property float ide_maximumShadowDistance;
@property(readonly) BOOL ide_supportsAutoAdjustsShadowProjection;
@property(readonly) BOOL ide_noAdjustsShadowProjection;
@property BOOL ide_adjustsShadowProjection;
@property BOOL ske_parallax;
@property struct SCNVector3 ske_probeExtent;
@property struct SCNVector3 ske_probeOffset;
- (BOOL)ide_canCompute;
- (BOOL)ide_isNotLive;
@property long long ide_probeUpdateType;
@property long long ide_probeType;
@property(readonly) BOOL ske_isReflectionProbe;
@property struct SCNVector3 ske_areaExtent;
@property float ske_areaExtent2;
@property float ske_areaExtent1;
@property BOOL ske_doubleSidedArea;
@property BOOL ske_drawsArea;
@property long long ske_areaType;
@property(readonly) BOOL ske_hasThreeExtents;
@property(readonly) BOOL ske_hasTwoExtents;
@property(readonly) BOOL ske_hasOneExtent;
@property(readonly) BOOL ske_isAreaLight;
@property(retain, nonatomic) NSString *ide_IESProfileURL;
@property float ide_intensity;
@property(readonly) BOOL ske_isBakable;
@property(readonly) BOOL ide_isNotProbe;
@property(readonly) BOOL ide_isProbe;
@property float ide_shadowFarClipping;
@property float ide_shadowNearClipping;
@property BOOL ske_castsShadow;
@property(readonly) BOOL ide_cannotCastShadow;
@property(readonly) BOOL ide_canCastShadow;
@property float ide_spotOuterAngle;
@property float ide_spotInnerAngle;
@property float ide_attenuationFalloffExponent;
@property float ide_attenuationEnd;
@property float ide_attenuationStart;
@property(readonly) BOOL ide_supportsOrthographicScale;
@property(readonly) BOOL ide_supportsColor;
@property(readonly) BOOL ide_supportsIES;
@property(readonly) BOOL ide_supportsIlluminationCone;
@property(readonly) BOOL ide_supportsIntensity;
@property(readonly) BOOL ide_supportsAttenuation;
@property long long ske_modeNumber;
@property long long ske_typeNumber;
- (void)setide_goboContents_edit:(id)arg1;
- (id)ide_goboContents_edit;
- (void)setske_parallax_edit:(BOOL)arg1;
- (BOOL)ske_parallax_edit;
- (void)setske_probeExtent_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)ske_probeExtent_edit;
- (void)setske_probeOffset_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)ske_probeOffset_edit;
- (void)setide_probeUpdateType_edit:(long long)arg1;
- (long long)ide_probeUpdateType_edit;
- (void)setide_probeType_edit:(long long)arg1;
- (long long)ide_probeType_edit;
- (void)setske_doubleSidedArea_edit:(BOOL)arg1;
- (BOOL)ske_doubleSidedArea_edit;
- (void)setske_drawsArea_edit:(BOOL)arg1;
- (BOOL)ske_drawsArea_edit;
- (void)setske_areaExtent_edit:(struct SCNVector3)arg1;
- (struct SCNVector3)ske_areaExtent_edit;
- (void)setske_areaExtent2_edit:(float)arg1;
- (float)ske_areaExtent2_edit;
- (void)setske_areaExtent1_edit:(float)arg1;
- (float)ske_areaExtent1_edit;
- (void)setske_areaType_edit:(long long)arg1;
- (long long)ske_areaType_edit;
- (void)setide_limitMaximumDistance_edit:(BOOL)arg1;
- (BOOL)ide_limitMaximumDistance_edit;
- (void)setide_shadowCascadeDebug_edit:(BOOL)arg1;
- (BOOL)ide_shadowCascadeDebug_edit;
- (void)setide_shadowCascadeSplittingFactor_edit:(float)arg1;
- (float)ide_shadowCascadeSplittingFactor_edit;
- (void)setide_forceBackFaceCasters_edit:(BOOL)arg1;
- (BOOL)ide_forceBackFaceCasters_edit;
- (void)setide_shadowCascadeCount_edit:(long long)arg1;
- (long long)ide_shadowCascadeCount_edit;
- (void)setide_maximumShadowDistance_edit:(float)arg1;
- (float)ide_maximumShadowDistance_edit;
- (void)setide_adjustsShadowProjection_edit:(BOOL)arg1;
- (BOOL)ide_adjustsShadowProjection_edit;
- (void)setcategoryBitMask_edit:(unsigned long long)arg1;
- (unsigned long long)categoryBitMask_edit;
- (void)setshadowMode_edit:(long long)arg1;
- (long long)shadowMode_edit;
- (void)setide_IESProfileURL_edit:(id)arg1;
- (id)ide_IESProfileURL_edit;
- (void)setshouldBakeIndirectLighting_edit:(BOOL)arg1;
- (BOOL)shouldBakeIndirectLighting_edit;
- (void)setshouldBakeDirectLighting_edit:(BOOL)arg1;
- (BOOL)shouldBakeDirectLighting_edit;
- (void)setide_intensity_edit:(float)arg1;
- (float)ide_intensity_edit;
- (void)setide_spotOuterAngle_edit:(float)arg1;
- (float)ide_spotOuterAngle_edit;
- (void)setide_spotInnerAngle_edit:(float)arg1;
- (float)ide_spotInnerAngle_edit;
- (void)setorthographicScale_edit:(double)arg1;
- (double)orthographicScale_edit;
- (void)setide_shadowFarClipping_edit:(float)arg1;
- (float)ide_shadowFarClipping_edit;
- (void)setide_shadowNearClipping_edit:(float)arg1;
- (float)ide_shadowNearClipping_edit;
- (void)setide_attenuationFalloffExponent_edit:(float)arg1;
- (float)ide_attenuationFalloffExponent_edit;
- (void)setide_attenuationEnd_edit:(float)arg1;
- (float)ide_attenuationEnd_edit;
- (void)setide_attenuationStart_edit:(float)arg1;
- (float)ide_attenuationStart_edit;
- (void)setske_shadowMapSize_edit:(float)arg1;
- (float)ske_shadowMapSize_edit;
- (void)setshadowBias_edit:(double)arg1;
- (double)shadowBias_edit;
- (void)setshadowSampleCount_edit:(unsigned long long)arg1;
- (unsigned long long)shadowSampleCount_edit;
- (void)setshadowRadius_edit:(double)arg1;
- (double)shadowRadius_edit;
- (void)setshadowColor_edit:(id)arg1;
- (id)shadowColor_edit;
- (void)setske_castsShadow_edit:(BOOL)arg1;
- (BOOL)ske_castsShadow_edit;
- (void)setcastsShadow_edit:(BOOL)arg1;
- (BOOL)castsShadow_edit;
- (void)setcolor_edit:(id)arg1;
- (id)color_edit;
- (void)setske_modeNumber_edit:(long long)arg1;
- (long long)ske_modeNumber_edit;
- (void)setske_typeNumber_edit:(long long)arg1;
- (long long)ske_typeNumber_edit;
- (void)setname_edit:(id)arg1;
- (id)name_edit;
@end

