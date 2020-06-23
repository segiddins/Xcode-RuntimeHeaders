//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/DYPShaderDebuggerDataSourceProviderDelegate-Protocol.h>

@class DYTransport, NSOperationQueue, NSString;

@interface DYShaderDebuggerDataSourceProviderDelegate : NSObject <DYPShaderDebuggerDataSourceProviderDelegate>
{
    DYTransport *_transport;
    struct atomic<unsigned long long> _inflight;
    struct dispatch_queue_s *_replyQueue;
    NSOperationQueue *_sendQueue;
}

- (void).cxx_destruct;
- (id)requestShaderDebuggerTraceWithOptions:(id)arg1;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

