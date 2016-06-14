//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXWizard.h>

@class NSBox, NSPopUpButton, NSTextField, PBXItemsSelectionModule;

@interface PBXTargetWizard : PBXWizard
{
    NSTextField *_targetNameField;
    NSPopUpButton *_projectPopup;
    PBXItemsSelectionModule *_targetSelectionModule;
    NSBox *_targetSelectionBox;
    NSTextField *_addTargetPrompt;
}

+ (id)defaultModuleNibName;
+ (Class)targetClass;
+ (id)categorizedWizardName;
+ (void)unregisterAsChoosableWizard;
+ (void)registerAsChoosableWizard;
+ (id)registeredWizardClasses;
- (void)finish;
- (void)addBundleTargetToApplication:(id)arg1;
- (id)createTargetWithName:(id)arg1;
- (void)chooseProject:(id)arg1;
- (void)takeTargetNameFrom:(id)arg1;
- (void)_invalidTargetNameAlertSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)validateSettings;
- (BOOL)canFinish;
- (void)viewDidLoad;
- (void)itemsSelectionModule:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (BOOL)itemsSelectionModule:(id)arg1 shouldCheckItem:(id)arg2;
- (void)_populateProjectPopup;
- (id)firstKeyView;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setProject:(id)arg1;
- (id)project;
- (void)setTargetName:(id)arg1;
- (id)targetName;

@end

