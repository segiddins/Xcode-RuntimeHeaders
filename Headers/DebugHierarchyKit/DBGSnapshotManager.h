//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGDataCoordinator, DBGSnapshot, DBGSnapshotAssetManager, DebugHierarchyRuntimeInfo;

@interface DBGSnapshotManager : NSObject
{
    DBGSnapshot *_snapshot;
    DBGSnapshotAssetManager *_assetManager;
    DebugHierarchyRuntimeInfo *_runtimeInfo;
    DBGDataCoordinator *_primaryDataCoordinator;
}

+ (id)snapshotManagerWithSnapshot:(id)arg1 primaryDataCoordinator:(id)arg2;
@property(readonly) DBGDataCoordinator *primaryDataCoordinator; // @synthesize primaryDataCoordinator=_primaryDataCoordinator;
@property(readonly) DebugHierarchyRuntimeInfo *runtimeInfo; // @synthesize runtimeInfo=_runtimeInfo;
@property(readonly) DBGSnapshotAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly) DBGSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 userFacing:(BOOL)arg2;
- (void)setPrimaryDataCoordinator:(id)arg1;
- (void)cancelAllRequests;
- (void)clearData;
- (id)initWithSnapshot:(id)arg1 primaryDataCoordinator:(id)arg2;

@end

