//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNMaterialProperty.h>

@class NSColor, NSImage, NSString;

@interface SCNMaterialProperty (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingIde_shouldPresentSkyInspector;
+ (id)keyPathsForValuesAffectingIde_textureComponents;
+ (id)keyPathsForValuesAffectingContentsIsNotNil;
+ (id)keyPathsForValuesAffectingSke_imagePreview;
+ (id)keyPathsForValuesAffectingIde_isMDLSkyCube;
+ (id)keyPathsForValuesAffectingIde_isNotAnImage;
+ (id)ske_displayNameForSlotName:(id)arg1;
+ (id)keyPathsForValuesAffectingide_sky_saturation_edit;
+ (id)keyPathsForValuesAffectingide_sky_contrast_edit;
+ (id)keyPathsForValuesAffectingide_sky_brightness_edit;
+ (id)keyPathsForValuesAffectingide_sky_exposure_edit;
+ (id)keyPathsForValuesAffectingide_sky_gamma_edit;
+ (id)keyPathsForValuesAffectingske_sky_groundColor_edit;
+ (id)keyPathsForValuesAffectingide_sky_horizonElevation_edit;
+ (id)keyPathsForValuesAffectingide_sky_groundAlbedo_edit;
+ (id)keyPathsForValuesAffectingide_sky_upperAtmosphereScattering_edit;
+ (id)keyPathsForValuesAffectingide_sky_sunElevation_edit;
+ (id)keyPathsForValuesAffectingide_sky_turbidity_edit;
+ (id)keyPathsForValuesAffectingmaxAnisotropy_edit;
+ (id)keyPathsForValuesAffectingide_textureComponents_edit;
+ (id)keyPathsForValuesAffectingide_rotation_edit;
+ (id)keyPathsForValuesAffectingide_scaleY_edit;
+ (id)keyPathsForValuesAffectingide_scaleX_edit;
+ (id)keyPathsForValuesAffectingide_offsetY_edit;
+ (id)keyPathsForValuesAffectingide_offsetX_edit;
+ (id)keyPathsForValuesAffectingintensity_edit;
+ (id)keyPathsForValuesAffectingide_contents_edit;
+ (id)keyPathsForValuesAffectingmappingChannel_edit;
+ (id)keyPathsForValuesAffectingwrapT_edit;
+ (id)keyPathsForValuesAffectingwrapS_edit;
+ (id)keyPathsForValuesAffectingmipFilter_edit;
+ (id)keyPathsForValuesAffectingmagnificationFilter_edit;
+ (id)keyPathsForValuesAffectingminificationFilter_edit;
@property(retain, nonatomic) NSColor *ske_sky_groundColor;
@property float ide_sky_saturation;
@property float ide_sky_contrast;
@property float ide_sky_brightness;
@property float ide_sky_exposure;
@property float ide_sky_gamma;
@property float ide_sky_horizonElevation;
@property float ide_sky_groundAlbedo;
@property(nonatomic) struct CGColor *ide_sky_groundColor;
@property float ide_sky_upperAtmosphereScattering;
@property float ide_sky_sunElevation;
@property float ide_sky_turbidity;
- (void)_skyDidChange;
@property(readonly, nonatomic) BOOL ide_shouldPresentSkyInspector;
@property(nonatomic) BOOL ide_syncEnvironment;
@property long long ide_textureComponents;
- (BOOL)contentsIsNotNil;
@property double ide_rotation;
@property double ide_scaleY;
@property double ide_scaleX;
@property double ide_offsetY;
@property double ide_offsetX;
- (id)PRSProxy;
@property(readonly) NSImage *ske_imagePreview;
@property(readonly) BOOL ide_isMDLSkyCube;
@property(readonly) BOOL ide_isNumber;
@property(readonly) BOOL ide_isColor;
@property(readonly) BOOL ide_isNotAnImage;
@property(readonly) BOOL ide_isFloat4Value;
@property(readonly) BOOL ide_isImage;
@property(retain) id ide_contents;
@property(readonly) NSString *ide_contentsAbsoluteFilePath;
@property(readonly) NSString *ide_contentsFilePath;
@property(readonly) NSString *ide_slotName;
- (void)setide_sky_saturation_edit:(float)arg1;
- (float)ide_sky_saturation_edit;
- (void)setide_sky_contrast_edit:(float)arg1;
- (float)ide_sky_contrast_edit;
- (void)setide_sky_brightness_edit:(float)arg1;
- (float)ide_sky_brightness_edit;
- (void)setide_sky_exposure_edit:(float)arg1;
- (float)ide_sky_exposure_edit;
- (void)setide_sky_gamma_edit:(float)arg1;
- (float)ide_sky_gamma_edit;
- (void)setske_sky_groundColor_edit:(id)arg1;
- (id)ske_sky_groundColor_edit;
- (void)setide_sky_horizonElevation_edit:(float)arg1;
- (float)ide_sky_horizonElevation_edit;
- (void)setide_sky_groundAlbedo_edit:(float)arg1;
- (float)ide_sky_groundAlbedo_edit;
- (void)setide_sky_upperAtmosphereScattering_edit:(float)arg1;
- (float)ide_sky_upperAtmosphereScattering_edit;
- (void)setide_sky_sunElevation_edit:(float)arg1;
- (float)ide_sky_sunElevation_edit;
- (void)setide_sky_turbidity_edit:(float)arg1;
- (float)ide_sky_turbidity_edit;
- (void)setmaxAnisotropy_edit:(double)arg1;
- (double)maxAnisotropy_edit;
- (void)setide_textureComponents_edit:(long long)arg1;
- (long long)ide_textureComponents_edit;
- (void)setide_rotation_edit:(double)arg1;
- (double)ide_rotation_edit;
- (void)setide_scaleY_edit:(double)arg1;
- (double)ide_scaleY_edit;
- (void)setide_scaleX_edit:(double)arg1;
- (double)ide_scaleX_edit;
- (void)setide_offsetY_edit:(double)arg1;
- (double)ide_offsetY_edit;
- (void)setide_offsetX_edit:(double)arg1;
- (double)ide_offsetX_edit;
- (void)setintensity_edit:(double)arg1;
- (double)intensity_edit;
- (void)setide_contents_edit:(id)arg1;
- (id)ide_contents_edit;
- (void)setmappingChannel_edit:(long long)arg1;
- (long long)mappingChannel_edit;
- (void)setwrapT_edit:(long long)arg1;
- (long long)wrapT_edit;
- (void)setwrapS_edit:(long long)arg1;
- (long long)wrapS_edit;
- (void)setmipFilter_edit:(long long)arg1;
- (long long)mipFilter_edit;
- (void)setmagnificationFilter_edit:(long long)arg1;
- (long long)magnificationFilter_edit;
- (void)setminificationFilter_edit:(long long)arg1;
- (long long)minificationFilter_edit;
@end

