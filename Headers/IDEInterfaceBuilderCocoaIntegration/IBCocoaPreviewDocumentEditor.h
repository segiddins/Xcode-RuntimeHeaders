//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBBasePreviewDocumentEditor.h>

@interface IBCocoaPreviewDocumentEditor : IBBasePreviewDocumentEditor
{
}

- (id)displayNameForApplyingRecipe:(id)arg1 toObject:(id)arg2;
- (void)revertStateRecipes:(id)arg1;
- (id)initialRecipe;
- (id)nextDeviceConfiguration:(id)arg1;
- (id)effectivePreviewAppearanceForRecipe:(id)arg1;
- (void)userAddedNewConfiguration:(id)arg1;
- (id)applicableIdioms;
- (BOOL)supportsAddConfigurationMenu;
- (Class)previewRecipeClass;

@end

