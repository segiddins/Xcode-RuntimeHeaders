//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class DVTDelayedInvocation, DVTObservingToken, NSPanel, NSPopUpButton, NSTextField;

@interface IDEiPhoneInternalAppInstallOptionController : IDELaunchActionOptionViewController
{
    _Bool _enableUI;
    NSPopUpButton *_applicationPopUpButton;
    NSPopUpButton *_installStylePopUpButton;
    NSPanel *_otherBundleIdPanel;
    NSTextField *_otherBundleIdField;
    DVTObservingToken *_applicationsTokens;
    DVTObservingToken *_systemApplicationsTokens;
    DVTDelayedInvocation *_updateMenuInvocation;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
@property _Bool enableUI; // @synthesize enableUI=_enableUI;
@property(retain) DVTDelayedInvocation *updateMenuInvocation; // @synthesize updateMenuInvocation=_updateMenuInvocation;
@property(retain) DVTObservingToken *systemApplicationsTokens; // @synthesize systemApplicationsTokens=_systemApplicationsTokens;
@property(retain) DVTObservingToken *applicationsTokens; // @synthesize applicationsTokens=_applicationsTokens;
@property(retain) NSTextField *otherBundleIdField; // @synthesize otherBundleIdField=_otherBundleIdField;
@property(retain) NSPanel *otherBundleIdPanel; // @synthesize otherBundleIdPanel=_otherBundleIdPanel;
@property(retain) NSPopUpButton *installStylePopUpButton; // @synthesize installStylePopUpButton=_installStylePopUpButton;
@property(retain) NSPopUpButton *applicationPopUpButton; // @synthesize applicationPopUpButton=_applicationPopUpButton;
- (void)loadView;
- (void)cancelBundleIdPanel:(id)arg1;
- (void)confirmBundleIdPanel:(id)arg1;
- (void)_applicationMenuAction:(id)arg1;
- (void)_updateApplicationMenu;
- (void)primitiveInvalidate;

@end

