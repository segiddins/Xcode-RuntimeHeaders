//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@protocol IDEFlightChecking;

@interface IDEHomeKitItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    id <IDEFlightChecking> _entitlementsFlightCheck;
    id <IDEFlightChecking> _portalFlightCheck;
}

+ (id)coalescableReadOnlyKeyPaths;
- (void).cxx_destruct;
- (id)coalescableWriteableKeyPathToDataSource;
- (BOOL)hasDisclosableContent;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (id)linkedFrameworksFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

