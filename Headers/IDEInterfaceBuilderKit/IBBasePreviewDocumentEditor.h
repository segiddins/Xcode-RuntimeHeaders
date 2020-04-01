//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPreviewDocumentEditor.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class IDENotifyingLocalizedGroup, NSMenu, NSSegmentedControl, NSString;

@interface IBBasePreviewDocumentEditor : IBAbstractPreviewDocumentEditor <NSMenuDelegate>
{
    NSSegmentedControl *_accessoryLocalizationControl;
    IDENotifyingLocalizedGroup *_localizedGroup;
    NSSegmentedControl *_addButton;
    NSMenu *_addConfigurationMenu;
}

+ (id)buildAccessoryLocalizationControlForLanguages:(id)arg1 developmentLanguage:(id)arg2 withTarget:(id)arg3;
+ (id)languageMenuForLanguages:(id)arg1 developmentLanguage:(id)arg2 withTarget:(id)arg3;
@property(readonly) NSMenu *addConfigurationMenu; // @synthesize addConfigurationMenu=_addConfigurationMenu;
- (void).cxx_destruct;
- (id)displayNameForApplyingRecipe:(id)arg1 toObject:(id)arg2;
- (id)initialRecipe;
- (Class)previewRecipeClass;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)changeLanguage:(id)arg1;
- (void)applySettingsToDocument:(id)arg1 forPreviewRecipe:(id)arg2 withPasteboardCloningContext:(id)arg3;
- (void)refreshSelectionState;
- (id)labelForLocale:(id)arg1;
- (id)selectedLanguages;
- (id)targetRecipes;
- (id)installControls;
- (BOOL)supportsAddConfigurationMenu;
- (id)installEditorObservations;
- (void)primitiveInvalidate;
- (void)refreshControlState;
- (void)menuNeedsUpdate:(id)arg1;
- (void)userAddedNewConfiguration:(id)arg1;
- (id)applicableIdioms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

