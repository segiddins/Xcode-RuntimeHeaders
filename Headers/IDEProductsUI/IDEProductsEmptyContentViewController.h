//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTDelayedInvocation, NSButton, NSProgressIndicator, NSString, NSTextField;

@interface IDEProductsEmptyContentViewController : IDEViewController
{
    BOOL _isBusy;
    BOOL _shouldDelayShowingTitleAndSubtitle;
    BOOL _showResolutionButton;
    BOOL _shouldShowDelayedTitleAndSubtitle;
    BOOL _shouldShowDelayedSpinner;
    NSString *_emptyContentTitle;
    NSString *_emptyContentSubtitle;
    NSProgressIndicator *_spinner;
    NSTextField *_titleField;
    NSTextField *_subtitleField;
    NSButton *_resolutionButton;
    NSString *_resolutionButtonTitle;
    id _resolutionButtonTarget;
    SEL _resolutionButtonAction;
    DVTDelayedInvocation *_delayedShowTitleAndSubtitle;
}

- (void).cxx_destruct;
@property(retain) DVTDelayedInvocation *delayedShowTitleAndSubtitle; // @synthesize delayedShowTitleAndSubtitle=_delayedShowTitleAndSubtitle;
@property BOOL shouldShowDelayedSpinner; // @synthesize shouldShowDelayedSpinner=_shouldShowDelayedSpinner;
@property BOOL shouldShowDelayedTitleAndSubtitle; // @synthesize shouldShowDelayedTitleAndSubtitle=_shouldShowDelayedTitleAndSubtitle;
@property SEL resolutionButtonAction; // @synthesize resolutionButtonAction=_resolutionButtonAction;
@property(retain) id resolutionButtonTarget; // @synthesize resolutionButtonTarget=_resolutionButtonTarget;
@property(retain) NSString *resolutionButtonTitle; // @synthesize resolutionButtonTitle=_resolutionButtonTitle;
@property BOOL showResolutionButton; // @synthesize showResolutionButton=_showResolutionButton;
@property __weak NSButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property __weak NSTextField *subtitleField; // @synthesize subtitleField=_subtitleField;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property BOOL shouldDelayShowingTitleAndSubtitle; // @synthesize shouldDelayShowingTitleAndSubtitle=_shouldDelayShowingTitleAndSubtitle;
@property(nonatomic) BOOL isBusy; // @synthesize isBusy=_isBusy;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentTitle; // @synthesize emptyContentTitle=_emptyContentTitle;
- (void)primitiveInvalidate;
- (void)resolve:(id)arg1;
- (void)disableResolutionButton;
- (void)enableResolutionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_scheduleShowingTitleAndSubtitle;
- (void)showTitleAndSubtitle;
- (void)viewDidLoad;

@end

