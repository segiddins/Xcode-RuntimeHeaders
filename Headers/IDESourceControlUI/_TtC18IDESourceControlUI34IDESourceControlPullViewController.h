//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI58IDESourceControlMultipleWorkingCopyOperationViewController.h>

@class IDEWorkspace, MISSING_TYPE, NSButton, NSString;

@interface _TtC18IDESourceControlUI34IDESourceControlPullViewController : _TtC18IDESourceControlUI58IDESourceControlMultipleWorkingCopyOperationViewController
{
    MISSING_TYPE *workspace;
    MISSING_TYPE *rebaseButton;
    MISSING_TYPE *workQueue;
    MISSING_TYPE *workingCopiesWithUncommittedChanges;
    MISSING_TYPE *modifiedWorkingCopiesPipeline;
    MISSING_TYPE *buildWorkingCopyMenusPipeline;
    MISSING_TYPE *verifyAuthorPipeline;
    MISSING_TYPE *preflightPipeline;
    MISSING_TYPE *abortConflictsPipeline;
    MISSING_TYPE *finishConflictsPipeline;
    MISSING_TYPE *showConflictsPipeline;
    MISSING_TYPE *autoStashesByWorkingCopy;
    MISSING_TYPE *stashChangesPipeline;
    MISSING_TYPE *automaticallyApplyStashIfPullSucceeds;
    MISSING_TYPE *stashPipeline;
    MISSING_TYPE *applyStashPipeline;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSButton *rebaseButton; // @synthesize rebaseButton;
@property(nonatomic, retain) IDEWorkspace *workspace; // @synthesize workspace;

@end

