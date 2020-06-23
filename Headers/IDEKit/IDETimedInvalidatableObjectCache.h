//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, NSMutableDictionary, NSTimer;
@protocol DVTInvalidation;

@interface IDETimedInvalidatableObjectCache : NSObject
{
    NSMutableDictionary *_observers;
    NSTimer *_timer;
    double _delay;
    id <DVTInvalidation> _invalidatable;
    DVTObservingToken *_immediateInvalidationTriggerToken;
}

- (void).cxx_destruct;
- (id)pin;
- (void)_invalidateTheInvalidatable;
- (void)invalidationTimeExpired:(id)arg1;
- (id)initWithInvalidatedObject:(id)arg1 skippingDelayOnceObjectBecomesInvalid:(id)arg2 delay:(double)arg3;

@end

