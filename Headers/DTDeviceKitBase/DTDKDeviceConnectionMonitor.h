//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTDeviceKitBase/DTDKDeviceConnectionMonitor-Protocol.h>

@class DTDKRemoteDeviceConnection, NSString;

@interface DTDKDeviceConnectionMonitor : NSObject <DTDKDeviceConnectionMonitor>
{
    DTDKRemoteDeviceConnection *_connection;
}

+ (id)keyPathsForValuesAffectingPacketRatio;
+ (id)keyPathsForValuesAffectingAverageLatency;
+ (id)monitorWithConnection:(id)arg1;
- (void).cxx_destruct;
@property(retain) DTDKRemoteDeviceConnection *connection; // @synthesize connection=_connection;
@property(readonly) double packetRatio;
@property(readonly) double averageLatency;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

