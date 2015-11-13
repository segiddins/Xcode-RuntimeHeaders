//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTree.h>

@class DVTDispatchLock, DVTFilePath, IDESourceControlBranch, IDESourceControlRepository, IDESourceControlWorkingCopyConfiguration, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface IDESourceControlWorkingTree : IDESourceControlTree
{
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlBranch *_currentBranch;
    long long _fileReferenceStatusProcessingQueueLockCount;
    NSOperationQueue *_fileReferenceStatusProcessingQueue;
    NSMutableArray *_itemsWithStatus;
    NSOperationQueue *_status_processing_queue;
    DVTFilePath *_filePath;
    NSString *_origin;
    BOOL _representsGitSVNBridge;
    NSMutableDictionary *_localStatusRequests;
    NSMutableDictionary *_serverStatusRequests;
    BOOL _initialLocalStatusUpdateIsComplete;
    BOOL _initialServerStatusUpdateIsComplete;
    NSMutableSet *_delayedLocalStatusUpdateForDirectories;
    DVTDispatchLock *_delayedLocalStatusUpdateForDirectoriesLock;
    BOOL _needsUpgrade;
    BOOL _checkedForUpgrade;
}

@property BOOL checkedForUpgrade; // @synthesize checkedForUpgrade=_checkedForUpgrade;
@property BOOL needsUpgrade; // @synthesize needsUpgrade=_needsUpgrade;
@property BOOL representsGitSVNBridge; // @synthesize representsGitSVNBridge=_representsGitSVNBridge;
@property(readonly) BOOL initialServerStatusUpdateIsComplete; // @synthesize initialServerStatusUpdateIsComplete=_initialServerStatusUpdateIsComplete;
@property(readonly) BOOL initialLocalStatusUpdateIsComplete; // @synthesize initialLocalStatusUpdateIsComplete=_initialLocalStatusUpdateIsComplete;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(readonly) NSString *origin; // @synthesize origin=_origin;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)invalidateServerStatus;
- (void)clearServerStatus;
- (void)invalidateLocalStatus;
- (void)clearLocalAndServerStatus;
- (void)clearStatusForItem:(id)arg1;
- (void)addItemWithStatus:(id)arg1;
- (void)mergeStatusOperationResults:(id)arg1 forLocalStatusOnly:(BOOL)arg2;
- (void)addNewItemsWithStatusWithResults:(id)arg1;
- (id)updateLocalStatusForDirectory:(id)arg1 cancelable:(BOOL)arg2 withWorkspace:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)updateLocalStatusForDirectory:(id)arg1 withWorkspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setBatchedUpdateLocalStatusForDirectory:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)emptyBatchedUpdateLocalStatus;
- (id)updateServerStatusForDirectory:(id)arg1 cancelable:(BOOL)arg2 withWorkspace:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)updateServerStatusForDirectory:(id)arg1 withWorkspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSArray *itemsWithStatus; // @synthesize itemsWithStatus=_itemsWithStatus;
- (void)addUpdateFileReferenceStatueseBlock:(CDUnknownBlockType)arg1;
- (void)updateFileReferenceStatusesAndWaitForFinish:(BOOL)arg1;
- (void)blockUpdatingFileReferenceStatuses;
- (id)fileReferenceStatusProcessingQueue;
- (id)trackRemoteBranch:(id)arg1 withLocalBranchName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateCurrentBranch;
- (id)switchToBranch:(id)arg1 inWorkspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)switchToBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)currentDetailedBranchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)currentBranchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)currentBranchWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processBranches:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)automaticallyConfigureSVNLocations:(CDUnknownBlockType)arg1;
- (void)automaticallyConfigureSVNLocationsWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL isConfiguredForBranching;
- (id)itemForFilePath:(id)arg1;
- (BOOL)containsItemAtLocation:(id)arg1;
- (BOOL)containsItemAtFilePath:(id)arg1;
- (id)subclass_createRootNode;
@property(readonly) NSDate *dataModificationDate;
@property(readonly) DVTFilePath *dataDirectory;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
@property(readonly) IDESourceControlRepository *repository;
- (void)setLocation:(id)arg1;
- (void)primitiveInvalidate;
- (void)_setOrigin:(id)arg1;
- (void)_updateWorkingTreeOrigin;
- (id)initWithDictionary:(id)arg1 repository:(id)arg2 sourceControlExtension:(id)arg3 sourceControlManager:(id)arg4;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

@end

