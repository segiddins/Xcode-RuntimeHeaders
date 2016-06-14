//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTStateRepositoryDelegate-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/DVTTabbedWindowCreation-Protocol.h>
#import <IDEKit/IDEActiveRunContextStoring-Protocol.h>
#import <IDEKit/IDEMustCloseOnQuitDocument-Protocol.h>
#import <IDEKit/IDEPreBuildSavingDelegate-Protocol.h>
#import <IDEKit/IDETestManagerUITestingPermissionSheetDelegate-Protocol.h>
#import <IDEKit/IDEWorkspaceDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, DVTStackBacktrace, DVTStateRepository, DVTStateToken, DVTSystemActivityToken, IDEActivityReportManager, IDEScriptingSchemeActionResult, IDESourceControlWorkspaceUIHandler, IDEUIRecordingManager, IDEUITestingTCCPermissionWindowController, IDEWorkspace, IDEWorkspaceWindowController, NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol DVTInvalidation;

@interface IDEWorkspaceDocument : NSDocument <IDEActiveRunContextStoring, IDEWorkspaceDelegate, IDETestManagerUITestingPermissionSheetDelegate, DVTInvalidation, DVTTabbedWindowCreation, DVTStatefulObject, DVTStateRepositoryDelegate, IDEMustCloseOnQuitDocument, IDEPreBuildSavingDelegate>
{
    DVTStackBacktrace *_invalidationBacktrace;
    DVTStateRepository *_stateRepository;
    DVTStateToken *_stateToken;
    IDEWorkspace *_workspace;
    IDEWorkspaceWindowController *_lastActiveWorkspaceWindowController;
    NSMutableArray *_recentEditorDocumentURLs;
    NSHashTable *_allRecentEditorDocumentURLs;
    NSMutableDictionary *_defaultEditorStateTree;
    NSMutableDictionary *_defaultPrimaryEditorFrameSizes;
    NSMutableSet *_editedDocuments;
    NSMapTable *_controllerForDebugSessionTable;
    DVTDelayedInvocation *_stateSavingDelayedInvocation;
    IDEActivityReportManager *_activityReportManager;
    IDESourceControlWorkspaceUIHandler *_sourceControlWorkspaceUIHandler;
    DVTObservingToken *_isWorkspaceIdleToken;
    DVTObservingToken *_launchSessionsObservingToken;
    DVTObservingToken *_launchSessionsRunnablePIDObservingToken;
    DVTNotificationToken *_launchSessionErrorToken;
    DVTObservingToken *_currentDebugSessionObserverToken;
    DVTNotificationToken *_applicationIsQuittingNotificationToken;
    DVTObservingToken *_currentExecutionTrackerObservingToken;
    NSMapTable *_hasGUIValueForLaunchSessionMap;
    NSDictionary *_previousSessionActiveRunContextInfo;
    NSDictionary *_previousSessionActiveRunDestinationInfo;
    CDUnknownBlockType _upgradeCompletionBlock;
    NSMutableArray *_stateChangeObservingTokens;
    NSMutableDictionary *_tabStateContextForTabNameMap;
    BOOL _lastWorkspaceWindowHasStartedClosing;
    BOOL _applicationIsTerminating;
    BOOL _isClosing;
    BOOL _isInvalidated;
    BOOL _didSetupUISubsystems;
    BOOL _isCheckingCanClose;
    id _openingPerformanceMetricIdentifier;
    DVTSystemActivityToken *_systemActivityToken;
    DVTObservingToken *_executionTrackerIsFinishedObservingToken;
    DVTObservingToken *_executionTrackerWantsHoldObservingToken;
    DVTObservingToken *_executionEnvironmentCurrentBuildOperationObservingToken;
    DVTObservingToken *_simpleFilesFocusedObservingToken;
    DVTPerformanceMetric *_closingMetric;
    BOOL _createdAsUntitled;
    IDEUIRecordingManager<DVTInvalidation> *_uiRecordingManager;
    IDEScriptingSchemeActionResult *_lastScriptingSchemeActionResult;
    IDEUITestingTCCPermissionWindowController *_TCCPermissionWindowController;
}

+ (id)keyPathsForValuesAffectingUserWantsBreakpointsActivated;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)_setMaximumRecentEditorDocumentCount:(long long)arg1;
+ (long long)_maximumRecentEditorDocumentCount;
+ (long long)_unlimitedMaximumRecentEditorDocumentCountMarker;
+ (id)documentForWorkspace:(id)arg1;
+ (id)debuggerUIExtensionForLaunchSession:(id)arg1;
+ (id)documentTypeName;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)autosavesDrafts;
+ (BOOL)autosavesInPlace;
+ (BOOL)preservesVersions;
+ (void)initialize;
@property(retain) IDEUITestingTCCPermissionWindowController *TCCPermissionWindowController; // @synthesize TCCPermissionWindowController=_TCCPermissionWindowController;
@property(nonatomic) BOOL createdAsUntitled; // @synthesize createdAsUntitled=_createdAsUntitled;
@property(retain) IDEScriptingSchemeActionResult *lastScriptingSchemeActionResult; // @synthesize lastScriptingSchemeActionResult=_lastScriptingSchemeActionResult;
@property(retain, nonatomic) IDEUIRecordingManager<DVTInvalidation> *uiRecordingManager; // @synthesize uiRecordingManager=_uiRecordingManager;
@property(retain) IDESourceControlWorkspaceUIHandler *sourceControlWorkspaceUIHandler; // @synthesize sourceControlWorkspaceUIHandler=_sourceControlWorkspaceUIHandler;
@property BOOL applicationIsTerminating; // @synthesize applicationIsTerminating=_applicationIsTerminating;
@property(retain) NSMutableDictionary *tabStateContextForTabNameMap; // @synthesize tabStateContextForTabNameMap=_tabStateContextForTabNameMap;
@property(retain) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
- (void).cxx_destruct;
- (id)dvtExtraBindings;
- (id)storedRunDestinationSelectable;
- (id)storedRunContextName;
- (id)activeRunDestinationInfo;
- (id)activeRunContextInfo;
- (void)displayWorkspaceSheetForUITestingPermissionWithReply:(CDUnknownBlockType)arg1;
@property(copy) NSArray *orderedWindowControllerNames;
@property BOOL userWantsBreakpointsActivated;
@property(copy) NSDictionary *stateSavingDefaultEditorStatesForURLs;
@property(copy) NSArray *stateSavingRecentEditorDocumentURLs;
- (void)commitStateToDictionary:(id)arg1;
- (id)_tabStateContextForTabController:(id)arg1 owningWindowController:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) DVTStateRepository *stateRepository; // @synthesize stateRepository=_stateRepository;
- (void)configureStateSavingObservers;
- (void)stateRepositoryDidChange:(id)arg1;
- (BOOL)readStateData;
- (void)writeStateData;
- (id)_stateSavingCustomDataSpecifier;
- (void)removeWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
- (id)showOrCreateTabNamed:(id)arg1 inNewWindow:(BOOL)arg2 restoringAfter:(double)arg3;
- (id)_recreateTabNamed:(id)arg1 withTabStateContext:(id)arg2 shouldCreateWindow:(BOOL)arg3 restoringAfter:(double)arg4;
- (id)_bestWindowControllerForTabNamed:(id)arg1 withTabStateContext:(id)arg2 shouldCreateWindow:(BOOL)arg3 restoringAfter:(double)arg4;
- (id)_makeTabbedWindowControllerWithStateFromTabController:(id)arg1 documentURL:(id)arg2 simpleEditorWindowLayout:(BOOL)arg3 frontmost:(BOOL)arg4;
- (id)windowControllerWithUniqueIdentifier:(id)arg1;
- (id)makeTabbedWindowControllerShowingWindow:(BOOL)arg1;
- (id)_makeTabbedWindowControllerShowingWindow:(BOOL)arg1 createNewTabUponLoadIfNoTabsExist:(BOOL)arg2;
- (void)_addRecentEditorDocumentURL:(id)arg1;
@property(readonly) NSArray *recentEditorDocumentURLs;
- (id)_allRecentEditorDocumentURLs;
- (void)_clearRecentEditorDocumentURLs;
@property(readonly) IDEActivityReportManager *activityReportManager;
- (void)windowControllerWindowWillClose:(id)arg1;
- (void)_editorDocumentWillClose:(id)arg1;
- (void)_willEditDocument:(id)arg1;
- (void)_didOpenDocument:(id)arg1;
- (id)_editedDocuments;
- (void)_setDefaultPrimaryEditorFrameSize:(struct CGSize)arg1 forDocumentURL:(id)arg2;
- (struct CGSize)_defaultPrimaryEditorFrameSizeForDocumentURL:(id)arg1;
- (void)_cacheDefaultEditorStateDictionary:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 forDocumentURL:(id)arg3;
- (id)_defaultEditorStateDictionaryForDocumentExtensionIdentifier:(id)arg1 forDocumentURL:(id)arg2;
- (id)debugSessionControllerForLaunchSession:(id)arg1;
- (void)activateTargetProcessForLaunchSession:(id)arg1;
- (void)_delayedActivateTargetProcess:(id)arg1;
- (BOOL)_isXcodeActiveAndTargetInActivatableState:(id)arg1;
- (void)_setAppIcon:(id)arg1 forLaunchSession:(id)arg2;
- (id)_appIconForRunnableLocation:(id)arg1 pid:(int)arg2;
- (void)_updateIconForLaunchSessionForMacIfNecessary:(id)arg1 pid:(int)arg2;
- (void)_activateTargetProcess:(id)arg1 tryCounter:(long long)arg2;
- (void)_setLaunchSessionToIntensiveFileIODoneStateIfNecessary:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (BOOL)_isExpendableAsUnsavedDocument;
- (void)_handleDocumentFileChanges:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_readFromURL:(id)arg1 ofType:(id)arg2 simpleFilesFocused:(BOOL)arg3 error:(id *)arg4;
- (BOOL)isUIStateSavingEnabled;
- (void)setLastActiveWorkspaceWindowController:(id)arg1;
- (id)activeWorkspaceWindowController;
@property(readonly) IDEWorkspace *workspace;
- (void)_setWorkspace:(id)arg1;
- (void)_workspace:(id)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(id)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
- (void)_container:(id)arg1 didChangeFromFilePath:(id)arg2 toFilePath:(id)arg3;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (void)performBlockAfterPreBuildSave:(CDUnknownBlockType)arg1;
- (BOOL)_shouldShowAutosaveButtonForWindow:(id)arg1;
- (BOOL)_checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id *)arg1;
- (void)setupUISubsystems;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_setupLaunchSessionsObservation;
- (void)_presentErrorForLaunch:(id)arg1;
- (id)_firstErrorForExecutionTracker:(id)arg1;
- (void)_recordWorkspaceStatisticsLater;
- (void)_recordWorkspaceStatistics;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)saveAsWorkspace:(id)arg1 showAlert:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_upgradeAlertDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)_workspaceDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)saveAsWorkspace:(id)arg1;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)duplicateDocument:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (BOOL)canCloseDocumentAtQuit;
- (BOOL)_canCloseWorkspaceDocument;
- (id)_dirtyDocuments;
- (BOOL)_closeAfterSavingDirtyEditorDocumentsWithCancelButton:(BOOL)arg1;
- (void)close;
- (void)primitiveInvalidate;
- (void)writeStateIfNeeded;
- (BOOL)dvt_hasBeenEditedSinceLastUserInitiatedSave;
@property(readonly, getter=isClosed) BOOL closed;
- (id)_openingPerformanceMetricIdentifier;
- (void)dvt_shouldDeallocate;
- (BOOL)_isLocatedByURL:(id)arg1 becauseOfAutosavedContentsFile:(char *)arg2;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithWorkspace:(id)arg1;
- (id)init;
- (id)_openWindowTerminationDisablingReason;
- (id)_performScriptingSchemeCommand:(unsigned long long)arg1 forScriptCommand:(id)arg2;
- (id)sdefSupport_stop:(id)arg1;
- (id)sdefSupport_test:(id)arg1;
- (id)sdefSupport_run:(id)arg1;
- (id)sdefSupport_clean:(id)arg1;
- (id)sdefSupport_build:(id)arg1;
- (id)sdefSupport_path;
- (id)sdefSupport_fileURL;
- (id)objectSpecifier;
- (id)displayName;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)sdefSupport_schemeActionResults;
- (id)sdefSupport_lastSchemeActionResult;
- (void)setSdefSupport_activeRunDestination:(id)arg1;
- (id)sdefSupport_activeRunDestination;
- (id)sdefSupport_runDestinations;
- (void)setSdefSupport_activeScheme:(id)arg1;
- (id)sdefSupport_activeScheme;
- (id)sdefSupport_schemes;
- (id)sdefSupport_projects;
- (BOOL)_checkForLoading;
- (BOOL)sdefSupport_isLoaded;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

