//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RealityKit/NSObject-Protocol.h>

@class MTLAccelerationStructureDescriptor, MTLBinaryArchiveDescriptor, MTLCompileOptions, MTLComputePipelineDescriptor, MTLCounterSampleBufferDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLIndirectCommandBufferDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLSharedEventHandle, MTLSharedTextureHandle, MTLTextureDescriptor, NSArray, NSBundle, NSString, NSURL, OS_dispatch_data;
@protocol MTLAccelerationStructure, MTLArgumentEncoder, MTLBinaryArchive, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLCounterSampleBuffer, MTLDepthStencilState, MTLDynamicLibrary, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLIndirectCommandBuffer, MTLLibrary, MTLRasterizationRateMap, MTLRenderPipelineState, MTLSamplerState, MTLSharedEvent, MTLTexture;

@protocol MTLDevice <NSObject>
@property(nonatomic, readonly) BOOL supportsBinaryFunctionPointers;
@property(nonatomic, readonly) BOOL supportsFunctionPointers;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (CDStruct_32a7f38a)accelerationStructureSizesWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
@property(nonatomic, readonly) BOOL supportsRaytracing;
- (id <MTLBinaryArchive>)newBinaryArchiveWithDescriptor:(MTLBinaryArchiveDescriptor *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibrary:(id <MTLLibrary>)arg1 error:(id *)arg2;
@property(nonatomic, readonly) BOOL supportsDynamicLibraries;
- (BOOL)supportsVertexAmplificationCount:(unsigned long long)arg1;
- (BOOL)supportsCounterSampling:(unsigned long long)arg1;
- (void)sampleTimestamps:(unsigned long long *)arg1 gpuTimestamp:(unsigned long long *)arg2;
- (id <MTLCounterSampleBuffer>)newCounterSampleBufferWithDescriptor:(MTLCounterSampleBufferDescriptor *)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSArray *counterSets;
@property(nonatomic, readonly) long long maxBufferLength;
@property(nonatomic, readonly) unsigned int peerCount;
@property(nonatomic, readonly) unsigned int peerIndex;
@property(nonatomic, readonly) unsigned long long peerGroupID;
- (id <MTLSharedEvent>)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (id <MTLSharedEvent>)newSharedEvent;
- (id <MTLEvent>)newEvent;
- (id <MTLIndirectCommandBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (BOOL)areProgrammableSamplePositionsSupported;
@property(nonatomic, readonly) long long maxArgumentBufferSamplerCount;
@property(nonatomic, readonly) long long maxThreadgroupMemoryLength;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
- (BOOL)supportsFamily:(long long)arg1;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(OS_dispatch_data *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newSharedTextureWithHandle:(MTLSharedTextureHandle *)arg1;
- (id <MTLTexture>)newSharedTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@property(nonatomic, readonly) long long currentAllocatedSize;
@property(nonatomic, readonly) BOOL supportsShaderBarycentricCoordinates;
- (BOOL)areBarycentricCoordsSupported;
@property(nonatomic, readonly) BOOL supportsPullModelInterpolation;
- (BOOL)areRasterOrderGroupsSupported;
@property(nonatomic, readonly) unsigned long long argumentBuffersSupport;
@property(nonatomic, readonly) unsigned long long readWriteTextureSupport;
- (BOOL)isDepth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) unsigned long long maxTransferRate;
@property(nonatomic, readonly) long long locationNumber;
@property(nonatomic, readonly) unsigned long long location;
@property(nonatomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(nonatomic, readonly) BOOL hasUnifiedMemory;
- (BOOL)isRemovable;
- (BOOL)isHeadless;
- (BOOL)isLowPower;
@property(nonatomic, readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(nonatomic, readonly) unsigned long long registryID;
@property(nonatomic, readonly) NSString *name;

// Remaining properties
@property(nonatomic, readonly) BOOL barycentricCoordsSupported;
@property(nonatomic, readonly) BOOL depth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) BOOL headless;
@property(nonatomic, readonly) BOOL lowPower;
@property(nonatomic, readonly) BOOL programmableSamplePositionsSupported;
@property(nonatomic, readonly) BOOL rasterOrderGroupsSupported;
@property(nonatomic, readonly) BOOL removable;
@end

