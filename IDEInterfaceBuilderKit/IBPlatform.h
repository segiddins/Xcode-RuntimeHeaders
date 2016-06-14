//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBScopedSingleton-Protocol.h>

@class NSArray, NSSet, NSString;

@interface IBPlatform : NSObject <IBScopedSingleton>
{
    NSSet *_objectLibraryAssetProviderExtensions;
    NSSet *_documentDependencies;
    NSSet *_classDescriptionsExtensions;
    NSSet *_buildEnvironmentVerifiers;
    NSSet *_connectionExtensions;
    NSSet *_excludedFrameworksExtensions;
    NSSet *_sourceCodeParserExtensions;
    NSSet *_connectionClasses;
    NSSet *_segueClasses;
    NSArray *_displayOrderedConfigurations;
}

+ (int)libraryInclusionStatusForAssetClass:(Class)arg1 assetIdentifier:(id)arg2;
+ (BOOL)supportsArchivingRelativeFrames;
+ (BOOL)supportsSceneUpdates;
+ (void)customizeObjectForLibraryInstantiation:(id)arg1;
+ (Class)idiomClass;
+ (id)targetRuntimes;
+ (id)targetRuntimeWithIdentifier:(id)arg1;
+ (id)platformForBuildSystemPlatformIdentifier:(id)arg1;
+ (id)platformForBuildSystemPlatformName:(id)arg1;
+ (id)idioms;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)layoutRuleWidgetTypePrefix;
- (BOOL)acceptsPasteboardContentsFromPlatform:(id)arg1;
- (BOOL)rendersLibraryAssetIconsFromContent;
- (BOOL)hasPlatformSpecificImageForObjectClass:(Class)arg1;
- (Class)renderingProcessingRequestClass;
- (BOOL)supportsInternationalizationWithSystemTarget:(long long)arg1 returningError:(id *)arg2;
- (void)populateWarnings:(id)arg1 forObject:(id)arg2 inDocument:(id)arg3 withComputationContext:(id)arg4;
- (id)frameworkSearchPathsForOverlayTools;
- (id)pathToOverlayToolNamed:(id)arg1;
- (void)didAddObject:(id)arg1 toDocument:(id)arg2 phase:(unsigned long long)arg3;
- (BOOL)validateBuildEnvironment:(id *)arg1;
- (Class)documentDesignablesDispatcherClass;
- (BOOL)supportsLaunchScreen;
- (BOOL)supportsHardwarePreview;
- (Class)previewGeniusResultsItemGroupClass;
- (id)osVersionsToCompileForDocument:(id)arg1;
- (BOOL)canOnlyTargetCurrentOSVersion_22887070;
- (void)finishChangingTargetRuntimeInCompiledIntermediateDocument:(id)arg1;
- (id)validateVersion:(id)arg1 forCompilingDocument:(id)arg2;
- (id)infoPlistDesignatedEntryPointIdentifierKey;
- (id)infoPlistPackageVersionKey;
- (id)infoPlistReferencedBundleIdentifierKey;
- (id)infoPlistReferencedStoryboardNameKey;
- (id)infoPlistReferencedControllerIdentifierKey;
- (id)infoPlistViewControllerIdentifierToExternalStoryboardReferenceMapKey;
- (id)infoPlistViewControllerIdentifierToNibNameMapKey;
- (id)alternateTopLevelPathsForCompilationOutputPath:(id)arg1;
- (id)xibPackageContentFileNames;
- (id)storyboardPackageContentFileNames;
- (id)supportedTargetDevices;
- (BOOL)shouldBackwardsDeployStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (BOOL)shouldValidateStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (id)instantiateDocumentLinker;
- (id)sourceCodeParserClasses;
- (id)frameworksExcludedFromSourceScanning;
- (Class)fallbackSegueClassForUnknownSegueKind;
- (id)segueClasses;
- (id)connectionClasses;
- (id)connectionExtensionForConnectionClass:(Class)arg1;
- (id)documentDependencyForType:(id)arg1;
- (id)documentDependencies;
- (id)objectLibraryAssetProviderExtensions;
- (id)excludedFrameworkExtensions;
- (id)buildEnvironmentVerifiers;
- (id)sourceCodeParserExtensions;
- (id)connectionExtensions;
- (id)classDescriptionsExtensions;
- (id)extensionsForExtensionPoint:(id)arg1;
- (BOOL)matchesExtension:(id)arg1;
- (id)typeIdentifierForPreservingContentsWhenWritingDocument;
- (id)xibHybridPackageType;
- (id)xibHybridPackageEditableDocumentFilename;
- (id)xibPreferredFileType;
- (Class)userDefinedRuntimeAttributesPlaceholderClass;
- (BOOL)allowLegacySegues;
- (void)populateGlobalEntryPointIndicators:(id)arg1 withTargetRuntime:(id)arg2;
- (void)updateDefaultSimulatedMetricsAfterChangingTargetRuntimeForDocument:(id)arg1;
- (id)segueTemplateToControllerKeyPath;
- (BOOL)wantsDesignatedEntryPointInRefactoredStoryboard;
- (Class)externalPrimarySceneObjectClass;
- (Class)simulatedMetricsContainerClass;
- (id)defaultStoryboardSegueClassName;
- (id)filePathForExternalInspectorContentWithIdentifier:(id)arg1;
- (void)populateAdditionalSearchableAttributeKeyPaths:(id)arg1 ofClass:(Class)arg2 forInspectorCategory:(id)arg3;
- (void)populateAdditionalInspectors:(id)arg1 ofClass:(Class)arg2 forCategory:(id)arg3;
- (void)fontsObserverInvalidated;
- (void)notifyObjectsFontsDidChange:(id)arg1;
- (void)unregisterCustomFontsWithURLs:(id)arg1;
- (void)registerCustomFontsWithURLs:(id)arg1;
- (Class)resourceManagerClass;
- (void)prepareToDecodeDocumentContentWithKeyedUnarchiver:(id)arg1;
- (Class)designedClassForEncodedClassName:(id)arg1;
- (void)unarchivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)sanitizedVersion:(id)arg1 forDocumentDependency:(id)arg2;
- (void)documentDidUpgradeDevelopmentTarget:(id)arg1;
- (BOOL)supportPerConfigurationProperties;
- (id)archiveKeyForUsesConfigurations;
- (Class)autolayoutFrameDecisionDriverClass;
- (Class)autolayoutEngineClass;
- (Class)arbitrationUnitClass;
- (BOOL)hasRemoteSimulator;
- (id)autolayoutDescriptiveTextForPriority:(float)arg1;
- (id)messageForUpgradingFromXcode4;
- (long long)autolayoutMinSystemVersion;
- (id)classNamesThatDoNotSupportZeroingWeakReferences;
- (id)bonusedClassNamesForGeniusOrdering;
- (id)penalizedClassNamesForGeniusOrdering;
- (id)ignoredConnectionLabelsForGeniusOrdering;
- (BOOL)connectToSourceCodeShouldReleaseInstanceVariables;
- (BOOL)connectToSourceCodeShouldInsertNonAtomicProperties;
- (id)addCustomObjectOfExternalClass:(id)arg1 toParent:(id)arg2 inDocument:(id)arg3;
- (long long)defaultStorageTypeForMRROutlets;
- (id)firstOSVersionWithWeakReferences;
- (Class)actionConnectionClass;
- (id)xibFirstResponderMemberID;
- (id)xibFilesOwnerMemberID;
- (BOOL)documentEditor:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (void)document:(id)arg1 didChangeTargetRuntimeWithContext:(id)arg2;
- (void)document:(id)arg1 willChangeTargetRuntimeWithContext:(id)arg2;
- (void)finishChangingTargetRuntimeForDocument:(id)arg1;
- (long long)allSystemsTarget;
- (id)defaultTargetRuntimeForArchiving;
- (id)defaultTargetRuntime;
- (Class)targetRuntimeClass;
- (id)targetRuntimeWithArchiveIdentifier:(id)arg1 variantIdentifier:(id)arg2;
- (BOOL)downgradingToAutoIncrementingIDsIsEnabled;
- (BOOL)shouldOpenDocument:(id)arg1 error:(id *)arg2;
- (id)systemDocumentDependency;
- (id)interfaceBuilderDocumentDependency;
- (id)deploymentVersionBuildSetting;
- (id)firstXcodeVersionSupportingConfigurations;
- (id)runtimeConfigurableConstraintConstantKeyPath;
- (void)registerMemberConfigurationVariables;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (id)backingPlatform;
- (id)pluginName;
- (Class)documentPlatformAdapterClass;
- (id)operatingSystemName;
- (id)identifier;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

