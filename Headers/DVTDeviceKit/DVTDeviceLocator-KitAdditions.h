//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDeviceLocator.h>

@interface DVTDeviceLocator (KitAdditions)
- (void)beginPairingAssistantForDevice:(id)arg1 withWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDeviceCreationAssistantWithWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL canCreateDevices;
@end
