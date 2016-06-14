//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/IBCanvasViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBEditorStackDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBHighlightProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/IDEWorkspaceTabControllerCursorRectInterceptor-Protocol.h>
#import <IDEInterfaceBuilderKit/NSScrollViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTDraggedImageState, DVTMutableOrderedSet, DVTNotificationToken, DVTObservingToken, IBAbstractDocumentEditor, IBCancellationToken, IBCanvasControllerLayoutGuideGeneratorDelegate, IBCanvasScrollView, IBCanvasView, IBDeviceBarViewController, IBHitDetectionMap, IBLayoutGuideCanvasOverlay, IBLayoutManager, IBMutableIdentityDictionary, NSButton, NSDate, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSegmentedControl, NSString;

@interface IBCanvasViewController : IDEViewController <IBEditorStackDelegate, NSScrollViewDelegate, IBCanvasViewDelegate, IBSelectionProvider, IBHighlightProvider, IDEWorkspaceTabControllerCursorRectInterceptor>
{
    IBCanvasView *canvasView;
    IBCanvasScrollView *canvasScrollView;
    IBMutableIdentityDictionary *topLevelObjectToEditorStackMap;
    IBMutableIdentityDictionary *canvasViewsToCanvasEditorControllers;
    NSMutableSet *stacksBeingModified;
    DVTMutableOrderedSet *selectedConnections;
    DVTDelayedInvocation *delayedEditorDeselectionInvocation;
    BOOL editorsProvidingSelection;
    DVTDelayedInvocation *fontAndColorInvocation;
    IBHitDetectionMap *cursorMap;
    BOOL invalidating;
    BOOL resettingCursorRects;
    BOOL canvasViewDescendentHasInvalidCursorRects;
    BOOL canvasViewItselfHasInvalidCursorRects;
    DVTDelayedInvocation *canvasViewCursorInvocation;
    IBCanvasControllerLayoutGuideGeneratorDelegate *frameLayoutGuideGeneratorDelegate;
    IBLayoutGuideCanvasOverlay *_layoutGuideCanvasOverlay;
    IBLayoutManager *frameLayoutManager;
    NSDate *nextAutoexpansionTime;
    struct CGPoint lastAutoExpansionPlace;
    DVTDraggedImageState *imageState;
    NSMutableArray *expansionTokens;
    double _defaultEditingZoomFactor;
    double _lastAlternateZoomFactor;
    NSNumber *_canvasZoomFactorAfterAnimation;
    NSSegmentedControl *_zoomSegmentedControl;
    DVTObservingToken *_currentZoomToken;
    DVTNotificationToken *_willStartLiveMagnifyToken;
    struct CGPoint _liveMagnifyAnchorPoint;
    DVTNotificationToken *_didEndLiveMagnifyToken;
    unsigned long long _embedInStackSegmentIndex;
    NSSegmentedControl *actionAreaButton;
    DVTObservingToken *usesAutolayoutObservingToken;
    IBCancellationToken *developmentTargetObservingToken;
    DVTObservingToken *_currentSelectedItemsToken;
    NSMutableSet *_objectsGettingAutopositioned;
    NSMutableOrderedSet *_keyFrameObservers;
    NSButton *_deviceBarViewAsButton;
    IBDeviceBarViewController *_deviceBarViewController;
    DVTObservingToken *_deviceConfigurationObservingToken;
    BOOL _deviceBarVisible;
    IBAbstractDocumentEditor *documentEditor;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)zoomLevelMenuItemsWithTitleFormatter:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(nonatomic) BOOL deviceBarVisible; // @synthesize deviceBarVisible=_deviceBarVisible;
@property(readonly, nonatomic) IBCanvasControllerLayoutGuideGeneratorDelegate *frameLayoutGuideGeneratorDelegate; // @synthesize frameLayoutGuideGeneratorDelegate;
@property(readonly, nonatomic) IBLayoutManager *frameLayoutManager; // @synthesize frameLayoutManager;
@property(copy, nonatomic) DVTMutableOrderedSet *selectedConnections; // @synthesize selectedConnections;
@property(nonatomic) BOOL editorsProvidingSelection; // @synthesize editorsProvidingSelection;
@property(readonly, nonatomic) IBCanvasView *canvasView; // @synthesize canvasView;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor;
- (void).cxx_destruct;
- (void)canvasViewRunResizeTest:(id)arg1;
- (void)canvasViewRunScrollTest:(id)arg1;
- (void)canvasViewRunZoomTest:(id)arg1;
- (void)measureFPSWhileInvoking:(CDUnknownBlockType)arg1;
- (void)_updateDeviceBarSelection;
- (void)restoreDeviceBarSelection:(id)arg1;
- (id)deviceBarSelectedSpecification;
- (void)_toggleDeviceBar:(id)arg1;
- (void)_hideDeviceBar;
- (void)_showDeviceBar;
- (void)_updateDeviceBarViewAsButtonWithConfiguration:(id)arg1;
@property(readonly, nonatomic, getter=isDeviceBarInCustomizationMode) BOOL deviceBarInCustomizationMode;
- (void)_addDeviceBarIfNeeded;
- (id)_deviceBarViewAsButton;
- (void)addDeviceBarButton;
- (void)updateAutoLayoutActionArea;
- (void)didClickActionAreaButton:(id)arg1;
- (void)refreshButtonBarForBranchMode;
- (void)addAutolayoutActionArea;
- (void)removeAutolayoutActionArea;
- (BOOL)isShowingResolveIllegalStatesButton;
- (BOOL)isShowingAutolayoutActionArea;
- (BOOL)shouldShowResolveIllegalStatesButton;
- (BOOL)shouldShowAutolayoutActionArea;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)canvasViewDidCompleteLayout:(id)arg1;
- (void)canvasView:(id)arg1 willRemoveCanvasFrame:(id)arg2;
- (double)canvasView:(id)arg1 canvasFrameChromeScaleForContentScale:(double)arg2;
- (double)canvasView:(id)arg1 scaleForOverlayView:(id)arg2 ofCanvasFrame:(id)arg3 canvasMagnification:(double)arg4;
- (struct CGRect)canvasView:(id)arg1 frameForOverlayView:(id)arg2 ofCanvasFrame:(id)arg3 scale:(double)arg4;
- (void)canvasViewWillInvalidateCursorRects:(id)arg1;
- (void)canvasViewDidUpdateTrackingAreas:(id)arg1;
- (BOOL)shouldAddSelectableObjectCursorRectsForFrameController:(id)arg1;
- (void)canvasViewResetCursorRects:(id)arg1;
- (void)canvasViewWillUpdateTrackingAreas:(id)arg1;
- (id)canvasView:(id)arg1 lastKnownAnchorForCanvasFrame:(id)arg2;
- (double)canvasView:(id)arg1 validateMagnification:(double)arg2;
- (void)canvasView:(id)arg1 userDidDoubleClickInEmptyArea:(id)arg2;
- (void)canvasView:(id)arg1 userDidClickInEmptyArea:(id)arg2;
- (void)canvasView:(id)arg1 userDidBandSelectCanvasFrames:(id)arg2 bandSelectionRect:(struct CGRect)arg3;
- (void)canvasView:(id)arg1 userDidSelectCanvasFrames:(id)arg2;
- (void)canvasView:(id)arg1 selectionDidChange:(id)arg2;
- (void)canvasView:(id)arg1 canvasFrameDidChangeAnchor:(id)arg2;
- (void)canvasView:(id)arg1 didAutopositionCanvasFrame:(id)arg2;
- (void)canvasView:(id)arg1 willAutopositionCanvasFrame:(id)arg2;
- (void)canvasView:(id)arg1 canvasFrameDidChangeLayout:(id)arg2;
- (id)registerKeyFrameObserver:(CDUnknownBlockType)arg1;
- (void)canvasView:(id)arg1 canvasFrameDidBecomeKey:(id)arg2;
- (void)canvasView:(id)arg1 canvasFrameDidResignKey:(id)arg2;
- (void)promoteToActiveSelectionProvider;
- (void)selectAll:(id)arg1;
- (id)membersForSelectAll;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)canDelete;
- (void)performDelete;
- (void)performPaste;
- (void)performDuplicateWithCanvasFrames:(id)arg1;
- (void)performCutWithCanvasFrames:(id)arg1;
- (void)performPasteWithPasteboard:(id)arg1 context:(id)arg2;
- (void)performDeleteWithCanvasFrames:(id)arg1;
- (void)performCopyWithCanvasFrames:(id)arg1;
- (BOOL)canSelectAll;
- (BOOL)canPaste;
- (BOOL)canCutCanvasFrames:(id)arg1;
- (BOOL)canDuplicateCanvasFrames:(id)arg1;
- (BOOL)canCopyCanvasFrames:(id)arg1;
- (BOOL)canDeleteCanvasFrames:(id)arg1;
- (BOOL)workspaceTabController:(id)arg1 interceptAddCursorRect:(struct CGRect)arg2 cursor:(id)arg3 forView:(id)arg4 inWindow:(id)arg5;
- (BOOL)workspaceTabController:(id)arg1 interceptSetCursorForMouseLocation:(struct CGPoint)arg2 inWindow:(id)arg3;
- (void)workspaceTabControllerWillInvalidateCursorRectsForViewsWithNoTrackingAreas:(id)arg1;
- (void)workspaceTabController:(id)arg1 willInvalidateCursorRectsForView:(id)arg2;
- (void)didInvalidateCursorRectsForView:(id)arg1;
- (void)validateFontAndColorSelection:(id)arg1;
- (BOOL)interceptAddCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)invalidateCursorRects;
- (void)cursorUpdate:(id)arg1;
- (void)cursorUpdateWithPoint:(struct CGPoint)arg1;
- (void)addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forObject:(id)arg3 useForegroundLayer:(BOOL)arg4;
- (BOOL)tryToInsertContentsOfPasteboardIntoForemostEditorOrTopLevel:(id)arg1;
- (BOOL)canAcceptTopLevelInsertionOfPasteboard:(id)arg1;
- (id)keyEditor;
- (id)draggedTypesForCanvasView:(id)arg1;
- (void)canvasView:(id)arg1 transferFirstResponderAfterDragConclusion:(id)arg2;
- (void)canvasView:(id)arg1 draggingEnded:(id)arg2;
- (void)canvasView:(id)arg1 concludeDragOperation:(id)arg2;
- (void)resetDragTrackingInfo;
- (void)canvasView:(id)arg1 draggingExited:(id)arg2;
- (BOOL)canvasView:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)canvasView:(id)arg1 dragWillForceRedrawOfDestinationWindowPriorToDragEnd:(id)arg2;
- (BOOL)canvasView:(id)arg1 performDragOperation:(id)arg2;
- (long long)insertionIndexForDragInfo:(id)arg1;
- (BOOL)didAddObjects:(id)arg1 whilePerformingDragOperation:(id)arg2 insertionContext:(id)arg3;
- (unsigned long long)canvasView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)canvasView:(id)arg1 draggingEntered:(id)arg2;
- (id)canvasView:(id)arg1 decoratorRectForCanvasFrame:(id)arg2;
- (void)canvasView:(id)arg1 userDidAddSpaceWithArrowKeyEvent:(id)arg2;
- (void)updateDragAutoExpansion:(struct CGPoint)arg1 willAccept:(BOOL)arg2;
- (id)canvasAutoExpansionEdgeForPoint:(struct CGPoint)arg1;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (id)stringsFilePathFromPasteboard:(id)arg1;
- (id)canvasView:(id)arg1 draggedImageState:(id)arg2;
- (id)draggedImageStateForObjects:(id)arg1 pasteboard:(id)arg2;
- (id)dragCascadeOffsetsForObjects:(id)arg1;
- (id)dragOffsetsForObjects:(id)arg1 fromPasteboard:(id)arg2;
- (id)frameToWindowTransformForPasteboardViews:(id)arg1;
- (double)scaleForRasterizedDragImages;
- (void)_zoomCanvasInDirection:(unsigned long long)arg1;
- (void)zoomCanvasOut:(id)arg1;
- (void)zoomCanvasIn:(id)arg1;
- (BOOL)isZoomedToEditingLevel;
- (BOOL)canZoomCanvas;
- (double)zoomFactorForZoomLevel:(id)arg1;
- (id)nextPreferredZoomFactorInDirection:(unsigned long long)arg1;
- (void)editor:(id)arg1 willInterceptDeadDoubleClickEvent:(id)arg2;
- (BOOL)editorCanvasFrameController:(id)arg1 interceptDoubleClickedEvent:(id)arg2;
- (void)editorCanvasFrame:(id)arg1 wasClickedWithEvent:(id)arg2;
- (void)editorDidChangeSelection:(id)arg1;
- (void)editedTopLevelObjectsDidChange;
- (void)primitiveUpdateSelectedMembers:(id)arg1;
- (void)didUpdateSelectedMembers:(id)arg1;
- (void)refreshSelectedMembers;
- (void)captureCanvasAsImage:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
- (void)updateDocumentEditorMenuTarget;
- (id)magnificationInflectionPointsForScrollView:(id)arg1;
- (void)canvasScrollViewDidEndLiveMagnify:(id)arg1;
- (void)canvasScrollViewWillStartLiveMagnify:(id)arg1;
- (void)zoomToFactorFromZoomMenu:(id)arg1;
- (double)_magnificationFromZoomMenuItem:(id)arg1;
- (void)updateZoomSegmentedControl;
- (void)zoomSegmentedControlPressed:(id)arg1;
- (void)addZoomSegmentedControlToButtonBar;
- (void)toggleZoomWithMouseEvent:(id)arg1;
- (void)zoomToFactor:(double)arg1 withEvent:(id)arg2 animated:(BOOL)arg3;
- (void)zoomToFactor:(double)arg1 anchor:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (void)endGesture;
- (void)beginGesture;
- (void)jumpToDefinitionWithShiftPlusAlternate:(id)arg1;
- (void)jumpToDefinitionWithAlternate:(id)arg1;
- (void)jumpToDefinition:(id)arg1;
- (BOOL)canJumpToDefinition;
- (void)jumpToSelection:(id)arg1;
- (BOOL)canJumpToSelection;
- (void)selectPreviousContentSibling:(id)arg1;
- (void)selectNextContentSibling:(id)arg1;
- (BOOL)canSelectContentSibling;
- (void)selectContentParent:(id)arg1;
- (BOOL)canSelectContentParent;
- (void)selectContentChild:(id)arg1;
- (BOOL)canSelectContentChild;
- (id)siblingsOfObject:(id)arg1;
- (id)activeObjectsForKeyEditor;
- (BOOL)canSelectObjectInEditor:(id)arg1;
- (BOOL)canOpenEditorForObject:(id)arg1;
- (id)activeWorkspaceTabController;
- (id)workspaceWindowController;
- (id)symbolOccurrenceLocationForObject:(id)arg1;
- (id)documentEditor:(id)arg1 highlightObjects:(id)arg2 showLabels:(BOOL)arg3 successfulObjects:(id *)arg4;
- (double)highlightPriorityInDocumentEditor:(id)arg1;
- (void)willResignAsSelectionProviderForDocumentEditor:(id)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(id)arg1;
- (BOOL)documentEditor:(id)arg1 canSelectMembers:(id)arg2;
- (BOOL)canSelectMembers:(id)arg1;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (void)setSelectedCanvasFramesFromSelectedObjects:(id)arg1;
- (id)canvasFrameToSelectForObject:(id)arg1;
- (void)setSelectedConnectionsFromSelectedMembers:(id)arg1;
- (void)setEffectiveSelectedConnections:(id)arg1;
- (void)documentEditor:(id)arg1 pullSelection:(id)arg2;
- (void)documentEditor:(id)arg1 selectMembers:(id)arg2 takeFocus:(BOOL)arg3 zoomIfNeeded:(BOOL)arg4;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
@property(readonly) NSString *stateSavingIdentifier;
- (id)selectedMembers;
- (id)selectedTopLevelMembersInCanvas;
- (id)orderedTopLevelObjectsForCanvasFrames:(id)arg1;
- (id)selectedObjectsInKeyCanvasFrame;
- (id)lastKnownAnchorForObject:(id)arg1;
- (void)setLastKnownAnchor:(struct CGPoint)arg1 forObject:(id)arg2;
- (id)editorCanvasFrameControllerForCanvasFrame:(id)arg1;
- (BOOL)frameController:(id)arg1 shouldDragFrameWithMouseDownInContentRect:(id)arg2 suggestedShouldDrag:(BOOL)arg3;
- (id)canvasFramesObscuringFrame:(id)arg1;
- (id)editorCanvasFrameControllersFromBackToFront;
- (BOOL)objectsWouldEditInSameCanvasFrame:(id)arg1;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)makeImplicitAnchorsExplicit;
- (void)topLevelEditedObjectDidChangeLastKnownAnchor:(id)arg1;
- (void)topLevelObjectsChanged;
- (BOOL)isEditorForTopLevelObjectOpenAndShowingKey:(id)arg1;
- (BOOL)isEditorForTopLevelObjectOpen:(id)arg1;
- (id)editorForObject:(id)arg1;
- (BOOL)shouldAvoidEditingObject:(id)arg1;
- (void)closeAllEditorCanvasFrames;
- (void)closeEditorCanvasFrameController:(id)arg1;
- (void)closeEditor:(id)arg1;
- (void)notifyFrameControllersOfPendingStackChange:(id)arg1;
- (id)activeEditors;
- (id)editorCanvasFrameControllers;
- (id)topOfStackEditorCanvasFrameControllers;
- (void)closeEditorStackForRootObject:(id)arg1;
- (id)makeEditorStackForObject:(id)arg1;
- (id)editorStacks;
- (void)closeFrameController:(id)arg1;
- (id)createFrameControllerForObject:(id)arg1;
- (void)preformCloseForCanvasFrameController:(id)arg1 event:(id)arg2;
- (id)editorStackForObject:(id)arg1;
- (id)selectObjectsInEditor:(id)arg1 scrollSettings:(id)arg2;
- (id)selectObjectInEditor:(id)arg1 scrollSettings:(id)arg2;
- (void)selectMembersAfterPasteboardAction:(id)arg1;
- (void)becomeSelectionProviderAndSelectMembers:(id)arg1 allowReconfiguration:(BOOL)arg2 makeKey:(BOOL)arg3 takeFocus:(BOOL)arg4 orderFront:(BOOL)arg5 scrollToVisible:(BOOL)arg6 zoomToLevel:(id)arg7 animate:(BOOL)arg8;
- (id)openEditorForObject:(id)arg1 closingSubEditors:(BOOL)arg2 scrollSettings:(id)arg3;
- (void)scrollObjectsToVisible:(id)arg1 inEditorCanvasFrame:(id)arg2 zoomToLevel:(id)arg3 shouldCenter:(BOOL)arg4 animate:(BOOL)arg5;
- (void)editorStack:(id)arg1 closeFrameController:(id)arg2;
- (void)editorStack:(id)arg1 addCanvasFrame:(id)arg2;
- (id)editorStack:(id)arg1 instantiateFrameControllerForObject:(id)arg2;
- (void)editorStackDidChange:(id)arg1 dueToOpeningEditorForObject:(id)arg2;
- (void)editorStackWillChange:(id)arg1 dueToOpeningEditorForObject:(id)arg2;
- (void)editorStackMightChange:(id)arg1 dueToOpeningEditorForObject:(id)arg2;
- (id)specifierForObject:(id)arg1 showLabels:(BOOL)arg2;
@property(nonatomic) BOOL drawsWithActiveLook;
- (void)insertLeftButtonBarView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addCenterView:(id)arg1;
- (id)buttonBar;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
- (void)takeFocus;
- (void)registerWithDocumentEditor;
- (id)document;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (BOOL)isActiveSelectionProvider;
- (id)frameControllersContainingObjects:(id)arg1;
- (id)baseFrameControllerForObject:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

