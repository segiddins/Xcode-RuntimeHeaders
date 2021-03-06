//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEDebugNavigableModel-Protocol.h>

@class DVTDispatchLock, DVTStackBacktrace, IDEDebugProcess, IDEDebugQueue, IDEIssue, IDELaunchSession, IDERecordedThreadCollection, NSArray, NSCache, NSMutableArray, NSNumber, NSString;
@protocol DVTInvalidation><IDEDataValue;

@interface IDEThread : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    IDEThread *_leadingThread;
    BOOL _staleThreadDisplayName;
    long long _lastCompressionValue;
    long long _secondLastCompressionValue;
    NSCache *_compressedStackFramesCache;
    NSMutableArray *_stackFrames;
    NSMutableArray *_delayedInvalidationChildren;
    DVTDispatchLock *_delayedInvalidationChildrenLock;
    BOOL _autoRefreshStackFramesWhenPaused;
    BOOL _hasLatestStackFrames;
    BOOL _hasInitializedStackFrames;
    BOOL _recorded;
    BOOL _recordedForDisplayingStackFrames;
    BOOL _userSuspended;
    BOOL _specialRuntimeThread;
    int _state;
    int _stopReason;
    int _breakpointStackSelectionBehavior;
    NSString *_associatedProcessUUID;
    NSString *_threadDisplayName;
    IDEDebugProcess *_parentProcess;
    NSNumber *_uniqueID;
    NSString *_threadName;
    IDEDebugQueue *_queue;
    IDEThread *_recordedThread;
    unsigned long long _recordedThreadDepth;
    NSString *_lastReasonStopped;
    IDERecordedThreadCollection *_recordedThreadCollection;
    id <DVTInvalidation><IDEDataValue> _exceptionDataValue;
    IDEIssue *_runtimeIssue;
    NSString *_qualityOfServiceValue;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)keyPathsForValuesAffectingThreadDisplayName;
+ (id)displayNameForThreadName:(id)arg1 threadID:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property(copy, nonatomic) NSString *qualityOfServiceValue; // @synthesize qualityOfServiceValue=_qualityOfServiceValue;
@property BOOL specialRuntimeThread; // @synthesize specialRuntimeThread=_specialRuntimeThread;
@property(retain, nonatomic) IDEIssue *runtimeIssue; // @synthesize runtimeIssue=_runtimeIssue;
@property(retain, nonatomic) id <DVTInvalidation><IDEDataValue> exceptionDataValue; // @synthesize exceptionDataValue=_exceptionDataValue;
@property(retain, nonatomic) IDERecordedThreadCollection *recordedThreadCollection; // @synthesize recordedThreadCollection=_recordedThreadCollection;
@property(nonatomic) BOOL userSuspended; // @synthesize userSuspended=_userSuspended;
@property(copy, nonatomic) NSString *lastReasonStopped; // @synthesize lastReasonStopped=_lastReasonStopped;
@property(nonatomic) BOOL recordedForDisplayingStackFrames; // @synthesize recordedForDisplayingStackFrames=_recordedForDisplayingStackFrames;
@property(nonatomic, getter=isRecorded) BOOL recorded; // @synthesize recorded=_recorded;
@property(nonatomic) unsigned long long recordedThreadDepth; // @synthesize recordedThreadDepth=_recordedThreadDepth;
@property(retain, nonatomic) IDEThread *recordedThread; // @synthesize recordedThread=_recordedThread;
@property BOOL hasInitializedStackFrames; // @synthesize hasInitializedStackFrames=_hasInitializedStackFrames;
@property(nonatomic) BOOL hasLatestStackFrames; // @synthesize hasLatestStackFrames=_hasLatestStackFrames;
@property(nonatomic) BOOL autoRefreshStackFramesWhenPaused; // @synthesize autoRefreshStackFramesWhenPaused=_autoRefreshStackFramesWhenPaused;
@property(retain, nonatomic) IDEDebugQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) int stopReason; // @synthesize stopReason=_stopReason;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) IDEDebugProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void)primitiveInvalidate;
- (void)_inferStateFromStackFrames:(id)arg1;
- (void)_inferState;
- (id)primitiveStackFrames;
- (id)compressedStackFrames:(long long)arg1;
- (void)requestStackFrames:(unsigned long long)arg1 handleOnMainQueue:(BOOL)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)refreshStackFrames;
- (void)invalidateUnusedStackFramesAfterCallToSetStackFrames:(id)arg1;
@property(copy, nonatomic) NSArray *stackFrames; // @dynamic stackFrames;
- (void)_invalidateStackFrames:(id)arg1;
- (void)setLeadingThread:(id)arg1 depth:(unsigned long long)arg2;
- (id)leadingThread;
- (void)setPrimitiveQueue:(id)arg1;
- (void)willReuse:(BOOL)arg1;
- (void)_resetQueueStackFramesAndRecordedStates:(BOOL)arg1;
- (void)_resetCurrentStackFrameIfNecessary:(id)arg1;
- (id)compressedStackFramesIncludingRecorded:(long long)arg1;
- (BOOL)_shouldSkipRecordedFrames;
- (BOOL)_isStopped;
@property(readonly, nonatomic) NSString *threadDisplayName; // @synthesize threadDisplayName=_threadDisplayName;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithParentProcess:(id)arg1 uniqueID:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableStackFrames; // @dynamic mutableStackFrames;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

