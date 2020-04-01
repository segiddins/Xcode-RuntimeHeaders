//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIImageSymbolConfiguration, IBUIViewAutolayoutGuide, NSImage, NSString;

@interface IBUIImageView : IBUIView <IBDocumentArchiving>
{
    BOOL _highlighted;
    BOOL _adjustsImageWhenAncestorFocused;
    BOOL _adjustsImageSizeForAccessibilityContentSizeCategory;
    NSImage *_image;
    NSImage *_highlightedImage;
    IBUIViewAutolayoutGuide *_midlineLayoutGuide;
    IBUIImageSymbolConfiguration *_preferredSymbolConfiguration;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)viewAutolayoutGuideWithTargetRuntime:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedUseMidlineLayoutGuide;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfigurationFontDescription;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfigurationConfigurationType;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfigurationScale;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfigurationWeight;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfigurationPointSize;
+ (id)keyPathsForValuesAffectingIbInspectedPreferredSymbolConfiguration;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) IBUIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
@property(retain, nonatomic) IBUIViewAutolayoutGuide *midlineLayoutGuide; // @synthesize midlineLayoutGuide=_midlineLayoutGuide;
@property(nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; // @synthesize adjustsImageSizeForAccessibilityContentSizeCategory=_adjustsImageSizeForAccessibilityContentSizeCategory;
@property(nonatomic) BOOL adjustsImageWhenAncestorFocused; // @synthesize adjustsImageWhenAncestorFocused=_adjustsImageWhenAncestorFocused;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)ibEffectiveViewLayoutGuides;
- (void)unarchiveMidlineLayoutGuide:(id)arg1;
- (void)archiveMidlineLayoutGuide:(id)arg1;
- (struct CGSize)sizeForStrechableImageContent;
- (BOOL)shouldDrawAsPlaceholder;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (BOOL)ibCanAutomaticallyTranslatesAutoresizingMaskIntoConstraints;
- (BOOL)ibCanHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg1;
- (id)ibEffectiveTitleSuffixForConstrainingAttribute:(unsigned long long)arg1;
- (id)ibEffectiveItemForConstrainingAttribute:(unsigned long long)arg1;
- (id)ibAuxiliaryItemsForConstraintDrawables;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)setEnableMidlineLayoutGuides:(BOOL)arg1 document:(id)arg2;
@property(nonatomic) BOOL ibInspectedUseMidlineLayoutGuide;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibShowAdjustsImageWhenAncestorFocused;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedPreferredSymbolConfigurationFontDescription:(id)arg1;
- (id)ibInspectedPreferredSymbolConfigurationFontDescription;
- (void)setIbInspectedPreferredSymbolConfigurationConfigurationType:(long long)arg1;
- (long long)ibInspectedPreferredSymbolConfigurationConfigurationType;
- (void)setIbInspectedPreferredSymbolConfigurationScale:(long long)arg1;
- (long long)ibInspectedPreferredSymbolConfigurationScale;
- (void)setIbInspectedPreferredSymbolConfigurationWeight:(long long)arg1;
- (long long)ibInspectedPreferredSymbolConfigurationWeight;
- (void)setIbInspectedPreferredSymbolConfigurationPointSize:(double)arg1;
- (double)ibInspectedPreferredSymbolConfigurationPointSize;
- (void)setIbInspectedPreferredSymbolConfiguration:(id)arg1;
- (id)ibInspectedPreferredSymbolConfiguration;
- (BOOL)ibAllowSizeToFitIfNeededForLayoutSize:(struct CGSize)arg1;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

