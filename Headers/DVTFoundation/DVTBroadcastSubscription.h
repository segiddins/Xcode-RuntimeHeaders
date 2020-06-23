//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTBroadcastCenter, DVTBroadcastChannel, DVTStackBacktrace, NSOperationQueue, NSString;

@interface DVTBroadcastSubscription : NSObject <DVTInvalidation>
{
    DVTBroadcastCenter *_center;
    DVTBroadcastChannel *_channel;
    CDUnknownBlockType _handler;
    NSOperationQueue *_queue;
}

+ (void)initialize;
@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) DVTBroadcastChannel *channel; // @synthesize channel=_channel;
@property(readonly) DVTBroadcastCenter *center; // @synthesize center=_center;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithBroadcastCenter:(id)arg1 channel:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

