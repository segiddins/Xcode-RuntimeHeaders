//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTDeviceKit/DVTInvalidation-Protocol.h>

@class DVTDevice;

@protocol DVTDevicesWindowDetailViewController <DVTInvalidation>
@property(retain, nonatomic) DVTDevice *device;

@optional
- (void)detailViewDidDisappear;
- (void)detailViewDidAppear;
@end
