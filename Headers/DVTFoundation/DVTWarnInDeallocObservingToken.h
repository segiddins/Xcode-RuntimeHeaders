//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTObservingToken.h>

@class DVTPrivateObservingToken, DVTStackBacktrace;

@interface DVTWarnInDeallocObservingToken : DVTObservingToken
{
    DVTPrivateObservingToken *_object;
}

+ (id)_tokenForToken:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)cancel;
@property(readonly) DVTStackBacktrace *creationBacktrace;
- (id)initWithObject:(id)arg1;

@end

