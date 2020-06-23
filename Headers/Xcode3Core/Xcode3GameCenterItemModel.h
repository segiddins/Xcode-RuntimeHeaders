//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSNumber;
@protocol IDEFlightChecking;

@interface Xcode3GameCenterItemModel : IDEProjectItemModel
{
    NSNumber *_requiresGameCenterDeviceCompatibilityInfoPlistEntry;
    NSNumber *_deprecatedRequiresLocalGameCenterEntitlement;
    id <IDEFlightChecking> _portalFlightCheck;
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    id <IDEFlightChecking> _infoPlistFlightCheck;
    id <IDEFlightChecking> _entitlementFlightCheck;
}

+ (id)coalescableReadOnlyKeyPaths;
- (void).cxx_destruct;
- (id)coalescableWriteableKeyPathToDataSource;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementFlightCheck;
- (id)infoPlistFlightCheck;
- (id)linkedFrameworksFlightCheck;
- (BOOL)onlyRequiresLinkedFramework;
- (BOOL)deprecatedRequiresLocalGameCenterEntitlement;
- (BOOL)requiresGameCenterDeviceCompatibilityInfoPlistEntry;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

