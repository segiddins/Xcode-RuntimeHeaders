//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEProvisioningIssue.h>

@class IDEProvisioningIssueResolutionWindowController, IDEProvisioningUserAction, NSWindow;

@interface IDEProvisioningUserActionIssue : IDEProvisioningIssue
{
    IDEProvisioningUserAction *_userAction;
    IDEProvisioningIssueResolutionWindowController *_issueResolutionWindowController;
    NSWindow *_issueResolutionWindowControllerHostWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSWindow *issueResolutionWindowControllerHostWindow; // @synthesize issueResolutionWindowControllerHostWindow=_issueResolutionWindowControllerHostWindow;
@property(retain, nonatomic) IDEProvisioningIssueResolutionWindowController *issueResolutionWindowController; // @synthesize issueResolutionWindowController=_issueResolutionWindowController;
@property(retain, nonatomic) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;
- (void)primitiveInvalidate;
- (void)didSelectIssueAction:(id)arg1;
- (BOOL)requiresAdditionalUserInteraction;
- (void)didSelectSubtitleAction:(id)arg1;
- (id)buttonTitle;
- (id)initWithError:(id)arg1;

@end

