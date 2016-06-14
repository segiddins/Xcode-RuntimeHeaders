//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

@class NSBox, NSButton, NSPopUpButton, NSTextField, PBXAddVariantPanel;

@interface PBXFileReferenceInspectorPane : PBXInspectorPaneModule
{
    NSTextField *_nameTextField;
    NSTextField *_pathTextField;
    NSButton *_choosePathButton;
    NSTextField *_absolutePathTextField;
    NSPopUpButton *_referenceTypePopUpButton;
    NSBox *_line1;
    NSPopUpButton *_fileTypePopUpButton;
    NSButton *_includeInIndexCheckbox;
    NSBox *_line2;
    NSTextField *_fileEncodingLabel;
    NSPopUpButton *_fileEncodingPopUpButton;
    NSTextField *_lineEndingsLabel;
    NSPopUpButton *_lineEndingsPopUpButton;
    NSTextField *_tabWidthLabel;
    NSTextField *_tabWidthTextField;
    NSTextField *_indentWidthLabel;
    NSTextField *_indentWidthTextField;
    NSButton *_usesTabsCheckbox;
    NSButton *_wrapsLinesCheckbox;
    NSButton *_resetTextSettingsButton;
    NSBox *_line3;
    NSButton *_changeLocalizationStateButton;
    NSButton *_localizationVariantButton;
    struct {
        unsigned int someCurrentItemsDontExist:1;
        unsigned int someCurrentItemsHaveNoPath:1;
        unsigned int hasMixedReferenceStyleItem:1;
        unsigned int hasNoReferenceStyleItem:1;
        unsigned int hasInvalidReferenceStyleItem:1;
        unsigned int observingWindow:1;
        unsigned int hasMixedFileTypeItem:1;
        unsigned int hasNoFileTypeItem:1;
        unsigned int RESERVED:26;
    } _ripFlags;
    PBXAddVariantPanel *_addVariantPanel;
    BOOL _extraFileTypeItemInstalled;
    BOOL _extraFileEncodingItemInstalled;
    BOOL _extraLineEndingItemInstalled;
    BOOL _beganEditingName;
    BOOL _beganEditingTabWidth;
    BOOL _beganEditingIndentWidth;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)inspectableClasses;
+ (BOOL)canInspectItems:(id)arg1;
- (void)resetTextSettingsToDefaultsAction:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)referenceWasRemoved:(id)arg1;
- (void)_stopListeningForProjectChanges;
- (void)_startListeningForProjectChanges;
- (void)changeLocalizationState:(id)arg1;
- (void)removeLocalizationVariant:(id)arg1;
- (void)addLocalizationVariant:(id)arg1;
- (void)_addVariantSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)changeWrapsLines:(id)arg1;
- (void)changeUsesTabs:(id)arg1;
- (void)changeLineEndings:(id)arg1;
- (void)changeFileEncoding:(id)arg1;
- (void)changeIncludeInIndex:(id)arg1;
- (void)changeFileType:(id)arg1;
- (void)_findMultipleFilesSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)_findSingleFileSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)changeReferenceType:(id)arg1;
- (void)choosePath:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)_updateVariantButtons;
- (void)_setName;
- (id)sourceControlManager;
- (id)reference;
- (id)_project;
- (void)_selectLineEnding:(int)arg1;
- (void)_selectExtraLineEndingItemWithTitle:(id)arg1 enabled:(BOOL)arg2;
- (void)_selectFileEncoding:(unsigned long long)arg1;
- (void)_selectExtraFileEncodingItemWithTitle:(id)arg1 enabled:(BOOL)arg2;
- (void)_selectFileType:(id)arg1;
- (void)_selectExtraFileTypeItemWithTitle:(id)arg1 enabled:(BOOL)arg2;
- (void)_displayFileType:(id)arg1;
- (void)_displayFileTypeMixed;
- (void)_displayFileTypeNone;
- (void)_displayReferenceType:(id)arg1;
- (void)_displayReferenceTypeMixed;
- (void)_displayReferenceTypeNone;
- (void)viewDidLoad;
- (void)_rebuildFileTypePopUpButton;
- (void)_rebuildReferenceTypePopUpButton;
- (void)dealloc;

@end

