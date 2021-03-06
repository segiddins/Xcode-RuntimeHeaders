//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceResourceItem.h>

#import <GPUDebugger/DYPShaderItem-Protocol.h>
#import <GPUDebugger/GPUTraceShaderDataProviderProvider-Protocol.h>

@class GPUTraceProgramItem, GPUTraceShaderDataItem, NSArray, NSMutableDictionary, NSString;
@protocol DYFunctionSource, DYPFunctionInfo, GPUTraceShaderDataProvider;

@interface GPUTraceShaderItem : GPUTraceResourceItem <DYPShaderItem, GPUTraceShaderDataProviderProvider>
{
    unsigned int _shaderType;
    NSString *_infoLog;
    id <DYPFunctionInfo> _functionInfo;
    NSArray *_fileItems;
    id <DYFunctionSource> _functionSource;
    GPUTraceShaderDataItem *_mainDataItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GPUTraceShaderDataItem *mainDataItem; // @synthesize mainDataItem=_mainDataItem;
@property(readonly, nonatomic) id <DYFunctionSource> functionSource; // @synthesize functionSource=_functionSource;
@property(readonly, nonatomic) NSArray *fileItems; // @synthesize fileItems=_fileItems;
@property(readonly, nonatomic) id <DYPFunctionInfo> functionInfo; // @synthesize functionInfo=_functionInfo;
@property(readonly, nonatomic) NSString *infoLog; // @synthesize infoLog=_infoLog;
@property(readonly, nonatomic) unsigned int shaderType; // @synthesize shaderType=_shaderType;
- (id)shaderTypeLabel;
- (void)purgeResourceObject;
- (void)resourceObjectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_createShaderFileItems:(id)arg1;
- (id)resourceObject;
- (id)parentResourcesItem;
- (void)establishResource:(id)arg1;
- (id)initShaderWithParent:(id)arg1 shaderType:(unsigned int)arg2 infoLog:(const char *)arg3 identifier:(id)arg4 sharegroupID:(unsigned long long)arg5;
- (id)initFunctionWithParent:(id)arg1 shaderType:(unsigned int)arg2 functionInfo:(id)arg3 identifier:(id)arg4 sharegroupID:(unsigned long long)arg5;
@property(readonly, nonatomic) GPUTraceProgramItem *program;
@property(readonly, nonatomic) id <GPUTraceShaderDataProvider> dataProvider;
- (BOOL)navigableItem_isLeaf;
- (id)navigableItem_subtitle;
- (id)profilerTimingInfo:(char *)arg1 baseData:(BOOL)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int functionIndex;
@property(readonly, nonatomic) BOOL generatesThumbnail;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) BOOL placeholder;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) const void *stateMirrorObject;
@property(readonly, nonatomic) int subCommandIndex;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned int type;

@end

