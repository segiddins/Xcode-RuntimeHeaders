//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImageView, NSSet, NSTextField;

@interface IBICAlertPopoverViewController : NSViewController
{
    NSSet *_issues;
    NSImageView *_iconView;
    NSTextField *_messageText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSSet *issues; // @synthesize issues=_issues;
- (void)viewDidLoad;
- (id)initWithIssues:(id)arg1;

@end

