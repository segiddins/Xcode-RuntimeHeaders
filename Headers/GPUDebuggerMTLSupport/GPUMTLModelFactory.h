//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceModelFactory.h>

#import <GPUDebuggerMTLSupport/DYPMTLResourceItemFactory-Protocol.h>

@class GPUMTLTraceOutline, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLModelFactory : GPUTraceModelFactory <DYPMTLResourceItemFactory>
{
    NSMapTable *_resourceTypeToViewMaptable;
    GPUMTLTraceOutline *_outline;
}

+ (Class)renderJobClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GPUMTLTraceOutline *outline; // @synthesize outline=_outline;
- (id)labelForObjectID:(unsigned long long)arg1 functionIndex:(int)arg2;
- (id)_generateOutlineItemsForShaderDebuggerSession:(id)arg1 processItem:(id)arg2;
- (void)populatePlaceholderItem:(id)arg1 objectID:(unsigned long long)arg2 stateMirrorObject:(const void *)arg3 containerID:(unsigned long long)arg4 identifier:(id)arg5;
- (id)placeholderResourceItemWithGroup:(id)arg1 type:(unsigned int)arg2 identifier:(id)arg3;
- (id)functionWithPipeline:(id)arg1 shaderType:(unsigned int)arg2 functionInfo:(id)arg3 identifier:(id)arg4;
- (id)pipelineStateWithProgramGroup:(id)arg1 programType:(unsigned int)arg2 pipelineStateID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(id)arg6;
- (id)functionInfoWithSourceFilePath:(id)arg1 onlineCompiled:(BOOL)arg2 functionID:(unsigned long long)arg3;
- (id)functionInfoWithSourceURL:(id)arg1 lineNumber:(long long)arg2 onlineCompiled:(BOOL)arg3 functionID:(unsigned long long)arg4;
- (id)rawBytesItemWithGroup:(id)arg1 bytesType:(unsigned long long)arg2 bindingIndex:(unsigned int)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(id)arg6;
- (id)shaderItemWithProgram:(id)arg1 shaderType:(unsigned int)arg2 functionInfo:(id)arg3 identifier:(id)arg4;
- (id)programItemWithGroup:(id)arg1 programType:(unsigned int)arg2 programID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(id)arg6;
- (id)resourceItemWithGroup:(id)arg1 type:(unsigned int)arg2 objectID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(id)arg6;
- (id)resourceInfoForResource:(id)arg1 level:(int)arg2 layer:(int)arg3;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned long long)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)newDataProviderForShaderDataItem:(id)arg1;
- (void)establishResource:(id)arg1 forProgramChildren:(id)arg2 containerID:(unsigned long long)arg3;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)populateUnusedResourcesMetadataForResourceItems:(id)arg1;
- (id)generateResourceItemForObjectID:(unsigned long long)arg1 type:(unsigned int)arg2 options:(id)arg3 forAPIItem:(id)arg4 error:(id *)arg5;
- (id)generateAllResourcesGroupForAPIItem:(id)arg1 boundOnly:(BOOL)arg2;
- (void)primitiveInvalidate;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (void)notifyUnusedResourcesStreamAvailable;
- (void)invalidateModel;
- (void)generateOutlineItemsForShaderDebuggerSession:(id)arg1;
- (void)generateModelWithTraceSession:(id)arg1;
- (id)resourceTypeToViewClassMaptable;
- (id)allMarkerItems;
- (id)allAPIItems;
- (id)allDisplayableItems;
- (id)lastDisplayableItem;
- (id)allPrograms;
- (id)allTraceItems;
- (id)rootProcessItem;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

