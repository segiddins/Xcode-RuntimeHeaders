//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import <IDEModelEditor/IDEDataModelEditorController-Protocol.h>

@class DVTStackBacktrace, IDEDataModelBrowserEditor, IDEDataModelDiagramEditor, IDEDataModelEditor, NSString, NSTabView;
@protocol IDEDataModelEditorController;

@interface IDEDataModelEntityContentsEditor : IDEDMEditorController <IDEDataModelEditorController>
{
    IDEDataModelEditor *parentEditor;
    NSTabView *tabView;
    IDEDataModelBrowserEditor *browserViewController;
    IDEDataModelDiagramEditor *diagramViewController;
    id <IDEDataModelEditorController> _activeEditor;
}

+ (id)keyPathsForValuesAffectingSelection;
+ (id)keyPathsForValuesAffectingModel;
@property(retain) id <IDEDataModelEditorController> activeEditor; // @synthesize activeEditor=_activeEditor;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)selectModelObjects:(id)arg1;
- (id)selection;
- (void)setViewType:(unsigned long long)arg1;
- (BOOL)allowsViewType:(unsigned long long)arg1;
- (id)model;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)editNameForModelObject:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)selectEditor:(id)arg1;
- (void)takeFocus;
@property(readonly) IDEDataModelEditor *rootEditor;
- (id)allSubViewControllers;
- (id)identifier;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

