//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTModelGraphTransactionScope, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface DVTModelObjectGraph : NSObject
{
    DVTModelGraphTransactionScope *_transactionScope;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_updatedObjects;
    NSMutableSet *_deletedObjects;
    BOOL _coalescePending;
    BOOL _changeNotificationsAreSuspended;
    BOOL _tracksChanges;
    BOOL _hasPendingChanges;
    NSString *_name;
    NSOperationQueue *_asyncQueue;
    NSOperationQueue *_changeQueue;
    NSObject<OS_dispatch_queue> *_asyncDispatchQueue;
    NSObject<OS_dispatch_queue> *_changeDispatchQueue;
}

+ (BOOL)automaticallyNotifiesObserversOfHasPendingChanges;
@property(readonly) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(readonly) NSObject<OS_dispatch_queue> *changeDispatchQueue; // @synthesize changeDispatchQueue=_changeDispatchQueue;
@property(readonly) NSObject<OS_dispatch_queue> *asyncDispatchQueue; // @synthesize asyncDispatchQueue=_asyncDispatchQueue;
@property(readonly) NSOperationQueue *changeQueue; // @synthesize changeQueue=_changeQueue;
@property(readonly) NSOperationQueue *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)didDeleteModelObject:(id)arg1;
- (void)didUpdateModelObject:(id)arg1;
- (void)didInsertModelObject:(id)arg1;
- (void)performBlockCoalescingModelChanges:(CDUnknownBlockType)arg1;
- (void)_locked_coalesceUpdates;
- (void)_coalescingTick;
- (void)_disassociateModelObject:(id)arg1;
- (void)_associateModelObject:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 asyncDispatchQueue:(id)arg2 changeDispatchQueue:(id)arg3;
- (id)initWithName:(id)arg1 asyncQueue:(id)arg2 changeQueue:(id)arg3;
- (id)initWithName:(id)arg1 asyncDispatchQueue:(id)arg2 changeDispatchQueue:(id)arg3 transactionScope:(id)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithName:(id)arg1 asyncDispatchQueue:(id)arg2 changeDispatchQueue:(id)arg3 transactionScope:(id)arg4;
- (id)initWithName:(id)arg1 asyncQueue:(id)arg2 changeQueue:(id)arg3 transactionScope:(id)arg4;

@end

