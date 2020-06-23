//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTDaemonDTXConnectionProviding-Protocol.h>

@class NSString, OS_remote_device;
@protocol XCTDebugLogDelegate, XCTRemoteHostDiagnosticReportsSynchronizing;

@interface XCTRemoteDeviceDTXConnectionProvider : NSObject <XCTDaemonDTXConnectionProviding, XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    OS_remote_device *_device;
}

- (void).cxx_destruct;
@property(readonly) OS_remote_device *device; // @synthesize device=_device;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (void)makeConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithRemoteDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

