//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebugHierarchyKit/DBGDataCoordinator.h>

@class NSMutableDictionary;

@interface DBGDataCoordinatorTargetHub : DBGDataCoordinator
{
    NSMutableDictionary *_pendingChildNodes;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *pendingChildNodes; // @synthesize pendingChildNodes=_pendingChildNodes;
- (id)compatibility_modernizedPropertyDescription:(id)arg1 targetVersion:(float)arg2;
- (void)_writeRequestResponseToDiskIfNecessary:(id)arg1 request:(id)arg2 compressedSize:(unsigned long long)arg3;
- (void)_updateComputedPropertiesOfNode:(id)arg1;
- (void)_updateSubHierarchyOfProperty:(id)arg1;
- (void)_updateSubpropertiesWithDicts:(id)arg1 onProperty:(id)arg2;
- (void)_updateProperty:(id)arg1 withDict:(id)arg2;
- (void)_updatePropertiesWithDicts:(id)arg1 onNode:(id)arg2;
- (void)_updateNode:(id)arg1 withDict:(id)arg2;
- (void)_updateGroup:(id)arg1 withDict:(id)arg2;
- (id)_createNodeWithDict:(id)arg1;
- (void)_addNodeToMatchingRootLevelGroup:(id)arg1;
- (void)processDebugHierarchyObjectDict:(id)arg1 inGroup:(id)arg2 isDirectChildGroup:(BOOL)arg3;
- (void)processGroupDict:(id)arg1 isDirectChildGroup:(BOOL)arg2 parentNode:(id)arg3;
- (void)_updateSnapshotWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)_processRequestLogs:(id)arg1 forRequest:(id)arg2;
- (void)_processFetchResults:(id)arg1 forRequest:(id)arg2;
- (id)_decompressedDataForRequestResponseData:(id)arg1;
- (void)didReceiveData:(id)arg1 forRequest:(id)arg2;

@end

