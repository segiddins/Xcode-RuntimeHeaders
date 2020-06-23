//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/IDEOperationWindowController.h>

#import <IDESourceControlUI/IDESourceControlWindowController-Protocol.h>
#import <IDESourceControlUI/_TtP6IDEKit37IDESourceControlAuthenticationContext_-Protocol.h>

@class IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSString;

@interface IDESourceControlOperationWindowController : IDEOperationWindowController <_TtP6IDEKit37IDESourceControlAuthenticationContext_, IDESourceControlWindowController>
{
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)endSheet;
- (BOOL)containsWorkingCopyForRepository:(id)arg1;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle;
- (void)_beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 editorDocument:(id)arg4 workingCopy:(id)arg5 workingCopies:(id)arg6 operationViewControllerClass:(Class)arg7 context:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 workingCopy:(id)arg4 operationViewControllerClass:(Class)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 workingCopy:(id)arg4 operationViewControllerClass:(Class)arg5 context:(id)arg6;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 workingCopies:(id)arg4 operationViewControllerClass:(Class)arg5 context:(id)arg6;
- (void)_beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 workingCopies:(id)arg3 operationViewControllerClass:(Class)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopies:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopies:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

