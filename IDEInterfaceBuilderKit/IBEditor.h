//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDropTargetResolverDelegate.h"
#import "IBSelectionOwnerDelegate.h"
#import "NSUserInterfaceValidations.h"

@class DVTNotificationToken, IBDecodedPasteboardContent, IBDelegatedCanvasOverlay, IBDocument, IBDragAndDropInsertionIndicator, IBDropTargetResolver, IBEditorCanvasFrameController, IBMutableIdentityDictionary, IBSelectionOwner, NSBezierPath, NSDictionary, NSSet, NSString;

@interface IBEditor : NSObject <IBSelectionOwnerDelegate, IBDropTargetResolverDelegate, NSUserInterfaceValidations>
{
    IBSelectionOwner *selection;
    IBEditorCanvasFrameController *frameController;
    IBDropTargetResolver *dropTargetResolver;
    IBDragAndDropInsertionIndicator *insertionIndicator;
    IBDocument *document;
    IBEditor *parentEditor;
    IBEditor *childEditor;
    id <DVTInvalidation> selctionDrawingToken;
    id <DVTInvalidation> activationDarkeningToken;
    IBMutableIdentityDictionary *selectionMasks;
    NSObject *editedObject;
    NSBezierPath *activationHighlightPath;
    BOOL recalculateActivationPath;
    BOOL draggedObjectsAreInObjectModel;
    NSDictionary *dragSourceContext;
    unsigned long long allowedDragSourceOperations;
    BOOL drawsActivationDarkening;
    IBDecodedPasteboardContent *decodedPasteboardContextCache;
    NSString *decodedPasteboardContextCacheID;
    NSObject *orderedSelectionAnchor;
    NSSet *selectionPriorToEventRouting;
    BOOL closing;
    BOOL closed;
    DVTNotificationToken *frameChangeToken;
    DVTNotificationToken *showingSelectionHighlightsNotification;
    BOOL active;
    BOOL frameControllerDragAndDropInProgress;
    BOOL hasAnyObjectsSelected;
}

+ (void)resetCursorRectsForObject:(id)arg1 inFrameController:(id)arg2;
+ (Class)ibDropTargetResolverClass;
@property(nonatomic) BOOL hasAnyObjectsSelected; // @synthesize hasAnyObjectsSelected;
@property(nonatomic, getter=isFrameControllerDragAndDropInProgress) BOOL frameControllerDragAndDropInProgress; // @synthesize frameControllerDragAndDropInProgress;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(getter=isClosed) BOOL closed; // @synthesize closed;
@property(copy, nonatomic) NSSet *selectionPriorToEventRouting; // @synthesize selectionPriorToEventRouting;
- (void).cxx_destruct;
- (void)setSecondaryGrowthDirection:(long long)arg1 forDragAndDropPoliciesWithRelation:(id)arg2;
- (void)setPrimaryGrowthDirection:(long long)arg1 forDragAndDropPoliciesWithRelation:(id)arg2;
- (void)dropTargetResolver:(id)arg1 orderedRelation:(id)arg2 insertionIndexDidChange:(long long)arg3;
- (void)dropTargetResolver:(id)arg1 orderedRelation:(id)arg2 insertionIndexWillChange:(long long)arg3;
- (void)drawDragAndDropInsertionHints;
- (void)setNeedsDisplayInDragInsertionIndicatorRect;
- (id)insertionIndicator;
- (void)editorCanvasFrameDidCompleteLayout;
- (void)canvasFrameOverlayNeedsDisplay;
- (void)willDrawActivationDarkening;
- (void)drawActivationDarkening;
- (BOOL)effectiveDrawsActivationDarkening;
- (BOOL)childEditorShouldDrawActivationDarkening:(id)arg1;
- (void)drawSelectionMasks;
- (BOOL)objectHasSelectionIndicatorOtherThanMask:(id)arg1;
- (void)drawSelectionHighlightForObject:(id)arg1;
- (struct CGRect)highlightRectForObject:(id)arg1;
- (struct CGRect)windowClippingRectForHighlightingObject:(id)arg1;
- (id)buildHighlightMaskForObject:(id)arg1;
- (id)highlightColorForObject:(id)arg1;
- (void)clipOverlayViewToView:(id)arg1 inset:(struct CGSize)arg2;
- (void)invalidateAllSelectionMasks;
- (void)invalidateSelectionMaskForObject:(id)arg1;
- (void)invalidateActivationPath;
- (void)setDecorationsNeedDisplayForObject:(id)arg1;
- (void)invalidateEditorContentOverlayArea;
- (CDStruct_c519178c)decorationInsetForChild:(id)arg1;
- (id)representativeChildViewInSameWindow:(id)arg1;
- (BOOL)isChildViewInSameWindow:(id)arg1;
- (id)calculateActivationHighlightPath;
- (void)resetCursorRects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)fakeActionForValidatingTitleOfAutolayoutIssuesMenuAllItemsHeader:(id)arg1;
- (BOOL)documentAllowsIllegalAutolayoutStates;
- (BOOL)canSizeSelectionToFit;
- (void)clearAndAddSuggestedConstraintsInArbitrationUnit:(id)arg1;
- (void)clearAndAddSuggestedConstraints:(id)arg1;
- (void)addMissingConstraintsInArbitrationUnit:(id)arg1;
- (void)addMissingConstraints:(id)arg1;
- (void)clearConstraintsInAllConfigurationsInArbitrationUnit:(id)arg1;
- (void)clearConstraintsInAllConfigurations:(id)arg1;
- (void)clearConstraintsInArbitrationUnit:(id)arg1;
- (void)clearConstraints:(id)arg1;
- (void)updateConstraintConstantsInArbitrationUnit:(id)arg1;
- (void)updateConstraintConstants:(id)arg1;
- (void)updateFramesToMatchConstraintsInArbitrationUnit:(id)arg1;
- (void)updateFramesToMatchConstraints:(id)arg1;
- (void)sizeSelectionToFit:(id)arg1;
- (id)itemsForResolvingAmbiguity:(BOOL)arg1;
- (id)itemsForResolvingMisplacementOrAmbiguity:(BOOL)arg1;
- (id)itemsForResolvingMisplacement:(BOOL)arg1;
- (BOOL)isItemMisplacedOrAmbiguous:(id)arg1;
- (BOOL)isItemAmbiguous:(id)arg1;
- (BOOL)isItemMisplaced:(id)arg1;
- (id)viewsForPerformingAutolayoutMenuCommand:(BOOL)arg1;
- (id)objectsForPerformingMenuCommand;
- (BOOL)canSizeObjectToFit:(id)arg1;
- (void)positionChildEditorFrame;
- (void)pasteAttributes:(id)arg1;
- (void)performDuplicate:(id)arg1;
- (void)performClear:(id)arg1;
- (void)performDelete:(id)arg1;
- (void)performPasteExcludingConnections:(id)arg1;
- (void)performPaste:(id)arg1;
- (void)performCopy:(id)arg1;
- (void)performCut:(id)arg1;
- (BOOL)acceptAttributesFromPasteboard:(id)arg1;
- (BOOL)canAcceptAttributesFromPasteboard:(id)arg1;
- (id)pasteAttributesTargets;
- (id)cachedDecodedPasteboardContentForDraggingInfo:(id)arg1 targetingObject:(id)arg2 pasteboardType:(id)arg3 insertionContext:(id)arg4;
- (void)didAcceptDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)clearDecodedPasteboardContextCache;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
@property(readonly) IBDropTargetResolver *dropTargetResolver;
- (id)tellObjectToAcceptContentsOfPasteboard:(id)arg1 excludeConnections:(BOOL)arg2 selectNewObjects:(BOOL)arg3;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 isGeneratingDragPreview:(BOOL)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromDraggingInfo:(id)arg2 isGeneratingDragPreview:(BOOL)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromDraggingInfo:(id)arg2 orPasteboard:(id)arg3 isGeneratingDragPreview:(BOOL)arg4;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (unsigned long long)dragObjects:(id)arg1 withDraggedObjectsImageState:(id)arg2 aligningFrameWithIdentifier:(id)arg3 withRect:(struct CGRect)arg4 fromView:(id)arg5 inMouseDownEvent:(id)arg6 mouseDraggedEvent:(id)arg7 allowedOperations:(unsigned long long)arg8 dragContext:(id)arg9;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 dragContext:(id)arg7;
- (id)initialDragImageState:(id)arg1;
- (void)customizeDraggingPasteboard:(id)arg1 draggingContext:(id)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2 operation:(unsigned long long)arg3 previousOperation:(unsigned long long)arg4;
- (void)updateAttachmentStateForDragOperation:(unsigned long long)arg1 final:(BOOL)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (unsigned long long)dragOperationForDraggingInfo:(id)arg1 initialOperation:(unsigned long long)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)autoscrollEditedContentWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (void)editorCanvasFrameFrameDidChange:(id)arg1;
- (void)overlayFrameDidChange:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)documentDidSave;
- (void)documentWillSave;
- (id)connectionSourceForEvent:(id)arg1;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(long long)arg2;
- (void)didResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (void)willResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (CDStruct_c519178c)canvasAlignmentInsetForEditorFrame;
- (BOOL)shouldCloseWithEvent:(id)arg1;
- (BOOL)shouldDragFrameWithMouseDownInEditedRect:(id)arg1;
- (BOOL)forwardEvent:(id)arg1 toResponder:(id)arg2 makeFirstResponderIfNeeded:(BOOL)arg3 reHitTest:(BOOL)arg4 allowedEvents:(unsigned long long)arg5;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (BOOL)isDocumentObjectCurrentlySelectable:(id)arg1;
- (id)stringEditingContextForEvent:(id)arg1;
- (void)editStringWithContext:(id)arg1;
- (void)restoreEditorState:(id)arg1;
- (id)captureEditorState;
@property(copy) id <IBCollection> selectedObjects;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)objectsForSelectingAll;
- (void)removeSelectedObjectsAndGuessNextSelection:(BOOL)arg1 withMode:(unsigned long long)arg2;
- (id)objectToSelectAfterDeletingObjects:(id)arg1;
- (id)validatedOrderedSelectionAnchor;
- (id)orderedSelectionCandiateLists;
- (BOOL)selectionOwner:(id)arg1 canSelect:(id)arg2;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (BOOL)selectionContainsObject:(id)arg1;
- (long long)numberOfSelectedObjects;
- (void)clearSelection;
- (void)deselectObjects:(id)arg1;
- (void)deselectObject:(id)arg1;
- (void)selectObjects:(id)arg1 withEvent:(id)arg2;
- (void)selectObject:(id)arg1 withEvent:(id)arg2;
- (void)selectObject:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)selectObjects:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)selectObjects:(id)arg1;
- (void)selectObject:(id)arg1;
- (id)selectedObjectsInRelationship:(id)arg1;
- (id)orderedSelectedObjects;
- (id)selection;
- (void)changeFont:(id)arg1;
- (id)selectedFontsForFontPanel;
- (id)targetsForFloatingPanels;
- (void)didChangeShowingSelectionHighlights:(id)arg1;
- (void)setSelectionMask:(id)arg1 forObject:(id)arg2;
- (id)selectionMaskForObject:(id)arg1;
- (void)canvasKeyStateDidChange;
- (void)didClose;
- (void)childEditorWillClose;
- (void)willClose;
- (void)didOpen;
- (void)didDeactivate;
- (void)didActivate;
- (void)willEditChild:(id)arg1 inFrameController:(id)arg2;
- (void)close;
- (id)frontmostDescendantAtLocation:(struct CGPoint)arg1 inView:(id)arg2 criteria:(long long)arg3;
- (id)descendantsFromBackToFrontAtLocation:(struct CGPoint)arg1 inView:(id)arg2 criteria:(long long)arg3;
@property BOOL drawsActivationDarkening;
- (id)selectionOwner;
- (void)setOrderedSelectionAnchor:(id)arg1;
- (id)orderedSelectionAnchor;
- (void)setActivationHighlightPath:(id)arg1;
- (id)activationHighlightPath;
@property(readonly, nonatomic) IBDelegatedCanvasOverlay *overlayView;
- (void)invokeSelectionShowingChangingBlock:(CDUnknownBlockType)arg1;
- (id)installSelectionDrawingHandlers;
- (BOOL)actuallyShowsSelectionIndicators;
- (BOOL)forbidsShowingSelectionIndicators;
- (BOOL)wantsToShowSelectionIndicators;
- (id)parentEditor;
- (id)editorCanvasFrame;
- (id)frameController;
- (id)documentEditor;
- (BOOL)isClosing;
- (BOOL)isSimulatingSheet;
- (id)children;
- (void)setChildEditor:(id)arg1;
- (id)childEditor;
- (id)editorView;
- (id)editorWindow;
- (id)canvasView;
- (id)canvasViewController;
- (id)document;
- (id)editedObject;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

