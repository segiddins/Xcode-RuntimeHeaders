//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MISSING_TYPE, NSButton, NSPopUpButton, NSTextField;

@interface _TtC18IDESourceControlUI50IDESourceControlCloneBranchChooserWindowController : NSWindowController
{
    MISSING_TYPE *title;
    MISSING_TYPE *branchesPopUp;
    MISSING_TYPE *cloneButton;
    MISSING_TYPE *remoteRepository;
    MISSING_TYPE *branches;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)clone:(id)arg1;
- (void)cancel:(id)arg1;
- (void)loadWindow;
@property(nonatomic) __weak NSButton *cloneButton; // @synthesize cloneButton;
@property(nonatomic) __weak NSPopUpButton *branchesPopUp; // @synthesize branchesPopUp;
@property(nonatomic) __weak NSTextField *title; // @synthesize title;

@end

