//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundSimulator/IDEPlaygroundSimulatorDeviceChooserProtocol-Protocol.h>

@class NSString;

@interface IDEPlaygroundSimulatorDeviceChooser : NSObject <IDEPlaygroundSimulatorDeviceChooserProtocol>
{
}

+ (id)deviceTypeForPlatform:(id)arg1 inContext:(id)arg2;
+ (id)bestPlaygroundSimulatorDeviceForPlatform:(id)arg1 error:(id *)arg2;
+ (BOOL)isPlaygroundSimulatorAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
