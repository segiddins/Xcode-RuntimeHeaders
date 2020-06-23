//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <DVTDeviceKit/DVTDevicesWindowDetailViewController-Protocol.h>
#import <DVTDeviceKit/DVTTabChooserViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDevice, DVTDeviceContentSplitViewController, DVTGradientImageButton, DVTObservingToken, DVTReplacementView, DVTStackBacktrace, DVTTabChooserView, NSArray, NSButton, NSLayoutConstraint, NSString;
@protocol DVTDevicesWindowConsoleViewController;

@interface DVTDeviceConsoleViewController : DVTViewController <DVTTabChooserViewDelegate, DVTDevicesWindowDetailViewController>
{
    DVTObservingToken *_proxiedDeviceObserver;
    DVTObservingToken *_installedViewControllerObserver;
    DVTObservingToken *_deviceWindowCategoryObserer;
    BOOL _animating;
    BOOL _consoleVisible;
    DVTDevice *_device;
    DVTReplacementView *_replacementView;
    DVTDeviceContentSplitViewController *_splitViewController;
    DVTBorderedView *_footerView;
    DVTGradientImageButton *_consoleButton;
    DVTTabChooserView *_consoleChooserView;
    NSLayoutConstraint *_consoleChooserWidthConstraint;
    NSButton *_consoleClearButton;
    NSButton *_consoleSaveButton;
    NSArray *_savedConsoleChoices;
    NSString *_savedConsoleSelectedChoiceTitle;
}

+ (void)initialze;
- (void).cxx_destruct;
@property(retain) NSString *savedConsoleSelectedChoiceTitle; // @synthesize savedConsoleSelectedChoiceTitle=_savedConsoleSelectedChoiceTitle;
@property(retain) NSArray *savedConsoleChoices; // @synthesize savedConsoleChoices=_savedConsoleChoices;
@property(nonatomic, getter=isConsoleVisible) BOOL consoleVisible; // @synthesize consoleVisible=_consoleVisible;
@property(retain) NSButton *consoleSaveButton; // @synthesize consoleSaveButton=_consoleSaveButton;
@property(retain) NSButton *consoleClearButton; // @synthesize consoleClearButton=_consoleClearButton;
@property(retain) NSLayoutConstraint *consoleChooserWidthConstraint; // @synthesize consoleChooserWidthConstraint=_consoleChooserWidthConstraint;
@property(retain) DVTTabChooserView *consoleChooserView; // @synthesize consoleChooserView=_consoleChooserView;
@property(retain) DVTGradientImageButton *consoleButton; // @synthesize consoleButton=_consoleButton;
@property(retain) DVTBorderedView *footerView; // @synthesize footerView=_footerView;
@property BOOL animating; // @synthesize animating=_animating;
@property __weak DVTDeviceContentSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void)_syncConsoleTabSelectedChoice;
- (void)_syncConsoleTabChoices;
- (void)_restoreConsoleState;
- (void)_restoreConsoleDividerPositionState;
- (void)_restoreConsoleVisibleState;
- (void)_saveConsoleDividerPositionState;
- (void)_saveConsoleVisibleState;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)saveConsole:(id)arg1;
- (void)clearConsole:(id)arg1;
- (void)toggleConsole:(id)arg1;
@property(readonly) double footerViewHeight;
@property(readonly) DVTViewController<DVTDevicesWindowConsoleViewController> *consoleViewController;
- (void)viewDidLayout;
- (void)_adjustButtonStyling:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

