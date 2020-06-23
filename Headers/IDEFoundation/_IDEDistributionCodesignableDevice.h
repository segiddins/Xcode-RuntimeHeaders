//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTCodesignableDevice-Protocol.h>

@class DVTPlatform, NSSet, NSString;

@interface _IDEDistributionCodesignableDevice : NSObject <DVTCodesignableDevice>
{
    NSString *_name;
    NSString *_identifier;
    DVTPlatform *_platform;
}

+ (id)codesignableDeviceWithIdentifier:(id)arg1 platform:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly) BOOL supportsProvisioning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
