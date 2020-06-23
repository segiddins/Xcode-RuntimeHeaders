//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSSet;
@protocol IDEFlightChecking;

@interface IDEAppleSignInItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementFlightCheck;
    NSSet *_appleSignInEntitlementValues;
}

+ (id)coalescableReadOnlyKeyPaths;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *appleSignInEntitlementValues; // @synthesize appleSignInEntitlementValues=_appleSignInEntitlementValues;
- (id)coalescableWriteableKeyPathToDataSource;
- (void)primitiveInvalidate;
- (BOOL)hasDisclosableContent;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end
