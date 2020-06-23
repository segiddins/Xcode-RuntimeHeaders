//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTPopUpButtonCell.h>

#import <Xcode3UI/NSMenuDelegate-Protocol.h>

@class DVTMacroDefinitionConditionSet, NSString, XCPropertyDefinition, Xcode3BuildPropertyRowContext, Xcode3BuildSettingsEditor;

@interface Xcode3BuildPropertyPopUpButtonCell : DVTPopUpButtonCell <NSMenuDelegate>
{
    Xcode3BuildSettingsEditor *_buildSettingsEditor;
    Xcode3BuildPropertyRowContext *_rowContext;
    XCPropertyDefinition *_currentPropertyDefinition;
    NSString *_currentPropertyDefinitionName;
    DVTMacroDefinitionConditionSet *_currentPropertyConditionSet;
    BOOL _allowsConditionalizeArchitecture;
    BOOL _allowsConditionalizeSDK;
}

@property __weak Xcode3BuildSettingsEditor *buildSettingsEditor; // @synthesize buildSettingsEditor=_buildSettingsEditor;
- (void).cxx_destruct;
- (void)_sdkMenuItemAction:(id)arg1;
- (void)_architectureMenuItemAction:(id)arg1;
- (void)_editBuildConfigurationMenuItemAction:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateMenuItemTitle;
- (void)setFlavorValuesForRowContext:(id)arg1;
- (void)_computeAllowedPropertyConditionFlavors;
- (void)_modifyConditionSetForFlavor:(id)arg1 conditionString:(id)arg2;
- (void)setConditionSet:(id)arg1;
- (void)setConditionSet:(id)arg1 forRowContext:(id)arg2 preselect:(BOOL)arg3;
@property(readonly) BOOL allowsConditions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

