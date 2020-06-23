//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

#import <DebuggerUI/IDESystemModalDebugBarContentProvider-Protocol.h>
#import <DebuggerUI/NSPopoverDelegate-Protocol.h>

@class DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, IDESystemModalDebugBarItemState, NSArray, NSMutableArray, NSObject, NSPopover, NSString;
@protocol DBGKitDebuggingAddition;

@interface IDEDebugOverridesDebugBarContentProvider : IDEDebugBarContentProvider <IDESystemModalDebugBarContentProvider, NSPopoverDelegate>
{
    BOOL _enablePopover;
    NSPopover *_popover;
    NSArray *_debugOverridesByCategory;
    DVTObservingToken *_debuggingAdditionToken;
    NSObject<DBGKitDebuggingAddition> *_previousKitDebuggingAddition;
    DVTGradientImageButton *_appearancePopoverButton;
    DVTGradientImagePopUpButton *_appearancePopUpButton;
    IDESystemModalDebugBarItemState *_systemModalDebugBarItemState;
    DVTObservingToken *_appearanceOverrideStateToken;
    NSMutableArray *_popoverTouchBarButtons;
    NSMutableArray *_popoverTouchBarSwitches;
}

+ (id)iconImage_debugOverridesDisabled;
+ (id)iconImage_debugOverridesEnabled;
+ (id)assetBundle;
@property(retain) NSMutableArray *popoverTouchBarSwitches; // @synthesize popoverTouchBarSwitches=_popoverTouchBarSwitches;
@property(retain) NSMutableArray *popoverTouchBarButtons; // @synthesize popoverTouchBarButtons=_popoverTouchBarButtons;
@property(retain) DVTObservingToken *appearanceOverrideStateToken; // @synthesize appearanceOverrideStateToken=_appearanceOverrideStateToken;
@property(retain, nonatomic) IDESystemModalDebugBarItemState *systemModalDebugBarItemState; // @synthesize systemModalDebugBarItemState=_systemModalDebugBarItemState;
@property(retain, nonatomic) DVTGradientImagePopUpButton *appearancePopUpButton; // @synthesize appearancePopUpButton=_appearancePopUpButton;
@property(retain, nonatomic) DVTGradientImageButton *appearancePopoverButton; // @synthesize appearancePopoverButton=_appearancePopoverButton;
@property(retain, nonatomic) NSObject<DBGKitDebuggingAddition> *previousKitDebuggingAddition; // @synthesize previousKitDebuggingAddition=_previousKitDebuggingAddition;
@property(retain) DVTObservingToken *debuggingAdditionToken; // @synthesize debuggingAdditionToken=_debuggingAdditionToken;
@property(retain, nonatomic) NSArray *debugOverridesByCategory; // @synthesize debugOverridesByCategory=_debugOverridesByCategory;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)_updateDebugOverridesByCategory;
- (id)_debuggingAdditionOfLaunchSession:(id)arg1 conformingToProtocol:(id)arg2;
- (BOOL)debuggingAdditionSupportsAppearanceOverrides:(id)arg1;
- (BOOL)_debuggingAdditionSupportsDebugOverrides:(id)arg1;
- (BOOL)debuggingAdditionSupportsOverrides:(id)arg1;
- (id)kitDebuggingAddition;
- (void)_configureAppearanceMenu;
- (id)_imageForCurrentDebugOverrideState;
- (id)_imageForCurrentAppearanceOverride;
- (long long)_cellStateForCurrentAppearanceOverride;
- (long long)_cellStateForCurrentDebugOverrides;
- (void)_updateButtonDisplayForCurrentAppearanceOverride;
- (void)_updatePopoverTouchBarDebugOverrideSwitches;
- (void)_updateButtonDisplayForCurrentDebugOverrides;
- (void)_updateButtonDisplay;
- (void)_updateDebugBarButton;
- (void)showPopover;
- (void)_setupDebuggingAdditionObservingWithDebugBar:(id)arg1;
- (void)_setupDebuggingAdditionStateChangedObserving;
- (void)_refreshDebugOverrideButtons;
- (void)_refreshDebugOverrides;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (id)effectiveAppearanceButton;
- (void)_setupAppearancePopUpButton;
- (void)_appearancePopoverButtonAction;
- (void)_setupAppearancePopoverButton;
@property(readonly) BOOL usePopover;
- (id)init;
- (void)_updateSystemAppearanceOverride:(unsigned long long)arg1;
- (void)systemAppearanceIncreasedContrastDark:(id)arg1;
- (void)systemAppearanceIncreasedContrastLight:(id)arg1;
- (void)systemAppearanceDark:(id)arg1;
- (void)systemAppearanceLight:(id)arg1;
- (void)systemAppearanceAuto:(id)arg1;
- (id)_makeApperanceOverrideSystemModalPopoverTouchBar;
- (void)updateShowMoreButton;
- (void)showMoreButtonAction:(id)arg1;
- (id)_makeDebugOverrideSystemModalPopoverTouchBar;
- (void)updateSystemModalDebugBarItemState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

