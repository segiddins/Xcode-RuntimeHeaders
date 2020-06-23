//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/NSObject-Protocol.h>

@class DVTStackBacktrace;

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(nonatomic, retain) DVTStackBacktrace *creationBacktrace;
@property(nonatomic, readonly) DVTStackBacktrace *invalidationBacktrace;
- (BOOL)isValid;
- (void)invalidate;

// Remaining properties
@property(nonatomic, readonly) BOOL valid;
@end

