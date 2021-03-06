//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DYFuture, DYGLCaptureSessionInfo, GPUDebuggerController, GPUTraceDisplayableItem, GPUTraceProcessItem, GPUTraceSession, NSArray, NSMapTable, NSMutableArray, NSString;
@protocol DYPPluginFactory, OS_dispatch_queue;

@interface GPUTraceModelFactory : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_modelObjects;
    unsigned long long _baseModelIndex;
    NSMutableArray *_shaderModelObjects;
    unsigned long long _baseShaderModelIndex;
    id <DYPPluginFactory> _pluginFactory;
    GPUDebuggerController *_controller;
    Class _variablesViewContentProviderClass;
    NSMapTable *_resourceTypeToViewClassMaptable;
    GPUTraceProcessItem *_rootProcessItem;
    NSArray *_allTraceItems;
    NSMutableArray *_allPrograms;
    NSMutableArray *_allDisplayableItems;
    GPUTraceDisplayableItem *_lastDisplayableItem;
    NSMutableArray *_allMarkerItems;
    NSMutableArray *_allAPIItems;
    GPUTraceSession *_traceSession;
    DYFuture *_complete;
}

+ (Class)renderJobClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) DYFuture *complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) __weak GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(readonly, nonatomic) NSMutableArray *allAPIItems; // @synthesize allAPIItems=_allAPIItems;
@property(readonly, nonatomic) NSMutableArray *allMarkerItems; // @synthesize allMarkerItems=_allMarkerItems;
@property(readonly, nonatomic) __weak GPUTraceDisplayableItem *lastDisplayableItem; // @synthesize lastDisplayableItem=_lastDisplayableItem;
@property(readonly, nonatomic) NSMutableArray *allDisplayableItems; // @synthesize allDisplayableItems=_allDisplayableItems;
@property(readonly, nonatomic) NSMutableArray *allPrograms; // @synthesize allPrograms=_allPrograms;
@property(readonly, nonatomic) NSArray *allTraceItems; // @synthesize allTraceItems=_allTraceItems;
@property(readonly, nonatomic) GPUTraceProcessItem *rootProcessItem; // @synthesize rootProcessItem=_rootProcessItem;
@property(readonly, nonatomic) NSMapTable *resourceTypeToViewClassMaptable; // @synthesize resourceTypeToViewClassMaptable=_resourceTypeToViewClassMaptable;
@property(readonly, nonatomic) Class variablesViewContentProviderClass; // @synthesize variablesViewContentProviderClass=_variablesViewContentProviderClass;
@property(readonly, nonatomic) __weak GPUDebuggerController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) __weak id <DYPPluginFactory> pluginFactory; // @synthesize pluginFactory=_pluginFactory;
- (id)generateResourceItemForObjectID:(unsigned long long)arg1 type:(unsigned int)arg2 options:(id)arg3 forAPIItem:(id)arg4 error:(id *)arg5;
- (id)newDataProviderForShaderDataItem:(id)arg1;
- (id)generateAllResourcesGroupForAPIItem:(id)arg1 boundOnly:(BOOL)arg2;
- (id)resourceInfoForResource:(id)arg1 level:(int)arg2 layer:(int)arg3;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned long long)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)dataProviderForShaderItem:(id)arg1;
- (void)establishResource:(id)arg1 forProgramChildren:(id)arg2 containerID:(unsigned long long)arg3;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)populateUnusedResourcesMetadataForResourceItems:(id)arg1;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1;
- (void)notifyUnusedResourcesStreamAvailable;
- (id)labelForObjectID:(unsigned long long)arg1 functionIndex:(int)arg2;
- (void)generateOutlineItemsForShaderDebuggerSession:(id)arg1;
- (void)invalidateShaderModel;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
@property(readonly) unsigned long long totalDisplayableCount;
@property(readonly, nonatomic) __weak DYGLCaptureSessionInfo *captureSessionInfo;
- (id)itemForNamespacedUUID:(id)arg1;
- (id)itemForUUID:(long long)arg1;
- (long long)addShaderModelItem:(id)arg1;
- (long long)addModelItem:(id)arg1;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

