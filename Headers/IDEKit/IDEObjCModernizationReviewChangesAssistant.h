//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/IDEComparisonEditorDataSource-Protocol.h>
#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>

@class DVTBorderedView, DVTObservingToken, IDENavigableItem, IDENavigableItemAsyncFilteringCoordinator, IDEReviewFilesViewController, NSMapTable, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface IDEObjCModernizationReviewChangesAssistant : IDEAssistant <IDEReviewFilesDataSource, IDEComparisonEditorDataSource>
{
    NSMapTable *_editorDocumentByFilePath;
    IDENavigableItem *_flatNavigableItem;
    IDENavigableItemAsyncFilteringCoordinator *_flatFileNavItemCoordinator;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTBorderedView *_borderedView;
    DVTObservingToken *_comparisonEditorObservingToken;
    CDUnknownBlockType _completionBlock;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_readOnlyStatusObservationTokens;
    unsigned long long _numCheckedFilePaths;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
}

+ (id)keyPathsForValuesAffectingCanFinish;
- (void).cxx_destruct;
@property(retain) IDENavigableItem *flatNavigableItem; // @synthesize flatNavigableItem=_flatNavigableItem;
- (BOOL)shouldSelectFirstDiff;
- (id)navigableItemsForSecondaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)navigableItemsForPrimaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_documentForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
@property(readonly) IDENavigableItem *issueNavigableItem;
- (id)fileSystemNavigableItem;
@property(readonly) IDENavigableItem *workspaceNavigableItem;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)_snapshotContainerItem:(id)arg1 customizationBlock:(CDUnknownBlockType)arg2;
- (void)_setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (BOOL)_selectedTargetsContainFilePath:(id)arg1;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_convertedEditorDocument:(id)arg1 didSave:(BOOL)arg2 checkedFilePath:(id)arg3;
- (void)_applyChanges;
- (void)_updateBuildSettingsAndFinish;
- (void)_finishWithError:(id)arg1;
- (id)_checkedDocuments;
- (BOOL)canFinish;
- (BOOL)askAreYouSureBeforeCancel;
- (BOOL)canGoBack;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

