//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDERunOperationWorker.h>

@class DVTDispatchLock, NSArray, NSMutableSet;

@interface IDERunOperationWorkerGroup : IDERunOperationWorker
{
    NSArray *_subworkers;
    NSMutableSet *_completedWorkers;
    BOOL _shouldStartNextWorker;
    unsigned long long _currentWorkerIndex;
    DVTDispatchLock *_subworkersLock;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)description;
- (void)allSubworkersDidFinishWithError:(id)arg1;
- (void)finishedWithError:(id)arg1;
- (void)finishFromCompletedWorker:(id)arg1 error:(id)arg2;
- (void)startNextWorkerFromCompletedWorker:(id)arg1 error:(id)arg2;
- (void)terminate;
- (void)start;
- (void)_startNextWorker;
- (id)initWithWorkers:(id)arg1 launchSession:(id)arg2;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

@end

