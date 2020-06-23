//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/IDEExecutingOperationTrackable-Protocol.h>

@class DVTDisallowFinishToken, DVTDispatchLock, IDELaunchSession, IDERunOperationWorker, NSMutableArray, NSString;

@interface IDERunOperation : DVTOperation <IDEExecutingOperationTrackable>
{
    DVTDispatchLock *_workerAndFinishedTokenLock;
    NSMutableArray *_trackerObserverTokens;
    DVTDisallowFinishToken *_finishToken;
    BOOL _workaroundIsCancelled;
    IDERunOperationWorker *_worker;
    NSMutableArray *_trackers;
}

+ (id)keyPathsForValuesAffectingLaunchSession;
+ (id)keyPathsForValuesAffectingIsCancelled;
- (void).cxx_destruct;
@property(retain) NSMutableArray *trackers; // @synthesize trackers=_trackers;
@property(retain) IDERunOperationWorker *worker; // @synthesize worker=_worker;
@property BOOL workaroundIsCancelled; // @synthesize workaroundIsCancelled=_workaroundIsCancelled;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)registerTracker:(id)arg1;
- (void)_runningTrackerFinished:(id)arg1;
- (void)runningDidFinish;
@property(readonly) IDELaunchSession *launchSession;
- (void)cancel;
- (BOOL)isCancelled;
- (void)main;
- (id)initWithWorker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

