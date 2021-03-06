//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, NSTimer;

@interface DTTypeCompletionHandler : NSObject
{
    BOOL delegateImplementsTypeCompletionStringForObject;
    BOOL delegateImplementsCompletionWillExpire;
    BOOL delegateImplementsCompletionDisplayShouldExpire;
    NSMutableString *completionString;
    NSTimer *completionWillExpireTimer;
    NSTimer *completionDisplayShouldExpireTimer;
    NSString *runLoopMode;
    id delegate;
}

+ (id)typeCompletionHandlerWithDelegate:(id)arg1;
+ (id)typeCompletionHandlerWithDelegate:(id)arg1 runLoopMode:(id)arg2;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3 startingAtObject:(id)arg4;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3;
- (void)invalidate;
- (void)expireCompletionDisplay:(id)arg1;
- (void)expireCompletion:(id)arg1;
- (void)clearAndRenewCompletionString;
- (void)clearAndRenewCompletionDisplayShouldExpireTimer;
- (void)clearCompletionDisplayShouldExpireTimer;
- (void)clearAndRenewCompletionWillExpireTimer;
- (void)clearCompletionWillExpireTimer;
- (id)currentTypeCompletionString;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 runLoopMode:(id)arg2;

@end

