//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class MISSING_TYPE;

@interface _TtC18IDESourceControlUI17ChangesController : NSSplitViewController
{
    MISSING_TYPE *pullRequest;
    MISSING_TYPE *fileController;
    MISSING_TYPE *comparisonController;
    MISSING_TYPE *originalGutterHandler;
    MISSING_TYPE *modifiedGutterHandler;
    MISSING_TYPE *navigationBar;
    MISSING_TYPE *stateItem;
    MISSING_TYPE *placeholder;
    MISSING_TYPE *templater;
    MISSING_TYPE *processPool;
    MISSING_TYPE *markdownController;
    MISSING_TYPE *appearanceObserver;
    MISSING_TYPE *sidebarCollapsedObserver;
    MISSING_TYPE *activeEditorVisualization;
    MISSING_TYPE *currentDiscussion;
    MISSING_TYPE *publishCancellable;
    MISSING_TYPE *listCommitsCancellable;
    MISSING_TYPE *renderedResult;
    MISSING_TYPE *skipNextEventUpdate;
    MISSING_TYPE *loadingSubscriber;
    MISSING_TYPE *$__lazy_storage_$_leftAccessoryView;
    MISSING_TYPE *$__lazy_storage_$_rightAccessoryView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)unfoldAll;
- (void)toggleCommentCodeFocus;
- (void)toggleCodeFocus;
- (void)toggleInvisibles;
- (void)showInline;
- (void)showTwoUp;
- (void)openRevisionSelector:(id)arg1;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
