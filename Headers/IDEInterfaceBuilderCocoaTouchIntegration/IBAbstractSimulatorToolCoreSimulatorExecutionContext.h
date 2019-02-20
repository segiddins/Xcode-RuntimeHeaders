//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPlatformToolExecutionContext.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/SimDeviceFramebufferServiceClient-Protocol.h>

@class IBCocoaTouchIdiom, NSObject, NSString, SimDevice, SimDeviceFramebufferService;
@protocol OS_dispatch_queue;

@interface IBAbstractSimulatorToolCoreSimulatorExecutionContext : IBAbstractPlatformToolExecutionContext <SimDeviceFramebufferServiceClient>
{
    int _numberOfFailedLaunchAttempts;
    unsigned long long _registrationID;
    NSString *_defaultsExecutableFilePath;
    SimDeviceFramebufferService *_framebufferService;
    NSObject<OS_dispatch_queue> *_framebufferServicingQueue;
    SimDevice *_device;
    IBCocoaTouchIdiom *_idiom;
}

+ (id)_environmentForBootingDevice;
+ (long long)bootingSessionType;
+ (void)initialize;
@property(readonly, nonatomic) IBCocoaTouchIdiom *idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) SimDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)framebufferService:(id)arg1 didFailWithError:(id)arg2;
- (void)framebufferService:(id)arg1 didRotateToAngle:(double)arg2;
- (void)framebufferService:(id)arg1 didUpdateRegion:(struct CGRect)arg2 ofBackingStore:(id)arg3;
- (BOOL)bootDeviceIfNeededWithContext:(id)arg1 error:(id *)arg2;
- (void)_setUpDevicePreferences;
- (void)updateDevicePreferencesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_writePreferences:(BOOL)arg1 forDomain:(id)arg2 key:(id)arg3 withArguments:(id)arg4 error:(id *)arg5;
- (id)_defaultsExecutableFilePath;
- (BOOL)_setupFramebufferServiceReturningError:(id *)arg1;
- (id)_disabledSimulatorJobs;
- (id)ib_verboseDescription;
- (void)configureDiagnosticsHandler:(id)arg1;
- (BOOL)populateEnvironment:(id)arg1 launchContext:(id)arg2 error:(id *)arg3;
- (id)handshakeWithPlatformToolWithPID:(int)arg1 hostToRemoteFIFO:(id)arg2 remoteToHostFIFO:(id)arg3 toolProxyClass:(Class)arg4 launchContext:(id)arg5 optionalLifelinePipe:(id)arg6 shouldRaiseOnFailures:(BOOL)arg7 error:(id *)arg8;
- (BOOL)_openFIFOsForPID:(int)arg1 withHostToRemoteFIFO:(id)arg2 remoteToHostFIFO:(id)arg3 launchContext:(id)arg4 returningReadFD:(int *)arg5 returningWriteFD:(int *)arg6 error:(id *)arg7;
- (id)initWithSimDevice:(id)arg1 idiom:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
