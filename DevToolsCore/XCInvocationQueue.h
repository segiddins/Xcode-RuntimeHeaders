//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface XCInvocationQueue : NSObject
{
    NSString *_identifier;
    NSMutableArray *_invocations;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _condition;
    unsigned long long _maxNumThreads;
    unsigned long long _numBeingProcessed;
}

+ (id)defaultQueue;
- (void)removeAllInvocations;
- (void)removeInvocation:(id)arg1;
- (void)addInvocationWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)addInvocationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)addInvocation:(id)arg1;
- (void)_processInvocationsInThreadSlotNumber:(id)arg1;
- (void)_processNextInvocationInThreadSlotNumber:(unsigned long long)arg1;
- (void)setMaximumNumberOfConcurrentInvocations:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfConcurrentInvocations;
- (unsigned long long)count;
- (id)identifier;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

