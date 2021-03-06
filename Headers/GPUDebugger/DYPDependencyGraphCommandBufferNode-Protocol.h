//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/DYPDependencyGraphNode-Protocol.h>

@class NSArray;
@protocol DYPDependencyGraphEncoderNode;

@protocol DYPDependencyGraphCommandBufferNode <DYPDependencyGraphNode>
@property(readonly, nonatomic) unsigned int commandEncoderCount;
@property(readonly, nonatomic) unsigned long long commandBufferID;
- (id <DYPDependencyGraphEncoderNode>)commandEncoderWithObjectId:(unsigned long long)arg1 withFileFunctionIndex:(unsigned int)arg2;
- (id <DYPDependencyGraphEncoderNode>)commandEncoderAtIndex:(unsigned int)arg1;
- (NSArray *)encoderNodeEndEncodingFileFunctionIndices;
- (NSArray *)encoderNodes;
@end

