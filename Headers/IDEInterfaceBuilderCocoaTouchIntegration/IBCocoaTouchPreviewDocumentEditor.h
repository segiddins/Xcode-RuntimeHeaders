//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBBasePreviewDocumentEditor.h>

@interface IBCocoaTouchPreviewDocumentEditor : IBBasePreviewDocumentEditor
{
}

- (id)displayNameForApplyingRecipe:(id)arg1 toObject:(id)arg2;
- (BOOL)isValidRecipe:(id)arg1;
- (void)userAddedNewConfiguration:(id)arg1;
- (void)rotatePreviewItem:(id)arg1;
- (void)rotateRecipe:(id)arg1;
- (void)preparePreviewResultView:(id)arg1;
- (void)applyScale:(double)arg1 toPreviewResultView:(id)arg2 withOriginalImage:(id)arg3;
- (id)applicableVersions;
- (id)applicableIdioms;
- (Class)previewRecipeClass;
- (id)installEditorObservations;

@end

