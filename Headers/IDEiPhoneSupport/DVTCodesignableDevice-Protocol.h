//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class DVTPlatform, NSSet, NSString;

@protocol DVTCodesignableDevice <NSObject>
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy, nonatomic) NSString *name;
@end

