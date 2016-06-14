//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/DVTPortalDevice-Protocol.h>

@class DVTPlatform, NSString;

@interface _DVTCodesignablePortalDevice : NSObject <DVTPortalDevice>
{
    NSString *_name;
    DVTPlatform *_platform;
    NSString *_identifier;
}

+ (id)portalDeviceWithDeviceSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

