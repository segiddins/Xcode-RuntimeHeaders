//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceControlUIMediator : NSObject
{
}

+ (void)avatarForEmail:(id)arg1 username:(id)arg2 url:(id)arg3 hostedAccount:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)repositoryCredentialWindowController;
+ (Class)repositoriesSearchViewControllerClass;
+ (id)showCredentialWindowForRemoteRepository:(id)arg1 othersToOffer:(unsigned long long)arg2 sshKeyComment:(id)arg3 sshKeyFolderURL:(id)arg4 owningWindow:(id)arg5;
+ (void)showWorkingCopyCreationChooserWindowForWorkspace:(id)arg1 workspaceUIHandler:(id)arg2 showOnWindow:(id)arg3;
+ (void)showCommitWindowWithWorkspace:(id)arg1 workingTrees:(id)arg2 forcedPushInfos:(id)arg3 showOnWindow:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)shouldCreateLocalRepository:(BOOL)arg1 atFilePath:(id)arg2;
+ (void)showWindowForHostedAccountWithEndpointIdentifier:(id)arg1 hostWindow:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)showDebugSCMNetworkRequestsWindow:(id)arg1;
+ (void)showWindowAndCloneFromURL:(id)arg1;
+ (void)showRepositoriesWindow:(id)arg1;
+ (id)controllerForExtension:(id)arg1;
+ (id)extensionWithIdentifier:(id)arg1;
+ (id)sharedSourceControlNetworkDebuggerWindowInstance;
+ (id)sharedRepositoriesWindowInstance;
+ (id)createWorkspaceUIHandlerWithWorkspaceDocument:(id)arg1;
+ (id)_sourceControlUIMediatorLogAspect;

@end

