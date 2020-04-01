//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKEmitterNode.h>

#import <IDESpriteKitParticleEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <IDESpriteKitParticleEditor/SKNodeWithShader-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSColor, NSImage, NSNull, NSString, NSURL, SKNode, SKShader, _TtC13DVTFoundation9DVTSymbol;

@interface SKEmitterNode (EditorAdditions) <IDEKeyDrivenNavigableItemRepresentedObject, SKNodeWithShader>
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingSk_inspectorTargetNode;
+ (id)keyPathsForValuesAffectingSk_particleRotationSpeedDeg;
+ (id)keyPathsForValuesAffectingSk_particleRotationRangeDeg;
+ (id)keyPathsForValuesAffectingSk_particleRotationDeg;
+ (id)keyPathsForValuesAffectingSk_emissionAngleRangeDeg;
+ (id)keyPathsForValuesAffectingSk_emissionAngleDeg;
+ (id)keyPathsForValuesAffectingSk_backgroundColor;
+ (id)keyPathsForValuesAffectingSk_particleTextureImageName;
+ (id)keyPathsForValuesAffectingsk_particleRotationSpeedDeg_commit;
+ (id)keyPathsForValuesAffectingsk_particleRotationRangeDeg_commit;
+ (id)keyPathsForValuesAffectingsk_particleRotationDeg_commit;
+ (id)keyPathsForValuesAffectingsk_emissionAngleRangeDeg_commit;
+ (id)keyPathsForValuesAffectingsk_emissionAngleDeg_commit;
+ (id)keyPathsForValuesAffectingsk_customSpriteShader_commit;
+ (id)keyPathsForValuesAffectingsk_inspectorTargetNode_commit;
+ (id)keyPathsForValuesAffectingsk_previewParticlePosition_commit;
+ (id)keyPathsForValuesAffectingsk_backgroundColor_commit;
+ (id)keyPathsForValuesAffectingsk_particleTextureImageName_commit;
+ (id)keyPathsForValuesAffectingshader_commit;
+ (id)keyPathsForValuesAffectingfieldBitMask_commit;
+ (id)keyPathsForValuesAffectingparticleAction_commit;
+ (id)keyPathsForValuesAffectingparticleAlphaSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleAlphaRange_commit;
+ (id)keyPathsForValuesAffectingparticleAlpha_commit;
+ (id)keyPathsForValuesAffectingparticleAlphaSequence_commit;
+ (id)keyPathsForValuesAffectingparticleBlendMode_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlendFactorSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlendFactorRange_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlendFactor_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlendFactorSequence_commit;
+ (id)keyPathsForValuesAffectingparticleColorRedSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleColorGreenSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlueSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleColorAlphaSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleColorRedRange_commit;
+ (id)keyPathsForValuesAffectingparticleColorGreenRange_commit;
+ (id)keyPathsForValuesAffectingparticleColorBlueRange_commit;
+ (id)keyPathsForValuesAffectingparticleColorAlphaRange_commit;
+ (id)keyPathsForValuesAffectingparticleColor_commit;
+ (id)keyPathsForValuesAffectingparticleColorSequence_commit;
+ (id)keyPathsForValuesAffectingparticleSize_commit;
+ (id)keyPathsForValuesAffectingparticleTexture_commit;
+ (id)keyPathsForValuesAffectingparticleScaleSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleScaleRange_commit;
+ (id)keyPathsForValuesAffectingparticleScale_commit;
+ (id)keyPathsForValuesAffectingparticleScaleSequence_commit;
+ (id)keyPathsForValuesAffectingparticleRotationSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleRotationRange_commit;
+ (id)keyPathsForValuesAffectingparticleRotation_commit;
+ (id)keyPathsForValuesAffectingyAcceleration_commit;
+ (id)keyPathsForValuesAffectingxAcceleration_commit;
+ (id)keyPathsForValuesAffectingemissionAngleRange_commit;
+ (id)keyPathsForValuesAffectingemissionAngle_commit;
+ (id)keyPathsForValuesAffectingparticleSpeedRange_commit;
+ (id)keyPathsForValuesAffectingparticleSpeed_commit;
+ (id)keyPathsForValuesAffectingparticleZPosition_commit;
+ (id)keyPathsForValuesAffectingparticlePositionRange_commit;
+ (id)keyPathsForValuesAffectingparticlePosition_commit;
+ (id)keyPathsForValuesAffectingparticleLifetimeRange_commit;
+ (id)keyPathsForValuesAffectingparticleLifetime_commit;
+ (id)keyPathsForValuesAffectingtargetNode_commit;
+ (id)keyPathsForValuesAffectingparticleRenderOrder_commit;
+ (id)keyPathsForValuesAffectingnumParticlesToEmit_commit;
+ (id)keyPathsForValuesAffectingparticleBirthRate_commit;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSString *navigableItem_name;
- (id)ideModelObjectTypeIdentifier;
@property(retain, nonatomic) NSURL *sk_customSpriteShader;
- (id)ide_undoKVOKeypaths;
- (void)setNilValueForKey:(id)arg1;
- (id)inspectorAttributes;
@property(retain, nonatomic) SKNode *sk_inspectorTargetNode;
@property(nonatomic) struct CGPoint sk_previewParticlePosition;
@property(nonatomic) double sk_particleRotationSpeedDeg;
@property(nonatomic) double sk_particleRotationRangeDeg;
@property(nonatomic) double sk_particleRotationDeg;
@property(nonatomic) double sk_emissionAngleRangeDeg;
@property(nonatomic) double sk_emissionAngleDeg;
@property(retain, nonatomic) NSColor *sk_backgroundColor;
@property(retain, nonatomic) NSString *sk_particleTextureImageName;
@property(readonly, nonatomic) SKNode *node;
- (void)setsk_particleRotationSpeedDeg_commit:(double)arg1;
- (double)sk_particleRotationSpeedDeg_commit;
- (void)setsk_particleRotationRangeDeg_commit:(double)arg1;
- (double)sk_particleRotationRangeDeg_commit;
- (void)setsk_particleRotationDeg_commit:(double)arg1;
- (double)sk_particleRotationDeg_commit;
- (void)setsk_emissionAngleRangeDeg_commit:(double)arg1;
- (double)sk_emissionAngleRangeDeg_commit;
- (void)setsk_emissionAngleDeg_commit:(double)arg1;
- (double)sk_emissionAngleDeg_commit;
- (void)setsk_customSpriteShader_commit:(id)arg1;
- (id)sk_customSpriteShader_commit;
- (void)setsk_inspectorTargetNode_commit:(id)arg1;
- (id)sk_inspectorTargetNode_commit;
- (void)setsk_previewParticlePosition_commit:(struct CGPoint)arg1;
- (struct CGPoint)sk_previewParticlePosition_commit;
- (void)setsk_backgroundColor_commit:(id)arg1;
- (id)sk_backgroundColor_commit;
- (void)setsk_particleTextureImageName_commit:(id)arg1;
- (id)sk_particleTextureImageName_commit;
- (void)setshader_commit:(id)arg1;
- (id)shader_commit;
- (void)setfieldBitMask_commit:(unsigned int)arg1;
- (unsigned int)fieldBitMask_commit;
- (void)setparticleAction_commit:(id)arg1;
- (id)particleAction_commit;
- (void)setparticleAlphaSpeed_commit:(double)arg1;
- (double)particleAlphaSpeed_commit;
- (void)setparticleAlphaRange_commit:(double)arg1;
- (double)particleAlphaRange_commit;
- (void)setparticleAlpha_commit:(double)arg1;
- (double)particleAlpha_commit;
- (void)setparticleAlphaSequence_commit:(id)arg1;
- (id)particleAlphaSequence_commit;
- (void)setparticleBlendMode_commit:(long long)arg1;
- (long long)particleBlendMode_commit;
- (void)setparticleColorBlendFactorSpeed_commit:(double)arg1;
- (double)particleColorBlendFactorSpeed_commit;
- (void)setparticleColorBlendFactorRange_commit:(double)arg1;
- (double)particleColorBlendFactorRange_commit;
- (void)setparticleColorBlendFactor_commit:(double)arg1;
- (double)particleColorBlendFactor_commit;
- (void)setparticleColorBlendFactorSequence_commit:(id)arg1;
- (id)particleColorBlendFactorSequence_commit;
- (void)setparticleColorRedSpeed_commit:(double)arg1;
- (double)particleColorRedSpeed_commit;
- (void)setparticleColorGreenSpeed_commit:(double)arg1;
- (double)particleColorGreenSpeed_commit;
- (void)setparticleColorBlueSpeed_commit:(double)arg1;
- (double)particleColorBlueSpeed_commit;
- (void)setparticleColorAlphaSpeed_commit:(double)arg1;
- (double)particleColorAlphaSpeed_commit;
- (void)setparticleColorRedRange_commit:(double)arg1;
- (double)particleColorRedRange_commit;
- (void)setparticleColorGreenRange_commit:(double)arg1;
- (double)particleColorGreenRange_commit;
- (void)setparticleColorBlueRange_commit:(double)arg1;
- (double)particleColorBlueRange_commit;
- (void)setparticleColorAlphaRange_commit:(double)arg1;
- (double)particleColorAlphaRange_commit;
- (void)setparticleColor_commit:(id)arg1;
- (id)particleColor_commit;
- (void)setparticleColorSequence_commit:(id)arg1;
- (id)particleColorSequence_commit;
- (void)setparticleSize_commit:(struct CGSize)arg1;
- (struct CGSize)particleSize_commit;
- (void)setparticleTexture_commit:(id)arg1;
- (id)particleTexture_commit;
- (void)setparticleScaleSpeed_commit:(double)arg1;
- (double)particleScaleSpeed_commit;
- (void)setparticleScaleRange_commit:(double)arg1;
- (double)particleScaleRange_commit;
- (void)setparticleScale_commit:(double)arg1;
- (double)particleScale_commit;
- (void)setparticleScaleSequence_commit:(id)arg1;
- (id)particleScaleSequence_commit;
- (void)setparticleRotationSpeed_commit:(double)arg1;
- (double)particleRotationSpeed_commit;
- (void)setparticleRotationRange_commit:(double)arg1;
- (double)particleRotationRange_commit;
- (void)setparticleRotation_commit:(double)arg1;
- (double)particleRotation_commit;
- (void)setyAcceleration_commit:(double)arg1;
- (double)yAcceleration_commit;
- (void)setxAcceleration_commit:(double)arg1;
- (double)xAcceleration_commit;
- (void)setemissionAngleRange_commit:(double)arg1;
- (double)emissionAngleRange_commit;
- (void)setemissionAngle_commit:(double)arg1;
- (double)emissionAngle_commit;
- (void)setparticleSpeedRange_commit:(double)arg1;
- (double)particleSpeedRange_commit;
- (void)setparticleSpeed_commit:(double)arg1;
- (double)particleSpeed_commit;
- (void)setparticleZPosition_commit:(double)arg1;
- (double)particleZPosition_commit;
- (void)setparticlePositionRange_commit:(struct CGVector)arg1;
- (struct CGVector)particlePositionRange_commit;
- (void)setparticlePosition_commit:(struct CGPoint)arg1;
- (struct CGPoint)particlePosition_commit;
- (void)setparticleLifetimeRange_commit:(double)arg1;
- (double)particleLifetimeRange_commit;
- (void)setparticleLifetime_commit:(double)arg1;
- (double)particleLifetime_commit;
- (void)settargetNode_commit:(id)arg1;
- (id)targetNode_commit;
- (void)setparticleRenderOrder_commit:(unsigned long long)arg1;
- (unsigned long long)particleRenderOrder_commit;
- (void)setnumParticlesToEmit_commit:(unsigned long long)arg1;
- (unsigned long long)numParticlesToEmit_commit;
- (void)setparticleBirthRate_commit:(double)arg1;
- (double)particleBirthRate_commit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(retain, nonatomic) SKShader *shader;
@property(readonly) Class superclass;
@end

