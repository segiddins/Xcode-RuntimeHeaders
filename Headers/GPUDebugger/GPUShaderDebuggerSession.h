//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTraceShaderDebuggerExecutionHistoryItem, GPUTraceShaderItem, NSArray, NSMutableDictionary, NSOperationQueue;
@protocol DYPShaderDebuggerDataSource, DYPShaderDebuggerROI, DYPShaderDebuggerThread, GPUShaderDebuggerSessionParameters;

@interface GPUShaderDebuggerSession : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_state;
    GPUTraceShaderItem *_item;
    id <DYPShaderDebuggerDataSource> _dataSource;
    id <DYPShaderDebuggerROI> _regionOfInterest;
    id <GPUShaderDebuggerSessionParameters> _parameters;
    GPUTraceShaderDebuggerExecutionHistoryItem *_executionHistoryRootItem;
    id <DYPShaderDebuggerThread> _selectedThread;
}

- (void).cxx_destruct;
@property(readonly) id <DYPShaderDebuggerThread> selectedThread; // @synthesize selectedThread=_selectedThread;
@property(retain) GPUTraceShaderDebuggerExecutionHistoryItem *executionHistoryRootItem; // @synthesize executionHistoryRootItem=_executionHistoryRootItem;
@property(readonly, nonatomic) id <GPUShaderDebuggerSessionParameters> parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) id <DYPShaderDebuggerROI> regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly, nonatomic) id <DYPShaderDebuggerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) GPUTraceShaderItem *item; // @synthesize item=_item;
- (id)variableSnapshotsInScopeOfExecutionHistoryNode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourceForObjectID:(unsigned long long)arg1 type:(unsigned int)arg2 resourceItem:(out id *)arg3;
- (id)variableSnapshotAtExecutionHistoryNode:(id)arg1 source:(id)arg2 offset:(unsigned long long)arg3 column:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)maskAndDataArrayForVariableSnapshotNode:(id)arg1 valueElementStride:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)maskAndDataForVariableSnapshotNode:(id)arg1 valueElementStride:(unsigned long long)arg2 valueRowStride:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)threadMaskExecutionHistoryNodesForExecutionHistoryNode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)variableSnapshotsForExecutionHistoryNodes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSelectedThread:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)postTessellationVertexThreadForInstanceId:(unsigned long long)arg1 patchId:(unsigned long long)arg2;
- (id)kernelThreadForX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (id)fragmentThreadForX:(int)arg1 y:(int)arg2;
- (id)vertexThreadForInstanceId:(unsigned long long)arg1 vertexId:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *executedLocations;
- (id)contentsForPath:(id)arg1;
- (id)initWithItem:(id)arg1 dataSource:(id)arg2 selectedThread:(id)arg3;
- (id)stateForSourcePath:(id)arg1;
- (void)setState:(id)arg1 forSourcePath:(id)arg2;
- (id)newVariableViewContentProvider;

@end

