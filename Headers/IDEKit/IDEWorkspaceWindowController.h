//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTCocoaAdditionsKit/DVTDealloc2Main_WindowController.h>

#import <IDEKit/DVTEditor-Protocol.h>
#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/IDEEditorAreaContainer-Protocol.h>
#import <IDEKit/IDETabbedWindowController-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>
#import <IDEKit/NSWindowDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, DVTStackBacktrace, DVTStateToken, DVTWeakInterposer, IDEEditorArea, IDEEditorDocument, IDEToolbarDelegate, IDEWorkspace, IDEWorkspaceDFRController, IDEWorkspaceTabController, IDEWorkspaceWindow, NSMutableArray, NSString, NSTimer, NSTouchBar, NSValue, _IDEWindowFullScreenSavedDebuggerTransitionValues;

@interface IDEWorkspaceWindowController : DVTDealloc2Main_WindowController <NSTouchBarProvider, NSTouchBarDelegate, NSWindowDelegate, IDEEditorAreaContainer, DVTStatefulObject, DVTEditor, DVTInvalidation, IDETabbedWindowController>
{
    NSTimer *_springToFrontTimer;
    int _debugSessionState;
    struct CGRect _restoreFrame;
    struct CGSize _originalMinSize;
    NSMutableArray *_stateChangeObservingTokens;
    IDEEditorDocument *_lastObservedEditorDocument;
    IDEWorkspaceTabController *_activeWorkspaceTabController;
    IDEToolbarDelegate *_toolbarDelegate;
    DVTObservingToken *_workspaceSimpleFilesFocusedObservingToken;
    DVTObservingToken *_workspaceRepresentingFilePathObservingToken;
    DVTObservingToken *_workspaceFinishedLoadingObservingToken;
    DVTObservingToken *_navigationTargetedEditorDocumentObservingToken;
    DVTObservingToken *_tabLabelObservingToken;
    DVTObservingToken *_firstResponderValidObservingToken;
    DVTNotificationToken *_deallocatingFirstResponderNotificationToken;
    DVTNotificationToken *_editorDocumentIsEditedNotificationToken;
    IDEWorkspace *_workspace;
    _IDEWindowFullScreenSavedDebuggerTransitionValues *_fullScreenSavedDebuggerTransitionValues;
    DVTPerformanceMetric *_newWindowControllerMetric;
    unsigned int _coalescedUpdateMask;
    int _contentViewFrozenMode;
    BOOL _performingCoalescedUpdates;
    BOOL _tabBarInTransition;
    BOOL _tabBarShownForTabDrag;
    BOOL _createdCollapsedRestoreFrame;
    BOOL _createdMediumRestoreFrame;
    BOOL _inTotalCollapsedFrame;
    BOOL _tabBarForcedClosed;
    BOOL _isClosing;
    BOOL _didSetActiveWorkspaceTabController;
    BOOL _didRemoveLeakedTabControllerState;
    BOOL _enteringFullScreenMode;
    BOOL _exitingFullScreenMode;
    DVTStateToken *_stateToken;
    BOOL _shouldPerformWindowClose;
    BOOL _didRestoreFromStateSaving;
    BOOL _tabBarWasVisibleWithSingleTab;
    BOOL _isSettingUpWindowControllerClone;
    NSString *_stateSavingIdentifier;
    DVTStackBacktrace *_windowDidLoadBacktrace;
    DVTWeakInterposer *_firstResponderInterposer;
    IDEWorkspaceDFRController *_standardWorkspaceTouchBarController;
    IDEWorkspaceDFRController *_systemModalWorkspaceTouchBarController;
    long long _visibleSheetsCount;
    NSValue *_initialWindowFrameValue;
}

+ (id)keyPathsForValuesAffectingUserWantsBreakpointsActivated;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
+ (id)workspaceWindowControllerForWindow:(id)arg1;
+ (id)keyPathsForValuesAffectingEditorArea;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingShouldEnableToolbarItems;
+ (id)workspaceWindowControllers;
+ (unsigned long long)supplimental23378396AssertionBehaviorForKeyValueObservationsAtEndOfEvent;
@property BOOL isSettingUpWindowControllerClone; // @synthesize isSettingUpWindowControllerClone=_isSettingUpWindowControllerClone;
@property BOOL tabBarWasVisibleWithSingleTab; // @synthesize tabBarWasVisibleWithSingleTab=_tabBarWasVisibleWithSingleTab;
@property(retain) NSValue *initialWindowFrameValue; // @synthesize initialWindowFrameValue=_initialWindowFrameValue;
@property long long visibleSheetsCount; // @synthesize visibleSheetsCount=_visibleSheetsCount;
@property(retain) IDEWorkspaceDFRController *systemModalWorkspaceTouchBarController; // @synthesize systemModalWorkspaceTouchBarController=_systemModalWorkspaceTouchBarController;
@property(retain) IDEWorkspaceDFRController *standardWorkspaceTouchBarController; // @synthesize standardWorkspaceTouchBarController=_standardWorkspaceTouchBarController;
@property(retain) DVTWeakInterposer *firstResponderInterposer; // @synthesize firstResponderInterposer=_firstResponderInterposer;
@property BOOL didRestoreFromStateSaving; // @synthesize didRestoreFromStateSaving=_didRestoreFromStateSaving;
@property(retain) DVTStackBacktrace *windowDidLoadBacktrace; // @synthesize windowDidLoadBacktrace=_windowDidLoadBacktrace;
@property BOOL shouldPerformWindowClose; // @synthesize shouldPerformWindowClose=_shouldPerformWindowClose;
@property(copy, nonatomic) NSString *stateSavingIdentifier; // @synthesize stateSavingIdentifier=_stateSavingIdentifier;
- (void).cxx_destruct;
- (void)moveFocusToEditor:(id)arg1;
- (void)dicardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)_updateWindowTitle;
- (void)_updateTitleRepresentedPath;
@property BOOL userWantsBreakpointsActivated;
- (void)changeFromDebugSessionState:(int)arg1 to:(int)arg2 forLaunchSession:(id)arg3;
- (void)_makeWindowLookKeyWhenKey;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)_workaround8217584;
- (BOOL)_isTargetApplicationActive;
- (void)_performSpringToFront;
- (void)_cancelSpringToFront;
- (void)_scheduleSpringToFront;
- (id)_screenForWindow;
- (void)workspaceWindowWillInvalidateCursorRectsForViewsWithNoTrackingAreas:(id)arg1;
- (void)workspaceWindow:(id)arg1 willInvalidateCursorRectsForView:(id)arg2;
- (BOOL)workspaceWindow:(id)arg1 interceptAddCursorRect:(struct CGRect)arg2 cursor:(id)arg3 forView:(id)arg4;
- (BOOL)workspaceWindow:(id)arg1 interceptSetCursorForMouseLocation:(struct CGPoint)arg2;
- (void)workspaceWindowDidRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)_recordRestoreFrame;
- (void)_pushDefaultPrimaryEditorFrameSizes;
- (BOOL)_isLastWindowControllerOfDocument;
- (void)primitiveInvalidate;
- (BOOL)isEnteringOrInFullScreenMode;
- (BOOL)isInFullScreenMode;
- (void)synchronizeWindowTitleWithDocumentName;
- (void)_performCloseAll;
- (BOOL)_shouldCloseWindowEvaluatingOtherWindows;
- (id)instantiateTabControllerAndRegisterForStateSavingWithName:(id)arg1 inDocument:(id)arg2;
- (BOOL)canCreateNewTab;
- (void)_setUpWindowController:(id)arg1 withUserDefinedLabel:(id)arg2 addToTabGroup:(BOOL)arg3 activate:(BOOL)arg4;
- (id)_cloneWindowWithUserDefinedLabel:(id)arg1 addToTabGroup:(BOOL)arg2 activate:(BOOL)arg3;
- (id)_cloneNewWindowController;
- (id)_createSimpleEditorWindowControllerForDocumentURL:(id)arg1 activate:(BOOL)arg2;
- (void)_preventAutomaticallyAddingNewWindowControllerToTabGroup:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;
- (void)_selectTabForWindow;
- (void)newWindow:(id)arg1;
- (void)newTab:(id)arg1;
- (void)newWindowForTab:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)autocreateContexts:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)window:(id)arg1 shouldRestoreStateForResponder:(id)arg2;
@property(readonly) IDEWorkspaceWindow *workspaceWindow;
- (id)_uniqueNameForNewWorkspaceTabController;
@property(readonly) IDEEditorArea *editorArea;
@property(retain) IDEWorkspaceTabController *activeWorkspaceTabController;
@property(readonly) IDEWorkspaceWindowController *selectedTabWorkspaceWindowController;
- (void)_setupActiveWorkspaceTabController;
- (id)workspaceTabControllers;
- (id)workspaceWindowControllersForTabGroup;
- (void)_setWindowFrameUsingValueFromStateSaving:(id)arg1;
- (id)_windowFrameValueForStateSaving;
- (void)commitStateToDictionary:(id)arg1;
- (void)_configureStateSavingObservers;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_convertToSimpleEditorWindowForDocumentURL:(id)arg1;
- (id)_tabStateContextForTabController:(id)arg1;
- (void)_changeSizeForSimpleEditorWindowLayoutWithEditorDocumentURLOrNil:(id)arg1 forSingleFile:(BOOL)arg2 workspaceTabController:(id)arg3;
@property(nonatomic) BOOL showToolbar;
- (void)toggleToolbarShown:(id)arg1;
- (BOOL)wantsToolbarVisibleInFullScreen;
@property(readonly) BOOL shouldEnableToolbarItems;
- (id)document;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)_observeInvalidationOfFirstResponder:(id)arg1 firstResponderAssignedBacktrace:(id)arg2;
- (void)windowDidLoad;
- (void)_purgeOldIdentifiersFromUserDefaults;
- (void)_showWindowBehindWorkspaceWindow:(id)arg1;
- (id)init;
@property(retain) DVTStateToken *stateToken;
- (id)systemModalWorkspaceDFRController;
- (unsigned long long)_factoryTypeForTracing:(BOOL)arg1;
- (id)standardWorkspaceDFRController;
- (void)_observeToolbarMenuButton:(id)arg1 toUpdateButton:(id)arg2;
- (id)_standardDebugControlsItemWithIdentifier:(id)arg1;
- (void)_registerWorkspaceWindowControllerObservations;
- (void)standardDFRDebugBarStopAction:(id)arg1;
- (void)runActiveRunContextWithGesture:(id)arg1;
- (void)switchToAndAnalyze:(id)arg1;
- (void)switchToAndProfile:(id)arg1;
- (void)switchToAndTest:(id)arg1;
- (void)switchToAndRun:(id)arg1;
- (void)_invokeCurrentActionForButton:(id)arg1;
- (void)_switchMenuButton:(id)arg1 toItemWithSelector:(SEL)arg2;
- (id)runStopButtonFromToolbar;
- (id)runButtonPopoverBar;
- (id)_runItem;
- (id)_runGroupItem;
- (void)workspaceTabDFRShouldBecomeVisible;
- (void)updateButtonsForDebugSessionState:(int)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (BOOL)_debuggerItemShouldBeSuppressed;
- (id)_editorRunGroupOverrideIdentifier;
- (id)_touchBarDebugSessionActive;
- (id)_touchBarIdleSession;
- (id)_touchBarForCurrentRunState;
- (id)makeTouchBar;
- (void)updateTouchBar;
- (id)ide_lastActiveEditor;
- (void)minimizeDebugBar;
- (void)updateDebuggerControlsGroupOnSystemModalDebugBar:(id)arg1;
- (id)_identifierForCurrentDebuggerControls;
- (void)updateSystemModalDebugBar;
- (id)_systemModalDebugControlsGroupItemWithIdentifier:(id)arg1;
- (id)_createSystemModalDebuggingFunctionBar;
- (id)systemModalFunctionBarForDebugSession;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

