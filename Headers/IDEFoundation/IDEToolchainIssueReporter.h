//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESourceKitConnectionDelegate-Protocol.h>

@class DVTFilePath, DVTNotificationToken, IDESourceKitConnection, NSOperationQueue, NSString;
@protocol IDEToolchainIssueReporterDelegate;

@interface IDEToolchainIssueReporter : NSObject <IDESourceKitConnectionDelegate>
{
    BOOL _isAppleInternal;
    IDESourceKitConnection *_conn;
    DVTNotificationToken *_connectionInterruptedNotificationToken;
    NSOperationQueue *_queue;
    DVTFilePath *_toolchainInvocationLoggingPath;
    id <IDEToolchainIssueReporterDelegate> _delegate;
    id <IDEToolchainIssueReporterDelegate> _signatureObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property __weak id <IDEToolchainIssueReporterDelegate> signatureObserver; // @synthesize signatureObserver=_signatureObserver;
@property __weak id <IDEToolchainIssueReporterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DVTFilePath *toolchainInvocationLoggingPath; // @synthesize toolchainInvocationLoggingPath=_toolchainInvocationLoggingPath;
- (void)onIndexCompileDidFinish:(id)arg1;
- (void)onIndexCompileWillStart:(id)arg1;
- (void)onToolchainCompilerCrashed:(id)arg1;
- (void)onLogOutput:(id)arg1;
- (void)handleToolchainCompilerCrash;
- (id)_parseReproducerOutputFiles:(id)arg1;
- (BOOL)isAlwaysDisabled;
- (unsigned long long)reportFrequency;
- (id)init;
- (id)connection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
