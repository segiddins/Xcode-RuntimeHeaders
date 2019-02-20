//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNMaterial.h>

@class NSArray;

@interface SCNMaterial (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByShininess;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByAmbient;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByMultiply;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByEmission;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedBySelfIllumination;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByAmbientOcclusion;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByTransparent;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByReflective;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByNormal;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedBySpecular;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByDifuse;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByRoughness;
+ (id)keyPathsForValuesAffectingSke_lightingModelIsAffectedByMetalness;
+ (id)keyPathsForValuesAffectingSke_slotContentsObservationHandle;
+ (id)ide_slotNames;
@property double ide_fresnelExponent;
@property BOOL ide_readsFromDepthBuffer;
@property long long ide_lightingModel;
@property(readonly) BOOL ide_isFresnelInvolvedInLightingModel;
@property(readonly) BOOL ide_isShininessInvolvedInLightingModel;
- (BOOL)ske_lightingModelIsAffectedByAmbient;
- (BOOL)ske_lightingModelIsAffectedByMultiply;
- (BOOL)ske_lightingModelIsAffectedByEmission;
- (BOOL)ske_lightingModelIsAffectedBySelfIllumination;
- (BOOL)ske_lightingModelIsAffectedByAmbientOcclusion;
- (BOOL)ske_lightingModelIsAffectedByTransparent;
- (BOOL)ske_lightingModelIsAffectedByReflective;
- (BOOL)ske_lightingModelIsAffectedByNormal;
- (BOOL)ske_lightingModelIsAffectedBySpecular;
- (BOOL)ske_lightingModelIsAffectedByDiffuse;
- (BOOL)ske_lightingModelIsAffectedByRoughness;
- (BOOL)ske_lightingModelIsAffectedByMetalness;
@property(readonly) NSArray *ide_namesOfSlotsInvolvedInLightingModel;
@property(readonly) id ske_slotContentsObservationHandle;
@property(readonly) NSArray *ide_slots;
@end
