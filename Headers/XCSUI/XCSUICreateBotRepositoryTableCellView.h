//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTextField, NSView, XCSUICreateBotRepositoryIssue;
@protocol XCSUICreateBotRepositoryTableCellViewDelegate;

@interface XCSUICreateBotRepositoryTableCellView : NSTableCellView
{
    XCSUICreateBotRepositoryIssue *_issue;
    id <XCSUICreateBotRepositoryTableCellViewDelegate> _delegate;
    NSTextField *_repositoryTitleField;
    NSTextField *_repositoryIssueField;
    NSView *_actionsView;
    NSTextField *_resolutionStatusView;
    NSButton *_changeButton;
}

- (void).cxx_destruct;
@property __weak NSButton *changeButton; // @synthesize changeButton=_changeButton;
@property __weak NSTextField *resolutionStatusView; // @synthesize resolutionStatusView=_resolutionStatusView;
@property __weak NSView *actionsView; // @synthesize actionsView=_actionsView;
@property __weak NSTextField *repositoryIssueField; // @synthesize repositoryIssueField=_repositoryIssueField;
@property __weak NSTextField *repositoryTitleField; // @synthesize repositoryTitleField=_repositoryTitleField;
@property __weak id <XCSUICreateBotRepositoryTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateResolutionField;
@property(retain) XCSUICreateBotRepositoryIssue *issue;
- (void)updateCredentials:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

