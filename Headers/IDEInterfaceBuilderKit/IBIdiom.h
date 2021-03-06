//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBScopedSingleton-Protocol.h>

@class IBInspectorSearchDataManager, NSArray, NSMutableDictionary, NSSet, NSString;

@interface IBIdiom : NSObject <IBScopedSingleton>
{
    IBInspectorSearchDataManager *_searchDataManager;
    NSArray *_subtypes;
    NSSet *_embeddingPolicyExtensions;
    NSMutableDictionary *_bezelCacheByIdentifier;
    NSMutableDictionary *_maskCacheByIdentifier;
    NSMutableDictionary *_detailCacheByIdentifier;
    NSArray *_previewEditorAddMenuDeviceConfigurations;
}

+ (id)idiomWithArchiveIdentifier:(id)arg1;
+ (id)idiomExplicitlyTargetedByFilePath:(id)arg1;
+ (id)idiomForTargetDeviceIdentifier:(id)arg1;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)deviceBarAppearanceGroupTitle;
- (id)deviceSubtypeForIdentifier:(id)arg1;
- (id)symbolicConstantValueForFirstAttribute:(unsigned long long)arg1 andSecondAttribute:(unsigned long long)arg2;
- (BOOL)supportsLayoutGuideStandardSpacingConstraints;
- (BOOL)supportsVerticalBaselineStandardSpacingConstraints;
- (BOOL)supportsSafeAreaLayoutGuides;
- (double)effectiveScaleFactorForPlatformToolDescriptionScaleFactor:(double)arg1;
- (id)systemGuideSetsByIdentifier;
- (id)guideSetForIdentifier:(id)arg1;
- (void)populateVariantForResolvingMediaResources:(id)arg1 forDocument:(id)arg2;
- (id)variantForResolvingMediaResourcesForDocument:(id)arg1;
- (id)foldingStrategy;
- (BOOL)allowsEditingWhileCanvasZoomed;
- (BOOL)allowsZoomingCanvas;
- (BOOL)allowsEditingConfigurations;
- (BOOL)usesAutolayoutActionArea;
- (void)unarchiveIdiomDependentDataForDocument:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archiveIdiomDependentDataForDocument:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)archivingDefaultSceneMemberID;
- (id)embeddingPolicyExtensions;
- (id)preferredMemberConfigurationsForFlatteningFrameVariation;
- (id)memberConfigurationVariablesForVarying;
- (id)memberConfigurationVariables;
- (id)extensionsForExtensionPoint:(id)arg1;
- (BOOL)matchesExtension:(id)arg1;
- (BOOL)wantsDefaultMatchesForExtension:(id)arg1;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (Class)storyboardCompilerClass;
- (Class)xibCompilerClass;
- (BOOL)usesSceneExitPlaceholder;
- (BOOL)usesFirstResponder;
- (id)xibArchivingSchema;
- (id)storyboardArchivingSchema;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (Class)storyboardAssetProviderClass;
- (Class)xibAssetProviderClass;
- (id)designatedIdiomForConfigurations;
- (id)pluralUserLabelForConfigurations;
- (id)singularUserLabelForConfigurations;
- (id)backwardsDeploymentConfiguration;
- (BOOL)isInspectorCategoryApplicable:(id)arg1;
- (BOOL)isApplicableForObjectLibraryAssetProviderExtension:(id)arg1;
- (BOOL)matchesFilePath:(id)arg1;
- (id)filePathWithTargetDeviceSuffixForBaseFilePath:(id)arg1;
- (id)unsupportedSegueClasses;
- (id)inspectorSearchDataManager;
- (id)imageForDeviceConfiguration:(id)arg1 sizeHint:(id)arg2 context:(id)arg3;
- (id)contextForGeneratingDeviceBarIconsForDeviceConfigurations:(id)arg1 withMaximumDimension:(double)arg2;
- (id)makeDeviceBezelForConfiguration:(id)arg1 style:(long long)arg2;
- (id)makeDeviceBezelForSubtype:(id)arg1 style:(long long)arg2;
- (id)deviceBezelForConfiguration:(id)arg1 style:(long long)arg2;
- (id)deviceBezelForSubtype:(id)arg1 style:(long long)arg2;
- (id)bezelCacheIdentifierForSubtype:(id)arg1 style:(long long)arg2;
- (void)cacheDeviceBezel:(id)arg1 forSubtype:(id)arg2 style:(long long)arg3;
- (id)cachedDeviceBezelForSubtype:(id)arg1 style:(long long)arg2;
- (id)deviceDetailForConfiguration:(id)arg1;
- (id)deviceMaskForConfiguration:(id)arg1;
- (id)deviceMaskForSubtype:(id)arg1;
- (id)deviceTypeDescriptionForDeviceConfiguration:(id)arg1;
- (id)makeDeviceDetailForConfiguration:(id)arg1;
- (id)makeDeviceMaskForSubtype:(id)arg1;
- (id)normalizedDeviceMaskPathForSubtype:(id)arg1 maskType:(long long)arg2;
- (BOOL)shouldIncludeDeviceSubtype:(id)arg1;
- (void)populateSubtypes:(id)arg1;
- (id)subtypes;
- (id)presentationOrderedSiblingIdioms;
- (id)defaultSubtype;
- (id)appearanceForIdentifier:(id)arg1;
- (id)traitVariableBindingForAppearance:(id)arg1;
- (id)traitIdentifierForAppearance;
- (id)appearances;
- (id)defaultAppearance;
- (id)effectiveIdiomForProvidingDefaultSubtypesInDocument:(id)arg1;
- (Class)deviceSubtypeClass;
- (BOOL)supportsBranchingForTraitVariations;
- (id)branchModeLabelSuffixForConfiguration:(id)arg1;
- (id)previewEditorCanvasDisplayNameForDeviceConfiguration:(id)arg1;
- (id)previewEditorAddMenuDisplayNameForDeviceConfiguration:(id)arg1;
- (id)previewEditorAddMenuDeviceConfigurationsForDocumentConfiguration:(id)arg1;
- (BOOL)supportsConnectionClass:(Class)arg1;
- (double)defaultEditingZoomFactorForCanvasBackingScaleFactor:(double)arg1;
- (id)pluginName;
- (id)imageForDocumentOutlinePlaceholdersGroup;
- (id)imageForDocumentOutlineObjectsGroup;
- (id)icon;
- (id)targetDeviceFileNameSuffix;
- (id)buildSystemTargetDeviceIdentifier;
- (id)idiomName;
- (id)archiveIdentifier;
- (id)identifier;
- (id)platform;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

