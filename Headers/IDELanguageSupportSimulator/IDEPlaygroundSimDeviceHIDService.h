//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SimDevice;
@protocol OS_dispatch_queue;

@interface IDEPlaygroundSimDeviceHIDService : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;
    unsigned int _gsEventPort;
    SimDevice *_device;
}

@property(readonly, nonatomic) SimDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)sendRotateToOrientationEvent:(long long)arg1;
- (int)_gsOrientationForOrientation:(long long)arg1;
- (void)sendHomeButtonPressedEvent;
- (void)sendHomeButtonUpEvent;
- (void)sendHomeButtonDownEvent;
- (BOOL)sendHIDMouseEvent:(id)arg1 deviceRelativeLocation:(struct CGPoint)arg2 indigoHIDscreen:(unsigned int)arg3 screenSize:(struct CGSize)arg4;
- (BOOL)sendHIDKeyboardEvent:(id)arg1 indigoHIDscreen:(unsigned int)arg2;
- (void)_sendPurpleEvent:(struct _PurpleEventMessage *)arg1;
- (void)_queuedSendHIDMessage:(CDStruct_a0abbf41 *)arg1;
- (void)sendHIDMessage:(CDStruct_a0abbf41 *)arg1;
- (id)initWithDevice:(id)arg1;

@end
