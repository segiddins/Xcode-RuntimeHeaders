//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTEditor-Protocol.h>
#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/DVTTabbedWindowTabContentControlling-Protocol.h>
#import <IDEKit/IDEEditorAreaContainer-Protocol.h>
#import <IDEKit/IDEStructureEditingWorkspaceTabContext-Protocol.h>
#import <IDEKit/IDEWorkspaceDocumentProvider-Protocol.h>
#import <IDEKit/NSTextViewDelegate-Protocol.h>

@class DVTFilePath, DVTMutableOrderedSet, DVTNotificationToken, DVTObservingToken, DVTReplacementView, DVTSplitView, DVTSplitViewItem, IDEARCConversionAssistantContext, IDEAppChooserWindowController, IDEBuildAlertMonitor, IDEEditorArea, IDEExecutionHoldAlertHelper, IDELaunchSession, IDENavigatorArea, IDEObjCModernizationAssistantContext, IDERunAlertMonitor, IDESwiftMigrationAssistantContext, IDEUnitTestsModernizationAssistantContext, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceWindowController, NSAlert, NSDocument, NSMapTable, NSMutableArray, NSString;
@protocol DVTTabbedWindowCreation;

@interface IDEWorkspaceTabController : IDEViewController <NSTextViewDelegate, DVTTabbedWindowTabContentControlling, DVTStatefulObject, DVTReplacementViewDelegate, IDEEditorAreaContainer, IDEStructureEditingWorkspaceTabContext, IDEWorkspaceDocumentProvider, DVTEditor>
{
    DVTSplitView *_designAreaSplitView;
    DVTReplacementView *_navReplacementView;
    DVTSplitView *_utilityAreaSplitView;
    DVTSplitViewItem *_navigatorAreaSplitViewItem;
    DVTSplitViewItem *_utilitiesAreaSplitViewItem;
    DVTReplacementView *_inspectorReplacementView;
    DVTReplacementView *_libraryReplacementView;
    DVTMutableOrderedSet *_cursorRectInterceptors;
    NSMapTable *_additionControllersForLaunchSessionTable;
    NSMutableArray *_debuggingUIControllerLifeCycleObservers;
    NSString *_userDefinedTabLabel;
    NSString *_lastValidUserDefinedName;
    NSMapTable *_observerTokenForLaunchSessionTable;
    NSMapTable *_observerTokenForLaunchSessionsDebuggingAdditionsTable;
    NSMutableArray *_uiControllerObserverEntries;
    DVTObservingToken *_mainCurrentLaunchSessionObserverToken;
    DVTObservingToken *_currentLaunchSessionStateObserverToken;
    DVTObservingToken *_launchSessionAlertErrorObservingToken;
    DVTObservingToken *_debugSessionObserverToken;
    DVTObservingToken *_debugSessionCoalescedStateObservingToken;
    DVTObservingToken *_firstTimeSnapshotObserverToken;
    DVTNotificationToken *_codesignFailureObserver;
    NSAlert *_stoppingExecutionAlert;
    id _pendingExecutionNotificationToken;
    IDEBuildAlertMonitor *_buildAlertMonitor;
    IDERunAlertMonitor *_runAlertMonitor;
    IDEARCConversionAssistantContext *_conversionAssistantContext;
    IDEObjCModernizationAssistantContext *_objcModernizationAssistantContext;
    IDEUnitTestsModernizationAssistantContext *_unitTestsModernizationAssistantContext;
    IDESwiftMigrationAssistantContext *_swiftMigrationAssistantContext;
    BOOL _userWantsUtilitiesVisible;
    BOOL _userWantsNavigatorVisible;
    BOOL _isAnimatingUtilities;
    BOOL _tabLoadingCompleted;
    BOOL _stateRestoreCompleted;
    int _assistantEditorsLayout;
    IDEWorkspaceDocument *_workspaceDocument;
    NSString *_name;
    IDELaunchSession *_currentLaunchSession;
    DVTReplacementView *_editorReplacementView;
    DVTObservingToken *_documentLoadingObservationToken;
    DVTObservingToken *_firstIssueObservationToken;
    DVTObservingToken *_buildCompleteObservationToken;
    NSString *_savedTabLabel;
    DVTFilePath *_savedTabFilePath;
    IDEAppChooserWindowController *_appChooserWindowController;
    IDEExecutionHoldAlertHelper *_executionHoldAlertHelper;
}

+ (id)keyPathsForValuesAffectingTabLabel;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingEditorArea;
+ (id)keyPathsForValuesAffectingNavigatorArea;
+ (id)keyPathsForValuesAffectingWindowController;
+ (id)keyPathsForValuesAffectingShowNavigator;
+ (id)keyPathsForValuesAffectingShowUtilities;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (BOOL)automaticallyNotifiesObserversOfCurrentLaunchSession;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (int)defaultAssistantEditorsLayout;
+ (void)setDefaultAssistantEditorsLayout:(int)arg1;
+ (BOOL)automaticallyNotifiesObserversOfSavedTabFilePath;
+ (BOOL)automaticallyNotifiesObserversOfSavedTabLabel;
@property(retain) IDEExecutionHoldAlertHelper *executionHoldAlertHelper; // @synthesize executionHoldAlertHelper=_executionHoldAlertHelper;
@property(retain) IDEAppChooserWindowController *appChooserWindowController; // @synthesize appChooserWindowController=_appChooserWindowController;
@property(retain, nonatomic) DVTFilePath *savedTabFilePath; // @synthesize savedTabFilePath=_savedTabFilePath;
@property(copy, nonatomic) NSString *savedTabLabel; // @synthesize savedTabLabel=_savedTabLabel;
@property(retain) DVTObservingToken *buildCompleteObservationToken; // @synthesize buildCompleteObservationToken=_buildCompleteObservationToken;
@property(retain) DVTObservingToken *firstIssueObservationToken; // @synthesize firstIssueObservationToken=_firstIssueObservationToken;
@property(retain) DVTObservingToken *documentLoadingObservationToken; // @synthesize documentLoadingObservationToken=_documentLoadingObservationToken;
@property BOOL stateRestoreCompleted; // @synthesize stateRestoreCompleted=_stateRestoreCompleted;
@property(retain) DVTReplacementView *editorReplacementView; // @synthesize editorReplacementView=_editorReplacementView;
@property(nonatomic) BOOL tabLoadingCompleted; // @synthesize tabLoadingCompleted=_tabLoadingCompleted;
@property(nonatomic) int assistantEditorsLayout; // @synthesize assistantEditorsLayout=_assistantEditorsLayout;
@property(retain, nonatomic) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL isAnimatingUtilities; // @synthesize isAnimatingUtilities=_isAnimatingUtilities;
@property(nonatomic) BOOL userWantsNavigatorVisible; // @synthesize userWantsNavigatorVisible=_userWantsNavigatorVisible;
@property(nonatomic) BOOL userWantsUtilitiesVisible; // @synthesize userWantsUtilitiesVisible=_userWantsUtilitiesVisible;
@property(retain) DVTReplacementView *navigatorReplacementView; // @synthesize navigatorReplacementView=_navReplacementView;
@property(copy) NSString *userDefinedTabLabel; // @synthesize userDefinedTabLabel=_userDefinedTabLabel;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
@property(readonly) DVTFilePath *tabFilePath;
@property(readonly) NSString *tabLabel;
@property(retain) NSDocument<DVTTabbedWindowCreation> *document;
- (void)codesignFailureNotification:(id)arg1 forRunDestination:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;
- (id)_codesigningInfoDelegateProvider;
- (void)moveKeyboardFocusToPreviousArea:(id)arg1;
- (void)moveKeyboardFocusToNextArea:(id)arg1;
- (void)_moveKeyboardFocusToNextAreaForward:(BOOL)arg1;
- (id)_keyboardFocusAreas;
- (id)_currentFirstResponderArea;
- (void)performCloseWorkspace:(id)arg1;
- (void)_workspaceDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)setShowDisassemblyWhenDebugging:(id)arg1;
- (void)reloadConsole:(id)arg1;
- (void)clearConsole:(id)arg1;
- (void)viewMemory:(id)arg1;
- (void)_swiftMigrationFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showSwiftMigrationAssistant:(id)arg1;
- (void)_unitTestsModernizationFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showModernUnitTestsConversionAssistant:(id)arg1;
- (void)_objCModernizationFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showModernObjectiveCConversionAssistant:(id)arg1;
- (void)showARCConversionAssistant:(id)arg1;
- (void)showSharedLibrariesPopUp:(id)arg1;
- (void)attachByPIDOrName:(id)arg1;
- (void)attachToProcess:(id)arg1;
- (void)backgroundFetchEvent:(id)arg1;
- (void)stepOut:(id)arg1;
- (void)stepOverInstruction:(id)arg1;
- (void)stepOverThread:(id)arg1;
- (void)stepOver:(id)arg1;
- (void)stepIntoInstruction:(id)arg1;
- (void)stepIntoThread:(id)arg1;
- (void)stepInto:(id)arg1;
- (void)detach:(id)arg1;
- (void)pauseOrContinue:(id)arg1;
- (void)toggleBreakpoints:(id)arg1;
- (void)createTestFailureBreakpoint:(id)arg1;
- (void)createSymbolicBreakpoint:(id)arg1;
- (void)createExceptionBreakpoint:(id)arg1;
- (void)createSwiftErrorBreakpoint:(id)arg1;
- (void)_createBreakpointOfClass:(Class)arg1 sender:(id)arg2;
- (void)editWorkspaceUserSettings:(id)arg1;
- (void)newRunContext:(id)arg1;
- (void)takeScreenshot:(id)arg1;
- (void)createBot:(id)arg1;
- (void)manageRunContexts:(id)arg1;
- (void)selectPreviousDestination:(id)arg1;
- (void)selectNextDestination:(id)arg1;
- (void)selectPreviousRunContext:(id)arg1;
- (void)selectNextRunContext:(id)arg1;
- (CDUnknownBlockType)_prevIndex;
- (CDUnknownBlockType)_nextIndex;
- (void)_selectDestination:(CDUnknownBlockType)arg1;
- (void)_selectRunContext:(CDUnknownBlockType)arg1;
- (void)editActiveRunContext:(id)arg1;
- (void)editAndAnalyzeActiveRunContext:(id)arg1;
- (void)editBuildAndIntegrateActiveRunContext:(id)arg1;
- (void)editBuildAndArchiveActiveRunContext:(id)arg1;
- (void)editAndBuildForTestingActiveRunContext:(id)arg1;
- (void)editAndTestActiveRunContext:(id)arg1;
- (void)editAndBuildForProfilingActiveScheme:(id)arg1;
- (void)editAndProfileActiveScheme:(id)arg1;
- (void)editAndBuildForRunningActiveRunContext:(id)arg1;
- (void)editAndRunActiveRunContext:(id)arg1;
- (void)_doCommandForEditAndSchemeCommand:(id)arg1;
- (void)_doCommandForEditAndSchemeCommand:(id)arg1 schemeTask:(int)arg2;
- (void)showAppChooserIfNecessaryForScheme:(id)arg1 runDestination:(id)arg2 command:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (BOOL)_shouldShowAppChooserForScheme:(id)arg1 command:(id)arg2;
- (void)_showAppChooserForCurrentSchemeIfNecessaryForCommand:(id)arg1 launch:(CDUnknownBlockType)arg2;
- (void)showModalAlertForScheme:(id)arg1;
- (void)runWithoutBuildingForSchemeIdentifier:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
- (void)compileFileAtPath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)analyzeFileAtPath:(id)arg1;
- (void)generateAssemblyCodeForFilePath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)generatePreprocessedFileForFilePath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)cleanBuildFolder:(id)arg1;
- (void)reallyCleanBuildFolder;
- (void)cleanActiveRunContext:(id)arg1;
- (void)installActiveRunContext:(id)arg1;
- (void)analyzeActiveRunContext:(id)arg1;
- (void)buildAndRunToGenerateOptimizationProfileActiveRunContext:(id)arg1;
- (void)buildForInstallActiveRunContext:(id)arg1;
- (void)buildAndIntegrateActiveRunContext:(id)arg1;
- (void)buildAndArchiveActiveRunContext:(id)arg1;
- (void)buildActiveRunContext:(id)arg1;
- (void)testActiveRunContextWithoutBuilding:(id)arg1;
- (void)buildForTestActiveRunContext:(id)arg1;
- (void)profileUsingActiveRunContextWithOverridingTestingSpecifiers:(id)arg1;
- (void)testUsingActiveRunContextWithOverridingTestingSpecifiers:(id)arg1;
- (void)testActiveRunContext:(id)arg1;
- (void)profileActiveSchemeWithoutBuilding:(id)arg1;
- (void)buildForProfileActiveRunContext:(id)arg1;
- (void)profileActiveScheme:(id)arg1;
- (void)runActiveRunContextWithoutBuilding:(id)arg1;
- (void)_runWithoutBuildingForScheme:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
- (void)buildForRunActiveRunContext:(id)arg1;
- (void)_alertNonExistentWorkingDirectoryBeforeRunOrProfileForContext:(id)arg1 workingDirectory:(id)arg2 title:(id)arg3 defaultButton:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)_alertNonExistentWorkingDirectoryBeforeProfileForContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_alertNonExistentWorkingDirectoryBeforeRunForContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_askShouldBuildBeforeRunOrProfileForContext:(id)arg1 title:(id)arg2 defaultButton:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)runActiveRunContext:(id)arg1;
- (void)_runScheme:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
- (BOOL)_needToSwitchSchemeActionToLLDB:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_silentlySwitchToLLDBIfNecessary:(id)arg1;
- (void)_performDebuggableSchemeTask:(int)arg1 onScheme:(id)arg2 runDestination:(id)arg3 command:(id)arg4 commandName:(id)arg5 buildCommand:(int)arg6 filePath:(id)arg7 overridingTestingSpecifiers:(id)arg8 invocationRecord:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_debugSessionCoalescedStateChanged:(id)arg1 forDebugSession:(id)arg2;
- (BOOL)isActiveWorkspaceTabController;
- (id)debuggingAdditionUIControllersForLaunchSession:(id)arg1;
- (id)currentDebuggingAdditionUIControllers;
- (id)debugSessionController;
- (BOOL)_contentSizeCanBeZeroSize;
- (void)_performContextTask:(int)arg1 command:(id)arg2 commandName:(id)arg3 buildCommand:(int)arg4 filePath:(id)arg5 invocationRecord:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_performSchemeTask:(int)arg1 onScheme:(id)arg2 runDestination:(id)arg3 command:(id)arg4 commandName:(id)arg5 buildCommand:(int)arg6 filePath:(id)arg7 overridingTestingSpecifiers:(id)arg8 invocationRecord:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (BOOL)_launchingOrProfiling:(int)arg1 withNonExistentWorkingDirectory:(id)arg2;
- (void)_showWarningForBuild:(BOOL)arg1 forTest:(BOOL)arg2 forOtherExecution:(BOOL)arg3 trackersToStop:(id)arg4 taskActionBlock:(CDUnknownBlockType)arg5;
- (void)_runAnotherInstance:(id)arg1;
- (void)_acceptStoppingExecutionAlert:(id)arg1;
- (void)_rejectStoppingExecutionAlert:(id)arg1;
- (void)_cleanupAfterStoppingExecutionAlert;
- (void)_actuallyPerformSchemeTask:(int)arg1 onScheme:(id)arg2 runDestination:(id)arg3 command:(id)arg4 commandName:(id)arg5 buildCommand:(int)arg6 filePath:(id)arg7 overridingTestingSpecifiers:(id)arg8 invocationRecord:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)invalidateAllBuildAlertMonitors;
- (BOOL)_cleanBuildFolderWithExecutionContext:(id)arg1 commandName:(id)arg2 error:(id *)arg3;
- (void)observeBuildOperationForRestoringState:(id)arg1;
- (void)switchNavigatorOnBuild;
- (void)_newWindow:(id)arg1;
- (void)hideUtilitiesArea:(id)arg1;
- (void)showUtilitiesArea:(id)arg1;
- (BOOL)isUtilitiesAreaVisible;
- (void)toggleUtilitiesVisibilityAlternate:(id)arg1;
- (void)toggleUtilitiesVisibility:(id)arg1;
- (void)hideNavigator:(id)arg1;
- (BOOL)isNavigatorVisible;
- (void)toggleNavigatorsVisibility:(id)arg1;
- (void)changeToBreakpointsNavigator:(id)arg1;
- (void)changeToDebuggerNavigator:(id)arg1;
- (void)changeToFindNavigator:(id)arg1;
- (void)changeToTestNavigator:(id)arg1;
- (void)changeToIssuesNavigator:(id)arg1;
- (void)changeToLogsNavigator:(id)arg1;
- (void)changeToSymbolsNavigator:(id)arg1;
- (void)changeToStructureNavigator:(id)arg1;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (void)changeToNavigatorWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)_splitViewDidToggleClosed;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)_choiceWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 inUtilityArea:(id)arg3;
- (void)showLibraryWithChoiceFromSender:(id)arg1;
- (void)showInspectorWithChoiceFromSender:(id)arg1;
- (void)showInspectorCategoryWithExtensionIdentifier:(id)arg1;
- (void)showLibraryWithChoice:(id)arg1;
- (void)showInspectorWithChoice:(id)arg1;
- (id)libraryArea;
- (id)inspectorArea;
- (void)filterInNavigator:(id)arg1;
- (void)filterInLibrary:(id)arg1;
- (void)focusOnLibraryFilter;
- (void)changeToAssistantLayout_BH:(id)arg1;
- (void)changeToAssistantLayout_BV:(id)arg1;
- (void)changeToAssistantLayout_TH:(id)arg1;
- (void)changeToAssistantLayout_TV:(id)arg1;
- (void)changeToAssistantLayout_LH:(id)arg1;
- (void)changeToAssistantLayout_LV:(id)arg1;
- (void)changeToAssistantLayout_RH:(id)arg1;
- (void)changeToAssistantLayout_RV:(id)arg1;
- (void)_changeToAssistantLayoutForActionSelector:(SEL)arg1;
- (void)changeToVersionEditorLogView:(id)arg1;
- (void)changeToVersionEditorBlameView:(id)arg1;
- (void)changeToVersionEditorComparisonView:(id)arg1;
- (void)_changeToVersionEditorSubmode:(int)arg1;
- (void)changeToVersionEditor:(id)arg1;
- (void)changeToGeniusEditor:(id)arg1;
- (void)changeToStandardEditor:(id)arg1;
- (void)_changeToEditorMode:(int)arg1;
- (void)cancelCurrentExecution:(id)arg1;
- (void)resetEditor:(id)arg1;
- (void)removeAssistantEditor:(id)arg1;
- (void)addAssistantEditor:(id)arg1;
@property(readonly) IDEWorkspaceTabController *structureEditWorkspaceTabController;
@property(readonly) IDEWorkspace *structureEditWorkspace;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_validateEditorLayoutUserInterfaceItem:(id)arg1 forActionSelector:(SEL)arg2;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly) IDEEditorArea *editorArea;
@property(readonly) IDENavigatorArea *navigatorArea;
@property(readonly) IDEWorkspaceWindowController *windowController;
- (id)splitView:(id)arg1 needsRectanglesForViewsWithState:(id)arg2 forSize:(struct CGSize)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_adjustUtilityAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (void)_adjustDesignAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (id)_framesForDesignAreaWithNavigatorState:(int)arg1 editorAreaState:(int)arg2 utilityAreaState:(int)arg3 forSize:(struct CGSize)arg4;
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGSize)minimumSizeForView:(id)arg1;
- (void)updateMinimumWindowSize:(BOOL)arg1;
- (struct CGSize)minimumSizeForDesignArea;
- (struct CGSize)minimumSizeForDesignAreaIfNavigatorVisible:(BOOL)arg1 editorVisisble:(BOOL)arg2 andUtilityAreaVisible:(BOOL)arg3;
- (void)_removeCursorRectInterceptor:(id)arg1;
- (void)_addCursorRectInterceptor:(id)arg1;
- (void)_interceptWillInvalidateCursorRectsForViewsWithNoTrackingAreas;
- (void)_interceptWillInvalidateCursorRectsForView:(id)arg1;
- (BOOL)_interceptAddCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3 inWindow:(id)arg4;
- (BOOL)_interceptSetCursorForMouseLocation:(struct CGPoint)arg1 inWindow:(id)arg2;
- (void)_pushDefaultPrimaryEditorFrameSize;
@property BOOL showNavigator;
@property BOOL showUtilities;
- (id)workspace;
- (void)_removePendingDebuggingAdditionUIControllerObserversForLaunchSession:(id)arg1;
- (void)_notifyAndRemoveObserversForCreatedUIController:(id)arg1 inLaunchSession:(id)arg2;
- (id)debuggingAdditionUIControllerMatchingClass:(id)arg1 forLaunchSession:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)debuggingAdditionUIControllerMatchingID:(id)arg1 forLaunchSession:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_createDebuggingAdditionUIControllersForDebuggingAddition:(id)arg1;
- (void)_createDebuggingAdditionUIControllersForLaunchSession:(id)arg1;
- (void)dismissExecutionHoldAlert;
- (void)showExecutionHoldAlertWithError:(id)arg1;
- (void)showAlertModallyInWorkspaceForError:(id)arg1;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)workspaceWindowIsClosing;
- (void)viewDidInstall;
- (void)_performExtraViewDidInstallWork;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_revertStateForNewWindowWithDictionary:(id)arg1 simpleEditorWindowLayout:(BOOL)arg2;
- (void)_primitiveSetAssistantEditorsLayout:(int)arg1;
- (void)loadView;
- (void)setSplitGroupAccessibility;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

