//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTProvisioningProfileSource, NSSet;

@protocol DVTProvisioningProfileSourceDelegate <NSObject>
- (void)provisioningProfileSource:(DVTProvisioningProfileSource *)arg1 didRemoveProfiles:(NSSet *)arg2;
- (void)provisioningProfileSource:(DVTProvisioningProfileSource *)arg1 didAddProfiles:(NSSet *)arg2;
@end

