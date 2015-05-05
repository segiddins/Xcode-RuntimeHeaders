//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

#import "IDEDocumentStructureProviding.h"
#import "SKEDocumentProtocol.h"

@class IDEContainer, NSArray, NSMapTable, NSString, NSURL, SCNMaterial, SCNNode, SCNScene, SCNSceneSource, SKEAdjustSceneWindowController, SKEMediaHelper;

@interface SKEDocument : IDEEditorDocument <SKEDocumentProtocol, IDEDocumentStructureProviding>
{
    SCNScene *_scene;
    SCNSceneSource *_sceneSource;
    NSURL *_cachedDestinationURL;
    SKEMediaHelper *_mediaHelper;
    NSMapTable *_entryClassToEntries;
    NSMapTable *_groupTypeToGroupMemberWrapper;
    SKEAdjustSceneWindowController *_adjustSceneWindowController;
    BOOL _userIsAwareOfPossibleDataLossUponExport;
    BOOL _userAcceptsDataLossUponExport;
    id _inspectionDocumentController;
    CDUnknownBlockType _cameraPropertyEditionHandler;
    SCNMaterial *_inspectorMaterialBindingSlot;
    IDEContainer *_resourceProvidingContainer;
}

+ (long long)groupTypeForMember:(id)arg1;
+ (id)defaultSceneOptions;
@property(retain) IDEContainer *resourceProvidingContainer; // @synthesize resourceProvidingContainer=_resourceProvidingContainer;
@property(retain, nonatomic) SCNMaterial *inspectorMaterialBindingSlot; // @synthesize inspectorMaterialBindingSlot=_inspectorMaterialBindingSlot;
@property(copy) CDUnknownBlockType cameraPropertyEditionHandler; // @synthesize cameraPropertyEditionHandler=_cameraPropertyEditionHandler;
@property(retain) id inspectionDocumentController; // @synthesize inspectionDocumentController=_inspectionDocumentController;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (void)removeMaterialAtIndex:(unsigned long long)arg1 geometry:(id)arg2;
- (void)addMaterial:(id)arg1 atIndex:(unsigned long long)arg2 geometry:(id)arg3;
- (void)removeParticleSystemFromNode:(id)arg1;
- (void)addParticleSystemToNode:(id)arg1;
- (void)removeCameraFromNode:(id)arg1;
- (void)addCameraToNode:(id)arg1;
- (void)removeLightFromNoNode:(id)arg1;
- (void)addLightToNode:(id)arg1;
- (void)makeNode:(id)arg1 childNodeOf:(id)arg2 index:(unsigned long long)arg3;
- (void)flattenNode:(id)arg1;
- (void)duplicateNode:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)addNewChildToNode:(id)arg1;
- (void)didReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)willReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)didRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)willRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)didAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)willAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)makeMemberWrapper:(id)arg1 acceptContentsOfPasteboard:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)canMemberWrapper:(id)arg1 acceptContentsOfPasteboard:(id)arg2;
- (id)contentsOfPasteboard:(id)arg1;
- (void)putMemberWrappers:(id)arg1 onPasteboard:(id)arg2;
- (BOOL)isMember:(id)arg1 aDescendantOfMember:(id)arg2 resultIfEqual:(BOOL)arg3;
- (BOOL)isMemberRootNode:(id)arg1;
- (id)memberWrapperForGroupType:(long long)arg1;
- (BOOL)isMemberTrackedByDocument:(id)arg1;
- (id)memberWrapperForMember:(id)arg1 libraryIdentifier:(id)arg2;
- (id)buildObjectMemberWrapperForMember:(id)arg1 libraryIdentifier:(id)arg2;
- (void)unloadAllObjectMemberWrappers;
- (void)loadAllObjectMemberWrappers;
- (void)stopListeningToMembersRequests;
- (void)startListeningToMembersRequests;
- (void)_memberDidRequestAction:(id)arg1;
- (id)memberWrapperForMember:(id)arg1;
- (id)memberWrappersForMembersOfClass:(Class)arg1;
- (void)stopUndoObservationsOf:(id)arg1;
- (void)startUndoObservationsOf:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_undoEdition:(id)arg1;
@property(readonly) SCNNode *defaultPointOfView;
@property(readonly) NSArray *availablePointsOfView;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)editorDocumentWillClose;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)mediaHelper;
- (BOOL)canSave;
- (void)adjustSceneAfterLoading;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)invertDocumentTransparency;
- (id)authoringToolName;
- (void)restoreSceneGraphAfterExport:(id)arg1;
- (void)cleanSceneGraphForExport:(id *)arg1;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (id)uistring_polygonCount;
- (id)uistring_geometryMemory;
@property(readonly) SCNSceneSource *sceneSource;
@property(readonly) SCNScene *scene;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

