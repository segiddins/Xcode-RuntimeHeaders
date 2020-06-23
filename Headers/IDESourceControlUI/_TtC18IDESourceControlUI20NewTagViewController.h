//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTSourceControlWorkingCopy, MISSING_TYPE, NSString, NSTextField;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI20NewTagViewController : DVTViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *revisionLocation;
    MISSING_TYPE *revision;
    MISSING_TYPE *operation;
    MISSING_TYPE *revisionField;
    MISSING_TYPE *newTagNameField;
    MISSING_TYPE *newTagMessageField;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)tearDownAction;
- (void)primaryAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, copy) id context;
@property(nonatomic, retain) NSTextField *newTagMessageField; // @synthesize newTagMessageField;
@property(nonatomic, retain) NSTextField *newTagNameField; // @synthesize newTagNameField;
@property(nonatomic, retain) NSTextField *revisionField; // @synthesize revisionField;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;

@end

