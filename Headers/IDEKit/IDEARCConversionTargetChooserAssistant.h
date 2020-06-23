//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/DVTFilterControlBarTarget-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTOutlineViewWithCustomGridDrawing, IDEMigrationTargetChooserStatePersistence, IDESearchFilterControlBar, NSArray, NSImageView, NSMenu, NSMutableIndexSet, NSString, NSTextField, NSTreeController, NSView;

@interface IDEARCConversionTargetChooserAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTFilterControlBarTarget>
{
    NSArray *_targetItems;
    NSString *_searchString;
    NSMutableIndexSet *_expandedRowIndexes;
    NSArray *_selectedTargetChooserItems;
    IDEMigrationTargetChooserStatePersistence *_statePersistence;
    IDESearchFilterControlBar *_filterControlBar;
    DVTBorderedView *_scopeBarBorderedView;
    DVTOutlineViewWithCustomGridDrawing *_outlineView;
    DVTBorderedView *_borderedView;
    NSImageView *_warningIconImageView;
    NSTextField *_warningTextField;
    NSTreeController *_targetChooserItemsController;
}

+ (BOOL)automaticallyNotifiesObserversOfSearchString;
+ (id)keyPathsForValuesAffectingArrangedTargetItems;
+ (id)keyPathsForValuesAffectingCanFinish;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *targetItems; // @synthesize targetItems=_targetItems;
- (id)currentUIState;
- (void)loadUIState:(id)arg1;
- (id)_getPathStringForItem:(id)arg1;
- (id)stateRepositoryFilePath;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_findResultAttributes;
- (BOOL)validateMenuItem:(id)arg1;
- (void)uncheckSelection:(id)arg1;
- (void)checkSelection:(id)arg1;
- (BOOL)canUncheckSelection;
- (BOOL)canCheckSelection;
- (unsigned long long)_numberOfCheckedItemsAtIndexes:(id)arg1;
- (void)_setChecked:(BOOL)arg1 forTargetChooserItemAtIndexes:(id)arg2;
- (id)_effectiveSelectedRowIndexes;
@property(readonly, nonatomic) NSString *filterButtonAccessibilityDescription;
@property(readonly, nonatomic) NSString *filterButtonToolTip;
@property(readonly, nonatomic) NSMenu *filterButtonMenu;
@property(readonly, nonatomic) NSString *filterDefinitionIdentifier;
- (void)_restoreSelectedTargetChooserItemsAndExpandedRows;
- (void)_saveSelectedTargetChooserItemsAndExpandedRows;
@property(readonly, copy) NSArray *arrangedTargetItems;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)filterControlBar;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canFinish;
- (void)setAssistantContext:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSView *view;

@end

