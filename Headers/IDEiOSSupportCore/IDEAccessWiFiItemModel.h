//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@protocol IDEFlightChecking;

@interface IDEAccessWiFiItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementsFlightCheck;
}

+ (id)coalescableReadOnlyKeyPaths;
- (void).cxx_destruct;
- (id)coalescableWriteableKeyPathToDataSource;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

