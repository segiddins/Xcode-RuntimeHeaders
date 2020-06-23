//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTStateRepositoryDelegate-Protocol.h>
#import <IDEKit/IDEWorkspaceDocumentProvider-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>
#import <IDEKit/NSWindowDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, DVTStateRepository, IDEExecutionEnvironment, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorDataCell, IDENavigatorOutlineView, IDEScheme, IDESchemeAction, IDESchemeCommand, IDESchemePathControlViewController, IDEWorkspaceDocument, NSArray, NSArrayController, NSButton, NSImageView, NSString, NSTextField, NSTouchBar, NSView, NSWindow;
@protocol IDEClientTrackingToken;

@interface IDERunSheetController : IDEViewController <NSTouchBarProvider, NSTouchBarDelegate, IDEWorkspaceDocumentProvider, DVTStateRepositoryDelegate, NSWindowDelegate>
{
    NSWindow *_sheetWindow;
    NSView *_contentView;
    DVTBorderedView *_masterBorderedView;
    DVTBorderedView *_detailBorderedView;
    DVTBorderedView *_detailContentBorderedView;
    IDENavigatorOutlineView *_runPhasesOutlineView;
    NSTextField *_nameField;
    NSImageView *_schemeImageView;
    NSButton *_sharedButton;
    NSArrayController *_customDataStoresArrayController;
    NSArray *_phaseModels;
    NSArray *_phaseModelNavigables;
    IDENavigatorDataCell *_phaseCell;
    IDENavigatorDataCell *_subphaseCell;
    NSWindow *_workspaceWindow;
    IDEWorkspaceDocument *_workspaceDocument;
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    IDESchemePathControlViewController *_pathControlViewController;
    DVTObservingToken *_runContextObservingToken;
    DVTObservingToken *_runContextClosingObservingToken;
    DVTObservingToken *_buildPhaseSubtitleObservingToken;
    DVTObservingToken *_launchPhaseSubtitleObservingToken;
    DVTObservingToken *_testPhaseSubtitleObservingToken;
    DVTObservingToken *_profilePhaseSubtitleObservingToken;
    DVTObservingToken *_analyzePhaseSubtitleObservingToken;
    DVTObservingToken *_archivePhaseSubtitleObservingToken;
    DVTObservingToken *_installPhaseSubtitleObservingToken;
    id <IDEClientTrackingToken> _clientTrackingToken;
    BOOL _okButtonReflectsSchemeCommand;
    IDESchemeCommand *_selectedSchemeCommand;
    NSString *_selectedSchemeCommandTitle;
    CDUnknownBlockType _completionBlock;
    Class _viewControllerClassForSelectedRunPhase;
    BOOL _isDetailViewContentBound;
    IDESchemeAction *_selectedRunPhase;
    BOOL _didSheetEnd;
    BOOL _runningOnManageSheet;
    DVTStateRepository *_stateRepository;
    DVTObservingToken *_runSheetSelectionObserver;
    DVTObservingToken *_runSheetContentObserver;
    DVTObservingToken *_buttonTitleObserver;
    NSButton *_goButton;
    NSButton *_doneButton;
    DVTReplacementView *_detailReplacementView;
}

+ (id)keyPathsForValuesAffectingRunContext;
+ (id)keyPathsForValuesAffectingExecutionEnvironment;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2 editingIdentity:(BOOL)arg3 forSchemeCommand:(id)arg4 okButtonReflectsSchemeCommand:(BOOL)arg5 showDoneButton:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (BOOL)useLegacyNib;
+ (id)sheetOpeningLogAspect;
- (void).cxx_destruct;
@property __weak DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property __weak NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property __weak NSButton *goButton; // @synthesize goButton=_goButton;
@property(copy) NSArray *phaseModelNavigables; // @synthesize phaseModelNavigables=_phaseModelNavigables;
@property(copy) NSArray *phaseModels; // @synthesize phaseModels=_phaseModels;
@property(retain) IDESchemeAction *selectedRunPhase; // @synthesize selectedRunPhase=_selectedRunPhase;
@property BOOL isDetailViewContentBound; // @synthesize isDetailViewContentBound=_isDetailViewContentBound;
@property Class viewControllerClassForSelectedRunPhase; // @synthesize viewControllerClassForSelectedRunPhase=_viewControllerClassForSelectedRunPhase;
@property(retain) NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
@property(retain) DVTObservingToken *buttonTitleObserver; // @synthesize buttonTitleObserver=_buttonTitleObserver;
@property(retain) DVTObservingToken *runSheetContentObserver; // @synthesize runSheetContentObserver=_runSheetContentObserver;
@property(retain) DVTObservingToken *runSheetSelectionObserver; // @synthesize runSheetSelectionObserver=_runSheetSelectionObserver;
@property(copy) NSString *selectedSchemeCommandTitle; // @synthesize selectedSchemeCommandTitle=_selectedSchemeCommandTitle;
@property(retain) IDESchemeCommand *selectedSchemeCommand; // @synthesize selectedSchemeCommand=_selectedSchemeCommand;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)windowDidResize:(id)arg1;
- (void)_updateSelectedSchemeCommand;
- (void)_updateSelectedRunPhaseRowIndex;
- (void)_bindDetailViewContent;
- (void)_unbindDetailViewContent;
- (void)_forceEditingToEnd;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (double)maxWidthForSchemePathControl;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)beginEditingIdentityForScheme:(id)arg1;
- (void)manageContextsAction:(id)arg1;
- (void)duplicateContextAction:(id)arg1;
- (void)sheetDoneAction:(id)arg1;
- (void)sheetGoAction:(id)arg1;
- (void)cancelOperation:(id)arg1;
@property(readonly) IDEScheme *runContext;
@property(readonly) IDEExecutionEnvironment *executionEnvironment;
- (void)primitiveInvalidate;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)stateRepositoryDidChange:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)_beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2 editingIdentity:(BOOL)arg3 forSchemeCommand:(id)arg4 okButtonReflectsSchemeCommand:(BOOL)arg5 showDoneButton:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (int)_runControllerPhaseRowIndexForSchemeCommand:(id)arg1;
- (void)_setUpObservation;
- (void)_setUpSchemeViews;
- (void)_setUpDetailView;
- (void)_setupMasterView;
- (void)_updatePhaseNavigables;
- (void)_chooserSelectedAction:(id)arg1;
- (id)_chooserViewsForViewController:(id)arg1;
- (id)_chooserButtonGroupItem;
- (id)_goButtonItem;
- (id)_doneButtonItem;
- (id)_replicateButton:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

