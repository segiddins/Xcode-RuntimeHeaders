//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYBreakpoint, DYCaptureSession, DYDevice, DYFuture, DYGuestApp, DYGuestAppControlStrategy, DYGuestAppLaunchStrategy, DYResourceStreamer, DYShaderDebuggerDataSourceProviderDelegate, DYSymbolicator, DYTransport, DYTransportSource, NSDictionary, NSError, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface DYGuestAppSession : NSObject
{
    struct dispatch_queue_s *_queue;
    unsigned int _transactionBits;
    BOOL _attemptedLaunch;
    unsigned int _graphicsAPI;
    NSString *_appTransportAddress;
    struct dispatch_queue_s *_masterQueue;
    struct dispatch_semaphore_s *_transactionSema;
    NSMutableArray *_launchEnvironmentMutators;
    NSMutableArray *_finalLaunchDictionaryMutators;
    DYTransportSource *_source;
    DYSymbolicator *_symbolicator;
    DYFuture *_symbolicatorFuture;
    NSMapTable *_observersMap;
    NSMapTable *_traceHandlersMap;
    NSMutableDictionary *_fbufStreamHeaders;
    struct dispatch_queue_s *_traceHandlingQueue;
    NSMutableDictionary *_overridesConfiguration;
    DYCaptureSession *_activeCaptureSession;
    unsigned int _captureSessionSerial;
    NSMutableArray *_displayLinkInfo;
    int _displayLinkInfoUpdateLock;
    struct dy_timebase _appTimebase;
    BOOL _didTerminate;
    BOOL _interposeSemaphoreSignalSent;
    BOOL _disableAllInterposing;
    BOOL _disableLaunchTimeout;
    BOOL _remainSuspendedAfterLaunch;
    BOOL _running;
    BOOL _invalid;
    BOOL _includeBacktracesInTrace;
    BOOL _includeDriverEventsInTrace;
    BOOL _isLocalSession;
    int _traceMode;
    DYGuestApp *_guestApp;
    DYDevice *_device;
    DYTransport *_transport;
    NSDictionary *_finalLaunchDictionary;
    NSError *_error;
    DYBreakpoint *_currentBreakpoint;
    DYResourceStreamer *_resourceStreamer;
    DYShaderDebuggerDataSourceProviderDelegate *_shaderDebuggerDataSourceProviderDelegate;
    unsigned long long _profilingSendPeriod;
    unsigned long long _profilingFlags;
    NSDictionary *_hardwareCountersConfiguration;
    DYGuestAppLaunchStrategy *_launchStrategy;
    DYGuestAppControlStrategy *_controlStrategy;
}

+ (void)initialize;
@property(readonly, nonatomic) DYGuestAppControlStrategy *controlStrategy; // @synthesize controlStrategy=_controlStrategy;
@property(readonly, nonatomic) DYGuestAppLaunchStrategy *launchStrategy; // @synthesize launchStrategy=_launchStrategy;
@property(nonatomic) BOOL isLocalSession; // @synthesize isLocalSession=_isLocalSession;
@property(retain, nonatomic) NSDictionary *hardwareCountersConfiguration; // @synthesize hardwareCountersConfiguration=_hardwareCountersConfiguration;
@property(nonatomic) unsigned long long profilingFlags; // @synthesize profilingFlags=_profilingFlags;
@property(nonatomic) unsigned long long profilingSendPeriod; // @synthesize profilingSendPeriod=_profilingSendPeriod;
@property(nonatomic) BOOL includeDriverEventsInTrace; // @synthesize includeDriverEventsInTrace=_includeDriverEventsInTrace;
@property(nonatomic) BOOL includeBacktracesInTrace; // @synthesize includeBacktracesInTrace=_includeBacktracesInTrace;
@property(nonatomic) int traceMode; // @synthesize traceMode=_traceMode;
@property(readonly, retain, nonatomic) DYShaderDebuggerDataSourceProviderDelegate *shaderDebuggerDataSourceProviderDelegate; // @synthesize shaderDebuggerDataSourceProviderDelegate=_shaderDebuggerDataSourceProviderDelegate;
@property(readonly, retain, nonatomic) DYResourceStreamer *resourceStreamer; // @synthesize resourceStreamer=_resourceStreamer;
@property(retain, nonatomic) DYBreakpoint *currentBreakpoint; // @synthesize currentBreakpoint=_currentBreakpoint;
@property(readonly, nonatomic) unsigned int graphicsAPI; // @synthesize graphicsAPI=_graphicsAPI;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) BOOL running; // @synthesize running=_running;
@property(readonly, retain, nonatomic) NSString *appTransportAddress; // @synthesize appTransportAddress=_appTransportAddress;
@property(retain, nonatomic) NSDictionary *finalLaunchDictionary; // @synthesize finalLaunchDictionary=_finalLaunchDictionary;
@property(nonatomic) BOOL remainSuspendedAfterLaunch; // @synthesize remainSuspendedAfterLaunch=_remainSuspendedAfterLaunch;
@property(nonatomic) BOOL disableLaunchTimeout; // @synthesize disableLaunchTimeout=_disableLaunchTimeout;
@property(nonatomic) BOOL disableAllInterposing; // @synthesize disableAllInterposing=_disableAllInterposing;
@property(readonly, retain, nonatomic) DYTransport *transport; // @synthesize transport=_transport;
@property(readonly, retain, nonatomic) DYDevice *device; // @synthesize device=_device;
@property(readonly, retain, nonatomic) DYGuestApp *guestApp; // @synthesize guestApp=_guestApp;
- (void).cxx_destruct;
- (id)newCaptureSessionWithArchive:(id)arg1;
- (void)setValue:(id)arg1 forOverride:(id)arg2;
@property(readonly, nonatomic) struct dy_timebase appTimebase;
@property(readonly, nonatomic) int currentBreakpointType;
- (void)_sendAllConfigurations;
- (void)_sendOverridesConfiguration;
- (void)_sendTraceConfiguration;
- (void)_sendAdditionalConfigurations;
- (void)_modifyTraceConfigurationDictionary:(id)arg1;
- (void)_handleFstreamData:(id)arg1;
- (void)_handleGuestAppTermination:(id)arg1;
- (void)_handleTransportMessage:(id)arg1;
- (id)updateResources:(id)arg1;
- (id)queryForGraphicsAPIUsage;
- (id)getDisplayLinkInfo;
- (id)activateCaptureSessionInitatedByInferior:(id)arg1 sessionSerial:(unsigned int)arg2;
- (id)activateCaptureSession:(id)arg1;
- (id)prepareSymbolicator;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postEvent:(int)arg1 info:(id)arg2;
- (void)removeTraceHandler:(id)arg1;
- (id)handleTraceOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dispatchInTransaction:(CDUnknownBlockType)arg1;
- (BOOL)_isDirectTransactionAllowed;
- (void)drainQueue;
- (void)invalidate;
- (void)_invalidate:(id)arg1;
- (void)bringToForeground;
- (void)unlockGraphics;
- (void)lockGraphics;
- (void)terminate;
- (void)resume;
@property(readonly, retain, nonatomic) NSDictionary *finalLaunchEnvironment;
- (void)dispatchOnceRunning:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (id)launch;
- (id)launchDebugServerWithEnvironment:(id)arg1 andLaunchPath:(id)arg2 andPort:(id)arg3;
- (void)_applyBuiltinEnvironmentMutation:(id)arg1;
- (id)_makeLaunchDictionary;
- (void)registerFinalLaunchDictionaryMutator:(CDUnknownBlockType)arg1;
- (void)registerLaunchEnvironmentMutator:(CDUnknownBlockType)arg1;
- (struct dispatch_queue_s *)createQueueTargettingPrimaryQueue;
- (struct dispatch_queue_s *)createQueueTargettingMasterQueue;
- (void)setTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)_initWithGuestApp:(id)arg1 transport:(id)arg2 device:(id)arg3 launchStrategyClass:(Class)arg4 controlStrategyClass:(Class)arg5;
- (id)initWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3;
- (id)init;

@end

