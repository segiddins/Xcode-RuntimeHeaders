//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTDispatchLock, NSArray, NSError, NSMutableArray, NSOperationQueue;

@interface DVTOperationGroup : DVTOperation
{
    NSOperationQueue *_queue;
    DVTDispatchLock *_lock;
    NSMutableArray *_suboperations;
    NSError *_error;
    CDUnknownBlockType _signpost;
}

+ (id)new;
+ (id)operationGroupWithSuboperations:(id)arg1 signpost:(CDUnknownBlockType)arg2;
+ (id)operationGroupWithSuboperations:(id)arg1;
- (void).cxx_destruct;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (id)description;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)error;
- (void)setError:(id)arg1;
- (void)cancel;
- (void)main;
- (void)start;
- (void)addSuboperation:(id)arg1;
- (void)addSuboperations:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
@property(getter=isSuspended) BOOL suspended;
@property long long maxConcurrentOperationCount;
@property(readonly) NSArray *suboperations;
- (void)setName:(id)arg1;
- (id)initWithSignpost:(CDUnknownBlockType)arg1;
- (id)init;

@end

