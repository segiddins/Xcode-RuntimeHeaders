//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDESceneKitEditor/GTFActionEditorDelegate-Protocol.h>

@class DVTObservingToken, DVTReplacementView, GTFActionEditor, GTFActionLibrary, NSArray, NSArrayController, NSString, SKESceneDocument;

@interface SKEActionEditor : IDEViewController <GTFActionEditorDelegate>
{
    DVTReplacementView *_actionEditorReplacementView;
    NSArray *_content;
    NSArrayController *_currentSelectedActionsController;
    SKESceneDocument *_document;
    DVTObservingToken *_editorSelectedActionObservingToken;
    DVTObservingToken *_editorFilterStringObservingToken;
}

@property(readonly, nonatomic) NSArrayController *currentSelectedActionsController; // @synthesize currentSelectedActionsController=_currentSelectedActionsController;
- (void).cxx_destruct;
- (BOOL)actionEditor:(id)arg1 shouldSupportPastedActions:(id)arg2;
- (BOOL)actionEditor:(id)arg1 shouldCreateReferenceActionWithActions:(id)arg2;
- (void)updateActionPreview;
- (void)actionsDidChangeForTarget:(id)arg1 withEditor:(id)arg2;
- (void)refreshObjectLibrary;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (id)targetsFromContent;
- (void)editorFilterStringDidChange;
- (BOOL)nodePassesFilter:(id)arg1 filterComponents:(id)arg2;
- (id)editorFilterContent;
- (void)editorSelectedActionsDidChange;
@property(readonly, nonatomic) NSArray *currentSelectedActions;
- (void)setCurrentSelectedActions:(id)arg1;
@property(readonly, nonatomic) GTFActionEditor *actionEditor;
@property(readonly, nonatomic) SKESceneDocument *document;
- (void)setDocument:(id)arg1;
@property(copy, nonatomic) NSArray *content;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

