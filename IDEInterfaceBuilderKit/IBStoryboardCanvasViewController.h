//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasViewController.h>

#import <IDEInterfaceBuilderKit/IBStoryboardCanvasBackgroundOverlayViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTMutableOrderedSet, IBMutableIdentityDictionary, IBStoryboardCanvasBackgroundOverlayView, IBStoryboardSceneCanvasFrame, NSArray, NSObject, NSString;
@protocol IBStoryboardEntryPointIndicator;

@interface IBStoryboardCanvasViewController : IBCanvasViewController <IBStoryboardCanvasBackgroundOverlayViewDelegate>
{
    IBMutableIdentityDictionary *_linkPathToCanvasLinkMap;
    IBMutableIdentityDictionary *_canvasLinkToLinkPathMap;
    IBMutableIdentityDictionary *_seguesToAnimatedOpacities;
    DVTMutableOrderedSet *_flattenedAggregatorsToOriginatedLinkPathsMap;
    DVTDelayedInvocation *_openTopLevelStoryboardableObjectsInvocation;
    DVTDelayedInvocation *_showingDockInFramesInvocation;
    IBStoryboardSceneCanvasFrame *_canvasFrameShowingDock;
    NSObject<IBStoryboardEntryPointIndicator> *_draggedEntryPointIndicator;
    NSArray *_selectedEntryPointIndicators;
    IBStoryboardCanvasBackgroundOverlayView *_backgroundOverlayView;
}

@property(retain, nonatomic) IBStoryboardCanvasBackgroundOverlayView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(copy, nonatomic) NSArray *selectedEntryPointIndicators; // @synthesize selectedEntryPointIndicators=_selectedEntryPointIndicators;
@property(retain, nonatomic) NSObject<IBStoryboardEntryPointIndicator> *draggedEntryPointIndicator; // @synthesize draggedEntryPointIndicator=_draggedEntryPointIndicator;
@property(retain, nonatomic) IBStoryboardSceneCanvasFrame *canvasFrameShowingDock; // @synthesize canvasFrameShowingDock=_canvasFrameShowingDock;
- (void).cxx_destruct;
- (void)canvasViewRunResizeTest:(id)arg1;
- (id)canvasFrameToSelectForObject:(id)arg1;
- (void)editorCanvasFrame:(id)arg1 wasClickedWithEvent:(id)arg2;
- (BOOL)shouldAddSelectableObjectCursorRectsForFrameController:(id)arg1;
- (BOOL)frameController:(id)arg1 shouldDragFrameWithMouseDownInContentRect:(id)arg2 suggestedShouldDrag:(BOOL)arg3;
- (void)canvasBackgroundOverlayView:(id)arg1 userDidBandSelectCanvasLinkPaths:(id)arg2;
- (void)updateSelectionAfterClickingInitialViewControllerCanvasLink:(id)arg1;
- (void)canvasBackgroundOverlayView:(id)arg1 canvasLinkPathWasClicked:(id)arg2 withMouseDownEvent:(id)arg3;
- (void)beginDraggingInitialSceneCanvasLink:(id)arg1 withEvent:(id)arg2 canvasLinkPath:(id)arg3;
- (id)nearestSceneFrameControllerToPoint:(struct CGPoint)arg1;
- (id)sceneFrameControllersFromBackToFront;
- (void)canvasBackgroundOverlayView:(id)arg1 canvasLinkPathWasDoubleClicked:(id)arg2 withMouseDownEvent:(id)arg3;
- (BOOL)canSelectMembers:(id)arg1;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (id)canvasView:(id)arg1 decoratorRectForCanvasFrame:(id)arg2;
- (void)canvasView:(id)arg1 canvasFrameDidChangeLayout:(id)arg2;
- (void)canvasView:(id)arg1 willRemoveCanvasFrame:(id)arg2;
- (void)canvasView:(id)arg1 userDidBandSelectCanvasFrames:(id)arg2 bandSelectionRect:(struct CGRect)arg3;
- (void)canvasView:(id)arg1 userDidDoubleClickInEmptyArea:(id)arg2;
- (void)canvasView:(id)arg1 userDidClickInEmptyArea:(id)arg2;
- (BOOL)shouldUpstreamViewController:(id)arg1 supplyInheritedMetricsToViewController:(id)arg2 viaSegue:(id)arg3;
- (void)animateSceneViewControllersToPositions:(id)arg1 fadingInControllers:(id)arg2 fadingInSegues:(id)arg3;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (long long)insertionIndexForDragInfo:(id)arg1;
- (id)draggedImageStateForObjects:(id)arg1 pasteboard:(id)arg2;
- (void)relayoutCanvasLinkPathsForCanvasLinks:(id)arg1;
- (void)createCanvasLinksFromFrames:(id)arg1 objectsToCanvasFrames:(id)arg2;
- (void)createLinkPathsOnDestinationEdge:(id)arg1 ofType:(unsigned long long)arg2 linkPackToHalfLinkPath:(id)arg3 objectsToCanvasFrames:(id)arg4;
- (void)createSourceHalfLinkPathsOnEdge:(id)arg1 ofType:(unsigned long long)arg2 linkPackToHalfLinkPath:(id)arg3 objectsToCanvasFrames:(id)arg4;
- (id)sortHooksOnEdge:(id)arg1 ofType:(unsigned long long)arg2 linkPackToHalfLinkPath:(id)arg3 objectsToCanvasFrames:(id)arg4;
- (id)canvasFrameMappingFromCanvasLinks:(id)arg1 objectsToCanvasFrames:(id)arg2;
- (void)addLinkPack:(id)arg1 toFrame:(id)arg2 edgeType:(unsigned long long)arg3 framesToEdges:(id)arg4;
- (id)buildObjectsToCanvasFramesMap;
- (id)linkPathForCanvasLink:(id)arg1 connectingFrame:(id)arg2 withFrame:(id)arg3 originationPointIndex:(long long)arg4 originationPointCount:(long long)arg5 convergencePointIndex:(long long)arg6 convergencePointCount:(long long)arg7 packIndex:(long long)arg8 packCount:(long long)arg9;
- (id)canvasLinkPathForSegue:(id)arg1 connectingFrame:(id)arg2 withFrame:(id)arg3 originationPointIndex:(long long)arg4 originationPointCount:(long long)arg5 convergencePointIndex:(long long)arg6 convergencePointCount:(long long)arg7 packIndex:(long long)arg8 packCount:(long long)arg9;
- (CDStruct_4bcfbbae)canvasLinkPathEdgeTypesForConnectingFrame:(id)arg1 withFrame:(id)arg2;
- (CDStruct_4bcfbbae)canvasLinkPathEdgeTypesForConnectingRect:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
- (void)setSeguesToAnimatedOpacities:(id)arg1;
- (double)opacityForCanvasLinkForSegue:(id)arg1;
- (id)produceCanvasLinksForBackgroundOverlay;
- (void)invalidateCanvasLinkPaths;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)captureCanvasElementImages:(id)arg1;
- (id)membersForSelectAll;
- (void)performDelete;
- (BOOL)canAcceptTopLevelInsertionOfPasteboard:(id)arg1;
- (BOOL)canDelete;
- (BOOL)canDeleteSegues:(id)arg1;
- (id)selectedSegues;
- (void)blowAwayInnerSelectionInOpenCanvasFrames;
- (void)openEditorsForTopLevelStoryboardableObjects;
- (void)editorDidGainDeFactoFocus;
- (id)selectedTopLevelMembersInCanvas;
- (id)selectedGlobalEntryPointIndicators;
- (void)primitiveUpdateSelectedMembers:(id)arg1;
- (void)documentEditor:(id)arg1 didUpdateSelection:(id)arg2;
- (void)documentDidReorderSegue:(id)arg1;
- (void)documentDidRemoveSegue:(id)arg1;
- (void)documentDidAddSegue:(id)arg1;
- (void)documentDidChangeEntryPoint;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)topLevelEditedObjectDidChangeLastKnownAnchor:(id)arg1;
- (void)editedTopLevelObjectsDidChange;
- (void)topLevelObjectsChanged;
- (id)editedSceneViewControllers;
- (id)document;
- (void)setSelectedConnections:(id)arg1;
- (id)canvasView;
- (void)zoomToFactor:(double)arg1 anchor:(struct CGPoint)arg2 animated:(BOOL)arg3 userInitiated:(BOOL)arg4;
- (double)defaultOverviewZoomFactor;
- (BOOL)canZoomCanvas;
- (void)registerWithDocumentEditor;
- (id)storyboardDocumentEditor;
- (void)takeFocus;
- (void)scheduleOpenTopLevelStoryboardableObjects;
- (id)storyboardCanvasFrameForPrimarySceneObject:(id)arg1;
- (id)canvasFrameForLastInteractedWithScene;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

