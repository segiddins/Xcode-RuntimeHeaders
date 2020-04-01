//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/DYPResourceItemFactory-Protocol.h>

@class NSString;
@protocol DYPFunctionInfo, DYPProgramGroup, DYPShaderItem;

@protocol DYPMTLResourceItemFactory <DYPResourceItemFactory>
- (id <DYPShaderItem>)functionWithPipeline:(id <DYPProgramGroup>)arg1 shaderType:(unsigned int)arg2 functionInfo:(id <DYPFunctionInfo>)arg3 identifier:(NSString *)arg4;
- (id <DYPProgramGroup>)pipelineStateWithProgramGroup:(id <DYPProgramGroup>)arg1 programType:(unsigned int)arg2 pipelineStateID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(NSString *)arg6;
- (id <DYPFunctionInfo>)functionInfoWithSourceFilePath:(NSString *)arg1 onlineCompiled:(BOOL)arg2 functionID:(unsigned long long)arg3;
@end

