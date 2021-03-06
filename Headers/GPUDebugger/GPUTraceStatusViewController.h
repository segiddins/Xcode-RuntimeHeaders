//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSProgressIndicator, NSTextField;

@interface GPUTraceStatusViewController : NSViewController
{
    CDUnknownBlockType _action;
    NSTextField *_textField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_actionButton;
}

- (void).cxx_destruct;
@property __weak NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void)onActionButtonClicked:(id)arg1;
- (void)setActionButtonEnabled:(BOOL)arg1;
- (void)showActionButtonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)showProgressIndicator:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)uninstall:(id)arg1;
- (void)install:(id)arg1;
- (void)viewDidLoad;
- (id)initUsingDefaultNib;

@end

