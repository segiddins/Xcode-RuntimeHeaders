//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDESpriteKitParticleEditor/DVTOutlineViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/NSOutlineViewDataSource-Protocol.h>
#import <IDESpriteKitParticleEditor/NSSearchFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTGradientImagePopUpButton, DVTOutlineView, DVTSearchField, NSImage, NSMenu, NSMenuItem, NSMutableArray, NSSet, NSString, SKOutlineItemCell;
@protocol SKTileSetEditorOutlineViewDelegate;

@interface SKTileSetEditorOutlineViewController : DVTViewController <DVTOutlineViewDelegate, NSOutlineViewDataSource, NSSearchFieldDelegate>
{
    DVTOutlineView *_ruleOutlineView;
    DVTGradientImagePopUpButton *_addButton;
    DVTSearchField *_searchField;
    DVTBorderedView *_outlineBorderedView;
    DVTBorderedView *_searchBorderedView;
    SKOutlineItemCell *_editableItemCell;
    DVTDelayedInvocation *_filterInvocation;
    NSString *_filterString;
    NSSet *_lastFilteredItems;
    NSMenu *_rightClickContextMenu;
    NSMenu *_rightClickContextNewSubmenu;
    NSMenuItem *_newMenuSeparator;
    NSMenuItem *_createTileSetMenuItem;
    NSMenuItem *_createGroupMenuItem;
    NSMenuItem *_singleTileMenuItem;
    NSMenuItem *_gridIsoGroupMenuItem;
    NSMenuItem *_hexGroupMenuItem;
    NSMenuItem *_customGroupMenuItem;
    NSMenuItem *_addButtonSingleTileMenuItem;
    NSMenuItem *_addButtonGridIsoGroupMenuItem;
    NSMenuItem *_addButtonHexGroupMenuItem;
    NSMenuItem *_addButtonCustomGroupMenuItem;
    NSMenuItem *_removeSelectedItemsMenuItem;
    NSMenu *_addButtonCreateTileSetSubmenu;
    unsigned long long _tileRequiredAdjacency[13];
    unsigned long long _selectedTileSetIndex;
    unsigned long long _selectedGroupIndex;
    unsigned long long _selectedRuleIndex;
    unsigned long long _selectedDefinitionIndex;
    unsigned long long _selectedTileIndex;
    unsigned long long _tileGroupType;
    BOOL _ignoreSelectionUpdates;
    id <SKTileSetEditorOutlineViewDelegate> _delegate;
    NSMutableArray *_tileSets;
    NSImage *_placeholderIcon;
}

@property(nonatomic) unsigned long long tileGroupType; // @synthesize tileGroupType=_tileGroupType;
@property(retain, nonatomic) NSImage *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(retain, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property(nonatomic) __weak id <SKTileSetEditorOutlineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addButtonPressed:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)removeSelectedItems;
- (void)addNewComplexTileGroup:(id)arg1;
- (void)addNewAdvancedTileGroup:(id)arg1;
- (void)addNewSimpleTileGroup:(id)arg1;
- (void)addNewHexPointyTileSet:(id)arg1;
- (void)addNewHexFlatTileSet:(id)arg1;
- (void)addNewIsometricTileSet:(id)arg1;
- (void)addNewGridTileSet:(id)arg1;
- (void)updateOutline;
- (void)expandObject:(id)arg1;
- (void)updateSelectionForObject:(id)arg1;
- (void)expandObject:(id)arg1 select:(BOOL)arg2;
- (void)updateSelectionForTileIndex:(unsigned long long)arg1;
- (void)selectTileWithTileIndex:(unsigned long long)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)updateRuleOutlineSelection;
- (id)getSelectedTileDefinition;
- (id)getSelectedTileGroupRule;
- (id)getSelectedTileGroup;
- (id)getSelectedTileSet;
- (void)selectDefinition:(id)arg1;
- (void)selectRule:(id)arg1;
- (void)selectTileGroup:(id)arg1;
- (void)selectTileSet:(id)arg1;
- (void)_filterNodes;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)_filterItemsWithComponents:(id)arg1;
- (id)_filteredChildForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_filteredChildForTileGroupRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_filteredChildForTileGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_filteredChildForTileSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_numFilteredChildrenForItem:(id)arg1;
- (unsigned long long)_numFilteredChildrenForTileGroupRule:(id)arg1;
- (unsigned long long)_numFilteredChildrenForTileGroup:(id)arg1;
- (unsigned long long)_numFilteredChildrenForTileSet:(id)arg1;
- (BOOL)_itemHasFilteredChild:(id)arg1;
- (BOOL)_tileGroupRuleHasFilteredChild:(id)arg1;
- (BOOL)_tileGroupHasFilteredChild:(id)arg1;
- (BOOL)_tileSetHasFilteredChild:(id)arg1;
- (BOOL)_itemHasFilteredParent:(id)arg1;
- (BOOL)_tileDefinitionHasFilteredParent:(id)arg1;
- (BOOL)_tileGroupRuleHasFilteredParent:(id)arg1;
- (BOOL)_tileGroupHasFilteredParent:(id)arg1;
- (BOOL)_isItemFiltered:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (void)_performBlockIfSelectionAvailable:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long selectedTileIndex;
@property(nonatomic) unsigned long long selectedDefinitionIndex;
@property(nonatomic) unsigned long long selectedRuleIndex;
@property(nonatomic) unsigned long long selectedGroupIndex;
@property(nonatomic) unsigned long long selectedTileSetIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

