//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/GPUShaderDebuggerRegion.h>

#import <GPUDebugger/DYPShaderDebuggerROIKernel-Protocol.h>
#import <GPUDebugger/DYPShaderDebuggerROILocationKernel-Protocol.h>

@class NSString;

@interface GPUShaderDebuggerKernelRegion : GPUShaderDebuggerRegion <DYPShaderDebuggerROIKernel, DYPShaderDebuggerROILocationKernel>
{
    unsigned long long _minThreadPositionX;
    unsigned long long _minThreadPositionY;
    unsigned long long _minThreadPositionZ;
    unsigned long long _maxThreadPositionX;
    unsigned long long _maxThreadPositionY;
    unsigned long long _maxThreadPositionZ;
    unsigned long long _threadPositionX;
    unsigned long long _threadPositionY;
    unsigned long long _threadPositionZ;
}

@property(readonly, nonatomic) unsigned long long threadPositionZ; // @synthesize threadPositionZ=_threadPositionZ;
@property(readonly, nonatomic) unsigned long long threadPositionY; // @synthesize threadPositionY=_threadPositionY;
@property(readonly, nonatomic) unsigned long long threadPositionX; // @synthesize threadPositionX=_threadPositionX;
@property(readonly, nonatomic) unsigned long long maxThreadPositionZ; // @synthesize maxThreadPositionZ=_maxThreadPositionZ;
@property(readonly, nonatomic) unsigned long long maxThreadPositionY; // @synthesize maxThreadPositionY=_maxThreadPositionY;
@property(readonly, nonatomic) unsigned long long maxThreadPositionX; // @synthesize maxThreadPositionX=_maxThreadPositionX;
@property(readonly, nonatomic) unsigned long long minThreadPositionZ; // @synthesize minThreadPositionZ=_minThreadPositionZ;
@property(readonly, nonatomic) unsigned long long minThreadPositionY; // @synthesize minThreadPositionY=_minThreadPositionY;
@property(readonly, nonatomic) unsigned long long minThreadPositionX; // @synthesize minThreadPositionX=_minThreadPositionX;
@property(readonly, copy) NSString *description;
- (id)initWithMinThreadPosition:maxThreadPosition:selectedThreadPosition: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end

