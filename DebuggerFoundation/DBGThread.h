//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEThread.h>

@class DBGMemoryData, DBGQueue, NSArray, NSCache, NSMutableArray, NSString;

@interface DBGThread : IDEThread
{
    DBGThread *_recordedThread;
    DBGThread *_leadingThread;
    BOOL _staleThreadDisplayName;
    long long _lastCompressionValue;
    long long _secondLastCompressionValue;
    NSCache *_compressedStackFramesCache;
    NSMutableArray *_stackFrames;
    BOOL _recorded;
    BOOL _recordedForMemoryAddress;
    BOOL _autoRefreshStackFramesWhenPaused;
    BOOL _userSuspended;
    BOOL _hasInitializedStackFrames;
    int _state;
    int _stopReason;
    int _breakpointStackSelectionBehavior;
    NSString *_threadName;
    NSString *_threadDisplayName;
    DBGQueue *_queue;
    unsigned long long _recordedThreadDepth;
    NSString *_qualityOfServiceValue;
    DBGMemoryData *_memoryDatum;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property BOOL hasInitializedStackFrames; // @synthesize hasInitializedStackFrames=_hasInitializedStackFrames;
@property(retain) DBGMemoryData *memoryDatum; // @synthesize memoryDatum=_memoryDatum;
@property(readonly, copy, nonatomic) NSString *qualityOfServiceValue; // @synthesize qualityOfServiceValue=_qualityOfServiceValue;
@property(nonatomic) BOOL userSuspended; // @synthesize userSuspended=_userSuspended;
@property(nonatomic) int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property(nonatomic) unsigned long long recordedThreadDepth; // @synthesize recordedThreadDepth=_recordedThreadDepth;
@property(nonatomic) BOOL autoRefreshStackFramesWhenPaused; // @synthesize autoRefreshStackFramesWhenPaused=_autoRefreshStackFramesWhenPaused;
@property(nonatomic) int stopReason; // @synthesize stopReason=_stopReason;
@property(retain, nonatomic) DBGQueue *queue; // @synthesize queue=_queue;
- (BOOL)isRecordedForMemoryAddress;
- (void)setRecorded:(BOOL)arg1;
- (BOOL)isRecorded;
- (id)recordedThread;
- (int)state;
- (id)threadName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)requestUnsuspend;
- (void)requestSuspend;
- (void)setLeadingThread:(id)arg1 depth:(unsigned long long)arg2;
- (id)leadingThread;
- (void)setPrimitiveQueue:(id)arg1;
- (id)compressedStackFrames:(long long)arg1;
- (void)requestStackFrames:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)refreshStackFrames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_inferStateFromStackFrames:(id)arg1;
- (void)_inferState;
- (void)_primitiveSetQualityOfServiceValue:(id)arg1;
- (void)_primitiveSetThreadName:(id)arg1;
- (void)invalidateUnusedStackFramesAfterCallToSetStackFrames:(id)arg1;
- (void)setRecordedForMemoryAddress:(BOOL)arg1;
- (id)primitiveStackFrames;
@property(copy, nonatomic) NSArray *stackFrames; // @dynamic stackFrames;
- (void)_invalidateStackFrames:(id)arg1;
- (void)willReuse:(BOOL)arg1;
- (void)_resetQueueStackFramesAndRecordedStates:(BOOL)arg1;
- (BOOL)_isStopped;
- (void)setState:(int)arg1;
- (id)threadDisplayName;
- (void)setThreadName:(id)arg1;
- (void)setRecordedThread:(id)arg1;
- (void)_resetCurrentStackFrameIfNecessary:(id)arg1;
- (id)initWithParentProcess:(id)arg1 uniqueID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableStackFrames; // @dynamic mutableStackFrames;

@end

