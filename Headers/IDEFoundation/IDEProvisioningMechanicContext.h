//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEProvisioningMechanic, NSString;
@protocol IDEProvisioningMechanicContextProvider, IDEProvisioningTeamAccountPairProvider;

@interface IDEProvisioningMechanicContext : NSObject <DVTInvalidation>
{
    BOOL _runningInIDE;
    IDEProvisioningMechanic *_mechanic;
    id <IDEProvisioningMechanicContextProvider> _provisioningManager;
    id <IDEProvisioningTeamAccountPairProvider> _teamAccountPairProvider;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL runningInIDE; // @synthesize runningInIDE=_runningInIDE;
@property(retain, nonatomic) id <IDEProvisioningTeamAccountPairProvider> teamAccountPairProvider; // @synthesize teamAccountPairProvider=_teamAccountPairProvider;
@property(retain, nonatomic) id <IDEProvisioningMechanicContextProvider> provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property(retain, nonatomic) IDEProvisioningMechanic *mechanic; // @synthesize mechanic=_mechanic;
- (id)makeRepairForRepairable:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

