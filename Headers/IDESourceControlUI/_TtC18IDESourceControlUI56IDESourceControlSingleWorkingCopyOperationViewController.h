//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTSourceControlWorkingCopy, MISSING_TYPE, NSArray, NSPopUpButton, NSString;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI56IDESourceControlSingleWorkingCopyOperationViewController : DVTViewController
{
    MISSING_TYPE *workQueue;
    MISSING_TYPE *workingCopies;
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *delegate;
    MISSING_TYPE *operation;
    MISSING_TYPE *workingCopyButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)willBeginSheet;
- (void)selectWorkingCopy:(id)arg1;
@property(nonatomic) __weak NSPopUpButton *workingCopyButton; // @synthesize workingCopyButton;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, copy) NSArray *workingCopies;
@property(nonatomic, copy) id context;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;

@end

