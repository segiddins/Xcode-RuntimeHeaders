//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportSimulator/NSObject-Protocol.h>

@class IDESimulatorPlaygroundDeviceDebugScreenViewController, NSEvent;

@protocol IDESimulatorPlaygroundDeviceDebugScreenViewControllerDelegate <NSObject>
- (void)simulatorPlaygroundDeviceDebugScreenViewController:(IDESimulatorPlaygroundDeviceDebugScreenViewController *)arg1 didReceiveEvent:(NSEvent *)arg2 atDeviceLocation:(struct CGPoint)arg3;
- (void)simulatorPlaygroundDeviceDebugScreenViewController:(IDESimulatorPlaygroundDeviceDebugScreenViewController *)arg1 didChangeFramebufferImageSize:(struct CGSize)arg2;
@end

