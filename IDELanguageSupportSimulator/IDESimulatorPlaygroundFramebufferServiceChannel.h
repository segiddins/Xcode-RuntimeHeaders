//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDELanguageSupportSimulator/IDEPlaygroundSimDeviceFramebufferServiceClient-Protocol.h>

@class IDEPlaygroundSimDeviceFramebufferService, NSString;
@protocol IDESimulatorPlaygroundFramebufferServiceChannelDelegate;

@interface IDESimulatorPlaygroundFramebufferServiceChannel : NSObject <IDEPlaygroundSimDeviceFramebufferServiceClient>
{
    id <IDESimulatorPlaygroundFramebufferServiceChannelDelegate> _delegate;
    IDEPlaygroundSimDeviceFramebufferService *_registeredFramebufferService;
}

@property __weak IDEPlaygroundSimDeviceFramebufferService *registeredFramebufferService; // @synthesize registeredFramebufferService=_registeredFramebufferService;
@property __weak id <IDESimulatorPlaygroundFramebufferServiceChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)framebufferService:(id)arg1 didFailWithError:(id)arg2;
- (void)framebufferService:(id)arg1 didRotateToAngle:(double)arg2;
- (void)framebufferService:(id)arg1 didUpdateRegion:(struct CGRect)arg2 ofBackingStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

