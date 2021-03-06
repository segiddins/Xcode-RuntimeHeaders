//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@class NSOrderedSet, NSSet, NSUnitLength;

@interface IBICARImageSet : IBICSlottedAsset
{
    double _width;
    NSUnitLength *_unit;
    struct ODTQualityEstimate *_qualityEstimate;
}

+ (Class)requiredParentClass;
+ (BOOL)encodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)typeNameForIssues;
+ (id)classNameComponents;
+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingSize;
+ (id)keyPathsForValuesAffectingDetectabilityEstimation;
+ (id)imagesFromPaths:(id)arg1;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (id)createInstanceNamed:(id)arg1 baseSize:(struct CGSize)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
- (void).cxx_destruct;
@property(nonatomic) struct ODTQualityEstimate *qualityEstimate; // @synthesize qualityEstimate=_qualityEstimate;
@property(retain, nonatomic) NSUnitLength *unit; // @synthesize unit=_unit;
@property(nonatomic) double width; // @synthesize width=_width;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)enclosingResourceGroup;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (CDStruct_550fdc95)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (BOOL)setHeight:(double)arg1 andUnit:(id)arg2;
- (BOOL)setHeight:(double)arg1 inUnit:(id)arg2;
- (id)heightInUnit:(id)arg1;
- (BOOL)setHeight:(double)arg1;
- (id)height;
- (id)widthMeasurement;
- (void)setWidth:(double)arg1 andUnit:(id)arg2;
- (void)setWidth:(double)arg1 inUnit:(id)arg2;
- (double)widthInUnit:(id)arg1;
- (void)_setUnit:(id)arg1 andConvertCurrentWidth:(BOOL)arg2;
- (BOOL)shouldPerformCV3DValidation;
- (id)aspectRatio;
- (id)size;
@property(readonly, nonatomic) double detectabilityEstimation;
- (void)setAssetData:(id)arg1;
- (void)dealloc;
- (id)initializeManifestArchivist;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)slotForChild:(id)arg1;
- (id)assetRepForSlot:(id)arg1;

@end

