//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDebugQueue.h>

@protocol DBGSBQueue;

@interface DBGLLDBQueue : IDEDebugQueue
{
    id <DBGSBQueue> _lldbQueue;
    BOOL _derivedPendingBlocks;
    unsigned long long _numberOfPendingBlocks;
}

+ (BOOL)supportsInvalidationPrevention;
- (void).cxx_destruct;
- (unsigned long long)numberOfPendingBlocks;
- (void)primitiveInvalidate;
- (id)pendingBlocksThreads;
- (id)lldbSession;
- (id)lldbQueue;
- (id)initWithParentProcess:(id)arg1 lldbQueue:(id)arg2;

@end

