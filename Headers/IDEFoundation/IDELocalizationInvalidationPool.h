//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMutableSet, NSString;

@interface IDELocalizationInvalidationPool : NSObject <DVTInvalidation>
{
    NSMutableSet *_toInvalidate;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidateAndRemoveAllObjects;
- (void)invalidateAndRemoveObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
