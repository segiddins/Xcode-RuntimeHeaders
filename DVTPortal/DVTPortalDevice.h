//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/DVTPortalDevice-Protocol.h>

@class DVTPlatform, NSString;

@interface DVTPortalDevice : NSObject <DVTPortalDevice>
{
    NSString *name;
    DVTPlatform *platform;
    NSString *identifier;
    NSString *_portalID;
}

+ (id)_errorForTeamLacksPlatformError:(id)arg1 device:(id)arg2;
+ (id)_errorForMemberLacksPermissionError:(id)arg1 device:(id)arg2;
+ (id)_registerServiceForTeam:(id)arg1 platform:(id)arg2 identifier:(id)arg3 name:(id)arg4;
+ (BOOL)_registerDevice:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
+ (BOOL)registerDevice:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
+ (id)_listServiceForTeam:(id)arg1 platform:(id)arg2;
+ (id)devicesForSession:(id)arg1 team:(id)arg2 membership:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

