//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class NSArray;

@interface IDEProvisioningRegisterDevicesUserAction : IDEProvisioningUserAction
{
    NSArray *_devices;
}

+ (id)registerDevicesUserActionWithDevices:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)executionMessage;
- (id)userActionName;
- (id)userActionMessage;
- (id)userActionTitle;
- (id)initWithContext:(id)arg1 devices:(id)arg2;

@end

