//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class MISSING_TYPE, NSButton;

@interface _TtC18IDESourceControlUI24PullRequestFormatBarView : DVTViewController
{
    MISSING_TYPE *scopeBarChangedCallback;
    MISSING_TYPE *attachmentsAddedCallback;
    MISSING_TYPE *editButton;
    MISSING_TYPE *previewButton;
    MISSING_TYPE *attachmentButton;
    MISSING_TYPE *addAttachmentController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addAttachment:(id)arg1;
- (void)preview:(id)arg1;
- (void)edit:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSButton *attachmentButton; // @synthesize attachmentButton;
@property(nonatomic) __weak NSButton *previewButton; // @synthesize previewButton;
@property(nonatomic) __weak NSButton *editButton; // @synthesize editButton;

@end
