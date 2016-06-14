//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEUtilityArea.h>

@class NSArrayController;

@interface IDEUtilityArea (SKEAdditions)
- (void)setShowIntensityAmbient:(BOOL)arg1;
- (BOOL)showIntensityAmbient;
@property(nonatomic) BOOL showAmbient;
- (void)setShowIntensityMultiply:(BOOL)arg1;
- (BOOL)showIntensityMultiply;
@property(nonatomic) BOOL showMultiply;
- (void)setShowIntensitySelfIllumination:(BOOL)arg1;
- (BOOL)showIntensitySelfIllumination;
@property(nonatomic) BOOL showSelfIllumination;
- (void)setShowIntensityAmbientOcclusion:(BOOL)arg1;
- (BOOL)showIntensityAmbientOcclusion;
@property(nonatomic) BOOL showAmbientOcclusion;
- (void)setShowIntensityReflective:(BOOL)arg1;
- (BOOL)showIntensityReflective;
@property(nonatomic) BOOL showReflective;
- (void)setShowIntensityTransparent:(BOOL)arg1;
- (BOOL)showIntensityTransparent;
@property(nonatomic) BOOL showTransparent;
- (void)setShowIntensityEmission:(BOOL)arg1;
- (BOOL)showIntensityEmission;
@property(nonatomic) BOOL showEmission;
- (void)setShowIntensityNormal:(BOOL)arg1;
- (BOOL)showIntensityNormal;
@property(nonatomic) BOOL showNormal;
- (void)setShowIntensitySpecular:(BOOL)arg1;
- (BOOL)showIntensitySpecular;
@property(nonatomic) BOOL showSpecular;
- (void)setShowIntensityDiffuse:(BOOL)arg1;
- (BOOL)showIntensityDiffuse;
@property(nonatomic) BOOL showDiffuse;
- (void)setShowIntensityRoughness:(BOOL)arg1;
- (BOOL)showIntensityRoughness;
@property(nonatomic) BOOL showRoughness;
- (void)setShowIntensityMetalness:(BOOL)arg1;
- (BOOL)showIntensityMetalness;
@property(nonatomic) BOOL showMetalness;
@property(readonly) NSArrayController *ske_subInspectedAnimationsController;
@property(readonly) NSArrayController *ske_subInspectedConstraintsController;
@property(readonly) NSArrayController *ske_subInspectedMaterialsController;
- (id)ske_subInspectedObjectsControllerWithAssociatedObjectKey:(id)arg1 utilityAreaKeyPath:(id)arg2;
@end

