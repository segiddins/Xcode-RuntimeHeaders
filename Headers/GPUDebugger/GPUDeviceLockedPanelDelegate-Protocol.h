//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DYDevice, GPUDeviceLockedPanel;

@protocol GPUDeviceLockedPanelDelegate
- (void)lockPanel:(GPUDeviceLockedPanel *)arg1 didUnlockDevice:(DYDevice *)arg2;
- (void)lockPanel:(GPUDeviceLockedPanel *)arg1 didCancelWithDevice:(DYDevice *)arg2;
@end

