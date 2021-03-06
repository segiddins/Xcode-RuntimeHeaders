//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAuxiliaryEditorProvider.h>

@class MISSING_TYPE, NSSet;

__attribute__((visibility("hidden")))
@interface _TtC5UVKit17EditorCoordinator : IDEAuxiliaryEditorProvider
{
    MISSING_TYPE *editorViewController;
    MISSING_TYPE *editorStateSnapshotProvider;
    MISSING_TYPE *selectionStore;
    MISSING_TYPE *canvasSettingsStore;
    MISSING_TYPE *queryManager;
    MISSING_TYPE *workspaceScene;
    MISSING_TYPE *registeredEditorToken;
    MISSING_TYPE *activeDocumentScene;
    MISSING_TYPE *workspaceSceneObservationToken;
    MISSING_TYPE *previewInstanceContainer;
    MISSING_TYPE *_pinnedPreviewFile;
    MISSING_TYPE *workspaceLoadingToken;
    MISSING_TYPE *workspaceRunContextToken;
    MISSING_TYPE *makeSelectedPreviewLiveObserver;
    MISSING_TYPE *isActivelyDragging;
    MISSING_TYPE *hasPreviouslyRestoredFromState;
    MISSING_TYPE *pinningSource;
    MISSING_TYPE *pinningSourceNoPreviewUpdateRequest;
}

- (void).cxx_destruct;
- (id)init;
- (void)populatePasteboard:(id)arg1 withVariantSets:(id)arg2 in:(id)arg3;
@property(nonatomic, readonly) NSSet *additionalLibraryIdentifiers;
@property(nonatomic, readonly) NSSet *inspectorCategoryIdentifiers;
- (id)auxiliaryViewControllerForPrincipalEditor:(id)arg1 workspaceDocument:(id)arg2;
@property(nonatomic) BOOL showing;
- (BOOL)isShowing;
- (void)willClosePrincipalEditor:(id)arg1;
- (void)toggleShowSelection:(id)arg1;
- (void)zoomCanvas:(id)arg1;
- (void)togglePinPreview:(id)arg1;
- (void)toggleThunkingEnabled:(id)arg1;
- (void)toggleDeviceBezels:(id)arg1;
- (void)toggleViewBoundaries:(id)arg1;
- (void)refreshPreviews:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceDocument:(id)arg1;

@end

