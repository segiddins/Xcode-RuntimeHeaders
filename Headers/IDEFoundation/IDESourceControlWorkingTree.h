//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTree.h>

@class DVTFilePath, IDESourceControlBranch, NSArray, NSDate, NSMutableArray, NSObject, NSOperationQueue;
@protocol DVTSourceControlCancellable, OS_dispatch_queue;

@interface IDESourceControlWorkingTree : IDESourceControlTree
{
    IDESourceControlBranch *_currentBranch;
    long long _fileReferenceStatusProcessingQueueLockCount;
    NSOperationQueue *_fileReferenceStatusProcessingQueue;
    NSObject<OS_dispatch_queue> *_fileStatusScheduleQueue;
    unsigned long long _filesAndStatusOperationCount;
    id <DVTSourceControlCancellable> _filesAndStatusOperation;
    NSMutableArray *_itemsWithStatus;
    NSOperationQueue *_status_processing_queue;
    DVTFilePath *_filePath;
    BOOL _initialLocalStatusUpdateIsComplete;
    BOOL _initialServerStatusUpdateIsComplete;
    unsigned long long _fileStatusConsecutiveTimeoutCount;
    unsigned long long _fileStatusRequestTimeoutSeconds;
    NSDate *_lastStatusUpdateDate;
}

+ (id)workingTreeWithFilePath:(id)arg1 sourceControlManager:(id)arg2;
@property(retain, nonatomic) NSDate *lastStatusUpdateDate; // @synthesize lastStatusUpdateDate=_lastStatusUpdateDate;
@property(readonly) BOOL initialServerStatusUpdateIsComplete; // @synthesize initialServerStatusUpdateIsComplete=_initialServerStatusUpdateIsComplete;
@property(readonly) BOOL initialLocalStatusUpdateIsComplete; // @synthesize initialLocalStatusUpdateIsComplete=_initialLocalStatusUpdateIsComplete;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)invalidateServerStatus;
- (void)clearServerStatus;
- (void)invalidateLocalStatus;
- (void)clearLocalAndServerStatus;
- (void)clearStatusForItem:(id)arg1;
- (void)addItemWithStatus:(id)arg1;
- (void)mergeStatusOperationResults:(id)arg1 pathsWithRemoteStatus:(id)arg2 forLocalStatusOnly:(BOOL)arg3;
- (void)addNewItemsWithStatusWithResults:(id)arg1;
- (id)mutableItemsWithStatus;
@property(readonly) NSArray *itemsWithStatus; // @synthesize itemsWithStatus=_itemsWithStatus;
- (void)addUpdateFileReferenceStatusesBlock:(CDUnknownBlockType)arg1;
- (void)updateFileReferenceStatusesAndWaitForFinish:(BOOL)arg1;
- (void)blockUpdatingFileReferenceStatuses;
- (void)_updateStatus:(BOOL)arg1 forceAuthentication:(BOOL)arg2 workspace:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unauthenticatedRemoteStatusUpdateForWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateStatus:(BOOL)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)fileReferenceStatusProcessingQueue;
- (void)invalidateCurrentBranch;
- (id)itemForFilePath:(id)arg1;
- (BOOL)containsItemAtFilePath:(id)arg1;
- (id)subclass_createRootNode;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
- (void)setLocation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

@end

