//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/IBDockViewHighlightProviderDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBEndPointProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/IBStructureAreaDockViewDelegate-Protocol.h>

@class DVTMutableOrderedSet, DVTObservingToken, IBAbstractDocumentEditor, IBDecodedPasteboardContent, IBGroup, IBStoryboardDocument, IBStructureAreaDockView, NSObject, NSString;
@protocol DVTInvalidation, IBHighlightProvider, IBPrimarySceneObject;

@interface IBSceneDockViewController : IDEViewController <IBDockViewHighlightProviderDelegate, IBSelectionProvider, IBStructureAreaDockViewDelegate, IBEndPointProvider>
{
    IBDecodedPasteboardContent *_cachedDecodedPasteboadContext;
    long long _highlightGenerationIncrementable;
    DVTObservingToken *_dockLabelObservationToken;
    DVTObservingToken *_kvoDocumentObservingToken;
    id <DVTInvalidation> _activeLookObserver;
    id <DVTInvalidation> _keyFrameObserver;
    IBStoryboardDocument *_document;
    IBGroup *_sceneGroup;
    IBAbstractDocumentEditor *_documentEditor;
    NSObject<IBPrimarySceneObject> *_primarySceneObject;
    id <IBHighlightProvider> _highlightProvider;
    DVTMutableOrderedSet *_selectedObjects;
    IBStructureAreaDockView *_dockView;
}

- (void).cxx_destruct;
@property(retain) IBStructureAreaDockView *dockView; // @synthesize dockView=_dockView;
@property(copy, nonatomic) DVTMutableOrderedSet *selectedObjects; // @synthesize selectedObjects=_selectedObjects;
@property(readonly) id <IBHighlightProvider> highlightProvider; // @synthesize highlightProvider=_highlightProvider;
@property(readonly) NSObject<IBPrimarySceneObject> *primarySceneObject; // @synthesize primarySceneObject=_primarySceneObject;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void)incrementHighlightGeneration;
- (long long)highlightGeneration;
- (id)groupForObject:(id)arg1;
- (id)highlightableObjects;
- (BOOL)isViewVisibleInWindow;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (void)dockView:(id)arg1 didReceiveMouseDownInBackground:(id)arg2;
- (void)dockViewPerformPaste:(id)arg1;
- (void)dockView:(id)arg1 duplicateRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 cutRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 copyRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 deleteRepresentedObjects:(id)arg2;
- (void)performDockPasteWithPasteboard:(id)arg1 context:(id)arg2;
- (void)performDockDeleteWithRepresentedObjects:(id)arg1;
- (void)performDockCopyWithRepresentedObjects:(id)arg1;
- (BOOL)dockViewCanPaste:(id)arg1;
- (BOOL)dockView:(id)arg1 canCutRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDuplicateRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canCopyRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDeleteRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasDraggedWithMouseDown:(id)arg4 mouseDragged:(id)arg5;
- (id)pasteboardActionableObjectsForDockRepresentedObjectsDictionary:(id)arg1 action:(int)arg2;
- (BOOL)isObjectPasteboardActionable:(id)arg1 action:(int)arg2;
- (id)objectsForDockRepresentedObjectsDictionary:(id)arg1;
- (void)dockView:(id)arg1 draggingEnded:(id)arg2;
- (void)dockView:(id)arg1 draggingExited:(id)arg2;
- (void)dockView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)dockView:(id)arg1 performDragOperation:(id)arg2;
- (long long)groupTargetInsertionIndexInsertionIndicatorPair:(id)arg1;
- (BOOL)dockView:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)dockView:(id)arg1 draggingUpdated:(id)arg2;
- (void)updateInsertionIndicatorPairWithDragInfo:(id)arg1;
- (id)insertionLocationForDragInfo:(id)arg1 initialSuggestion:(id)arg2;
- (void)clearCachedDecodedPasteboadContext;
- (unsigned long long)dockView:(id)arg1 draggingEntered:(id)arg2;
- (id)dockView:(id)arg1 draggedImageState:(id)arg2;
- (id)cachedDecodedPasteboadContextForDragInfo:(id)arg1;
- (unsigned long long)dragObjects:(id)arg1 withMouseDown:(id)arg2 mouseDragged:(id)arg3;
- (id)dropImageStateForObjects:(id)arg1;
- (id)defaultDragImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)dockView:(id)arg1 dragIdentifierForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(id)arg1 representedObjectWasSelectedFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasClickedWithInitialEvent:(id)arg4;
- (void)dockView:(id)arg1 userDidChangeSelectionWithEvent:(id)arg2;
- (void)userDidChangeSelectionFromOverflowMenuForDockView:(id)arg1;
- (void)userDidChangeSelection;
- (BOOL)dockView:(id)arg1 shouldSelectObjectFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 shouldSelectObject:(id)arg2 inGroup:(id)arg3 withEvent:(id)arg4;
- (id)dockView:(id)arg1 imageForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 isShowingOpenIndicatorForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 accessibilityIdentifierForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 accessibilityTitleForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 titleForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)requiredObjectForObjectID:(id)arg1;
- (id)dockView:(id)arg1 representedObjectsForGroup:(id)arg2;
- (long long)dockView:(id)arg1 minimumNumberOfItemsInGroup:(id)arg2;
- (id)dockViewRepresentedGroups:(id)arg1;
- (void)dockViewWillValidateData:(id)arg1;
- (void)openEditorAfterBeingSelectedInDock:(id)arg1;
- (void)registerWithDocumentEditor;
@property(readonly) NSString *stateSavingIdentifier;
- (void)willResignAsSelectionProviderForDocumentEditor:(id)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(id)arg1;
- (BOOL)documentEditor:(id)arg1 canSelectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 pullSelection:(id)arg2;
- (void)documentEditor:(id)arg1 selectMembers:(id)arg2 takeFocus:(BOOL)arg3;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
- (id)groupToOIDsMapForObjects:(id)arg1;
- (void)didChangeSelectedObjects;
- (id)exitDockObjects;
- (id)auxiliaryDockObjects;
- (id)intrinsicDockObjects;
- (id)dockGroupForObject:(id)arg1;
- (id)dockedObjects;
@property(readonly) IBGroup *sceneGroup;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
@property(readonly) IBStoryboardDocument *document;
- (void)topLevelObjectsDidChange;
- (void)refreshActiveLook;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithPrimarySceneObject:(id)arg1 documentEditor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

