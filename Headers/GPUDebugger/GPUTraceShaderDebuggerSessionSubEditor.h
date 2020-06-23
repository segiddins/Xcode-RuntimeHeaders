//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

@class GPUShaderDebuggerRegion, GPUShaderDebuggerSession, GPUTraceShaderItem;
@protocol GPUTraceShaderDebuggerSessionSubEditorDelegate;

@interface GPUTraceShaderDebuggerSessionSubEditor : GPUTraceSubEditor
{
    GPUTraceShaderItem *_shaderItem;
    BOOL _forceSelection;
    GPUShaderDebuggerRegion *_shaderDebuggerRegion;
    id <GPUTraceShaderDebuggerSessionSubEditorDelegate> _shaderDebuggerSessionSubEditorDelegate;
}

- (void).cxx_destruct;
@property BOOL forceSelection; // @synthesize forceSelection=_forceSelection;
@property(retain, nonatomic) id <GPUTraceShaderDebuggerSessionSubEditorDelegate> shaderDebuggerSessionSubEditorDelegate; // @synthesize shaderDebuggerSessionSubEditorDelegate=_shaderDebuggerSessionSubEditorDelegate;
@property(retain, nonatomic) GPUShaderDebuggerRegion *shaderDebuggerRegion; // @synthesize shaderDebuggerRegion=_shaderDebuggerRegion;
- (BOOL)takeFocus;
- (BOOL)_switchPostTessellationVertexThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchKernelThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchFragmentThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchVertexThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)switchThreadForShaderDebuggerSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GPUShaderDebuggerSession *shaderDebuggerSession;
@property(readonly, nonatomic) unsigned int supportedShaderType;
- (void)debugShaderAtRegionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) GPUTraceShaderItem *shaderItem;
- (id)displayableItem;

@end

