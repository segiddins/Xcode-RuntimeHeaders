//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI58IDESourceControlMultipleWorkingCopyOperationViewController.h>

@class DVTTextViewWithPlaceholder, NSScrollView, NSString;

@interface _TtC18IDESourceControlUI35IDESourceControlStashViewController : _TtC18IDESourceControlUI58IDESourceControlMultipleWorkingCopyOperationViewController
{
    // Error parsing type: , name: messageTextView
    // Error parsing type: , name: messageScrollView
    // Error parsing type: , name: workQueue
    // Error parsing type: , name: preflightCompletion
    // Error parsing type: , name: workingCopiesWithUncommittedChanges
    // Error parsing type: , name: modifiedWorkingCopiesPipeline
    // Error parsing type: , name: buildWorkingCopyMenusPipeline
    // Error parsing type: , name: preflightPipeline
    // Error parsing type: , name: preflightWindow
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryAction;
- (void)willBeginSheet;
- (void)preflightSheetOnWindow:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType preflightCompletion;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSScrollView *messageScrollView; // @synthesize messageScrollView;
@property(nonatomic, retain) DVTTextViewWithPlaceholder *messageTextView; // @synthesize messageTextView;

@end

