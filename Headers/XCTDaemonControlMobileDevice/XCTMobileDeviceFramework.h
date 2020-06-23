//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControlMobileDevice/XCTMobileDeviceFramework-Protocol.h>

@class NSArray, NSString;

@interface XCTMobileDeviceFramework : NSObject <XCTMobileDeviceFramework>
{
}

- (id)errorWithAMDError:(int)arg1;
- (BOOL)disconnectFromDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)stopSessionWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (void)invalidateServiceConnection:(struct _AMDServiceConnection *)arg1;
- (int)secureSocketFromServiceConnection:(struct _AMDServiceConnection *)arg1;
- (int)socketFromServiceConnection:(struct _AMDServiceConnection *)arg1;
- (struct _AMDServiceConnection *)startServiceOnDevice:(struct _AMDevice *)arg1 identifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)startSessionWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)validatePairingWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)pairWithDevice:(struct _AMDevice *)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)connectToDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (id)identifierForDevice:(struct _AMDevice *)arg1;
@property(readonly, copy) NSArray *devices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

