//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, NSOperationQueue;

@interface XCSUIDataSourceQueueManager : NSObject
{
    NSOperationQueue *_queue;
    DVTObservingToken *_queueObserver;
}

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (BOOL)isOperationEnqueued:(id)arg1;
- (void)cancelOperations;
- (id)description;
- (id)init;

@end

