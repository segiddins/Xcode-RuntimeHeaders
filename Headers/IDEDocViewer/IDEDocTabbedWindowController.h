//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEDocViewer/DVTInvalidation-Protocol.h>
#import <IDEDocViewer/DVTStateRepositoryDelegate-Protocol.h>
#import <IDEDocViewer/DVTStatefulObject-Protocol.h>
#import <IDEDocViewer/IDEDocSearchFieldEditorDelegate-Protocol.h>
#import <IDEDocViewer/IDEDocTabbedWindowControllerProtocol-Protocol.h>
#import <IDEDocViewer/IDEEditorMenuContentProvider-Protocol.h>
#import <IDEDocViewer/IDETabbedWindowController-Protocol.h>
#import <IDEDocViewer/NSTextFieldDelegate-Protocol.h>
#import <IDEDocViewer/NSToolbarDelegate-Protocol.h>
#import <IDEDocViewer/NSWindowDelegate-Protocol.h>
#import <IDEDocViewer/NSWindowRestoration-Protocol.h>

@class DVTDelayedInvocation, DVTHUDPopUpController, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTStateRepository, DVTStateToken, IDEDocDocumentationTabViewController, IDEDocSampleCodeDownloadManager, IDEDocSearchController, IDEDocSearchFieldEditor, IDEDocSearchResultsController, IDEDocToolbarItem, NSMapTable, NSMutableSet, NSString, NSTextField, NSToolbarItem;

@interface IDEDocTabbedWindowController : NSWindowController <IDEDocSearchFieldEditorDelegate, NSTextFieldDelegate, NSToolbarDelegate, NSWindowDelegate, NSWindowRestoration, DVTInvalidation, DVTStatefulObject, DVTStateRepositoryDelegate, IDEDocTabbedWindowControllerProtocol, IDEEditorMenuContentProvider, IDETabbedWindowController>
{
    DVTObservingToken *_tabLabelWatcher;
    DVTObservingToken *_sidebarVisibleWatcher;
    DVTObservingToken *_firstResponderWatcher;
    id _leftMouseUpEventMonitor;
    IDEDocSearchResultsController *_toolbarSearchResultsController;
    IDEDocSearchFieldEditor *_searchFieldEditor;
    IDEDocSearchController *_searchResultsPageSearchController;
    DVTNotificationToken *_windowDidOrderOffScreenObservingToken;
    DVTNotificationToken *_selectedReferenceChangedObservingToken;
    IDEDocSampleCodeDownloadManager *_downloadManager;
    DVTObservingToken *_downloadsObservingToken;
    NSMapTable *_downloadToProgressObservingToken;
    NSTextField *_toolbarSearchTextField;
    NSToolbarItem *_searchToolbarItem;
    IDEDocToolbarItem *_historyControlToolbarItem;
    NSToolbarItem *_toggleNavigatorToolbarItem;
    DVTHUDPopUpController *_hudPopUpController;
    DVTObservingToken *_hudPopUpFirstResponderObservingToken;
    NSString *_downloadsToolbarItemIdentifier;
    NSToolbarItem *_downloadsToolbarItem;
    NSToolbarItem *_shareToolbarItem;
    DVTStateToken *_stateToken;
    DVTStateRepository *_stateRepository;
    NSMutableSet *_stateChangeObservingTokens;
    DVTDelayedInvocation *_stateSavingDelayedInvocation;
    DVTNotificationToken *_progressFinishedObservingToken;
    DVTNotificationToken *_applicationIsWillTerminateNotificationToken;
    BOOL _disableWindowRestoration;
    IDEDocDocumentationTabViewController *_documentationTabViewController;
    NSString *_currentSearchString;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)activeDocumentationWindowController;
+ (id)_activeDocumentationWindowController;
+ (BOOL)activeDocumentationWindowControllerExists;
+ (void)initialize;
@property(copy) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(retain, nonatomic) IDEDocDocumentationTabViewController *documentationTabViewController; // @synthesize documentationTabViewController=_documentationTabViewController;
- (void).cxx_destruct;
- (id)extensionForMenuContent;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)_downloadsToolbarItemAction:(id)arg1;
- (void)_closeDownloadsHUDPopUp:(id)arg1;
- (void)_updateDownloadHUDLocation;
- (void)_showDownloadsHUDPopUp:(id)arg1;
- (id)_downloadsToolbarItem;
- (void)_shareToolbarItemAction:(id)arg1;
- (id)_shareToolbarItem;
- (void)_historyControlToolbarItemAction:(id)arg1;
- (id)_historyControlToolbarItem;
- (void)_toggleNavigatorToolbarItemAction:(id)arg1;
- (id)_toggleNavigatorToolbarItem;
- (id)_searchToolbarItem;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)_jumpToCounterpartUp:(BOOL)arg1;
- (void)_swipeToGoForward:(BOOL)arg1;
- (id)_stateRepositoryFilePath;
- (BOOL)_loadStateData:(id *)arg1;
- (BOOL)_saveStateData:(id *)arg1;
- (void)stateRepositoryDidChange:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (id)stateToken;
- (void)setStateToken:(id)arg1;
- (void)_configureStateSavingObservers;
- (void)toolbarSearchField_FieldEditorDidBecomeFocused;
- (void)toolbarSearchField_FieldEditorDidComplete:(id)arg1;
- (void)toolbarSearchField_FieldEditorInsertTab:(id)arg1;
- (void)toolbarSearchField_FieldEditorInsertNewLine:(id)arg1;
- (void)toolbarSearchField_FieldEditorDidMoveUp:(id)arg1;
- (void)toolbarSearchField_FieldEditorDidMoveDown:(id)arg1;
- (void)endEditingFor:(id)arg1;
- (id)fieldEditorStringValue;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)showWindow:(id)arg1 focusSearchField:(BOOL)arg2;
- (void)loadURL:(id)arg1;
- (void)loadURL:(id)arg1 inNewTab:(BOOL)arg2;
- (void)goBackInHistoryByCommand:(id)arg1;
- (void)goForwardInHistoryByCommand:(id)arg1;
@property(readonly) NSString *selectedTextInWebView;
- (void)useSelectionForFind:(id)arg1;
- (void)focusSearchField:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)makeNewTab:(id)arg1;
- (void)newTab:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)newWindowForTab:(id)arg1;
- (void)find:(id)arg1;
- (void)hideFindBar:(id)arg1;
- (void)moveKeyboardFocusToNextArea:(id)arg1;
- (void)findInWorkspace:(id)arg1;
- (void)jumpToLine:(id)arg1;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)revealInNavigator:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)_updateCustomToolbarItems;
- (id)_sharingURL;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
@property(readonly) BOOL canMakeTextStandardSize;
@property(readonly) BOOL canZoomOut;
@property(readonly) BOOL canZoomIn;
- (void)showRESTReferenceNavigator:(id)arg1;
- (void)showJSReferenceNavigator:(id)arg1;
- (void)showObjectiveCReferenceNavigator:(id)arg1;
- (void)showSwiftReferenceNavigator:(id)arg1;
- (void)filterInNavigator:(id)arg1;
- (void)toggleNavigatorsVisibility:(id)arg1;
- (void)makeTextStandardSize:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)toolbar_backForward:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)makeNewTabAndLoadURL:(id)arg1;
- (void)setWindowTitleFromTabViewController:(id)arg1;
- (void)clearSearchField;
- (void)executeSearchForString:(id)arg1;
- (void)closeResultsPanelAndClearSearchField;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)_searchWithString:(id)arg1;
- (void)windowDidLoad;
- (void)_endObservingDownload:(id)arg1;
- (void)_beginObservingDownload:(id)arg1;
- (void)_updateDownloadsButtonProgress;
- (void)primitiveInvalidate;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

