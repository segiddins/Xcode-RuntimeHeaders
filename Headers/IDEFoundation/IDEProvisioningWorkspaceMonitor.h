//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisioningLedgerDelegate-Protocol.h>

@class DVTStackBacktrace, IDEActivityLogSection, IDELogStore, IDEProvisioningLogDVTLogAspectListener, IDETypeIdentifier, IDEWorkspace, NSArray, NSMutableDictionary, NSMutableString, NSString;
@protocol IDEProvisioningWorkspaceMonitorDelegate, OS_dispatch_queue;

@interface IDEProvisioningWorkspaceMonitor : NSObject <IDEProvisioningLedgerDelegate, DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_logQueue;
    IDETypeIdentifier *_logDomainType;
    IDETypeIdentifier *_logSectionDomainType;
    NSMutableDictionary *_ledgerSections;
    IDEProvisioningLogDVTLogAspectListener *_provisioningManagerListener;
    IDEProvisioningLogDVTLogAspectListener *_provisioningMechanicListener;
    IDEProvisioningLogDVTLogAspectListener *_codesigningAllTheThingsListener;
    IDEProvisioningLogDVTLogAspectListener *_signingCertificateManagerListener;
    NSMutableString *_orphanedLogEntries;
    id <IDEProvisioningWorkspaceMonitorDelegate> _delegate;
    IDELogStore *_logStore;
    IDEActivityLogSection *_activeSessionLogSection;
    IDEWorkspace *_workspace;
}

+ (id)keyPathsForValuesAffectingLogRecords;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEActivityLogSection *activeSessionLogSection; // @synthesize activeSessionLogSection=_activeSessionLogSection;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(nonatomic) __weak id <IDEProvisioningWorkspaceMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)debug_addMessageWithTitle:(id)arg1 details:(id)arg2;
- (void)_nolock_removeSection:(id)arg1 entry:(id)arg2;
- (id)_nolock_logSectionForLedgerEntry:(id)arg1;
- (id)_subtitleForEntry:(id)arg1;
- (id)_domainTypeForEntry:(id)arg1;
- (id)_repairableForEntry:(id)arg1;
- (id)_blueprintForEntry:(id)arg1;
- (void)_closeSection:(id)arg1 entry:(id)arg2;
- (void)_logSectionForLedgerEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setupMainLogRecorder;
- (void)_setupObservers;
- (void)_invalidateObservers;
- (void)provisioningLedger:(id)arg1 didCloseLedgerEntry:(id)arg2 withError:(id)arg3;
- (void)provisioningLedger:(id)arg1 didOpenLedgerEntry:(id)arg2;
- (void)provisioningLedger:(id)arg1 didAddDetails:(id)arg2 toLedgerEntry:(id)arg3;
- (void)loadProvisioningLogsForWorkspace:(id)arg1;
@property(readonly) NSArray *logRecords;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

