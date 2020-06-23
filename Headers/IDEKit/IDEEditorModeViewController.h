//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEEditorArea, IDEEditorAreaSplit, IDEEditorContext, NSDictionary;

@interface IDEEditorModeViewController : IDEViewController
{
    IDEEditorContext *_primaryEditorContext;
    IDEEditorContext *_selectedAlternateEditorContext;
    NSDictionary *_lastSetEditorLayoutConfiguration;
    NSDictionary *_lastSetPersistentRepresentation;
    IDEEditorArea *_editorArea;
    IDEEditorAreaSplit *_editorAreaSplit;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)stateSavingIdentifiers;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEEditorAreaSplit *editorAreaSplit; // @synthesize editorAreaSplit=_editorAreaSplit;
@property(retain) IDEEditorContext *selectedAlternateEditorContext; // @synthesize selectedAlternateEditorContext=_selectedAlternateEditorContext;
@property(retain, nonatomic) IDEEditorContext *primaryEditorContext; // @synthesize primaryEditorContext=_primaryEditorContext;
@property(retain, nonatomic) IDEEditorArea *editorArea; // @synthesize editorArea=_editorArea;
- (void)applyStateDictionary:(id)arg1 forEditor:(id)arg2;
- (id)navigationOverlayTargetAccessibilityTitle;
- (void)editorContext:(id)arg1 editorStateRepositoryDidChange:(id)arg2;
- (void)editorContext:(id)arg1 didSetEditor:(id)arg2;
- (BOOL)allowAutomaticallyChangingMode;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_setPersistentRepresentation:(id)arg1;
- (id)_persistentRepresentation;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (void)_stampEditorLayoutConfiguration:(id)arg1;
- (id)_liftEditorLayoutConfiguration;
- (BOOL)_getStateSavingStateDictionaries:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3 forPersistentRepresentation:(id)arg4;
- (id)_persistentRepresentationForStateSavingStateDictionaries:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (BOOL)_getEditorHistoryStacks:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3 forEditorLayoutConfiguration:(id)arg4;
- (id)_editorLayoutConfigurationForEditorHistoryStacks:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (BOOL)_getItems:(id *)arg1 itemsKey:(id)arg2 selected:(id *)arg3 geometry:(id *)arg4 inConfigurationDictionary:(id)arg5;
- (id)_configurationDictionaryWithItems:(id)arg1 itemsKey:(id)arg2 selected:(id)arg3 geometry:(id)arg4;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)_stealPrimaryEditorContext;
- (id)editorContexts;
- (BOOL)openEditorOpenSpecifier:(id)arg1 editorContext:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)openEditorHistoryItem:(id)arg1 editorContext:(id)arg2 options:(unsigned long long)arg3;
@property(readonly) struct CGSize minimumContentViewFrameSize;
- (BOOL)canCreateSplitForNavigationHUD;
- (void)resetAssistantEditorSelection;
- (BOOL)canResetAssistantEditorSelection;
- (void)removeAssistantEditor;
- (id)addNewAssistantEditor;
- (BOOL)canAddNewAssistantEditor;
- (BOOL)canRemoveAssistantEditor;
- (void)addAssistantEditor;
- (BOOL)canAddAssistantEditor;
- (void)setAssistantEditorsLayout:(unsigned long long)arg1;
- (BOOL)canChangeAssistantEditorsLayout;
- (void)resetEditorSizes;
- (BOOL)canResetEditorSizes;
- (id)_initWithPrimaryEditorContext:(id)arg1;

@end

