//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDESceneKitEditor/DVTReplacementViewDelegate-Protocol.h>
#import <IDESceneKitEditor/DVTTabChooserViewDelegate-Protocol.h>

@class DVTChoice, DVTObservingToken, DVTReplacementView, DVTTabChooserView, NSArrayController, NSString, SKESceneEditorArea;

@interface SKESceneSubEditor : IDEViewController <DVTReplacementViewDelegate, DVTTabChooserViewDelegate>
{
    DVTReplacementView *_replacementView;
    DVTTabChooserView *_chooserView;
    DVTChoice *_shadableEditorChoice;
    DVTChoice *_actionEditorChoice;
    SKESceneEditorArea *_parentEditor;
    DVTObservingToken *_documentSelectionObservingToken;
    DVTObservingToken *_subeditorSelectionObservingToken;
    NSArrayController *_currentSubSelectedItemsController;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (unsigned long long)selectedSubEditor;
- (void)setSelectedSubEditor:(unsigned long long)arg1;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)documentSelectionDidChange;
- (void)installPlaceholderViewWithState:(unsigned long long)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)currentSubSelectedItems;
- (void)setCurrentSubSelectedItems:(id)arg1;
@property(readonly, nonatomic) NSArrayController *currentSubSelectedItemsController;
@property(readonly, nonatomic) SKESceneEditorArea *parentEditor;
- (void)setParentEditor:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

