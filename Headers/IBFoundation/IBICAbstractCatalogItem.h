//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBICActivtyItem-Protocol.h>
#import <IBFoundation/NSCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSSet, NSString, NSURL;

@interface IBICAbstractCatalogItem : NSObject <IBICActivtyItem, NSCoding>
{
    NSDictionary *_cachedChildrenByIdentifier;
    NSArray *_cachedDisplayOrderedChildren;
    NSOrderedSet *_intrinsicallyOrderedChildren;
    NSArray *_itemObservers;
    IBICAbstractCatalogItem *_parent;
    NSMutableDictionary *_cachedDisplayValues;
    long long _changeCount;
    long long _descendantChangeCount;
    NSString *_fileName;
    NSString *_explicitContainingDirectory;
    NSURL *_absoluteFileURL;
    NSDate *_modificationDate;
    NSDate *_manifestModificationDate;
    NSSet *_children;
    NSSet *_explicitTags;
    NSNumber *_compressionType;
}

+ (long long)validateCompressionType:(long long)arg1;
+ (BOOL)encodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)fileUTIsToAllowInUnstructuredImport;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)catalogItemFileExtensionWithAlternatesForReading;
+ (id)catalogItemFileExtension;
+ (id)defaultEmbeddedInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (BOOL)isAbstractCatalogItemClass;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)validSourceFileUTIs;
+ (id)validSourceFileNameExtensions;
+ (id)displayOrderOfItems:(id)arg1;
+ (void)populateDisplayOrder:(id)arg1 fromUnorderedItems:(id)arg2 whileRecursingTree:(id)arg3;
+ (BOOL)areItemsSiblings:(id)arg1;
+ (id)mostSeniorItemsOfItems:(id)arg1;
+ (id)allAncestorsOfItemsIncludingItems:(id)arg1;
+ (id)allDescendantsOfItemsIncludingItems:(id)arg1;
+ (BOOL)areItemsFromSameRoot:(id)arg1;
+ (id)pluralTypeNameForIssues;
+ (id)typeNameForDisplay;
+ (id)typeNameForIssues;
+ (id)classNameComponents;
+ (id)uniqueKeyForCatalogCompilationSelection;
+ (Class)requiredParentClass;
+ (Class)requiredChildrenClass;
+ (BOOL)canHostItems:(id)arg1;
+ (BOOL)canHostItemsOfClass:(Class)arg1;
+ (id)keysThatImpactDisplayOrder;
+ (BOOL)fileNameIsIdentifier;
+ (id)keysThatImpactIdentifier;
+ (id)displayNameForChildren;
+ (BOOL)displayNameIsItemName;
+ (BOOL)itemNameIsFileNameWithoutCatalogExtension;
+ (void)updateModificationDatesOfItem:(id)arg1 withMutationResult:(id)arg2;
+ (id)itemWithCopyOfContentAtPath:(id)arg1;
+ (id)itemWithContentsOfPath:(id)arg1;
+ (id)itemWithItemName:(id)arg1;
+ (id)itemWithContentsOfPath:(id)arg1 results:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)createDefaultInstancesForUnitTesting;
@property(copy, nonatomic) NSNumber *compressionType; // @synthesize compressionType=_compressionType;
@property(copy, nonatomic) NSSet *explicitTags; // @synthesize explicitTags=_explicitTags;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren; // @synthesize intrinsicallyOrderedChildren=_intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak IBICAbstractCatalogItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSDate *manifestModificationDate; // @synthesize manifestModificationDate=_manifestModificationDate;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSURL *absoluteFileURL; // @synthesize absoluteFileURL=_absoluteFileURL;
@property(copy, nonatomic) NSString *explicitContainingDirectory; // @synthesize explicitContainingDirectory=_explicitContainingDirectory;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property long long descendantChangeCount; // @synthesize descendantChangeCount=_descendantChangeCount;
@property long long changeCount; // @synthesize changeCount=_changeCount;
- (void).cxx_destruct;
- (id)verifyExistenceInCompiledBundle:(id)arg1 forPlatform:(id)arg2;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (long long)effectiveCompressionType;
- (long long)incrementThumbnailSourceChangeGeneration;
- (id)flushCachedDisplayValuesAndRecursivelyNotifyAboutDisplayPropertiesChanged;
- (id)flushCachedDisplayValues;
- (id)cachedValueForDisplayProperty:(id)arg1;
- (void)setCachedValue:(id)arg1 forDisplayProperty:(id)arg2;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)requiredSizeForChild:(id)arg1;
- (id)nameForContentReferenceMatchingWithStyle:(long long)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)childOnPathToDescendant:(id)arg1;
- (id)itemsFromReceiverToAncestor:(id)arg1;
- (id)itemsFromParentToRoot;
- (id)itemsFromRootToReceiver;
- (void)enumerateItemsFromParentToRoot:(CDUnknownBlockType)arg1;
- (void)enumerateItemsFromRootToReceiverWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isItemOrDescendantOfItem:(id)arg1;
- (BOOL)isDescendantOfItem:(id)arg1;
- (BOOL)isItemOrAncestorOfItem:(id)arg1;
- (BOOL)isAncestorOfItem:(id)arg1;
- (id)allDescendantsExcludingReceiver;
- (id)allDescendantsIncludingReceiver;
- (id)catalog;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (id)enclosingItemOfClass:(Class)arg1 includingReceiver:(BOOL)arg2;
- (id)enclosingItemThatCanHostItems:(id)arg1 includingReceiver:(BOOL)arg2;
- (id)firstEnclosingItemIncludingReceiver:(BOOL)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)rootItem;
@property(readonly, nonatomic) long long activityProgress;
@property(readonly, nonatomic) NSString *activityName;
- (void)recursivelyNotifyAboutIssuesUpdate;
- (void)recursivelyNotifyAboutDisplayPropertiesChanged;
- (void)recursivelyNotifyAboutDidChange:(CDUnknownBlockType)arg1;
- (void)recursivelyNotifyAboutChangeToObject:(id)arg1 forKey:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 itemWithDisplayOrderChange:(id)arg5;
- (void)recursivelyNotifyAboutPendingChangeToObject:(id)arg1 forKey:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 itemWithDisplayOrderChange:(id)arg5;
- (void)mutateAndNotifyObserversAboutChangesToKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 mutator:(CDUnknownBlockType)arg4;
- (void)updateDescendantChangeCount;
- (void)updateChangeCount;
- (id)descriptionShortClassName;
@property(readonly, nonatomic) NSString *pluralTypeNameForIssues;
@property(readonly, nonatomic) NSString *typeNameForDisplay;
@property(readonly, nonatomic) NSString *typeNameForIssues;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (BOOL)exportToURL:(id)arg1 error:(id *)arg2;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)addItemObserver:(id)arg1;
- (BOOL)anyChildExcept:(id)arg1 hasConflictingFileName:(id)arg2;
@property(readonly, nonatomic) NSSet *allTags;
@property(readonly) NSSet *implicitTags;
- (BOOL)supportsExplicitTagging;
- (BOOL)isolatesAndConsolidatesContainedContent;
- (BOOL)isIsolatedAndConsolidatedByAncestor;
- (void)enumeratePropagationTargetsGivenCandidates:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (CDStruct_550fdc95)taggingSupport;
- (long long)displayIndexOfChildWithIdentifier:(id)arg1;
- (id)nextValidNameForSuggestedFileName:(id)arg1;
- (id)nextValidNameForSuggestedFileName:(id)arg1 forChild:(id)arg2;
- (id)descendantForRelativeIdentifierPath:(id)arg1;
- (id)descendantsForRelativeIdentifierPaths:(id)arg1;
- (id)childrenWithFileName:(id)arg1;
- (long long)numberOfChildrenWithFileName:(id)arg1;
- (id)childForIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithIndent:(long long)arg1 includeChildren:(BOOL)arg2;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;
- (void)removeAllChildren;
- (void)removeFromParent;
- (void)addChildren:(id)arg1 andUpdateIdentifierToBeUnique:(BOOL)arg2;
- (void)addChildren:(id)arg1;
- (void)removeChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1 andUpdateIdentifierToBeUnique:(BOOL)arg2;
- (void)updateIdentifierOfIncomingChildToBeUnique:(id)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(id)arg2;
@property(readonly, nonatomic) long long childOrdering;
- (id)fullyQualifiedRuntimeNameProvidingItemForCARCompiler;
- (id)fullyQualifiedRuntimeName;
- (id)fullyQualifiedRuntimeNameWithSeparator:(id)arg1;
- (id)runtimeNamespaceQualifier;
- (id)effectiveUnqualifiedRuntimeName;
- (id)defaultUnqualifiedRuntimeName;
- (id)overridingUnqualifiedRuntimeNameForChild:(id)arg1;
- (BOOL)hasAncestorsQualifyingRuntimeName;
- (BOOL)requiresRootNamespace;
- (void)assertChildIsLegalToAdd:(id)arg1;
- (long long)displayPositionForProposedChild:(id)arg1 temporarilyValidatingFileName:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *displayOrderedChildren;
- (id)recomupteDisplayOrderedChildren;
- (long long)compareDisplayOrder:(id)arg1;
@property(readonly) NSString *absoluteManifestFilePath;
@property(readonly) NSDictionary *manifestContent;
@property(readonly) NSData *manifestFileData;
@property(readonly) NSString *manifestFileName;
@property(readonly, nonatomic) NSString *relativeFilePathFromRoot;
@property(readonly, nonatomic) NSString *relativeIdentifierPath;
@property(copy, nonatomic) NSString *absoluteFilePath;
- (id)effectiveContainingDirectory;
- (BOOL)canBeEmbeddedInContainerOfType:(Class)arg1;
- (BOOL)canBeEmbeddedInContainer:(id)arg1;
@property(readonly, nonatomic) BOOL canHaveChildren;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *nameForIssues;
@property(copy, nonatomic) NSString *itemName;
@property(readonly, nonatomic) NSString *shortDisplayName;
@property(readonly, nonatomic) NSString *displayName;
- (id)validatedFileNameForProposedDisplayName:(id)arg1;
- (id)validatedFileNameForProposedItemName:(id)arg1;
- (id)itemNameForProposedFileName:(id)arg1;
- (id)fileNameForProposedItemName:(id)arg1;
- (id)validatedFileNameForProposedFileName:(id)arg1;
- (void)updateInitialModificationDateForOnDiskMutationIfNecessaryWithMutationResult:(id)arg1;
- (BOOL)updateModificationDatesWithMutationResult:(id)arg1;
- (void)setAssetDataFromPath:(id)arg1;
- (void)updateModificationDateAndKVONotify:(id)arg1;
@property(copy, nonatomic) NSData *assetData;
@property(readonly, nonatomic) IBICAbstractCatalogItem *effectiveNodeForIssueGenerationForCARCompiler;
@property(readonly, nonatomic) NSDate *effectiveModificationDateForCARCompiler;
- (void)updateManifestModificationDate:(id)arg1;
- (BOOL)isSynchronizedWithSnapshot:(id)arg1;
- (BOOL)fileStructureSnapshotChildWouldMapToModelChild:(id)arg1;
@property(readonly) BOOL recursivelyContainsAssetData;
@property(readonly) BOOL isBrokenFileReference;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)enumerateSizeProvidingItemsForValidatingBrandAssetCollection:(CDUnknownBlockType)arg1;
- (void)populateLocaleImportInfo:(id)arg1 forLocale:(id)arg2 withDevelopmentLanguage:(id)arg3;
- (void)populateAppearanceImportInfo:(id)arg1 withOptions:(id)arg2 forLuminosityAppearance:(id)arg3 vibrancyAppearance:(id)arg4 contrastAppearance:(id)arg5;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)fullyQualifiedRuntimeNameWithOptions:(id)arg1;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 finishCreatingChildren:(CDStruct_dbbaf529 *)arg2;
- (long long)manifestArchivist:(id)arg1 orderChildrenForSlotConflictResolutionByComparing:(id)arg2 to:(id)arg3;
- (void)manifestArchivist:(id)arg1 applyPropertiesToLooseFileSystemChild:(id)arg2 fromSnapshot:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (CDStruct_39925896)manifestArchivistCompatibilityVersionInfo:(id)arg1;
- (void)manifestArchivist:(id)arg1 setConflictState:(unsigned long long)arg2 forChild:(id)arg3;
- (void)manifestArchivist:(id)arg1 setSlot:(id)arg2 forChild:(id)arg3;
- (unsigned long long)manifestArchivist:(id)arg1 conflictStateForChild:(id)arg2;
- (id)manifestArchivist:(id)arg1 slotForChild:(id)arg2;
- (Class)manifestArchivistSlotClassForChildren:(id)arg1;
- (BOOL)shouldPerformCV3DValidation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

