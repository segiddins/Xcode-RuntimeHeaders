//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUShaderDebuggerRegion.h>

#import <GPUDebugger/DYPShaderDebuggerROILocationVertex-Protocol.h>
#import <GPUDebugger/DYPShaderDebuggerROIVertex-Protocol.h>

@class NSArray, NSString;

@interface GPUShaderDebuggerVertexRegion : GPUShaderDebuggerRegion <DYPShaderDebuggerROIVertex, DYPShaderDebuggerROILocationVertex>
{
    unsigned long long _instanceId;
    unsigned long long _amplificationId;
    NSArray *_vertexIds;
    unsigned long long _vertexId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long vertexId; // @synthesize vertexId=_vertexId;
@property(readonly, nonatomic) NSArray *vertexIds; // @synthesize vertexIds=_vertexIds;
@property(readonly, nonatomic) unsigned long long amplificationId; // @synthesize amplificationId=_amplificationId;
@property(readonly, nonatomic) unsigned long long instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, copy) NSString *description;
- (id)initWithInstanceId:(unsigned long long)arg1 amplificationId:(unsigned long long)arg2 vertexIds:(id)arg3 selectedVertexId:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end

