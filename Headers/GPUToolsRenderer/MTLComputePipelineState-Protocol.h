//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsRenderer/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLComputePipelineState <NSObject>
@property(nonatomic, readonly) BOOL supportIndirectCommandBuffers;
@property(nonatomic, readonly) long long staticThreadgroupMemoryLength;
@property(nonatomic, readonly) long long threadExecutionWidth;
@property(nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, readonly) NSString *label;
@end

