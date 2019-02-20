//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocument.h>

@class DVTMutableOrderedSet, IBStoryboardGlobalEntryPointIndicator, IBStoryboardMetricsInferrer, NSDictionary, NSObject;
@protocol IBPrimarySceneObject;

@interface IBStoryboardDocument : IBDocument
{
    NSDictionary *_globalEntryPointKeyPathsToIndicators;
    DVTMutableOrderedSet *_segueConnections;
}

+ (Class)documentGroupMemberWrapperClass;
+ (Class)metricsInferrerClass;
+ (Class)libraryAssetProviderClassForIdiom:(id)arg1;
+ (int)libraryInclusionStatusForExternalPrimarySceneObject;
+ (int)libraryInclusionStatusForContainerView;
+ (BOOL)wantsViewControllersAtTopOfLibrary;
+ (BOOL)supportsPrototypeObjects;
- (void).cxx_destruct;
- (BOOL)isStoryboardDocument;
- (id)replacePrimarySceneObjects:(id)arg1 withReferencesToStoryboardNamed:(id)arg2 preservingInstantiationBehavior:(BOOL)arg3;
- (id)makeExternalPlaceholderForPrimarySceneObject:(id)arg1 storyboardName:(id)arg2;
- (void)refactorPrimarySceneObjects:(id)arg1 intoDuplicateStoryboard:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (Class)defaultCanvasFrameClassForObject:(id)arg1;
- (Class)compilerClass;
- (id)pathExtensionForCompiledPackage;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)compiledStoryboardInfoPlistFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (id)allIntrinsicPackageContentFileNames;
- (id)archivingSchema;
- (id)hybridPackageEditableDocumentFilename;
- (id)hybridPackageType;
- (id)preferredFileType;
- (BOOL)canHaveMultipleTopLevelObjectsInLaunchScreen;
- (BOOL)supportsUserDefinedRuntimeAttributesForObject:(id)arg1;
- (void)objectContainer:(id)arg1 didRemoveObject:(id)arg2 fromParent:(id)arg3;
- (BOOL)unarchivePlatformIndependentDataWithUnarchiver:(id)arg1 error:(id *)arg2;
- (void)unarchiveDesignatedEntryPointWithUnarchiver:(id)arg1;
- (void)archivePlatformIndependentDataWithDocumentArchiver:(id)arg1;
- (void)unarchiveTopLevelObjects:(id)arg1;
- (void)archiveTopLevelObjects:(id)arg1;
- (BOOL)shouldArchiveTopLevelObject:(id)arg1 inScene:(id)arg2;
- (void)documentArchiver:(id)arg1 didArchiveObject:(id)arg2;
- (void)documentUnarchiver:(id)arg1 willUnarchiveDocumentObject:(id)arg2;
- (BOOL)isDocumentLifeCycleManagementObject:(id)arg1;
- (id)connectToSourceCandidatesForConnectingToObject:(id)arg1 preferredCandidates:(id *)arg2;
- (id)connectToSourceFileOwnershipObjectForConnectingToObject:(id)arg1 relativeTopLevelObjects:(id *)arg2;
- (int)separationTypeForObject:(id)arg1;
- (id)verifier;
- (id)fallbackControllersForSelectedMemberIDs:(id)arg1;
- (id)primaryControllerForGeniusFinder;
- (BOOL)isObjectCandidateForAutomaticGeniusResults:(id)arg1 givenSelectedObject:(id)arg2;
- (void)objectContainer:(id)arg1 didRemoveIdentifier:(id)arg2 forObject:(id)arg3 inGroup:(id)arg4;
- (void)objectContainer:(id)arg1 didAddIdentifier:(id)arg2 forObject:(id)arg3 inGroup:(id)arg4;
- (void)objectContainer:(id)arg1 didRemoveConnection:(id)arg2;
- (void)objectContainer:(id)arg1 didAddConnection:(id)arg2;
- (id)objectConnectedByToOneSegueRelationship:(id)arg1 fromSourceObject:(id)arg2;
- (void)redirectAllIncomingSeguesForPrimarySceneObject:(id)arg1 toPrimarySceneObject:(id)arg2;
- (id)seguesWithDestinationViewController:(id)arg1;
- (id)relationshipSeguesBetweenSource:(id)arg1 andDestinationViewController:(id)arg2;
- (id)reachableControllers;
- (CDUnknownBlockType)snapshotViewControllerSegueDestinationProviderForSeguesMatchingPredicate:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)snapshotViewControllerSegueDestinationProviderForSourceSegueMap:(id)arg1;
- (id)sourceViewControllerToSegueMapForSeguesMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)insertChildrenFromDraggingInfo:(id)arg1 ofType:(id)arg2 intoSceneGroup:(id)arg3 atIndex:(long long)arg4 context:(id)arg5;
- (id)addOrMoveChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 toSceneGroup:(id)arg3 context:(id)arg4;
- (id)insertOrMoveChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 toSceneGroup:(id)arg3 atIndex:(long long)arg4 context:(id)arg5;
- (long long)topLevelObjectIndexForGroupIndex:(long long)arg1 inGroup:(id)arg2;
- (void)addTopLevelObjects:(id)arg1 toSceneGroup:(id)arg2 atIndex:(long long)arg3;
- (BOOL)isBuiltInPlaceholder:(id)arg1 forSceneGroup:(id)arg2;
- (void)removeObjects:(id)arg1;
- (id)sceneGroupMemberWrapperForObject:(id)arg1;
@property(retain, nonatomic) NSObject<IBPrimarySceneObject> *designatedEntryPoint;
- (id)globalEntryPointIndicatorForKeyPath:(id)arg1;
@property(readonly, nonatomic) IBStoryboardGlobalEntryPointIndicator *designatedEntryPointIndicator;
- (void)makeSceneForPrimarySceneObject:(id)arg1;
- (void)addSceneExitPlaceholderToSceneGroup:(id)arg1;
- (id)firstResponderForSceneGroup:(id)arg1;
- (id)entryPointPrimarySceneObjects;
- (id)groupForPrimarySceneObject:(id)arg1;
- (id)sceneGroups;
- (id)primarySceneObjectGraphSources;
- (id)primarySceneObjects;
- (BOOL)isObjectBuiltInPlaceholder:(id)arg1;
- (BOOL)isObjectExitPlaceholder:(id)arg1;
- (id)firstResponderForConnectingToObject:(id)arg1;
- (id)exitPlaceholderForSceneGroup:(id)arg1;
- (id)primarySceneObjectForObject:(id)arg1;
- (id)primarySceneObjectForGroup:(id)arg1;
- (id)topLevelObjectsForPrimarySceneObject:(id)arg1;
- (id)topLevelObjectsForSceneGroup:(id)arg1;
- (void)addObject:(id)arg1 toLocalTopLevelObjectsForObject:(id)arg2;
- (id)localTopLevelObjectsForObject:(id)arg1;
- (id)sceneGroupForObject:(id)arg1;
- (BOOL)shouldSkipObjectInSearchTraversal:(id)arg1;
- (id)topLevelMembers;
- (void)invalidateSegueConnections;
@property(readonly) DVTMutableOrderedSet *segueConnections;
- (void)noteChange:(id)arg1;
- (void)didFinishRedoing;
- (void)didFinishUndoing;
- (void)undoManagerWillCloseUndoGroup:(id)arg1;
- (void)changeDocumentTargetRuntimeTo:(id)arg1 andPerformFrameDecision:(BOOL)arg2 withContext:(id)arg3 andContextForUndo:(id)arg4;
- (void)setDefaultSimulatedMetricsContainer:(id)arg1;
- (id)transformForCanvasAnchorsWhenDisablingConfigurations;
- (id)transformForCanvasAnchorsWhenEnablingConfigurations;
- (void)setUsesConfigurations:(BOOL)arg1;
- (id)defaultPreviewedObject;

// Remaining properties
@property(readonly, nonatomic) IBStoryboardMetricsInferrer *metricsInferrer; // @dynamic metricsInferrer;

@end
