//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@protocol IDEFlightChecking;

@interface Xcode3MultipathItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementsFlightCheck;
}

+ (id)coalescableReadOnlyKeyPaths;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IDEFlightChecking> entitlementsFlightCheck; // @synthesize entitlementsFlightCheck=_entitlementsFlightCheck;
- (id)coalescableWriteableKeyPathToDataSource;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end
