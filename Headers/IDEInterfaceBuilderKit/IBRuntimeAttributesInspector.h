//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBInspectorViewController.h>

#import <IDEInterfaceBuilderKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTMutableOrderedDictionary, DVTObservingToken, IBPasteboardAwareTableView, IDEControlGroup, NSArray, NSButton, NSDictionary, NSIndexSet, NSMenu, NSMutableSet, NSString;
@protocol DVTInvalidation;

@interface IBRuntimeAttributesInspector : IBInspectorViewController <NSTableViewDelegate>
{
    NSDictionary *_customAttributeTypes;
    NSButton *_addButton;
    NSButton *_removeButton;
    DVTObservingToken *_selectionObserver;
    NSMutableSet *_displayedColorPopUpButtons;
    DVTMutableOrderedDictionary *_namedColors;
    DVTObservingToken *_resourceManagerKeyPathObserverToken;
    id <DVTInvalidation> _resourceManagerObserverToken;
    BOOL _reloadingData;
    NSIndexSet *_draggedAttributeIndexes;
    NSArray *_userDefinedRuntimeAttributes;
    NSString *_currentPasteboardDragMarker;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    IBPasteboardAwareTableView *_attributesTableView;
    NSMenu *_typeMenu;
}

+ (BOOL)supportsMultipleObjectInspection;
@property(retain, nonatomic) NSMenu *typeMenu; // @synthesize typeMenu=_typeMenu;
@property(retain, nonatomic) IBPasteboardAwareTableView *attributesTableView; // @synthesize attributesTableView=_attributesTableView;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(nonatomic, getter=isReloadingData) BOOL reloadingData; // @synthesize reloadingData=_reloadingData;
@property(copy, nonatomic) NSString *currentPasteboardDragMarker; // @synthesize currentPasteboardDragMarker=_currentPasteboardDragMarker;
@property(copy, nonatomic) NSArray *userDefinedRuntimeAttributes; // @synthesize userDefinedRuntimeAttributes=_userDefinedRuntimeAttributes;
@property(copy, nonatomic) NSIndexSet *draggedAttributeIndexes; // @synthesize draggedAttributeIndexes=_draggedAttributeIndexes;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptContentsOfPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 removeRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canRemoveRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canWriteRowsWithIndexesToPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 canAcceptContentsOfPasteboard:(id)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (void)editImageValue:(id)arg1;
- (id)stringByJoiningArray:(id)arg1 fromIndex:(long long)arg2;
- (void)editColorValue:(id)arg1;
- (void)editValue:(id)arg1;
- (void)editType:(id)arg1;
- (void)editKeyPath:(id)arg1;
- (void)editAttributeForSender:(id)arg1 editBlock:(CDUnknownBlockType)arg2;
- (void)doubleClickedTableView:(id)arg1;
- (void)removeUserDefinedRuntimeAttribute:(id)arg1;
- (void)insertUserDefinedRuntimeAttribute:(id)arg1;
- (void)refreshControlButtonEnabledStates;
- (void)refreshColorPopUpButton:(id)arg1;
- (void)refreshAllColorPopUpButtons;
- (void)refreshNamedColors;
- (void)didRemoveColorPopUpButton:(id)arg1;
- (void)didAddColorPopUpButton:(id)arg1 forCell:(id)arg2;
- (id)selectedAttributes;
- (id)defaultType;
- (id)userDefinedRuntimeAttributeTypeForTypeIdentifier:(id)arg1 isLocalized:(BOOL)arg2;
- (id)customAttributeTypes;
- (void)setUserDefinedRuntimeAttributes:(id)arg1 selectingRows:(id)arg2 rowToEdit:(long long)arg3;
- (void)reloadTableViewDataIgnoringEditingActions;
- (id)contentLayoutView;
- (void)setContent:(id)arg1;
- (void)loadView;
- (void)setupControlBarAfterLoading;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

