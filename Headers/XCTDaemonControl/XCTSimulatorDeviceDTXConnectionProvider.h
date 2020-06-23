//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTDaemonDTXConnectionProviding-Protocol.h>

@class NSString, SimDevice, XCTSimulatorDeviceOnBootRunner;
@protocol OS_dispatch_queue, XCTDebugLogDelegate, XCTRemoteHostDiagnosticReportsSynchronizing;

@interface XCTSimulatorDeviceDTXConnectionProvider : NSObject <XCTDaemonDTXConnectionProviding, XCTConfigurableDebugLogger>
{
    BOOL _isValid;
    id <XCTDebugLogDelegate> _logDelegate;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    SimDevice *_device;
    XCTSimulatorDeviceOnBootRunner *_onBootRunner;
}

@property(retain) XCTSimulatorDeviceOnBootRunner *onBootRunner; // @synthesize onBootRunner=_onBootRunner;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property(readonly) SimDevice *device; // @synthesize device=_device;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (id)gatherDetailedSimulatorDiagnostics;
- (id)transportForDomainSocketAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)validateTestConnectionSocketPath:(id)arg1 error:(id *)arg2;
- (void)retrieveTestConnectionSocketPathFromSimulatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)makeConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSimDevice:(id)arg1 serviceName:(id)arg2;
- (id)initWithSimDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

