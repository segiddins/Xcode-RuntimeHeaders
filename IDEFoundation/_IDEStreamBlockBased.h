//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEStream.h>

@protocol IDEStreamPublisher;

@interface _IDEStreamBlockBased : IDEStream
{
    id <IDEStreamPublisher> _publisher;
    CDUnknownBlockType _onNextBlock;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
    CDUnknownBlockType _onCancelledBlock;
}

@property(copy) CDUnknownBlockType onCancelledBlock; // @synthesize onCancelledBlock=_onCancelledBlock;
@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(copy) CDUnknownBlockType onNextBlock; // @synthesize onNextBlock=_onNextBlock;
@property(retain) id <IDEStreamPublisher> publisher; // @synthesize publisher=_publisher;
- (void).cxx_destruct;
- (void)onCancelled;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (void)subscribeConsumer:(id)arg1;
- (void)cancel;
- (id)initWithPublisher:(id)arg1 onNext:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3 onCompleted:(CDUnknownBlockType)arg4 onCancelled:(CDUnknownBlockType)arg5;

@end

