//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <DebuggerUI/DBGSceneViewControllerDelegate-Protocol.h>
#import <DebuggerUI/IDEFocusedHierarchy-Protocol.h>
#import <DebuggerUI/NSTouchBarDelegate-Protocol.h>
#import <DebuggerUI/NSTouchBarProvider-Protocol.h>

@class DBGSceneViewController, DBGViewDebuggerAdditionUIController, DBGViewDebuggerDocument, DBGViewObject, DBGViewWindow, DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTRangeSliderCell, IDECanvasAppearanceSwitcherController, NSArray, NSLayoutConstraint, NSMenuItem, NSProgressIndicator, NSSegmentedControl, NSSet, NSSlider, NSString, NSTextField, NSTouchBar, NSView, NSVisualEffectView;
@protocol DBGFocusableViewObject, DVTCancellable;

@interface DBGViewDebuggerEditor : IDEEditor <NSTouchBarProvider, NSTouchBarDelegate, DBGSceneViewControllerDelegate, IDEFocusedHierarchy>
{
    NSArray *_currentSelectedItems;
    DBGViewWindow *_selectedWindow;
    DVTObservingToken *_editorContextNavigableItemObservingToken;
    DVTObservingToken *_showOnlyVisibleViewObjectsObservingToken;
    DVTObservingToken *_showLayersObservingToken;
    DVTObservingToken *_showPerfRuntimeIssuesObservingToken;
    DVTObservingToken *_viewOutlineStructureObservingToken;
    DVTObservingToken *_navigatorOutputSelectionObserver;
    DVTObservingToken *_constraintsEnabledObservingToken;
    DVTObservingToken *_isIn3DObservingToken;
    DVTObservingToken *_nodeContentModeObservingToken;
    DVTObservingToken *_numberOfZPlanesObservingToken;
    DVTObservingToken *_rangeSliderLeftObservingToken;
    DVTObservingToken *_rangeSliderRightObservingToken;
    DVTObservingToken *_workspaceFinishedLoadingObservation;
    DVTObservingToken *_backupWorkspaceExecEnvObservation;
    DVTObservingToken *_debuggingAdditionsObservation;
    id <DVTCancellable> _viewDebuggerAdditionUIControllerObservingToken;
    DBGViewObject<DBGFocusableViewObject> *_formerlyFocusedObject;
    double _formerCameraZoom;
    BOOL _toolBarVisible;
    BOOL _reachedStage2;
    NSArray *_objectsToReveal;
    NSSet *_selectedConstraintSet;
    DVTObservingToken *_toolbarHiddenObservationToken;
    DVTObservingToken *_canvas3DEnabledObservationToken;
    DVTObservingToken *_clippingEnabledObservationToken;
    DVTObservingToken *_constraintsEnabledObservationToken;
    DVTObservingToken *_viewRangeMaxValueObservationToken;
    DVTObservingToken *_viewRangeValueObservationToken;
    DVTObservingToken *_zDistanceValueObservationToken;
    DBGViewDebuggerAdditionUIController *_viewDebuggerUIController;
    NSMenuItem *_backgroundColorsSubmenuItem;
    IDECanvasAppearanceSwitcherController *_canvasAppearanceSwitcherController;
    DBGSceneViewController *_sceneViewController;
    DVTBorderedView *_backgroundView;
    NSView *_canvasAppearanceSwitcherContainerView;
    NSVisualEffectView *_toolBarContainerView;
    DVTBorderedView *_toolBarView;
    NSSegmentedControl *_zoomSegmentedControl;
    DVTGradientImagePopUpButton *_nodeContentModePopupButton;
    DVTGradientImageButton *_toggle2D3DButton;
    NSSlider *_zDistanceSlider;
    DVTGradientImageButton *_constraintsButton;
    NSSlider *_viewRangeSlider;
    DVTRangeSliderCell *_viewRangeSliderCell;
    NSLayoutConstraint *_viewRangeSliderCenterYConstraint;
    DVTGradientImageButton *_showClippedContentButton;
    DVTGradientImageButton *_showTrueSpacingBoxesButton;
    NSLayoutConstraint *_trueSpacingBoxesButtonWidthConstraint;
    NSView *_statusMessageContainerView;
    NSTextField *_statusMessageTitle;
    NSTextField *_statusMessageDescription;
    NSView *_percentLoadedView;
    NSProgressIndicator *_percentLoadedIndicator;
    long long _selectedZoom;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (id)viewDebuggerEditorsForTabController:(id)arg1;
+ (id)openViewDebuggerDocumentLocation:(id)arg1;
- (void).cxx_destruct;
@property BOOL reachedStage2; // @synthesize reachedStage2=_reachedStage2;
@property long long selectedZoom; // @synthesize selectedZoom=_selectedZoom;
@property __weak NSProgressIndicator *percentLoadedIndicator; // @synthesize percentLoadedIndicator=_percentLoadedIndicator;
@property(retain) NSView *percentLoadedView; // @synthesize percentLoadedView=_percentLoadedView;
@property __weak NSTextField *statusMessageDescription; // @synthesize statusMessageDescription=_statusMessageDescription;
@property __weak NSTextField *statusMessageTitle; // @synthesize statusMessageTitle=_statusMessageTitle;
@property __weak NSView *statusMessageContainerView; // @synthesize statusMessageContainerView=_statusMessageContainerView;
@property __weak NSLayoutConstraint *trueSpacingBoxesButtonWidthConstraint; // @synthesize trueSpacingBoxesButtonWidthConstraint=_trueSpacingBoxesButtonWidthConstraint;
@property __weak DVTGradientImageButton *showTrueSpacingBoxesButton; // @synthesize showTrueSpacingBoxesButton=_showTrueSpacingBoxesButton;
@property __weak DVTGradientImageButton *showClippedContentButton; // @synthesize showClippedContentButton=_showClippedContentButton;
@property __weak NSLayoutConstraint *viewRangeSliderCenterYConstraint; // @synthesize viewRangeSliderCenterYConstraint=_viewRangeSliderCenterYConstraint;
@property __weak DVTRangeSliderCell *viewRangeSliderCell; // @synthesize viewRangeSliderCell=_viewRangeSliderCell;
@property __weak NSSlider *viewRangeSlider; // @synthesize viewRangeSlider=_viewRangeSlider;
@property __weak DVTGradientImageButton *constraintsButton; // @synthesize constraintsButton=_constraintsButton;
@property __weak NSSlider *zDistanceSlider; // @synthesize zDistanceSlider=_zDistanceSlider;
@property __weak DVTGradientImageButton *toggle2D3DButton; // @synthesize toggle2D3DButton=_toggle2D3DButton;
@property __weak DVTGradientImagePopUpButton *nodeContentModePopupButton; // @synthesize nodeContentModePopupButton=_nodeContentModePopupButton;
@property __weak NSSegmentedControl *zoomSegmentedControl; // @synthesize zoomSegmentedControl=_zoomSegmentedControl;
@property __weak DVTBorderedView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property __weak NSVisualEffectView *toolBarContainerView; // @synthesize toolBarContainerView=_toolBarContainerView;
@property __weak NSView *canvasAppearanceSwitcherContainerView; // @synthesize canvasAppearanceSwitcherContainerView=_canvasAppearanceSwitcherContainerView;
@property __weak DVTBorderedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) DBGSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(retain) IDECanvasAppearanceSwitcherController *canvasAppearanceSwitcherController; // @synthesize canvasAppearanceSwitcherController=_canvasAppearanceSwitcherController;
@property(retain) NSMenuItem *backgroundColorsSubmenuItem; // @synthesize backgroundColorsSubmenuItem=_backgroundColorsSubmenuItem;
@property(retain) DBGViewDebuggerAdditionUIController *viewDebuggerUIController; // @synthesize viewDebuggerUIController=_viewDebuggerUIController;
@property(retain) DVTObservingToken *zDistanceValueObservationToken; // @synthesize zDistanceValueObservationToken=_zDistanceValueObservationToken;
@property(retain) DVTObservingToken *viewRangeValueObservationToken; // @synthesize viewRangeValueObservationToken=_viewRangeValueObservationToken;
@property(retain) DVTObservingToken *viewRangeMaxValueObservationToken; // @synthesize viewRangeMaxValueObservationToken=_viewRangeMaxValueObservationToken;
@property(retain) DVTObservingToken *constraintsEnabledObservationToken; // @synthesize constraintsEnabledObservationToken=_constraintsEnabledObservationToken;
@property(retain) DVTObservingToken *clippingEnabledObservationToken; // @synthesize clippingEnabledObservationToken=_clippingEnabledObservationToken;
@property(retain) DVTObservingToken *canvas3DEnabledObservationToken; // @synthesize canvas3DEnabledObservationToken=_canvas3DEnabledObservationToken;
@property(retain) DVTObservingToken *toolbarHiddenObservationToken; // @synthesize toolbarHiddenObservationToken=_toolbarHiddenObservationToken;
@property(getter=isToolBarVisible) BOOL toolBarVisible; // @synthesize toolBarVisible=_toolBarVisible;
@property(retain) NSSet *selectedConstraintSet; // @synthesize selectedConstraintSet=_selectedConstraintSet;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)focusHidesObject:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_isViewObject:(id)arg1 ancestorOf:(id)arg2;
- (id)_hierarchyItemForViewObject:(id)arg1;
- (void)_breakOutOfFocusIfNecessary:(id)arg1;
- (id)_windowForViewObjectToBeSelected:(id)arg1 withCurrentlySelectedWindow:(id)arg2;
@property(readonly) DBGViewDebuggerDocument *viewDebuggerDocument;
- (void)reloadFinderObjectsInEditor;
- (void)reloadSelectionInEditor;
- (void)addViewObjectsToSelectedItems:(id)arg1;
- (void)mouseClickedViewObject:(id)arg1 withEvent:(id)arg2;
- (id)_2D3DToggleTitle;
- (id)_constraintsToggleTitle;
- (id)_clippedContentToggleTitle;
- (void)_updateButton:(id)arg1 withTitle:(id)arg2;
- (void)_update2D3DToggleButtonLabelAndTooltip;
- (void)_updateConstraintsToggleButtonLabelAndTooltip;
- (void)_updateClippedContentButtonLabelAndTooltip;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (void)_updateSliderMaxValue;
- (void)rangeSliderKVOCompliantValueChangeWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) double viewRangeMinValue;
@property(readonly) double viewRangeMaxValue;
@property(nonatomic) struct _NSRange viewRangeValue;
@property(readonly) double zDistanceMinValue;
@property(readonly) double zDistanceMaxValue;
@property(readonly) double zDistanceValue;
- (void)switchToContentModeWireframesAndContents:(id)arg1;
- (void)switchToContentModeWireframes:(id)arg1;
- (void)switchToContentModeContents:(id)arg1;
- (void)zoomOutCanvas:(id)arg1;
- (void)zoomActualCanvas:(id)arg1;
- (void)zoomInCanvas:(id)arg1;
- (void)toggleClippingOfContent:(id)arg1;
- (void)toggleShowOptimizationOpportunities:(id)arg1;
- (void)toggleShowLayers:(id)arg1;
- (void)toggleShowControllers:(id)arg1;
- (void)toggleShowConstraints:(id)arg1;
- (void)toggleTrueSpacingBoxesButtonPressed:(id)arg1;
- (void)gestureRecognizerAction:(id)arg1;
- (void)zoomButtonPressed:(id)arg1;
- (void)toggle2D3D:(id)arg1;
- (void)zoomButtonPressedForTag:(unsigned long long)arg1;
- (void)zDistanceDidChange;
- (void)zDistanceSliderChanged:(id)arg1;
- (void)_reloadSceneViewController;
@property(retain) NSArray *objectsToReveal; // @synthesize objectsToReveal=_objectsToReveal;
@property(retain) DBGViewWindow *selectedWindow;
@property(retain, nonatomic) NSArray *currentSelectedItems;
- (void)_setCurrentSelectedItemsFromDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)_documentLocationsFromCurrentSelectedItems;
- (void)selectDocumentLocations:(id)arg1;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)_handleNavigatorOutputSelectionChanged;
- (id)_getDebugSessionForRunDestination:(id)arg1 workspace:(id)arg2 withDebugHierarchyFile:(id)arg3;
- (id)_getRunDestinationForSyntheticDebugSession;
- (void)setupInfrastructureForDebugHierarchyFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupSytheticDebugSessionAndViewDebuggingAdditionWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewWillUninstall;
- (void)_cancelAndClearObservingTokens;
- (void)_setupSceneViewControllerPropertyObservers;
- (void)_navigateToInitialItemAfterLaunch;
- (void)viewDidAppear;
- (void)_setupUIControllerDependencies;
- (void)viewDidInstall;
- (id)_failedStatusMessageDescription;
- (void)_refreshStatusMessageView;
- (void)_handleViewDebuggerPercentLoadedChanged;
- (void)_configureCanvasAppearanceSwitcher;
- (void)_configureViewModePopUpButtonAndMenu;
- (void)regenerateIssues;
- (void)_startObservingEditorContextNavigableItemForChanges;
- (void)_startObservingViewDebuggerPercentLoadedForChanges;
- (void)_startObservingViewDebuggerRootObjectForChanges;
- (void)_setupStatusMessage;
- (void)_setupVisibleRangeSlider;
- (void)_setupToolbarControls;
- (void)_setupSceneViewController;
- (void)loadView;
- (void)visibleRangeSliderAction:(id)arg1;
- (void)_observeViewRangeValueChangesToUpdateRangeSlider:(id)arg1;
- (id)_visibleRangeControl;
- (id)_visibleRangePopoverFunctionBar;
- (id)_canvas3DToggleButton;
- (id)_toggleConstraintsButton;
- (id)_toggleClippedViewsButton;
- (id)_zSpacingPopoverFunctionBar;
- (void)_configureZSpacingSlider:(id)arg1;
- (void)zSpacingChanged:(id)arg1;
- (id)_barItemForVisibleRangeSliderWithIdentifier:(id)arg1;
- (id)_barItemForZSpacingSliderWithIdentifier:(id)arg1;
- (id)_barItemForVisibleRangePopupWithIdentifier:(id)arg1;
- (id)_barItemForCanvas3DToggleWithIdentifier:(id)arg1;
- (id)_barItemForToggleConstraintsWithIdentifier:(id)arg1;
- (id)_barItemForToggleClippedViewsWithIdentifier:(id)arg1;
- (id)_barItemForZSpacingPopupButtonWithIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_viewDebuggerTouchBar;
- (void)_registerToolBarVisibilityChangedObserver;
- (id)makeTouchBar;
- (void)_updateBackgroundColorsSubmenuSelection;
- (void)changeBackgroundColor:(id)arg1;
- (id)_newBackgroundColorsSubmenu;
- (id)_newBackgroundColorsMenuItem;
- (id)_findToggleControllerMenuItemInMenu:(id)arg1;
- (long long)_backgroundColorMenuItemInsertionIndexForMenu:(id)arg1;
- (void)_setupBackgroundColorSubmenuInMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

