//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEExecutionTrackerReporting-Protocol.h>

@class DVTFilePath, IDELaunchSession, NSArray, NSError, NSMutableArray, NSString;

@interface IDEExecutionTracker : NSObject <IDEExecutionTrackerReporting>
{
    NSMutableArray *_subtrackers;
    BOOL _isFinished;
    BOOL _wantsHold;
    BOOL _isCanceling;
    int _serviceTier;
    int _cancellationReason;
    NSString *_statusDisplayName;
    DVTFilePath *_statusImageFilePath;
    NSError *_error;
    IDELaunchSession *_launchSession;
    IDEExecutionTracker *_cancelingTracker;
    NSString *_debugName;
}

+ (void)initialize;
@property(copy) NSString *debugName; // @synthesize debugName=_debugName;
@property(retain) IDEExecutionTracker *cancelingTracker; // @synthesize cancelingTracker=_cancelingTracker;
@property int cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(readonly) BOOL isCanceling; // @synthesize isCanceling=_isCanceling;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL wantsHold; // @synthesize wantsHold=_wantsHold;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property int serviceTier; // @synthesize serviceTier=_serviceTier;
@property(retain) DVTFilePath *statusImageFilePath; // @synthesize statusImageFilePath=_statusImageFilePath;
@property(copy) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setStatusDisplayName:(id)arg1 statusImageFilePath:(id)arg2;
- (void)addSubtracker:(id)arg1;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)_updateIsFinished;
- (void)_updateWantsHold;
- (void)cancel;
- (void)cancelWithReason:(int)arg1;
@property(readonly) BOOL statusChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableSubtrackers; // @dynamic mutableSubtrackers;
@property(readonly, copy) NSArray *subtrackers; // @dynamic subtrackers;
@property(readonly) Class superclass;

@end

