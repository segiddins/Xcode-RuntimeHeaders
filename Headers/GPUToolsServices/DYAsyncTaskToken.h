//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DYAsyncTaskToken : NSObject
{
    NSMutableArray *_msgListeners;
    struct dispatch_queue_s *_lock;
    double _startTime;
    double _stopTime;
    BOOL _cancelled;
    BOOL _running;
    float _progress;
}

@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1;
- (BOOL)isCancelled;
- (void)end;
- (void)begin;
- (void)logMessage:(id)arg1;
- (void)cancel;
- (void)addMessageListener:(CDUnknownBlockType)arg1;
- (double)elapsedTime;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (id)init;

@end

