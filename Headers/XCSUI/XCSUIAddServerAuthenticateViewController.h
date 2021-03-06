//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class NSButton, NSError, NSTextField, XCSUIAddServerWindowController;

@interface XCSUIAddServerAuthenticateViewController : DVTViewController
{
    BOOL _authenticating;
    BOOL _authenticateAsRegisteredUser;
    XCSUIAddServerWindowController *_pagingSheetWindowController;
    NSButton *_okButton;
    NSTextField *_nameTextField;
    NSError *_authenticationError;
    unsigned long long _authenticationUserType;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) __weak NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property BOOL authenticateAsRegisteredUser; // @synthesize authenticateAsRegisteredUser=_authenticateAsRegisteredUser;
@property(nonatomic) unsigned long long authenticationUserType; // @synthesize authenticationUserType=_authenticationUserType;
@property BOOL authenticating; // @synthesize authenticating=_authenticating;
@property(retain, nonatomic) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property(retain, nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) NSButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) XCSUIAddServerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void)windowDidUpdate:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)goBackAction:(id)arg1;
- (void)_addAccountForAuthenticatedService:(id)arg1;
- (void)okAction:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

@end

