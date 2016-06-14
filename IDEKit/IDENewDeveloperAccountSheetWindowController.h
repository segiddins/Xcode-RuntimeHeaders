//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTDeveloperAccount, NSButton, NSMutableSet, NSProgressIndicator, NSTextField, NSWindow;

@interface IDENewDeveloperAccountSheetWindowController : NSWindowController
{
    NSMutableSet *_sheetControllerHolderSet;
    BOOL _forceLegacyAuth;
    NSButton *_addButton;
    NSButton *_cancelButton;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    NSProgressIndicator *_progressIndicator;
    DVTDeveloperAccount *_account;
    CDUnknownBlockType _completionBlock;
    NSWindow *_hostWindow;
}

@property(nonatomic) __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property BOOL forceLegacyAuth; // @synthesize forceLegacyAuth=_forceLegacyAuth;
- (void).cxx_destruct;
- (void)signUp:(id)arg1;
- (void)cancel:(id)arg1;
- (void)closeWithCode:(long long)arg1;
- (void)addAccount:(id)arg1;
- (void)ide_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)completeAuthKitResponse;
- (void)addAccountFromAuthKitResponse:(id)arg1;
- (void)handleAuthKitResponse:(id)arg1 error:(id)arg2;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)windowNibName;

@end

