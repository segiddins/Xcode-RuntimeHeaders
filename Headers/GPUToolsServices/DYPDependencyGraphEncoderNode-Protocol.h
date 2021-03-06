//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYPDependencyGraphNode-Protocol.h>

@class DYMTLShaderProfilerResult, NSArray, NSNumber;

@protocol DYPDependencyGraphEncoderNode <DYPDependencyGraphNode>
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) int fileFunctionIndex;
@property(readonly, nonatomic) unsigned long long encoderType;
@property(readonly, nonatomic) unsigned long long encoderID;
- (double)encoderTime:(DYMTLShaderProfilerResult *)arg1;
- (NSNumber *)vertexCount:(DYMTLShaderProfilerResult *)arg1;
- (BOOL)isICBWriteOnly:(unsigned long long)arg1;
- (BOOL)isBufferWriteOnly:(unsigned long long)arg1;
- (BOOL)isTextureWriteOnly:(unsigned long long)arg1;
- (NSArray *)allResources;
@end

