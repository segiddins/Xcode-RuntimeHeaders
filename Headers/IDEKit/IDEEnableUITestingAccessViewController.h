//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/NSTextViewDelegate-Protocol.h>

@class NSButton, NSProgressIndicator, NSString, NSTextField;

@interface IDEEnableUITestingAccessViewController : NSViewController <NSTextViewDelegate>
{
    NSTextField *_titleText;
    NSTextField *_descriptionText;
    NSButton *_accessButton;
    NSButton *_skipButton;
    NSProgressIndicator *_progressBar;
    CDUnknownBlockType skipHandler;
    CDUnknownBlockType requestAccessHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType requestAccessHandler; // @synthesize requestAccessHandler;
@property(copy) CDUnknownBlockType skipHandler; // @synthesize skipHandler;
- (void)skip:(id)arg1;
- (void)requestAccess:(id)arg1;
- (void)viewDidAppear;
- (id)initWithDefaultNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

