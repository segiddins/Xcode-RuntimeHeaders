//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFilterControlBarTarget-Protocol.h>
#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/IDEKeyBindingFieldCellDelegate-Protocol.h>

@class DVTBorderedView, DVTImageAndTextCell, DVTObservingToken, DVTOutlineView, DVTPreferenceSetManager, DVTReplacementView, IDESearchFilterControlBar, NSArray, NSButton, NSMenu, NSScrollView, NSString, NSTextField, NSTreeController, NSView;

@interface IDEKeyBindingsPrefsPaneController : IDEViewController <DVTOutlineViewDelegate, IDEKeyBindingFieldCellDelegate, DVTFilterControlBarTarget>
{
    NSArray *_keyBindingItems;
    NSString *_searchString;
    int _displayScope;
    int _searchScope;
    NSString *_statusText;
    NSArray *_conflictStatusItemCells;
    NSArray *_conflictWithHotKeyStatusItemCells;
    DVTObservingToken *_currentPreferenceSetObservingToken;
    DVTObservingToken *_contentNeedsSavingObservingToken;
    unsigned long long _lastLockedModifierMask;
    unsigned long long _lastUnlockedModifierMask;
    id _windowDidBecomeMainNotificationObserver;
    id _activeTabControllerNotificationObserver;
    NSButton *_displayAllScopeButton;
    NSButton *_displayMenuScopeButton;
    NSButton *_displayTextScopeButton;
    NSButton *_displayModifiedScopeButton;
    NSButton *_displayConflictsScopeButton;
    IDESearchFilterControlBar *_filterControlBar;
    NSMenu *_searchFieldMenu;
    NSScrollView *_scrollView;
    DVTBorderedView *_containerBorderedView;
    DVTBorderedView *_scopeBarBorderedView;
    DVTBorderedView *_keyBindingsBorderedView;
    DVTBorderedView *_separatorBorderedView;
    DVTReplacementView *_preferenceSetReplacementView;
    DVTOutlineView *_keyBindingsOutlineView;
    NSTreeController *_keyBindingsController;
    DVTImageAndTextCell *_titleCell;
    NSTextField *_statusTextField;
}

+ (id)keyPathsForValuesAffectingSearchWords;
@property(copy) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) int searchScope; // @synthesize searchScope=_searchScope;
@property(nonatomic) int displayScope; // @synthesize displayScope=_displayScope;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *keyBindingItems; // @synthesize keyBindingItems=_keyBindingItems;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)_subtitleForKeyBindingItem:(id)arg1;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)keyBindingFieldCellWillReturnAttributedString:(id)arg1;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_findResultAttributes;
- (void)keyBindingFieldCellWillRemoveKeyboardShortcut:(id)arg1;
- (void)keyBindingCellFieldDidEndEditing:(id)arg1;
- (void)_userUpdateAlternateKeyBindingsForKeyBinding:(id)arg1;
- (void)_updateAlternateKeyBindingsForKeyBinding:(id)arg1;
- (id)keyBindingFieldCell:(id)arg1 validatedKeyboardShortcut:(id)arg2;
- (id)keyBindingFieldCell:(id)arg1 alternateKeyBindingsForKeyBinding:(id)arg2;
- (BOOL)keyBindingFieldCellAllowsMultipleKeyboardShortcut:(id)arg1;
- (BOOL)keyBindingFieldCell:(id)arg1 keyboardShortcutIsPrefix:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_conflictStatusButtonCellAction:(id)arg1;
- (void)_searchScopeMenuItemAction:(id)arg1;
- (void)_displayScopeButtonAction:(id)arg1;
- (void)_showConflictedKeyBindingsAndUpdateScopeButtons;
- (void)_showConflictedKeyBindings;
- (void)_updateScopeButtons;
- (void)_showConflictedKeyBindingsStatusForKeyBinding:(id)arg1;
@property(readonly, nonatomic) NSString *filterButtonAccessibilityDescription;
@property(readonly, nonatomic) NSString *filterButtonToolTip;
@property(readonly, nonatomic) NSMenu *filterButtonMenu;
@property(readonly, nonatomic) NSString *filterDefinitionIdentifier;
@property(readonly, copy) NSArray *searchWords;
- (void)updateKeyBindingsItems;
- (BOOL)_keyBindingOutlineViewNeedsGroupItem;
- (id)_keyBindingItemForItem:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_verticallyCenterView:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
@property(readonly) DVTPreferenceSetManager *preferenceSetManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSView *view;

@end

