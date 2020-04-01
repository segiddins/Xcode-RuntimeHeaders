//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDETestActionTestableOptionsControllerDelegate-Protocol.h>
#import <IDEKit/IDETestsInTestableObserver-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, DVTSearchField, IDETestActionTestableOptionsController, NSArray, NSButton, NSMenu, NSString;
@protocol IDETestTargetsOutlineViewControllerDataSource, IDETestTargetsOutlineViewControllerDelegate;

@interface IDETestTargetsOutlineViewController : IDEViewController <IDETestsInTestableObserver, NSMenuDelegate, IDETestActionTestableOptionsControllerDelegate>
{
    BOOL _showUpgradeToTestPlansButton;
    id <IDETestTargetsOutlineViewControllerDataSource> _dataSource;
    id <IDETestTargetsOutlineViewControllerDelegate> _delegate;
    NSString *_addTestTargetsPickerMessage;
    DVTOutlineView *_outlineView;
    DVTBorderedView *_bottomBar;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    NSButton *_upgradeToTestPlansButton;
    DVTSearchField *_searchField;
    NSString *_filterString;
    NSMenu *_contextMenu;
    IDETestActionTestableOptionsController *_testableOptionsController;
}

+ (id)_subtitleForTestableReference:(id)arg1;
@property(retain) IDETestActionTestableOptionsController *testableOptionsController; // @synthesize testableOptionsController=_testableOptionsController;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) NSButton *upgradeToTestPlansButton; // @synthesize upgradeToTestPlansButton=_upgradeToTestPlansButton;
@property(retain) DVTGradientImageButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain) DVTBorderedView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain) DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(copy, nonatomic) NSString *addTestTargetsPickerMessage; // @synthesize addTestTargetsPickerMessage=_addTestTargetsPickerMessage;
@property(nonatomic) BOOL showUpgradeToTestPlansButton; // @synthesize showUpgradeToTestPlansButton=_showUpgradeToTestPlansButton;
@property __weak id <IDETestTargetsOutlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDETestTargetsOutlineViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)isParallelizationSupportedForAnyItems:(id)arg1;
- (BOOL)isParallelizationDisabledForAllItems:(id)arg1;
- (BOOL)isParallelizationEnabledForAllItems:(id)arg1;
- (BOOL)isRandomizationDisabledForAllItems:(id)arg1;
- (BOOL)isRandomizationEnabledForAllItems:(id)arg1;
- (BOOL)areAllItemsDisabled:(id)arg1;
- (BOOL)areAllItemsEnabled:(id)arg1;
- (id)currentlySelectedItems;
- (void)setParallelizationEnabled:(BOOL)arg1;
- (void)disableParallelizationForSelection:(id)arg1;
- (void)enableParallelizationForSelection:(id)arg1;
- (void)setRandomizationEnabled:(BOOL)arg1;
- (void)disableRandomizationForSelection:(id)arg1;
- (void)enableRandomizationForSelection:(id)arg1;
- (void)setTestsEnabled:(BOOL)arg1;
- (void)disableTestsForSelection:(id)arg1;
- (void)enableTestsForSelection:(id)arg1;
- (void)addSeparatorItemIfNeededToMenu:(id)arg1;
- (void)addMenuItemToMenu:(id)arg1 itemTitle:(id)arg2 itemAction:(SEL)arg3;
- (void)updateContextMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)testableOptionsController:(id)arg1 didModifyTestableReference:(id)arg2;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)toggleItems:(id)arg1;
- (void)outlineView:(id)arg1 insertText:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)filteredTests:(id)arg1;
- (id)filteredTestableReferences;
- (BOOL)doesFilterStringIncludeTestable:(id)arg1;
- (BOOL)doesFilterStringIncludeTest:(id)arg1;
- (BOOL)doesFilterStringIncludeName:(id)arg1;
- (BOOL)isTestActive:(id)arg1;
- (BOOL)isTestEditable:(id)arg1;
- (id)testableReferencesForItems:(id)arg1;
- (id)testableReferenceForItem:(id)arg1;
- (BOOL)canExpandTestableReference:(id)arg1;
- (void)_cleanUpTestableOptionsPopover;
- (void)showOptionsForTestableReference:(id)arg1 sourceRect:(struct CGRect)arg2;
- (void)deleteTargets:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)_updateDeleteButton;
- (void)setItem:(id)arg1 enabled:(BOOL)arg2 recursively:(BOOL)arg3;
- (void)enabledCheckboxPressed:(id)arg1;
- (void)optionsButtonPressed:(id)arg1;
- (void)upgradeToTestPlansButtonPressed:(id)arg1;
- (void)reloadOutlineViewPreservingSelection;
- (void)reloadData;
@property(readonly) NSArray *testableReferences;
@property(readonly) unsigned long long permittedOptions;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
@property(copy, nonatomic) NSString *emptyContentString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

