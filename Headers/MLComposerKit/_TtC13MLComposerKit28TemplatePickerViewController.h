//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSButton, NSView;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit28TemplatePickerViewController : NSViewController
{
    MISSING_TYPE *containerView;
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *previousButton;
    MISSING_TYPE *nextButton;
    MISSING_TYPE *templatePickerChooser;
    MISSING_TYPE *templatePickerSetting;
    MISSING_TYPE *currentViewController;
    MISSING_TYPE *composerDocument;
    MISSING_TYPE *templateSetting;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)nextTapped:(id)arg1;
- (void)previousTapped:(id)arg1;
- (void)cancleTapped:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSButton *nextButton; // @synthesize nextButton;
@property(nonatomic) __weak NSButton *previousButton; // @synthesize previousButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView;

@end

