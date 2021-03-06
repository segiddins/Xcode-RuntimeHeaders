//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBPlatform.h>

@interface IBCocoaPlatform : IBPlatform
{
}

+ (Class)idiomClass;
+ (id)targetRuntimes;
+ (id)targetRuntimeWithIdentifier:(id)arg1;
+ (id)ibPreferredItemForContainerConstraintToItem:(id)arg1 fromDescendant:(id)arg2 attribute:(unsigned long long)arg3;
+ (id)initIBView:(id)arg1 withCoder:(id)arg2;
+ (void)encodeIBView:(id)arg1 withCoder:(id)arg2;
+ (id)instantiateLibraryObjectForAssetIdentifier:(id)arg1;
- (id)identifierToObjectMapForGeneratedSourceInDocument:(id)arg1;
- (id)ibRequiredFrameworksForGeneratedSource;
- (BOOL)supportsLaunchScreen;
- (BOOL)supportsHardwarePreview;
- (Class)previewGeniusResultsItemGroupClass;
- (void)populateGlobalIssues:(id)arg1 inDocument:(id)arg2;
- (id)osVersionsToCompileForDocument:(id)arg1 options:(id)arg2;
- (id)infoPlistDesignatedMenuIdentifierKey;
- (id)infoPlistDesignatedEntryPointIdentifierKey;
- (id)infoPlistPackageVersionKey;
- (id)infoPlistReferencedBundleIdentifierKey;
- (id)infoPlistReferencedStoryboardNameKey;
- (id)infoPlistReferencedControllerIdentifierKey;
- (id)infoPlistViewControllerIdentifierToExternalStoryboardReferenceMapKey;
- (id)infoPlistViewControllerIdentifierToNibNameMapKey;
- (id)xibPackageContentFileNames;
- (BOOL)shouldBackwardsDeployStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (id)typeIdentifierForPreservingContentsWhenWritingDocument;
- (id)xibHybridPackageType;
- (id)xibHybridPackageEditableDocumentFilename;
- (id)xibPreferredFileType;
- (Class)userDefinedRuntimeAttributesPlaceholderClass;
- (void)populateGlobalEntryPointIndicators:(id)arg1 withTargetRuntime:(id)arg2;
- (Class)fallbackSegueClassForUnknownSegueKind;
- (Class)externalPrimarySceneObjectClass;
- (Class)simulatedMetricsContainerClass;
- (long long)minimumVersionSupportingSystemSymbols;
- (BOOL)useGlobalImageForImageName:(id)arg1;
- (Class)resourceManagerClass;
- (long long)minimumVersionSupportingNamedColors;
- (id)deviceBarVisibilityUserStateKey;
- (BOOL)supportsArchivingDeviceConfiguration;
- (void)prepareToDecodeDocumentContentWithKeyedUnarchiver:(id)arg1;
- (void)prepareToDecodeDocumentContentWithTypeStreamedUnarchiver:(id)arg1;
- (Class)designedClassForEncodedClassName:(id)arg1;
- (id)standinNSIBClassesByRuntimeClassName;
- (id)standinIBNSClasses;
- (void)unarchivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)runtimeConfigurableConstraintConstantKeyPath;
- (id)archiveKeyForUsesConfigurations;
- (BOOL)supportPerConfigurationProperties;
- (id)autolayoutDescriptiveTextForPriority:(float)arg1;
- (Class)arbitrationUnitClass;
- (Class)autolayoutEngineClass;
- (long long)autolayoutMinSystemVersion;
- (void)populateAdditionalSearchableAttributeKeyPaths:(id)arg1 ofClass:(Class)arg2 forInspectorCategory:(id)arg3;
- (void)populateAdditionalInspectorSlices:(id)arg1 ofClass:(Class)arg2 forCategory:(id)arg3;
- (void)didAddObject:(id)arg1 toDocument:(id)arg2 phase:(unsigned long long)arg3;
- (id)classNamesThatDoNotSupportZeroingWeakReferences;
- (id)bonusedClassNamesForGeniusOrdering;
- (id)penalizedClassNamesForGeniusOrdering;
- (id)ignoredConnectionLabelsForGeniusOrdering;
- (id)addCustomObjectOfExternalClass:(id)arg1 toParent:(id)arg2 inDocument:(id)arg3;
- (long long)defaultStorageTypeForMRROutlets;
- (Class)actionConnectionClass;
- (BOOL)connectToSourceCodeShouldReleaseInstanceVariables;
- (BOOL)connectToSourceCodeShouldInsertNonAtomicProperties;
- (id)firstOSVersionWithWeakReferences;
- (id)xibApplicationMemberID;
- (id)xibFirstResponderMemberID;
- (id)xibFilesOwnerMemberID;
- (BOOL)rendersLibraryAssetIconsFromContent;
- (id)segueTemplateToControllerKeyPath;
- (id)defaultStoryboardSegueClassName;
- (id)defaultTargetRuntimeForArchiving;
- (Class)targetRuntimeClass;
- (id)targetRuntimeWithArchiveIdentifier:(id)arg1 variantIdentifier:(id)arg2;
- (id)marketingVersionFromAvailabilityVersion:(long long)arg1;
- (long long)availabilityVersionFromMarketingVersion:(id)arg1;
- (BOOL)downgradingToAutoIncrementingIDsIsEnabled;
- (BOOL)shouldOpenDocument:(id)arg1 error:(id *)arg2;
- (id)systemDocumentDependency;
- (id)interfaceBuilderDocumentDependency;
- (BOOL)supportsInternationalizationWithSystemTarget:(long long)arg1 returningError:(id *)arg2;
- (id)deploymentVersionBuildSetting;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (Class)documentPlatformAdapterClass;
- (id)operatingSystemName;
- (id)identifier;

@end

