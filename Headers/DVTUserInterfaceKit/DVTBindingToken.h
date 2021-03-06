//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTUserInterfaceKit/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTBindingToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType _cancellationBlock;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithCancellationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

