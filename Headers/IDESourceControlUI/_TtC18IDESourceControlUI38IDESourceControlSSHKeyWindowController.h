//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MISSING_TYPE, NSButton, NSSecureTextField, NSTextField;

@interface _TtC18IDESourceControlUI38IDESourceControlSSHKeyWindowController : NSWindowController
{
    MISSING_TYPE *labelTextField;
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *generateButton;
    MISSING_TYPE *passphraseSecureTextField;
    MISSING_TYPE *titleTextField;
    MISSING_TYPE *confirmPassphraseSecureTextField;
    MISSING_TYPE *automaticallyCreateSSHFolderTextField;
    MISSING_TYPE *passphrase;
    MISSING_TYPE *confirmPassphrase;
    MISSING_TYPE *mode;
    MISSING_TYPE *showSavePanel;
    MISSING_TYPE *sshKeyStrategy;
    MISSING_TYPE *error;
    MISSING_TYPE *hostWindow;
    MISSING_TYPE *cancellableOperation;
    MISSING_TYPE *completion;
    MISSING_TYPE *controlsEnabled;
    MISSING_TYPE *passwordHelper;
}

- (void).cxx_destruct;
- (void)passwordAssistantButtonAction:(id)arg1;
- (void)generateClickWithSender:(id)arg1;
- (void)beginValidateSheetFor:(id)arg1 withSSHKeyStrategy:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginGenerateSheetFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginGenerateSheetWithSavePanel:(BOOL)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (void)cancelClickWithSender:(id)arg1;
- (void)loadWindow;
- (void)controlTextDidChange:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(nonatomic) __weak NSTextField *automaticallyCreateSSHFolderTextField; // @synthesize automaticallyCreateSSHFolderTextField;
@property(nonatomic) __weak NSSecureTextField *confirmPassphraseSecureTextField; // @synthesize confirmPassphraseSecureTextField;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField;
@property(nonatomic) __weak NSSecureTextField *passphraseSecureTextField; // @synthesize passphraseSecureTextField;
@property(nonatomic) __weak NSButton *generateButton; // @synthesize generateButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak NSTextField *labelTextField; // @synthesize labelTextField;

@end

