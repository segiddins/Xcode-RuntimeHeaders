//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/IDEDeviceRunOperationWorker.h>

@class DVTiPhoneSimulator;

@interface _IDEInstalliPhoneSimulatorWorker : IDEDeviceRunOperationWorker
{
    DVTiPhoneSimulator *_device;
}

@property(retain) DVTiPhoneSimulator *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)terminate;
- (void)_willInstallWatchAppForCompanion:(id)arg1 maxTries:(unsigned long long)arg2;
- (void)_performInstall;
- (void)performWorkerAction;

@end

