//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProjectItemModel.h"

@class NSNumber;

@interface Xcode3GameCenterItemModel : IDEProjectItemModel
{
    NSNumber *_requiresGameCenterDeviceCompatibilityInfoPlistEntry;
    NSNumber *_requiresLocalGameCenterEntitlement;
    id <IDEFlightChecking> _portalFlightCheck;
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    id <IDEFlightChecking> _infoPlistFlightCheck;
}

- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)infoPlistFlightCheck;
- (id)linkedFrameworksFlightCheck;
- (id)portalFlightCheck;
- (void)publishStateWithContext:(id)arg1;
- (BOOL)requiresLocalGameCenterEntitlement;
- (BOOL)requiresGameCenterDeviceCompatibilityInfoPlistEntry;

@end

