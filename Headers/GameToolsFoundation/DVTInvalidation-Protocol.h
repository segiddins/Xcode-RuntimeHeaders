//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class DVTStackBacktrace;

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@end

