//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTPortal/DVTPortalDevice.h>

#import <IDEFoundation/DVTCodesignableDevice-Protocol.h>

@class DVTPlatform, NSSet, NSString;

@interface DVTPortalDevice (DistributionAdditions) <DVTCodesignableDevice>
@property(readonly) BOOL supportsProvisioning;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSString *nameForDeveloperPortal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) DVTPlatform *platform;
@property(readonly) Class superclass;
@end
