//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/DVTInvalidation-Protocol.h>
#import <IDESourceControlUI/IDESourceControlWorkspaceDocumentUIHandlerProtocol-Protocol.h>
#import <IDESourceControlUI/NSAlertDelegate-Protocol.h>
#import <IDESourceControlUI/NSWindowDelegate-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, IDEWorkspaceDocument, NSAlert, NSMutableSet, NSString;

@interface IDESourceControlWorkspaceUIHandler : NSObject <IDESourceControlWorkspaceDocumentUIHandlerProtocol, DVTInvalidation, NSAlertDelegate, NSWindowDelegate>
{
    CDUnknownBlockType _sourceControlCommandContinuationBlock;
    NSAlert *_waitingOnInitialScanAlert;
    BOOL _initialScanAlertIsShowing;
    BOOL _initialWorkspaceScanIsComplete;
    IDEWorkspaceDocument *_workspaceDocument;
    NSMutableSet *_windowControllers;
    BOOL _shouldCreateLocalRepository;
    DVTFilePath *_pathToCreateLocalGitRepository;
}

+ (void)initialize;
- (void).cxx_destruct;
@property DVTFilePath *pathToCreateLocalGitRepository; // @synthesize pathToCreateLocalGitRepository=_pathToCreateLocalGitRepository;
@property BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property(copy) CDUnknownBlockType sourceControlCommandContinuationBlock; // @synthesize sourceControlCommandContinuationBlock=_sourceControlCommandContinuationBlock;
- (void)windowDidCloseForWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)finishedCreateGitRepositoryWithWorkingCopy:(id)arg1;
- (void)createGitRepositoryForFilePath:(id)arg1;
- (void)displayError:(id)arg1;
- (void)shouldCreateLocalRepository:(BOOL)arg1 atFilePath:(id)arg2;
- (void)initialWorkspaceScanIsFinished:(id)arg1;
- (void)displayWaitingOnInitialWorkspaceScanAlertInWindow:(id)arg1 withContinuationBlock:(CDUnknownBlockType)arg2;
- (id)waitingOnInitialScanAlert;
- (void)primitiveInvalidate;
- (void)requestOperationConfirmationForOperationName:(id)arg1 workingCopyName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)warnAboutNewerRepositoryVersionWithError:(id)arg1;
- (void)workspaceMonitorDidFinishScanning:(id)arg1;
- (void)setWorkspaceDocument:(id)arg1;
- (BOOL)alertShowHelp:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

