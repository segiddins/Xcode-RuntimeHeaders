//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTTextViewWithPlaceholder, MISSING_TYPE, NSButton, NSString, NSTextField;

@interface _TtC18IDESourceControlUI41IDESourceControlAutoStashWindowController : NSWindowController
{
    MISSING_TYPE *descriptionTextField;
    MISSING_TYPE *descriptionTextView;
    MISSING_TYPE *automaticallyApplyButton;
    MISSING_TYPE *stashButton;
    MISSING_TYPE *stashButtonTitle;
    MISSING_TYPE *allWorkingCopies;
    MISSING_TYPE *workingCopiesWithUncommittedChanges;
    MISSING_TYPE *parentWindow;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)automaticallyApplyStash:(id)arg1;
- (void)stashAndPull:(id)arg1;
- (void)cancel:(id)arg1;
@property(nonatomic, readonly) NSString *windowNibName;
@property(nonatomic) __weak NSButton *stashButton; // @synthesize stashButton;
@property(nonatomic) __weak NSButton *automaticallyApplyButton; // @synthesize automaticallyApplyButton;
@property(nonatomic, retain) DVTTextViewWithPlaceholder *descriptionTextView; // @synthesize descriptionTextView;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField;

@end

