//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDESourceControlProgressAssistant.h>

@interface IDESourceControlDownloadAssistant : IDESourceControlProgressAssistant
{
    BOOL canGoForward;
    BOOL canFinish;
}

+ (id)progressStatus;
+ (BOOL)canShowDeterminateProgress;
@property BOOL canFinish; // @synthesize canFinish;
@property BOOL canGoForward; // @synthesize canGoForward;
- (id)previousAssistantIdentifier;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_finishAndOpenURL:(id)arg1;
- (void)_findWorkspaceInWorkingCopy:(id)arg1;
- (id)projectDataType;
- (id)workspaceDataType;
- (void)_downloadContextToURL:(id)arg1;
- (id)downloadAssistantContext;
- (void)willGoNextOrFinish;
- (BOOL)canGoBack;

@end

