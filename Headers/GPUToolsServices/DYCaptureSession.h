//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYCaptureArchive, DYContinuation, DYFuture, DYGuestAppSession, DYProgressDigest, DYTransportSource, NSError, NSMapTable, NSMutableDictionary;

@interface DYCaptureSession : NSObject
{
    DYGuestAppSession *_session;
    DYCaptureArchive *_archive;
    struct dispatch_queue_s *_queue;
    struct dispatch_queue_s *_backgroundQueue;
    NSMutableDictionary *_finalConfigurationDictionary;
    DYTransportSource *_source;
    DYContinuation *_invalidationCompletion;
    DYFuture *_iconFuture;
    NSMutableDictionary *_buffers;
    NSError *_error;
    NSMapTable *_observersMap;
    struct _NSRange _frameRange;
    CDStruct_faeedbfb _stats;
    int _state;
    unsigned int _serial;
    BOOL _automaticallyDeleteArchiveOnFailure;
    int _storeSymbolicatorSignature;
    BOOL _triggerOnNextGraphicsCommand;
    BOOL _lockGraphicsAfterCompletion;
    BOOL _harvestStateAtEnd;
    BOOL _suspendAfterCompletion;
    BOOL _noRecentGPUWorkloadDetected;
    BOOL _complete;
    BOOL _clientDidSendAllData;
    BOOL _deviceSupportsSessionSerial;
    struct dispatch_source_s *_noGPUWorkloadDetectedTimer;
    BOOL _noGPUWorkloadDetectedTimerSuspended;
    BOOL _noGPUWorkloadDetectedTimerSignaled;
    BOOL _noGPUWorkloadDetectedTimerMessagesCount;
    DYProgressDigest *_progressDigest;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) __weak DYProgressDigest *progressDigest; // @synthesize progressDigest=_progressDigest;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) int storeSymbolicatorSignature; // @synthesize storeSymbolicatorSignature=_storeSymbolicatorSignature;
@property(nonatomic) BOOL noRecentGPUWorkloadDetected; // @synthesize noRecentGPUWorkloadDetected=_noRecentGPUWorkloadDetected;
@property(nonatomic) BOOL suspendAfterCompletion; // @synthesize suspendAfterCompletion=_suspendAfterCompletion;
@property(nonatomic) BOOL harvestStateAtEnd; // @synthesize harvestStateAtEnd=_harvestStateAtEnd;
@property(nonatomic) BOOL lockGraphicsAfterCompletion; // @synthesize lockGraphicsAfterCompletion=_lockGraphicsAfterCompletion;
@property(nonatomic) BOOL triggerOnNextGraphicsCommand; // @synthesize triggerOnNextGraphicsCommand=_triggerOnNextGraphicsCommand;
@property(nonatomic) struct _NSRange frameRange; // @synthesize frameRange=_frameRange;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL automaticallyDeleteArchiveOnFailure; // @synthesize automaticallyDeleteArchiveOnFailure=_automaticallyDeleteArchiveOnFailure;
@property(readonly, retain, nonatomic) DYCaptureArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)_resetNOGPUWorkloadDetectedStatusWithForceRestoreMessage:(BOOL)arg1;
- (void)_replaceArchive:(id)arg1;
- (void)_postProcessArchive;
- (void)_saveAPISpecificData:(id)arg1;
- (void)_setupFinalConfigurationDictionary:(id)arg1;
- (void)_receivedUsedClientData:(id)arg1;
- (void)_receivedAllClientData:(id)arg1;
- (void)_flushBuffers;
- (BOOL)stopCapturing;
- (BOOL)startCapturingWithSessionId:(unsigned int)arg1;
- (BOOL)startCapturing;
- (BOOL)_activateWithSession:(id)arg1 serial:(unsigned int)arg2 invalidationCompletion:(id)arg3 initiatedByInferior:(BOOL)arg4;
- (BOOL)_sendActivationMessage;
- (void)invalidate;
- (void)_invalidate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postStateChange:(int)arg1;
- (void)copyStatistics:(CDStruct_faeedbfb *)arg1;
@property(nonatomic) BOOL invalid; // @dynamic invalid;
@property(readonly, nonatomic) BOOL active; // @dynamic active;
@property(nonatomic, setter=_setState:) int state;
@property(nonatomic) unsigned long long frameLimit;
@property(nonatomic) unsigned long long triggerFrame;
- (void)setTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)initWithCaptureArchive:(id)arg1;
- (id)init;

@end

