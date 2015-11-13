//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSImageView, NSMapTable, NSPanel, NSScrollView, NSTextField, NSTextView;

@interface IDEDetailedAlert : NSObject
{
    NSTextField *informativeTextTextField;
    NSTextField *messageTextTextField;
    NSButton *showDetailsButton;
    NSButton *alternateButton;
    NSButton *defaultButton;
    NSImageView *imageWell;
    NSPanel *panel;
    NSScrollView *detailsView;
    NSTextView *detailsTextView;
    NSMapTable *originalMetrics;
    id sheetDelegate;
    SEL sheetDidEndSelector;
    BOOL runningAsSheet;
}

+ (id)detailedAlertWithMessageText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 informativeText:(id)arg4 attributedDetailedMessage:(id)arg5;
+ (id)detailedAlertWithMessageText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 informativeText:(id)arg4 detailedMessage:(id)arg5;
+ (void)unregisterRunningAlert:(id)arg1;
+ (void)registerRunningAlert:(id)arg1;
+ (id)_runningAlerts;
- (void).cxx_destruct;
- (long long)runModal;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)defaultButtonAction:(id)arg1;
- (void)alternateButtonAction:(id)arg1;
- (void)finishWithCode:(long long)arg1;
- (void)toggleDetails:(id)arg1;
- (id)_openWindowTerminationDisablingReason;
- (void)layout;
- (void)layoutByAnimating:(BOOL)arg1;
- (struct CGRect)originalFrame:(id)arg1;
- (struct CGRect)originalBounds:(id)arg1;
- (void)captureMetrics;
- (id)panel;
- (void)setAttributedDetailedMessage:(id)arg1;
- (void)setDetailedMessage:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setHasDefaultButton:(BOOL)arg1;
- (BOOL)showingDetails;
- (void)setShowingDetails:(BOOL)arg1;
- (id)contentView;
- (id)initWithMessageText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 informativeText:(id)arg4 attributedDetailedMessage:(id)arg5;
- (id)initWithMessageText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 informativeText:(id)arg4 detailedMessage:(id)arg5;

@end

