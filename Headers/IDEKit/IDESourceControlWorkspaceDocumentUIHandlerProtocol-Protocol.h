//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDESourceControlWorkspaceUIHandlerProtocol-Protocol.h>

@class DVTFilePath, IDESourceControlWorkspaceMonitor, IDEWorkspaceDocument, NSWindow;

@protocol IDESourceControlWorkspaceDocumentUIHandlerProtocol <IDESourceControlWorkspaceUIHandlerProtocol, DVTInvalidation>
@property(copy) CDUnknownBlockType sourceControlCommandContinuationBlock;
- (void)shouldCreateLocalRepository:(BOOL)arg1 atFilePath:(DVTFilePath *)arg2;
- (void)displayWaitingOnInitialWorkspaceScanAlertInWindow:(NSWindow *)arg1 withContinuationBlock:(void (^)(NSError *))arg2;
- (void)setWorkspaceDocument:(IDEWorkspaceDocument *)arg1;
- (void)addWindowController:(id)arg1;
- (void)initialWorkspaceScanIsFinished:(IDESourceControlWorkspaceMonitor *)arg1;
@end

