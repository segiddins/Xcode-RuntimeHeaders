//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebuggerMTLSupport/DYBufferArray-Protocol.h>

@protocol DYBuffer;

@protocol DYPMTLVertexAttributes <DYBufferArray>
@property(readonly, nonatomic) id <DYBuffer> indirectBuffer;
@property(readonly, nonatomic) id <DYBuffer> indexBuffer;
@property(readonly, nonatomic) id <DYBuffer> postVertexDumpBuffer;
@end

