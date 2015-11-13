//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESourceControlWorkspaceMonitor, NSArray, NSError, NSString;

@protocol IDESourceControlWorkspaceUIHandlerProtocol <NSObject>
- (void)requestOperationConfirmationForOperationName:(NSString *)arg1 workingCopyName:(NSArray *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)workspaceMonitorDidFinishScanning:(IDESourceControlWorkspaceMonitor *)arg1;
- (void)offerAdditionalWorkingCopies;
- (void)warnAboutNewerRepositoryVersionWithError:(NSError *)arg1;
- (void)askToShareNewWorkingCopies:(NSArray *)arg1;
- (void)didFindUpgradableWorkingCopy;
@end

