//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTask;

@interface XCSnapshotManager : NSObject
{
    NSMutableArray *_snapshots;
    NSMutableArray *_snapshotsBeingCreated;
    NSMutableArray *_pathsBeingDeleted;
    NSTask *_deletionTask;
    NSString *_snapshotMountPoint;
    BOOL _quitting;
}

+ (BOOL)_isDiskImageMountedAtPath:(id)arg1;
+ (id)snapshotManager;
+ (void)initialize;
- (void)snapshotChanged:(id)arg1;
- (id)predictiveSnapshotsIncludingSourceDir:(id)arg1;
- (void)stopAllPredictiveSnapshots;
- (void)stopPredictiveSnapshotsOfDirectories:(id)arg1;
- (void)enablePredictiveSnapshotsOfDirectories:(id)arg1;
- (BOOL)predictiveSnapshotsEnabledForDirectories:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)snapshotCopyComplete:(id)arg1;
- (id)takeSnapshot:(id)arg1;
- (id)latestSnapshotIncludingSourceDir:(id)arg1;
- (id)latestSnapshotWithSourceDirs:(id)arg1;
- (id)snapshotsIncludingSourceDir:(id)arg1;
- (id)snapshotsWithSourceDirs:(id)arg1;
- (void)_writeSnapshotData;
- (void)_restoreVersion1Archive:(id)arg1;
- (void)removeObjectFromSnapshotsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inSnapshotsAtIndex:(long long)arg2;
- (id)objectInSnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSnapshots;
- (void)setSnapshots:(id)arg1;
- (id)snapshots;
- (void)_loadSnapshots;
- (id)init;
- (BOOL)makeSnapshotRepositoryPath:(id)arg1 attributes:(id)arg2;
- (id)snapshotRootDirectory;
- (BOOL)_mountRepositoryDiskImageCreateIfMissing:(BOOL)arg1;
- (BOOL)_mountRepositoryDiskImageCreateIfMissing:(BOOL)arg1 isRetry:(BOOL)arg2;
- (void)_unmountRepositoryDiskImageForce:(BOOL)arg1;
- (void)_unmountRepositoryDiskImage;
- (id)suddenTerminationClientName;
- (void)_runAlertPanelForErrorOfType:(unsigned long long)arg1 forStorageAtPath:(id)arg2;
- (BOOL)_removeProblematicDiskImage:(id)arg1;
- (BOOL)_createRepositoryDiskImage:(id)arg1;
- (id)_snapshotRepositoryDiskImagePath;
- (id)_snapshotMountPoint;
- (BOOL)_makePath:(id)arg1 attributes:(id)arg2;
- (void)deleteRepositoryPath:(id)arg1;
- (BOOL)repositoryDeletionInProgress;
- (void)_deleteTaskFinished:(id)arg1;
- (void)_launchDeleteTask;
- (void)_appTerminating:(id)arg1;

@end

