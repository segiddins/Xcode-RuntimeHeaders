//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE;

@interface _TtC18IDESourceControlUI28BannerActionsViewControlller : NSViewController
{
    MISSING_TYPE *publishPullRequestCallback;
    MISSING_TYPE *actionCallback;
    MISSING_TYPE *mergeCallback;
    MISSING_TYPE *reloadCallback;
    MISSING_TYPE *$__lazy_storage_$_segmentedControl;
    MISSING_TYPE *$__lazy_storage_$_popUpButton;
    MISSING_TYPE *containerView;
    MISSING_TYPE *pullRequest;
    MISSING_TYPE *defaultSize;
    MISSING_TYPE *segementedControlAction;
    MISSING_TYPE *mergeWindowController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)merge:(id)arg1;
- (void)publish:(id)arg1;
- (void)approve:(id)arg1;
- (void)deleteDraftPullRequest:(id)arg1;
- (void)workflowAction:(id)arg1;
- (void)reload:(id)arg1;
- (void)showInBrowser:(id)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;

@end
