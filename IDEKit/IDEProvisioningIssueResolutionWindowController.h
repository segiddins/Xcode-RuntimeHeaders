//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEProvisioningUserAction, NSString;
@protocol IDEProvisioningIssueResolverViewController;

@interface IDEProvisioningIssueResolutionWindowController : NSWindowController <DVTInvalidation>
{
    id <IDEProvisioningIssueResolverViewController> _userActionViewController;
    IDEProvisioningUserAction *_userAction;
}

+ (void)initialize;
@property(retain, nonatomic) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;
@property(retain, nonatomic) id <IDEProvisioningIssueResolverViewController> userActionViewController; // @synthesize userActionViewController=_userActionViewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)windowDidLoad;
- (id)initWithUserAction:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

