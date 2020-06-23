//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUShaderDebuggerRegion.h>

#import <GPUDebugger/DYPShaderDebuggerROILocationPostTessellationVertex-Protocol.h>
#import <GPUDebugger/DYPShaderDebuggerROIPostTessellationVertex-Protocol.h>

@class NSArray, NSString;

@interface GPUShaderDebuggerPostTessellationVertexRegion : GPUShaderDebuggerRegion <DYPShaderDebuggerROIPostTessellationVertex, DYPShaderDebuggerROILocationPostTessellationVertex>
{
    unsigned long long _instanceId;
    unsigned long long _amplificationId;
    NSArray *_patchIds;
    unsigned long long _patchId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long patchId; // @synthesize patchId=_patchId;
@property(readonly, nonatomic) NSArray *patchIds; // @synthesize patchIds=_patchIds;
@property(readonly, nonatomic) unsigned long long amplificationId; // @synthesize amplificationId=_amplificationId;
@property(readonly, nonatomic) unsigned long long instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, copy) NSString *description;
- (id)initWithInstanceId:(unsigned long long)arg1 amplificationId:(unsigned long long)arg2 patchIds:(id)arg3 selectedPatchId:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end
