//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary;

@interface DTDKAddAppIDService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingAppID;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 name:(id)arg3 andEntitlements:(id)arg4;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 name:(id)arg3 bundleIdentifier:(id)arg4 andEntitlements:(id)arg5;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 name:(id)arg3 prefix:(id)arg4 bundleIdentifier:(id)arg5 andEntitlements:(id)arg6;
@property(readonly) NSDictionary *appID;

@end

