//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DYGLCaptureSessionInfo, GPUDebuggerController, GPUTraceDisplayableItem, GPUTraceGroupItem, GPUTraceProgramGroup, GPUTraceSession, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol DYPPluginFactory, IDEDebugTopNavigableModel, OS_dispatch_queue;

@interface GPUTraceModelFactory : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_modelObjectDictionary;
    id <DYPPluginFactory> _pluginFactory;
    GPUDebuggerController *_controller;
    Class _variablesViewContentProviderClass;
    NSMapTable *_resourceTypeToViewClassMaptable;
    GPUTraceGroupItem *_domainProviderRootResourceGroup;
    GPUTraceProgramGroup *_domainProviderRootProgramGroup;
    NSMutableArray *_frames;
    id <IDEDebugTopNavigableModel> _rootProcessItem;
    NSArray *_allTraceItems;
    NSMutableArray *_allPrograms;
    NSMutableArray *_allDisplayableItems;
    GPUTraceDisplayableItem *_lastDisplayableItem;
    NSMutableArray *_allMarkerItems;
    NSMutableArray *_allAPIItems;
    GPUTraceSession *_traceSession;
}

+ (Class)renderJobClass;
+ (Class)imageResourceSettingBubbleClass;
+ (Class)textureInfoBubbleClass;
+ (Class)depthStencilInfoBubbleClass;
+ (Class)colorInfoBubbleClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
+ (void)initialize;
@property(readonly, nonatomic) __weak GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(readonly, nonatomic) NSMutableArray *allAPIItems; // @synthesize allAPIItems=_allAPIItems;
@property(readonly, nonatomic) NSMutableArray *allMarkerItems; // @synthesize allMarkerItems=_allMarkerItems;
@property(readonly, nonatomic) __weak GPUTraceDisplayableItem *lastDisplayableItem; // @synthesize lastDisplayableItem=_lastDisplayableItem;
@property(readonly, nonatomic) NSMutableArray *allDisplayableItems; // @synthesize allDisplayableItems=_allDisplayableItems;
@property(readonly, nonatomic) NSMutableArray *allPrograms; // @synthesize allPrograms=_allPrograms;
@property(readonly, nonatomic) NSArray *allTraceItems; // @synthesize allTraceItems=_allTraceItems;
@property(readonly, nonatomic) id <IDEDebugTopNavigableModel> rootProcessItem; // @synthesize rootProcessItem=_rootProcessItem;
@property(readonly, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) GPUTraceProgramGroup *domainProviderRootProgramGroup; // @synthesize domainProviderRootProgramGroup=_domainProviderRootProgramGroup;
@property(readonly, nonatomic) GPUTraceGroupItem *domainProviderRootResourceGroup; // @synthesize domainProviderRootResourceGroup=_domainProviderRootResourceGroup;
@property(readonly, nonatomic) NSMapTable *resourceTypeToViewClassMaptable; // @synthesize resourceTypeToViewClassMaptable=_resourceTypeToViewClassMaptable;
@property(readonly, nonatomic) Class variablesViewContentProviderClass; // @synthesize variablesViewContentProviderClass=_variablesViewContentProviderClass;
@property(readonly, nonatomic) __weak GPUDebuggerController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) __weak id <DYPPluginFactory> pluginFactory; // @synthesize pluginFactory=_pluginFactory;
- (void).cxx_destruct;
- (id)createInfoBubbleForImageResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 renderingAttributes:(id)arg4;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)storedRenderingAttributesForResourceItem:(id)arg1;
- (id)resolveCurrentResourceItemWithPreviousItem:(id)arg1 currentMainEditorItem:(id)arg2 topLevelObjects:(id)arg3;
- (void)establishChildrenForProgramItem:(id)arg1;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)generateResourcesForGroup:(id)arg1 apiItem:(id)arg2 boundOnly:(BOOL)arg3;
- (void)createParentResourceGroupsForAPIItem:(id)arg1;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1 isAssociatedWithStateItem:(char *)arg2;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
@property(readonly) unsigned long long totalDisplayableCount;
@property(readonly, nonatomic) __weak DYGLCaptureSessionInfo *captureSessionInfo;
- (id)itemForUUID:(id)arg1;
- (void)addModelItem:(id)arg1;
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

