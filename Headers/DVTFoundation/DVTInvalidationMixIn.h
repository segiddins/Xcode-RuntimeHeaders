//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTMixIn.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTInvalidationMixIn : DVTMixIn <DVTInvalidation>
{
}

+ (void)mixInExtendClass:(Class)arg1 deallocAssertionBehavior:(unsigned long long)arg2;
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)__classIsDVTInvalidation;
- (void)DVTInvalidationMixIn_SoftAssertDidInvalidateDealloc;
- (void)DVTInvalidationMixIn_HardAssertDidInvalidateDealloc;
- (void)DVTInvalidationMixIn_DeZombifyDealloc;
- (void)addAutoInvalidatedObject:(id)arg1;
- (void)invalidate;
- (void)primitiveInvalidate;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (BOOL)__isDVTInvalidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

