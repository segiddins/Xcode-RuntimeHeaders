//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTCocoaAdditionsKit/DVTDealloc2Main_WindowController.h>

#import <IDESourceControlUI/IDEOperationViewDelegate-Protocol.h>
#import <IDESourceControlUI/NSTouchBarDelegate-Protocol.h>

@class DVTReplacementView, DVTViewController, NSButton, NSDate, NSImageView, NSLayoutConstraint, NSOperationQueue, NSString, NSTextField, NSTimer, NSWindow;
@protocol IDEOperationViewController;

@interface IDEOperationWindowController : DVTDealloc2Main_WindowController <NSTouchBarDelegate, IDEOperationViewDelegate>
{
    NSWindow *_parentWindow;
    NSOperationQueue *_dismissalQueue;
    NSTimer *_showProgressTimer;
    NSDate *_showBusyTime;
    BOOL _assertOnTeardown;
    BOOL _sheetShown;
    BOOL _forceDisablePrimaryAction;
    BOOL _intendedPrimaryActionState;
    unsigned long long _alertStyle;
    NSImageView *_iconView;
    NSImageView *_subIconView;
    DVTReplacementView *_replacementView;
    NSButton *_primaryButton;
    NSButton *_secondaryButton;
    NSTextField *_titleTextField;
    NSTextField *_subtitleTextField;
    NSLayoutConstraint *_replacementViewHeight;
    NSLayoutConstraint *_replacementViewWidth;
    NSLayoutConstraint *_aboveReplacementViewSpacing;
    NSLayoutConstraint *_belowReplacementViewSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL intendedPrimaryActionState; // @synthesize intendedPrimaryActionState=_intendedPrimaryActionState;
@property(nonatomic) BOOL forceDisablePrimaryAction; // @synthesize forceDisablePrimaryAction=_forceDisablePrimaryAction;
@property(nonatomic) BOOL sheetShown; // @synthesize sheetShown=_sheetShown;
@property(nonatomic) BOOL assertOnTeardown; // @synthesize assertOnTeardown=_assertOnTeardown;
@property __weak NSLayoutConstraint *belowReplacementViewSpacing; // @synthesize belowReplacementViewSpacing=_belowReplacementViewSpacing;
@property __weak NSLayoutConstraint *aboveReplacementViewSpacing; // @synthesize aboveReplacementViewSpacing=_aboveReplacementViewSpacing;
@property __weak NSLayoutConstraint *replacementViewWidth; // @synthesize replacementViewWidth=_replacementViewWidth;
@property __weak NSLayoutConstraint *replacementViewHeight; // @synthesize replacementViewHeight=_replacementViewHeight;
@property __weak NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property __weak NSButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property __weak NSButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSImageView *subIconView; // @synthesize subIconView=_subIconView;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property unsigned long long alertStyle; // @synthesize alertStyle=_alertStyle;
- (id)makeTouchBar;
- (id)makeButtonGroupButtonWithButton:(id)arg1;
- (void)dealloc;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_reallyBeginSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginSheetForWindow:(id)arg1 operationViewControllerClass:(Class)arg2 workingCopy:(id)arg3 workingCopies:(id)arg4 workspace:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)beginSheetForWindow:(id)arg1 operationViewControllerClass:(Class)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 operationViewControllerClass:(Class)arg3 workingCopy:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(readonly) DVTViewController<IDEOperationViewController> *embeddedViewController;
- (void)enablePrimaryButton:(BOOL)arg1;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 progress:(double)arg3 determinate:(BOOL)arg4 forceBusy:(BOOL)arg5 error:(id)arg6;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 forceBusy:(BOOL)arg3 error:(id)arg4;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 forceBusy:(BOOL)arg3;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 error:(id)arg3;
- (void)updateStatus:(id)arg1 withProgress:(double)arg2;
- (void)updateStatus:(id)arg1 withState:(long long)arg2;
- (void)displayError:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)primaryAction:(id)arg1;
- (void)endSheetImmediately;
- (void)endSheet;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSWindow *window;

@end

