//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSButton, NSMatrix, NSPopUpButton, PBXClassBrowserOptionsSet;

@interface PBXClassBrowserOptionsModule : PBXModule
{
    NSPopUpButton *_optionsSetsPopUpButton;
    NSButton *_addOptionsSetButton;
    NSButton *_deleteOptionsSetButton;
    NSPopUpButton *_classesPopUpButton;
    NSMatrix *_listOrOutlineRadioMatrix;
    NSPopUpButton *_classesOrProtocolsPupUpButton;
    NSPopUpButton *_categoriesPopUpButton;
    NSButton *_inheritedCheckbox;
    NSPopUpButton *_dataOrMethodsPopUpButton;
    NSPopUpButton *_instanceOrClassPopUpButton;
    NSButton *_okButton;
    PBXClassBrowserOptionsSet *_currentOptionsSet;
    SEL _didEndSelector;
}

+ (id)sharedClassBrowserOptionsModule;
- (void)runSheetModalForWindow:(id)arg1 forClassBrowser:(id)arg2 didEndSelector:(SEL)arg3;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)okButtonAction:(id)arg1;
- (void)listOrOutlineRadioAction:(id)arg1;
- (void)deleteOptionsSetButtonAction:(id)arg1;
- (void)addOptionsSetButtonAction:(id)arg1;
- (void)optionsSetPopUpButtonAction:(id)arg1;
- (void)viewDidLoad;
- (void)_rebuildOptionsSetsPopUp;
- (void)_selectCurrentOptionsSetInPopUp;
- (void)_saveUIToClassBrowserOptionsSet:(id)arg1;
- (void)_loadUIFromClassBrowserOptionsSet:(id)arg1;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;

@end

