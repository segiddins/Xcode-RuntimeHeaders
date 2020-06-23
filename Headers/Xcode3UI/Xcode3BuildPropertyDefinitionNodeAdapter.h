//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/XCEDataNodeAdapterP-Protocol.h>

@class DVTStackBacktrace, NSCell, NSString, Xcode3BuildPropertyColumnContext, Xcode3BuildPropertyRowContext, Xcode3BuildSettingsEditor;

@interface Xcode3BuildPropertyDefinitionNodeAdapter : NSObject <XCEDataNodeAdapterP, DVTInvalidation>
{
    Xcode3BuildSettingsEditor *_editor;
    NSCell *_cell;
    Xcode3BuildPropertyRowContext *_currentRowContext;
    Xcode3BuildPropertyColumnContext *_currentColumnContext;
}

+ (void)initialize;
@property(readonly) Xcode3BuildPropertyColumnContext *currentColumnContext; // @synthesize currentColumnContext=_currentColumnContext;
@property(readonly) Xcode3BuildPropertyRowContext *currentRowContext; // @synthesize currentRowContext=_currentRowContext;
@property(retain) NSCell *cell; // @synthesize cell=_cell;
@property(readonly) Xcode3BuildSettingsEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)addConditionOrExpandConfigurationsForDataNode:(id)arg1;
- (void)addConditionForDataNode:(id)arg1;
- (void)addConditionForCurrentRowContextAndPreselect:(BOOL)arg1;
- (void)addConditionForRowContext:(id)arg1 andPreselect:(BOOL)arg2;
- (void)removeDataNode:(id)arg1;
- (void)removeLocalAssignmentForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 doubleClickInColumn:(id)arg2;
- (void)openEditorForDataNode:(id)arg1 forTableColumn:(id)arg2;
- (id)_contentForBuildPropertyEditor;
- (id)_buildPropertyEditor;
- (id)propertyDisplayName;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2 forCell:(id)arg3 rect:(struct CGRect *)arg4 mouseLocation:(struct CGPoint)arg5;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (BOOL)dataNode:(id)arg1 matchesName:(id)arg2 definition:(id)arg3 configuration:(id)arg4 conditionSet:(id)arg5;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (BOOL)dataNode:(id)arg1 outlineViewShouldShowOutlineCell:(id)arg2;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forValueTableColumn:(id)arg4;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forNameTableColumn:(id)arg4;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (id)_popUpCellForNameColumnWithRemoveButtonUsingSettingsFromCell:(id)arg1;
- (id)_textCellForNameColumnWithAddButtonUsingSettingsFromCell:(id)arg1;
- (id)_testCellUsingSettingsFromCell:(id)arg1;
- (void)assignCell;
- (BOOL)isDataNodeExpandedByDefault:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (BOOL)_hasSubsettingsForConditionSets;
- (void)dataNode:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3;
- (id)_multipleValuesRepresentation;
- (void)setDefinitionValue:(id)arg1 forTableColumn:(id)arg2;
- (void)setNewName:(id)arg1;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)objectValueWhenIsEditing:(BOOL)arg1;
- (BOOL)dataNode:(id)arg1 isEditingInTableColumn:(id)arg2;
- (id)valueToStoreForObjectValue:(id)arg1;
- (id)objectValueForExpandedString:(id)arg1 orValue:(id)arg2;
- (void)dataNodeConfigure:(id)arg1;
- (BOOL)userCanOpenEditorByDoubleClicking;
- (BOOL)userCanOpenEditor;
- (BOOL)userCanRemoveAssignment;
- (BOOL)userCanAddCondition;
- (BOOL)allowsPropertyConditionFlavor:(id)arg1;
- (BOOL)hasAssignment;
- (BOOL)hasChildProperties;
- (id)categoryAdapterForDataNode:(id)arg1;
- (void)setConfigurableDataNode:(id)arg1;
- (void)_setConfigurableDataNode:(id)arg1 currentTableColumn:(id)arg2;
- (void)setCurrentRowContext:(id)arg1;
- (void)_setCurrentRowContext:(id)arg1 currentColumnContext:(id)arg2;
- (void)dealloc;
- (void)primitiveInvalidate;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

