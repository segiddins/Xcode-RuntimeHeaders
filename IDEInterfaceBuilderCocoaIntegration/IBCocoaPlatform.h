//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBPlatform.h>

@interface IBCocoaPlatform : IBPlatform
{
}

+ (Class)idiomClass;
+ (id)targetRuntimes;
+ (id)targetRuntimeWithIdentifier:(id)arg1;
- (BOOL)supportsLaunchScreen;
- (BOOL)supportsHardwarePreview;
- (Class)previewGeniusResultsItemGroupClass;
- (id)osVersionsToCompileForDocument:(id)arg1;
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
- (Class)resourceManagerClass;
- (void)prepareToDecodeDocumentContentWithKeyedUnarchiver:(id)arg1;
- (void)prepareToDecodeDocumentContentWithTypeStreamedUnarchiver:(id)arg1;
- (Class)designedClassForEncodedClassName:(id)arg1;
- (id)standinNSIBClassesByRuntimeClassName;
- (id)standinIBNSClasses;
- (void)unarchivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)autolayoutDescriptiveTextForPriority:(float)arg1;
- (Class)arbitrationUnitClass;
- (Class)autolayoutEngineClass;
- (BOOL)hasRemoteSimulator;
- (long long)autolayoutMinSystemVersion;
- (void)populateAdditionalSearchableAttributeKeyPaths:(id)arg1 ofClass:(Class)arg2 forInspectorCategory:(id)arg3;
- (void)populateAdditionalInspectors:(id)arg1 ofClass:(Class)arg2 forCategory:(id)arg3;
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
- (long long)allSystemsTarget;
- (id)defaultTargetRuntimeForArchiving;
- (Class)targetRuntimeClass;
- (id)targetRuntimeWithArchiveIdentifier:(id)arg1 variantIdentifier:(id)arg2;
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

