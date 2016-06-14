//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

#import <IDEKit/DVTFindPatternManager-Protocol.h>
#import <IDEKit/IDEProgressSearchFieldCommandDelegate-Protocol.h>
#import <IDEKit/IDEProgressSearchFieldDelegate-Protocol.h>
#import <IDEKit/NSAnimationDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>
#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTFindPatternTextField, DVTLayoutView_ML, DVTSplitViewItem, DVTStackView_ML, IDEBatchFindLocationPickerView, IDEBatchFindQuery, IDEBatchFindReplaceButtonLayoutView, IDEBatchFindReplaceableSheetController, IDEBatchFindResultsOutlineController, IDEBatchFindStrategiesController, IDEBatchFindTwoButtonLayout, IDECallHierarchyViewController, IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, IDEProgressSearchField, NSArray, NSAttributedString, NSButton, NSMenu, NSMutableArray, NSPopUpButton, NSPopUpButtonCell, NSString, NSTextField, NSView;

@interface IDEBatchFindNavigator : IDENavigator <NSTextFieldDelegate, NSPopoverDelegate, NSAnimationDelegate, IDEProgressSearchFieldCommandDelegate, IDEProgressSearchFieldDelegate, DVTFindPatternManager>
{
    DVTStackView_ML *searchContentView;
    DVTBorderedView *topBorderView;
    DVTBorderedView *bottomBorderView;
    DVTStackView_ML *bottomStackView;
    NSView *replaceView;
    IDEBatchFindReplaceButtonLayoutView *replaceButtonView;
    DVTBorderedView *statusView;
    DVTBorderedView *statusBorderedView;
    NSTextField *resultsField;
    IDEPathControl *_pathControl;
    NSPopUpButton *_findModeButton;
    IDEProgressSearchField *_findStringField;
    DVTFindPatternTextField *_replaceStringField;
    NSButton *_scopeButton;
    DVTSplitViewItem *_contentViewSplitViewItem;
    DVTSplitViewItem *_locationPickerSplitViewItem;
    NSMutableArray *_observerTokens;
    int _findMode;
    NSAttributedString *_findAttributedString;
    NSAttributedString *_replaceAttributedString;
    NSString *_statusString;
    NSString *_statusTitle;
    double _lastStatusUpdate;
    double _lastStatusUpdateDrawTime;
    double _batchFindStartTime;
    double _totalBatchFindTime;
    double _minBatchSearchTime;
    double _maxBatchSearchTime;
    long long _totalBatchFindCount;
    long long _totalResultsCount;
    double _minResultperSec;
    double _maxResultperSec;
    NSArray *_selectedResultNavigables;
    NSArray *_selectedObjects;
    IDEBatchFindReplaceableSheetController *_replacePreviewSheet;
    BOOL _configurationControllerInited;
    IDEBatchFindStrategiesController *_configurationController;
    IDEBatchFindQuery *_activeQuery;
    NSArray *_rootNavigables;
    IDENavigableItem *_selectedNavigable;
    IDENavigableItemCoordinator *_findMenuNavigableItemCoordinator;
    int _firstLevelIndex;
    int _secondLevelIndex;
    int _thirdLevelIndex;
    NSArray *_strategiesControllerObjects;
    NSArray *_criteriaEditorObjects;
    BOOL _startSearchAfterHidingLocationPicker;
    IDECallHierarchyViewController *_callHierarchyViewController;
    BOOL _findStringValid;
    BOOL _showingLocationPicker;
    IDEBatchFindLocationPickerView *_locationPicker;
    NSPopUpButton *_matchCaseButton;
    DVTLayoutView_ML *_contentView;
    IDEBatchFindTwoButtonLayout *_twoButtonLayout;
    NSString *_findResultFilterString;
    NSString *_lastFindString;
    IDEBatchFindResultsOutlineController *_resultsOutlineController;
    NSPopUpButtonCell *_matchCasePopUpButtonCell;
    NSMenu *_matchCasePopUpMenu;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingCanShowReplacePreview;
+ (id)keyPathsForValuesAffectingCanReplaceAll;
+ (id)_keyPathsForValuesAffectingCanReplaceAllAndCanShowReplacePreview;
+ (id)keyPathsForValuesAffectingCanReplace;
+ (id)keyPathsForValuesAffectingReplaceString;
+ (id)keyPathsForValuesAffectingFindString;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibName;
@property(retain) NSMenu *matchCasePopUpMenu; // @synthesize matchCasePopUpMenu=_matchCasePopUpMenu;
@property(retain) NSPopUpButtonCell *matchCasePopUpButtonCell; // @synthesize matchCasePopUpButtonCell=_matchCasePopUpButtonCell;
@property(retain) IDENavigableItemCoordinator *findMenuNavigableItemCoordinator; // @synthesize findMenuNavigableItemCoordinator=_findMenuNavigableItemCoordinator;
@property(readonly) NSArray *rootNavigables; // @synthesize rootNavigables=_rootNavigables;
@property(retain, nonatomic) IDEBatchFindResultsOutlineController *resultsOutlineController; // @synthesize resultsOutlineController=_resultsOutlineController;
@property(retain, nonatomic) IDEBatchFindStrategiesController *configurationController; // @synthesize configurationController=_configurationController;
@property(retain) IDEBatchFindQuery *activeQuery; // @synthesize activeQuery=_activeQuery;
@property(nonatomic) BOOL showingLocationPicker; // @synthesize showingLocationPicker=_showingLocationPicker;
@property(nonatomic) BOOL findStringValid; // @synthesize findStringValid=_findStringValid;
@property(copy, nonatomic) NSString *lastFindString; // @synthesize lastFindString=_lastFindString;
@property(copy) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(copy, nonatomic) NSAttributedString *replaceAttributedString; // @synthesize replaceAttributedString=_replaceAttributedString;
@property(copy, nonatomic) NSString *findResultFilterString; // @synthesize findResultFilterString=_findResultFilterString;
@property(retain) IDEBatchFindTwoButtonLayout *twoButtonLayout; // @synthesize twoButtonLayout=_twoButtonLayout;
@property(retain) DVTLayoutView_ML *contentView; // @synthesize contentView=_contentView;
@property(retain) NSPopUpButton *matchCaseButton; // @synthesize matchCaseButton=_matchCaseButton;
@property(retain) IDEBatchFindLocationPickerView *locationPicker; // @synthesize locationPicker=_locationPicker;
@property(copy, nonatomic) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
@property(nonatomic) int findMode; // @synthesize findMode=_findMode;
- (void).cxx_destruct;
- (void)_insertFindPattern:(id)arg1;
- (void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2;
- (BOOL)_hasValidFindPattern;
- (BOOL)_hasFindPattern;
- (id)replaceFieldForField:(id)arg1;
- (id)findFieldForField:(id)arg1;
- (id)_replaceField;
- (id)_findField;
- (BOOL)supportsPatterns;
- (void)searchField:(id)arg1 receivedCommandSelector:(SEL)arg2;
- (id)filterDefinitionIdentifier;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)_cancelFindOperation;
- (void)_cancelCallHierarchyOperations;
- (void)_startFindOperation;
- (void)_replaceResults:(id)arg1 withString:(id)arg2;
- (void)_doReplaceOnResults:(id)arg1;
- (void)_prepareReplaceOnResults:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)replaceAllAction:(id)arg1;
- (void)replaceSelectedAction:(id)arg1;
- (void)findSymbolInWorkspace:(id)arg1;
- (void)searchInProjectNavigatorSelection:(id)arg1;
- (BOOL)makePrimaryFilterControlKey;
- (void)selectFindResult:(id)arg1 inResultGroup:(id)arg2;
- (void)selectFindField:(id)arg1;
- (void)replaceStringFieldAction:(id)arg1;
- (void)searchFieldCancelled:(id)arg1;
- (void)findStringFieldAction:(id)arg1;
- (id)_localizedNumberDescription:(long long)arg1;
- (id)_currentScopeDescription;
- (BOOL)_searchShouldIncludeRegularExpressionSearchForString:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)_recentsMenu;
- (void)_restoreFindHistory:(id)arg1;
- (void)_updateSearchLocations:(id)arg1;
- (void)_updateOutputSelection;
- (void)_statusNeedsUpdating:(BOOL)arg1;
- (void)_updateStatus;
- (id)_statusAttributes;
- (void)_setupSearchField;
- (void)_uninstallBindings;
- (void)_setupBindings;
- (void)primitiveInvalidate;
- (void)_setupObservers;
- (void)clearSearchHistory;
- (void)performReplaceFromPreview:(id)arg1;
- (void)matchCaseButtonAction:(id)arg1;
- (void)_updateMatchCaseButton;
- (void)showLocationPicker:(id)arg1;
- (void)locationPickerSelectionUpdated;
- (void)locationPickerDeleteAction:(id)arg1;
- (void)locationPickerEditAction:(id)arg1;
- (void)locationPickerDoubleClickAction:(id)arg1;
- (void)hideLocationPicker:(id)arg1;
- (void)animateLocationPicker:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (id)filterControlBar;
- (void)showReplacePreview:(id)arg1;
@property(readonly) BOOL canShowReplacePreview;
@property(readonly) BOOL canReplaceAll;
@property(readonly) BOOL canReplace;
- (void)_updateContentView;
- (void)updateScopeItems:(id)arg1;
- (BOOL)pathControlIsEnabled;
- (void)sizeToFitWithAnimation:(BOOL)arg1;
@property(nonatomic) int findType;
@property(copy) NSString *replaceString;
@property(copy, nonatomic) NSString *findString;
- (void)sanitizeStrings;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)delegateFirstResponder;
- (void)updatePathbar;
- (void)_updatePlaceholder;
@property(retain) IDENavigableItem *selectedNavigable;
- (void)updateMenuState:(id)arg1 forLevel:(int)arg2;
- (void)_setSelectedNavigable:(id)arg1;
- (void)showCallHierarchyForSymbol:(id)arg1;
- (void)_setRootSymbolsForCallHierarchy:(id)arg1;
- (void)showCallHierarchyForFindString:(id)arg1;
- (void)_addHistoryItemForCallHierarchy:(id)arg1;
- (void)_showCallHierarchyForFindString:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)loadView;
- (void)setupLocationPicker;
- (void)updateScopeString;
- (id)getScopeString;
- (id)domainIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

