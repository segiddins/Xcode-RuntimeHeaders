//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTDevice, IDERunDestination;

@protocol _TtP13IDEFoundation17IDETestDevicePool_
@property(nonatomic, readonly) BOOL canVendMoreThanOneDevice;
@property(nonatomic, readonly) IDERunDestination *canonicalRunDestination;
- (void)deallocateDevice:(DVTDevice *)arg1;
- (id)allocateDevice;
@end

