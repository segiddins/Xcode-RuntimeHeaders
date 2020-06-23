//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBPrimarySceneObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIMenuChild-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBUIMenuElementIdentifier, NSArray, NSSet, NSString;

@interface IBUIMenu : NSObject <IBPrimarySceneObject, IBDocumentArchiving, IBUIMenuChild, NSCopying, NSCoding>
{
    NSArray *_insertionsCache;
    BOOL _isSystemItem;
    NSString *_title;
    NSString *_identifier;
    unsigned long long _options;
    NSArray *_children;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    NSString *_ibExplicitStoryboardIdentifier;
    IBUIMenuElementIdentifier *_anchorForUnarchiving;
    NSArray *_allSystemMenuChildDeletions;
}

+ (id)populateTemplateMenuWithResourceNamed:(id)arg1 targetRuntime:(id)arg2;
+ (void)populateTemplateMenu:(id)arg1 withPlistDict:(id)arg2;
+ (id)templateMenuWithIdentifier:(id)arg1 targetRuntime:(id)arg2;
+ (id)fallbacksForAnchor:(id)arg1;
+ (id)systemMenuIdentifiersToNamesMap;
+ (id)keyPathsForValuesAffectingIbInspectedSystemMenuChildDeletions;
+ (id)keyPathsForValuesAffectingIbInspectedCanBeInitialMenu;
+ (void)preV3UpgradeSystemFlagAndDeletionsForSystemItem:(id)arg1 systemIdentifiers:(id)arg2 context:(id)arg3;
+ (BOOL)wasItemUpgradedToV3:(id)arg1 withContext:(id)arg2;
+ (void)registerMarshallingRecordHandlers;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy, nonatomic) NSArray *allSystemMenuChildDeletions; // @synthesize allSystemMenuChildDeletions=_allSystemMenuChildDeletions;
@property(copy, nonatomic) IBUIMenuElementIdentifier *anchorForUnarchiving; // @synthesize anchorForUnarchiving=_anchorForUnarchiving;
@property(nonatomic) BOOL isSystemItem; // @synthesize isSystemItem=_isSystemItem;
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier; // @synthesize ibExplicitStoryboardIdentifier=_ibExplicitStoryboardIdentifier;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)populateMenuAndChildrenFromTemplate:(id)arg1 shouldUpdateMenuProperties:(BOOL)arg2 updateOnlyForSystemItems:(BOOL)arg3;
- (id)insertionEntryForChild:(id)arg1;
- (id)insertionsCache;
- (id)createAllInsertions;
- (id)createAllSystemMenuChildDeletions;
@property(readonly, nonatomic) NSString *englishfiedIdentifierName;
- (id)identifierName;
- (void)addChild:(id)arg1 andDescendantsToDocument:(id)arg2;
- (void)ibUpdateChildrenFromDeletions;
- (void)setSystemMenuChildDeletionsAndUpdateChildren:(id)arg1;
- (void)setSystemMenuChildDeletionsByIdentifiers:(id)arg1;
- (BOOL)hasSystemMenuChildDeletions;
@property(copy, nonatomic) NSSet *systemMenuChildDeletions;
- (void)collectInsertions:(id)arg1;
- (void)actuallyCollectInsertions:(id)arg1;
- (void)collectActiveSystemChildDeletions:(id)arg1;
- (id)commandDiff;
@property(readonly, nonatomic) NSArray *systemItemChildren;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentMenuForDocument:(id)arg1;
- (id)rootMenuForDocument:(id)arg1;
@property(readonly, nonatomic) IBUIMenuElementIdentifier *menuElementIdentifier;
- (void)flattenIntoArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long childType;
@property(readonly, nonatomic) BOOL ibRepresentsApplicationMenu;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isInline;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (BOOL)isInInitialMenuForDocument:(id)arg1;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (long long)ibExistingKeyEquivalentCountForCommand:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)existingCommandKeyEquivalents;
- (long long)ibExistingMenuElementIdentifierCountForChild:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)existingMenuElementIdentifiers;
- (void)enumerateTreeIncludingSystemItems:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)ibInvalidateIssuesAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)ibDirectDescendantIdentifierKeyPaths;
- (BOOL)ibSupportsOverridingWithCustomClass;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (void)setIbInspectedSystemMenuChildDeletions:(id)arg1;
- (id)ibInspectedSystemMenuChildDeletions;
@property(nonatomic) BOOL ibInspectedIsDesignatedMenu;
- (BOOL)ibInspectedCanBeInitialMenu;
- (BOOL)ibIsMainMenuRoot;
- (void)setIbInspectedIdentifier:(id)arg1;
- (id)ibInspectedIdentifier;
- (BOOL)ibIsTopLevelGroup;
- (BOOL)ibInspectedIsInStoryboard;
@property(readonly, nonatomic) BOOL ibWantsSceneExitPlaceholder;
- (id)ibShortDisplayName;
- (void)ibPropagatePropertiesToCompiledSceneObject:(id)arg1;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibIsValidPushReceiver;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibImageForOwnedScene;
- (void)preV3UpgradeToFinalMenuEditorIfRootMenuWithContext:(id)arg1;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (void)unarchiveAnchor:(id)arg1;
- (void)archiveAnchor:(id)arg1;
- (void)unarchiveChildrenDiffs:(id)arg1;
- (void)archiveChildrenDiffs:(id)arg1;
- (void)unarchiveNonSystemChildren:(id)arg1;
- (void)archiveNonSystemChildren:(id)arg1;
- (BOOL)shouldArchiveChild:(id)arg1 withArchivingContext:(id)arg2;
- (void)unarchiveOptions:(id)arg1;
- (void)archiveOptions:(id)arg1;
- (BOOL)ibCanBeValidSegueDestination;
- (BOOL)ibInspectedIsDeveloperItem;
- (id)ibPasteboardTypes;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibMarshalledRepresentationForRendering;
- (Class)ibEditorClass;
- (BOOL)ibIsChildSelectableInSameEditor:(id)arg1;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (id)ibDefaultImage;
- (BOOL)ibRepresentsMainMenuOrDescendantOfMainMenu;
- (BOOL)ibRepresentsMainMenu;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibDefaultLabel;
- (BOOL)needsSeparatorAfterPreviousItem:(id)arg1;
- (void)populateEditedMenuItemChildren:(id)arg1 withPreviousItem:(id)arg2;
- (id)ibEditedMenuRepresentation;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
@property(readonly) Class superclass;

@end

