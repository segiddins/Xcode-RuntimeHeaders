//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSPopUpButton, NSTextField;

@interface PBXTextEditorPrefsModule : PBXPreferencesPaneModule
{
    NSButton *alwaysShowGutterCheckbox;
    NSButton *showLineNumbersCheckbox;
    NSButton *showColumnPositionCheckbox;
    NSButton *showPageGuideCheckbox;
    NSTextField *pageGuideLocationTextField;
    NSButton *showFoldingCheckbox;
    NSButton *codeFocusCheckbox;
    NSButton *insertMatchingBracketsCheckbox;
    NSButton *selectToMatchingBraceCheckbox;
    NSButton *selectToInsideMatchingBracesCheckbox;
    NSButton *saveFilesWritableCheckbox;
    NSPopUpButton *newFileLineEndingPopUp;
    NSPopUpButton *saveLineEndingPopUp;
    NSPopUpButton *fileEncodingPopUp;
}

- (void)radioButtonAction:(id)arg1;
- (void)popUpAction:(id)arg1;
- (void)textFieldAction:(id)arg1;
- (void)checkBoxAction:(id)arg1;
- (void)initializeFromDefaults;
- (void)_updateEnabledState;
- (void)saveChanges;
- (void)viewDidLoad;
- (struct CGSize)minModuleSize;

@end

