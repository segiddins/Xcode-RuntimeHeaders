//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, MISSING_TYPE, NSButton, NSProgressIndicator, NSTextField, NSView;

@interface _TtC18IDESourceControlUI52IDESourceControlRepositoriesBlankSlateViewController : DVTViewController
{
    MISSING_TYPE *blankSlateView;
    MISSING_TYPE *blankSlateProgress;
    MISSING_TYPE *blankSlatePlaceholderContainerView;
    MISSING_TYPE *blankSlateTitle;
    MISSING_TYPE *blankSlateSubtitle;
    MISSING_TYPE *blankSlatePreferencesShortcutButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showPreferences:(id)arg1;
- (void)loadView;
@property(nonatomic) __weak NSButton *blankSlatePreferencesShortcutButton; // @synthesize blankSlatePreferencesShortcutButton;
@property(nonatomic) __weak NSTextField *blankSlateSubtitle; // @synthesize blankSlateSubtitle;
@property(nonatomic) __weak NSTextField *blankSlateTitle; // @synthesize blankSlateTitle;
@property(nonatomic) __weak NSView *blankSlatePlaceholderContainerView; // @synthesize blankSlatePlaceholderContainerView;
@property(nonatomic) __weak NSProgressIndicator *blankSlateProgress; // @synthesize blankSlateProgress;
@property(nonatomic) __weak DVTBorderedView *blankSlateView; // @synthesize blankSlateView;

@end
