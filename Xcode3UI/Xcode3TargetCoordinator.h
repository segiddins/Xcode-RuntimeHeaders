//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString, Xcode3Target;

@interface Xcode3TargetCoordinator : NSObject <DVTInvalidation>
{
    Xcode3Target *_target;
}

+ (void)initialize;
@property(retain, nonatomic) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

