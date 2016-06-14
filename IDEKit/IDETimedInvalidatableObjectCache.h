//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, NSTimer;
@protocol DVTInvalidation;

@interface IDETimedInvalidatableObjectCache : NSObject
{
    long long _pins;
    NSTimer *_timer;
    double _delay;
    id <DVTInvalidation> _invalidatable;
    DVTObservingToken *_immediateInvalidationTriggerToken;
}

- (void).cxx_destruct;
- (void)unpin;
- (void)pin;
- (void)invalidationTimeExpired:(id)arg1;
- (id)initWithInvalidatedObject:(id)arg1 skippingDelayOnceObjectBecomesInvalid:(id)arg2 delay:(double)arg3;

@end

