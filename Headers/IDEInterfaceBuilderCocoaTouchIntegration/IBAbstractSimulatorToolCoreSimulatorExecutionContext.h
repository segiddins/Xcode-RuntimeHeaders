//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPlatformToolExecutionContext.h>

@class IBCocoaTouchIdiom, SimDevice;

@interface IBAbstractSimulatorToolCoreSimulatorExecutionContext : IBAbstractPlatformToolExecutionContext
{
    _Atomic int _numberOfFailedLaunchAttempts;
    unsigned long long _registrationID;
    SimDevice *_device;
    IBCocoaTouchIdiom *_idiom;
}

+ (id)_environmentForBootingDevice;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBCocoaTouchIdiom *idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) SimDevice *device; // @synthesize device=_device;
- (BOOL)bootDeviceIfNeededWithContext:(id)arg1 error:(id *)arg2;
- (id)_disabledSimulatorJobs;
- (id)debugDescription;
- (id)description;
- (id)ib_verboseDescription;
- (void)configureDiagnosticsHandler:(id)arg1;
- (id)runtimeDestinationHint;
- (BOOL)populateEnvironment:(id)arg1 launchContext:(id)arg2 error:(id *)arg3;
- (id)handshakeWithPlatformToolWithPID:(int)arg1 hostToRemoteFIFO:(id)arg2 remoteToHostFIFO:(id)arg3 toolProxyClass:(Class)arg4 proxyDelegate:(id)arg5 launchContext:(id)arg6 optionalLifelinePipe:(id)arg7 shouldRaiseOnFailures:(BOOL)arg8 error:(id *)arg9;
- (BOOL)_openFIFOsForPID:(int)arg1 withHostToRemoteFIFO:(id)arg2 remoteToHostFIFO:(id)arg3 launchContext:(id)arg4 returningReadFD:(int *)arg5 returningWriteFD:(int *)arg6 error:(id *)arg7;
- (id)launchAndConnectToToolWithLaunchContext:(id)arg1 toolProxyClass:(Class)arg2 proxyDelegate:(id)arg3 shouldRaiseOnFailures:(BOOL)arg4 error:(id *)arg5;
- (id)initWithSimDevice:(id)arg1 idiom:(id)arg2;

@end

