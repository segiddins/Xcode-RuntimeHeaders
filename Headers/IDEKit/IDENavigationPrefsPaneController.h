//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSTextField;

@interface IDENavigationPrefsPaneController : IDEViewController
{
    NSPopUpButton *_commandClickOnCodePopUpButton;
    NSPopUpButton *_optionClickOnCodePopUpButton;
    NSPopUpButton *_navigationPopUpButton;
    NSPopUpButton *_optionalNavigationPopUpButton;
    NSPopUpButton *_doubleClickNavigationPopUpButton;
    NSTextField *_commandControlClickTextLabel;
    NSTextField *_optionControlClickTextLabel;
    NSTextField *_singleClickTextLabel;
    NSTextField *_optionClickTextLabel;
    NSTextField *_optionShiftClickTextLabel;
    NSTextField *_doubleClickTextLabel;
}

+ (unsigned long long)defaultOptionControlClickOnCodeAction;
+ (unsigned long long)defaultOptionClickOnCodeAction;
+ (unsigned long long)defaultCommandControlClickOnCodeAction;
+ (BOOL)useCommandClickForNavigation;
+ (unsigned long long)defaultCommandClickOnCodeAction;
+ (void)registerUserDefaultsIfNeeded;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSTextField *doubleClickTextLabel; // @synthesize doubleClickTextLabel=_doubleClickTextLabel;
@property(retain) NSTextField *optionShiftClickTextLabel; // @synthesize optionShiftClickTextLabel=_optionShiftClickTextLabel;
@property(retain) NSTextField *optionClickTextLabel; // @synthesize optionClickTextLabel=_optionClickTextLabel;
@property(retain) NSTextField *singleClickTextLabel; // @synthesize singleClickTextLabel=_singleClickTextLabel;
@property(retain) NSTextField *optionControlClickTextLabel; // @synthesize optionControlClickTextLabel=_optionControlClickTextLabel;
@property(retain) NSTextField *commandControlClickTextLabel; // @synthesize commandControlClickTextLabel=_commandControlClickTextLabel;
@property(retain) NSPopUpButton *doubleClickNavigationPopUpButton; // @synthesize doubleClickNavigationPopUpButton=_doubleClickNavigationPopUpButton;
@property(retain) NSPopUpButton *optionalNavigationPopUpButton; // @synthesize optionalNavigationPopUpButton=_optionalNavigationPopUpButton;
@property(retain) NSPopUpButton *navigationPopUpButton; // @synthesize navigationPopUpButton=_navigationPopUpButton;
@property(retain) NSPopUpButton *optionClickOnCodePopUpButton; // @synthesize optionClickOnCodePopUpButton=_optionClickOnCodePopUpButton;
@property(retain) NSPopUpButton *commandClickOnCodePopUpButton; // @synthesize commandClickOnCodePopUpButton=_commandClickOnCodePopUpButton;
- (void)setDoubleClickTarget:(unsigned long long)arg1;
- (unsigned long long)doubleClickTarget;
- (void)_setupDoubleClickNavigationPopUpButton;
- (void)setOptionShiftClickTarget:(unsigned long long)arg1;
- (unsigned long long)optionShiftClickTarget;
- (void)setOptionClickTarget:(unsigned long long)arg1;
- (unsigned long long)optionClickTarget;
- (void)_setupOptionalNavigationPopUpButton;
- (void)setSingleClickTarget:(unsigned long long)arg1;
- (unsigned long long)singleClickTarget;
- (void)_setupNavigationPopUpButton;
- (unsigned long long)optionControlClickOnCodeAction;
- (void)setOptionClickOnCodeAction:(unsigned long long)arg1;
- (unsigned long long)optionClickOnCodeAction;
- (void)_setupOptionClickOnCodePopUpButton;
- (unsigned long long)commandControlClickOnCodeAction;
- (void)setCommandClickOnCodeAction:(unsigned long long)arg1;
- (unsigned long long)commandClickOnCodeAction;
- (void)_setupCommandClickOnCodePopUpButton;
- (void)setUseTabsInsteadOfWindowsInFullscreen:(BOOL)arg1;
- (BOOL)useTabsInsteadOfWindowsInFullscreen;
- (void)setShouldActivateNewTabsAndWindows:(BOOL)arg1;
- (BOOL)shouldActivateNewTabsAndWindows;
- (id)_labelNameForTarget:(unsigned long long)arg1;
- (id)_labelNameForModifierClickOnCodeAction:(unsigned long long)arg1;
- (void)_updateTextLabels;
- (id)_menuNameForTarget:(unsigned long long)arg1;
- (id)_menuItemForEventBehavior:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (id)_menuNameForModifierClickOnCodeAction:(unsigned long long)arg1;
- (id)_menuItemForModifierClickOnCodeAction:(unsigned long long)arg1;
- (void)loadView;

@end

