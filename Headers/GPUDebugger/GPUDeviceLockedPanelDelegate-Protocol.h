//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DYDevice, GPUDeviceLockedPanel;

@protocol GPUDeviceLockedPanelDelegate
- (void)lockPanel:(GPUDeviceLockedPanel *)arg1 didUnlockDevice:(DYDevice *)arg2;
- (void)lockPanel:(GPUDeviceLockedPanel *)arg1 didCancelWithDevice:(DYDevice *)arg2;
@end

