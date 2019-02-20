//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSTextFieldDelegate-Protocol.h>

@class NSButton, NSString, NSTextField;

@interface PBXTextFieldEntryModule : PBXModule <NSTextFieldDelegate>
{
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    NSTextField *_titleField;
    NSTextField *_stringField;
    id _modalDelegate;
    SEL _didEndSel;
}

- (void)controlTextDidChange:(id)arg1;
- (void)cancelButtonAction:(id)arg1;
- (void)defaultButtonAction:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)runModalRelativeToWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)string;
- (void)setString:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
